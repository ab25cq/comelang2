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

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

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

struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info);

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
int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info);

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void sTypedefNode_finalize(struct sTypedefNode* self);
static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self);
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










struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value80;
char* __dec_obj13;
void* right_value116;
struct sType* __dec_obj37;
void* right_value117;
char* __dec_obj38;
void* right_value127;
struct list$1tuple2$2sTypephcharphph* __dec_obj44;
struct sTypedefNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value127 = (void*)0;
    # 18 "17typedef.c"
    self->sline=info->sline;
    # 19 "17typedef.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 21 "17typedef.c"
    __dec_obj13=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(type_name))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 22 "17typedef.c"
    __dec_obj37=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 24 "17typedef.c"
    __dec_obj38=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(info->sname))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 26 "17typedef.c"
    __dec_obj44=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value127=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 28 "17typedef.c"
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sType* __result52__;
void* right_value81;
struct sType* result_47;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value88;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional42;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional46;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional47;
void* right_value93;
char* __dec_obj21;
_Bool _if_conditional48;
void* right_value94;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional49;
void* right_value102;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value103;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional64;
void* right_value110;
struct list$1charph* __dec_obj31;
_Bool _if_conditional68;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value112;
struct sNode* __dec_obj33;
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
void* right_value113;
struct sNode* __dec_obj34;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value114;
char* __dec_obj35;
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
void* right_value115;
char* __dec_obj36;
_Bool _if_conditional109;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            # 2 "sType_clone"
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            # 4 "sType_clone"
            result_47->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional38=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional38) {
            # 5 "sType_clone"
            __dec_obj17=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            # 6 "sType_clone"
            __dec_obj19=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            # 7 "sType_clone"
            __dec_obj20=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional47) {
            # 8 "sType_clone"
            __dec_obj21=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional48) {
            # 9 "sType_clone"
            __dec_obj22=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            # 10 "sType_clone"
            __dec_obj26=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 11 "sType_clone"
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional63=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional63) {
            # 12 "sType_clone"
            __dec_obj27=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            # 13 "sType_clone"
            __dec_obj31=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            # 14 "sType_clone"
            __dec_obj32=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 15 "sType_clone"
            result_47->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional70=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional70) {
            # 16 "sType_clone"
            __dec_obj33=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mAlignas))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 17 "sType_clone"
            result_47->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 18 "sType_clone"
            result_47->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 19 "sType_clone"
            result_47->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 20 "sType_clone"
            result_47->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 21 "sType_clone"
            result_47->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 22 "sType_clone"
            result_47->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 23 "sType_clone"
            result_47->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 24 "sType_clone"
            result_47->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 25 "sType_clone"
            result_47->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 26 "sType_clone"
            result_47->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 27 "sType_clone"
            result_47->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 28 "sType_clone"
            result_47->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 29 "sType_clone"
            result_47->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 30 "sType_clone"
            result_47->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 31 "sType_clone"
            result_47->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 32 "sType_clone"
            result_47->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 33 "sType_clone"
            result_47->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 34 "sType_clone"
            result_47->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 35 "sType_clone"
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 36 "sType_clone"
            result_47->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 37 "sType_clone"
            result_47->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 38 "sType_clone"
            result_47->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 39 "sType_clone"
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 40 "sType_clone"
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional95=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional95) {
            # 41 "sType_clone"
            __dec_obj34=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mSizeNum))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 42 "sType_clone"
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 43 "sType_clone"
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional98=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional98) {
            # 44 "sType_clone"
            __dec_obj35=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mOriginalTypeName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 45 "sType_clone"
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 46 "sType_clone"
            result_47->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 47 "sType_clone"
            result_47->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 48 "sType_clone"
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 49 "sType_clone"
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 50 "sType_clone"
            result_47->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 51 "sType_clone"
            result_47->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 52 "sType_clone"
            result_47->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 53 "sType_clone"
            result_47->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional108=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional108) {
            # 54 "sType_clone"
            __dec_obj36=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mAsmName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result69__ = __result_obj__ = result_47;
        come_call_finalizer2(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer2(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
            if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional20) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional25) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional26) {
                # 4 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional27) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional29) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional30) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional32) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional33) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional34) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional35) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional36) {
                # 12 "sType_finalize"
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_48;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                    # 123 "./neo-c.h"
                    it_48=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 125 "./neo-c.h"
                        prev_it_49=it_48;
                        # 126 "./neo-c.h"
                        it_48=it_48->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional21) {
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
                    if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional23) {
                        # 0 "tuple1$1sTypephp_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_50;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                    # 123 "./neo-c.h"
                    it_50=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        # 125 "./neo-c.h"
                        prev_it_51=it_50;
                        # 126 "./neo-c.h"
                        it_50=it_50->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional28) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_52;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                    # 123 "./neo-c.h"
                    it_52=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        # 125 "./neo-c.h"
                        prev_it_53=it_52;
                        # 126 "./neo-c.h"
                        it_52=it_52->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional31) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result53__;
void* right_value82;
void* right_value83;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value87;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    # 140 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 142 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_55=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 146 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(it_55->item)))));
                    come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 151 "./neo-c.h"
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer2(list$1sTypephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer2(list$1sTypephp_finalize,result_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj14;
_Bool _if_conditional41;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj15;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj16;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            # 156 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj14=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_56;
                            # 163 "./neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                # 166 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj15=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_57;
                                # 173 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj16=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_58;
                                # 183 "./neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __result57__;
void* right_value89;
struct tuple1$1sTypeph* result_59;
_Bool _if_conditional45;
void* right_value90;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_59, 0, sizeof(struct tuple1$1sTypeph*));
right_value90 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_59=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj18=result_59->v1;
                    result_59->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result58__ = __result_obj__ = result_59;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional44) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result59__;
void* right_value95;
void* right_value96;
struct list$1sNodeph* result_60;
struct list_item$1sNodeph* it_61;
_Bool _while_condtional11;
void* right_value101;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_60, 0, sizeof(struct list$1sNodeph*));
memset(&it_61, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    # 140 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 142 "./neo-c.h"
                result_60=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_61=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional11=it_61!=((void*)0),                _while_condtional11) {
                    # 146 "./neo-c.h"
                    list$1sNodeph_add(result_60,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(it_61->item)))));
                    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./neo-c.h"
                    it_61=it_61->next;
                }
                # 151 "./neo-c.h"
                __result64__ = __result_obj__ = result_60;
                come_call_finalizer2(list$1sNodephp_finalize,result_60, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(list$1sNodephp_finalize,result_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value97;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj23;
_Bool _if_conditional52;
void* right_value98;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj24;
void* right_value99;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            # 156 "./neo-c.h"
                            litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_62->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_62->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj23=litem_62->item;
                            litem_62->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./neo-c.h"
                            self->tail=litem_62;
                            # 163 "./neo-c.h"
                            self->head=litem_62;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                # 166 "./neo-c.h"
                                litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_63->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_63->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj24=litem_63->item;
                                litem_63->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./neo-c.h"
                                self->tail=litem_63;
                                # 173 "./neo-c.h"
                                self->head->next=litem_63;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_64->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_64->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj25=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./neo-c.h"
                                self->tail->next=litem_64;
                                # 183 "./neo-c.h"
                                self->tail=litem_64;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional53;
struct sNode* __result62__;
void* right_value100;
struct sNode* result_65;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_65, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            # 2 "sNode_clone"
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        # 3 "sNode_clone"
                        result_65=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional54) {
                            # 4 "sNode_clone"
                            result_65->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            # 5 "sNode_clone"
                            result_65->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            # 6 "sNode_clone"
                            result_65->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            # 7 "sNode_clone"
                            result_65->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            # 8 "sNode_clone"
                            result_65->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 9 "sNode_clone"
                            result_65->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 10 "sNode_clone"
                            result_65->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 11 "sNode_clone"
                            result_65->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result63__ = __result_obj__ = result_65;
                        if(result_65) { result_65 = come_decrement_ref_count2(result_65, ((struct sNode*)result_65)->finalize, ((struct sNode*)result_65)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_65) { result_65 = come_decrement_ref_count2(result_65, ((struct sNode*)result_65)->finalize, ((struct sNode*)result_65)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result65__;
void* right_value104;
void* right_value105;
struct list$1charph* result_66;
struct list_item$1charph* it_67;
_Bool _while_condtional12;
void* right_value109;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&it_67, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    # 140 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 142 "./neo-c.h"
                result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_67=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional12=it_67!=((void*)0),                _while_condtional12) {
                    # 146 "./neo-c.h"
                    list$1charph_add(result_66,(char*)come_increment_ref_count(((char*)(right_value109=string_clone(it_67->item)))));
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_67=it_67->next;
                }
                # 151 "./neo-c.h"
                __result68__ = __result_obj__ = result_66;
                come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value106;
struct list_item$1charph* litem_68;
char* __dec_obj28;
_Bool _if_conditional67;
void* right_value107;
struct list_item$1charph* litem_69;
char* __dec_obj29;
void* right_value108;
struct list_item$1charph* litem_70;
char* __dec_obj30;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            # 156 "./neo-c.h"
                            litem_68=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_68->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_68->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj28=litem_68->item;
                            litem_68->item=(char*)come_increment_ref_count(item);
                            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_68;
                            # 163 "./neo-c.h"
                            self->head=litem_68;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                # 166 "./neo-c.h"
                                litem_69=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_69->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_69->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj29=litem_69->item;
                                litem_69->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_69;
                                # 173 "./neo-c.h"
                                self->head->next=litem_69;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_70=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_70->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_70->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj30=litem_70->item;
                                litem_70->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_70;
                                # 183 "./neo-c.h"
                                self->tail=litem_70;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result67__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result67__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional110;
struct list$1tuple2$2sTypephcharphph* __result70__;
void* right_value118;
void* right_value119;
struct list$1tuple2$2sTypephcharphph* result_73;
struct list_item$1tuple2$2sTypephcharphph* it_74;
_Bool _while_condtional14;
void* right_value126;
struct list$1tuple2$2sTypephcharphph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_74, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value126 = (void*)0;
        # 142 "./neo-c.h"
        # 139 "./neo-c.h"
        if(_if_conditional110=self==((void*)0),        _if_conditional110) {
            # 140 "./neo-c.h"
            __result70__ = __result_obj__ = ((void*)0);
            return __result70__;
        }
        # 142 "./neo-c.h"
        result_73=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value119=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value118=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./neo-c.h", 142, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./neo-c.h"
        it_74=self->head;
        # 151 "./neo-c.h"
        while(_while_condtional14=it_74!=((void*)0),        _while_condtional14) {
            # 146 "./neo-c.h"
            list$1tuple2$2sTypephcharphph_add(result_73,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value126=tuple2$2sTypephcharphp_clone(it_74->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "./neo-c.h"
            it_74=it_74->next;
        }
        # 151 "./neo-c.h"
        __result75__ = __result_obj__ = result_73;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list$1tuple2$2sTypephcharphph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./neo-c.h"
            self->head=((void*)0);
            # 105 "./neo-c.h"
            self->tail=((void*)0);
            # 106 "./neo-c.h"
            self->len=0;
            # 108 "./neo-c.h"
            __result71__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_71;
_Bool _while_condtional13;
struct list_item$1tuple2$2sTypephcharphph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                # 123 "./neo-c.h"
                it_71=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional13=it_71!=((void*)0),                _while_condtional13) {
                    # 125 "./neo-c.h"
                    prev_it_72=it_71;
                    # 126 "./neo-c.h"
                    it_71=it_71->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional111;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2sTypephcharphphp_finalize"
                        # 0 "list_item$1tuple2$2sTypephcharphphp_finalize"
                        if(_if_conditional111=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional111) {
                            # 0 "list_item$1tuple2$2sTypephcharphphp_finalize"
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional112;
_Bool _if_conditional113;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2sTypephcharphp_finalize"
                                # 0 "tuple2$2sTypephcharphp_finalize"
                                if(_if_conditional112=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional112) {
                                    # 0 "tuple2$2sTypephcharphp_finalize"
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2sTypephcharphp_finalize"
                                # 1 "tuple2$2sTypephcharphp_finalize"
                                if(_if_conditional113=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional113) {
                                    # 1 "tuple2$2sTypephcharphp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional114;
void* right_value120;
struct list_item$1tuple2$2sTypephcharphph* litem_75;
struct tuple2$2sTypephcharph* __dec_obj39;
_Bool _if_conditional117;
void* right_value121;
struct list_item$1tuple2$2sTypephcharphph* litem_76;
struct tuple2$2sTypephcharph* __dec_obj40;
void* right_value122;
struct list_item$1tuple2$2sTypephcharphph* litem_77;
struct tuple2$2sTypephcharph* __dec_obj41;
struct list$1tuple2$2sTypephcharphph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value121 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value122 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                # 186 "./neo-c.h"
                # 155 "./neo-c.h"
                if(_if_conditional114=self->len==0,                _if_conditional114) {
                    # 156 "./neo-c.h"
                    litem_75=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value120=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./neo-c.h", 156, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./neo-c.h"
                    litem_75->prev=((void*)0);
                    # 159 "./neo-c.h"
                    litem_75->next=((void*)0);
                    # 160 "./neo-c.h"
                    __dec_obj39=litem_75->item;
                    litem_75->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "./neo-c.h"
                    self->tail=litem_75;
                    # 163 "./neo-c.h"
                    self->head=litem_75;
                }
                else {
                    # 186 "./neo-c.h"
                    # 165 "./neo-c.h"
                    if(_if_conditional117=self->len==1,                    _if_conditional117) {
                        # 166 "./neo-c.h"
                        litem_76=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value121=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./neo-c.h", 166, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./neo-c.h"
                        litem_76->prev=self->head;
                        # 169 "./neo-c.h"
                        litem_76->next=((void*)0);
                        # 170 "./neo-c.h"
                        __dec_obj40=litem_76->item;
                        litem_76->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "./neo-c.h"
                        self->tail=litem_76;
                        # 173 "./neo-c.h"
                        self->head->next=litem_76;
                    }
                    else {
                        # 176 "./neo-c.h"
                        litem_77=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value122=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./neo-c.h", 176, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./neo-c.h"
                        litem_77->prev=self->tail;
                        # 179 "./neo-c.h"
                        litem_77->next=((void*)0);
                        # 180 "./neo-c.h"
                        __dec_obj41=litem_77->item;
                        litem_77->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "./neo-c.h"
                        self->tail->next=litem_77;
                        # 183 "./neo-c.h"
                        self->tail=litem_77;
                    }
                }
                # 186 "./neo-c.h"
                self->len++;
                # 188 "./neo-c.h"
                __result72__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result72__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional115;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2sTypephcharph_finalize"
                        # 0 "tuple2$2sTypephcharph_finalize"
                        if(_if_conditional115=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional115) {
                            # 0 "tuple2$2sTypephcharph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2sTypephcharph_finalize"
                        # 1 "tuple2$2sTypephcharph_finalize"
                        if(_if_conditional116=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional116) {
                            # 1 "tuple2$2sTypephcharph_finalize"
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional118;
struct tuple2$2sTypephcharph* __result73__;
void* right_value123;
struct tuple2$2sTypephcharph* result_78;
_Bool _if_conditional119;
void* right_value124;
struct sType* __dec_obj42;
_Bool _if_conditional120;
void* right_value125;
char* __dec_obj43;
struct tuple2$2sTypephcharph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_78, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value124 = (void*)0;
right_value125 = (void*)0;
                # 3 "tuple2$2sTypephcharphp_clone"
                # 2 "tuple2$2sTypephcharphp_clone"
                if(_if_conditional118=self==(void*)0,                _if_conditional118) {
                    # 2 "tuple2$2sTypephcharphp_clone"
                    __result73__ = __result_obj__ = (void*)0;
                    return __result73__;
                }
                # 3 "tuple2$2sTypephcharphp_clone"
                result_78=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value123=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2sTypephcharphp_clone"
                # 4 "tuple2$2sTypephcharphp_clone"
                if(_if_conditional119=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional119) {
                    # 4 "tuple2$2sTypephcharphp_clone"
                    __dec_obj42=result_78->v1;
                    result_78->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2sTypephcharphp_clone"
                # 5 "tuple2$2sTypephcharphp_clone"
                if(_if_conditional120=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional120) {
                    # 5 "tuple2$2sTypephcharphp_clone"
                    __dec_obj43=result_78->v2;
                    result_78->v2=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(self->v2))));
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2sTypephcharphp_clone"
                __result74__ = __result_obj__ = result_78;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result74__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sTypedefNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 33 "17typedef.c"
    __result77__ = (_Bool)1;
    return __result77__;
}

char* sTypedefNode_kind(){
void* __result_obj__;
void* right_value128;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    # 38 "17typedef.c"
    __result78__ = __result_obj__ = ((char*)(right_value128=__builtin_string("sTypedefNode")));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value129;
char* type_name_79;
_Bool _if_conditional126;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
struct sType* type_126;
void* right_value141;
char* __dec_obj45;
void* right_value145;
void* right_value146;
_Bool _if_conditional202;
_Bool _if_conditional203;
struct list$1tuple2$2sTypephcharphph* o2_saved_148;
struct tuple2$2sTypephcharph* it_151;
struct tuple2$2sTypephcharph* multiple_assign_var1;
struct sType* type_154;
char* type_name_155;
_Bool _if_conditional208;
void* right_value147;
char* __dec_obj46;
void* right_value148;
void* right_value149;
_Bool _if_conditional209;
void* right_value150;
void* right_value151;
struct sType* type_156;
_Bool _if_conditional210;
void* right_value152;
char* __dec_obj47;
void* right_value153;
void* right_value154;
_Bool _if_conditional211;
void* right_value155;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&type_name_79, 0, sizeof(char*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&type_126, 0, sizeof(struct sType*));
right_value141 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&o2_saved_148, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_151, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_154, 0, sizeof(struct sType*));
memset(&type_name_155, 0, sizeof(char*));
memset(&type_154, 0, sizeof(struct sType*));
memset(&type_name_155, 0, sizeof(char*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&type_156, 0, sizeof(struct sType*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    # 43 "17typedef.c"
    type_name_79=(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(self->mTypeName))));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 93 "17typedef.c"
    # 45 "17typedef.c"
    if(_if_conditional126=string_operator_equals(type_name_79,"__darwin_va_list"),    _if_conditional126) {
        # 46 "17typedef.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string("__darwin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value138=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value137=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "17typedef.c", 46, "sClass")))),"__darwin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 48 "17typedef.c"
        type_126=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "17typedef.c", 48, "sType")))),"__darwin_va_list",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 49 "17typedef.c"
        __dec_obj45=type_126->mOriginalTypeName;
        type_126->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string("__darwin_va_list"))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 51 "17typedef.c"
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(type_name_79)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(type_126)))));
        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 58 "17typedef.c"
        # 53 "17typedef.c"
        if(_if_conditional202=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional202) {
        }
        else {
            # 56 "17typedef.c"
            add_come_code_at_source_head(info,"typedef __builtin_va_list __darwin_va_list;\n");
        }
        come_call_finalizer2(sType_finalize,type_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 93 "17typedef.c"
        # 59 "17typedef.c"
        if(self->multiple_declare) {
            # 76 "17typedef.c"
            for(            o2_saved_148=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_151=list$1tuple2$2sTypephcharphph_begin((o2_saved_148));            !list$1tuple2$2sTypephcharphph_end((o2_saved_148));            it_151=list$1tuple2$2sTypephcharphph_next((o2_saved_148))            ){
                # 61 "17typedef.c"
                multiple_assign_var1=it_151;
                type_154=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                type_name_155=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                # 67 "17typedef.c"
                # 63 "17typedef.c"
                if(_if_conditional208=string_operator_not_equals(type_name_155,"va_list"),                _if_conditional208) {
                    # 64 "17typedef.c"
                    __dec_obj46=type_154->mOriginalTypeName;
                    type_154->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(type_name_155))));
                    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 67 "17typedef.c"
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(type_name_155)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(type_154)))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 75 "17typedef.c"
                # 70 "17typedef.c"
                if(_if_conditional209=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional209) {
                }
                else {
                    # 73 "17typedef.c"
                    add_come_code_at_source_head(info,"typedef %s;\n",((char*)(right_value150=make_define_var(type_154,type_name_155,(_Bool)1,info))));
                    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_155 = come_decrement_ref_count2(type_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 78 "17typedef.c"
            type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(self->mType))));
            come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 84 "17typedef.c"
            # 80 "17typedef.c"
            if(_if_conditional210=string_operator_not_equals(type_name_79,"va_list"),            _if_conditional210) {
                # 81 "17typedef.c"
                __dec_obj47=type_156->mOriginalTypeName;
                type_156->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(type_name_79))));
                __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 84 "17typedef.c"
            map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(type_name_79)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(type_156)))));
            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 91 "17typedef.c"
            # 86 "17typedef.c"
            if(_if_conditional211=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional211) {
            }
            else {
                # 89 "17typedef.c"
                add_come_code_at_source_head(info,"typedef %s;\n",((char*)(right_value155=make_define_var(type_156,type_name_79,(_Bool)1,info))));
                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 93 "17typedef.c"
    __result122__ = (_Bool)1;
    type_name_79 = come_decrement_ref_count2(type_name_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result122__;
    type_name_79 = come_decrement_ref_count2(type_name_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional127;
unsigned int hash_99;
unsigned int it_100;
_Bool _while_condtional18;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool same_key_exist_117;
char* it2_120;
_Bool _if_conditional176;
_Bool _if_conditional177;
struct map$2charphsClassph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&it_100, 0, sizeof(unsigned int));
memset(&same_key_exist_117, 0, sizeof(_Bool));
memset(&it2_120, 0, sizeof(char*));
            # 1393 "./neo-c.h"
            # 1390 "./neo-c.h"
            if(_if_conditional127=self->len*10>=self->size,            _if_conditional127) {
                # 1391 "./neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./neo-c.h"
            hash_99=string_get_hash_key(key)%self->size;
            # 1394 "./neo-c.h"
            it_100=hash_99;
            # 1452 "./neo-c.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1450 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional145=self->item_existance[it_100],                _if_conditional145) {
                    # 1420 "./neo-c.h"
                    # 1399 "./neo-c.h"
                    if(_if_conditional146=string_equals(self->keys[it_100],key),                    _if_conditional146) {
                        # 1410 "./neo-c.h"
                        # 1401 "./neo-c.h"
                        if(_if_conditional147=1,                        _if_conditional147) {
                            # 1402 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_100]);
                            # 1403 "./neo-c.h"
                            self->keys[it_100] = come_decrement_ref_count2(self->keys[it_100], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./neo-c.h"
                            self->keys[it_100]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_100]);
                            # 1408 "./neo-c.h"
                            self->keys[it_100]=key;
                        }
                        # 1417 "./neo-c.h"
                        # 1410 "./neo-c.h"
                        if(_if_conditional167=1,                        _if_conditional167) {
                            # 1411 "./neo-c.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_100], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./neo-c.h"
                            self->items[it_100]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./neo-c.h"
                            self->items[it_100]=item;
                        }
                        # 1417 "./neo-c.h"
                        break;
                    }
                    # 1420 "./neo-c.h"
                    it_100++;
                    # 1430 "./neo-c.h"
                    # 1422 "./neo-c.h"
                    if(_if_conditional168=it_100>=self->size,                    _if_conditional168) {
                        # 1423 "./neo-c.h"
                        it_100=0;
                    }
                    else {
                        # 1430 "./neo-c.h"
                        # 1425 "./neo-c.h"
                        if(_if_conditional169=it_100==hash_99,                        _if_conditional169) {
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
                    self->item_existance[it_100]=(_Bool)1;
                    # 1439 "./neo-c.h"
                    # 1433 "./neo-c.h"
                    if(_if_conditional170=1,                    _if_conditional170) {
                        # 1434 "./neo-c.h"
                        self->keys[it_100]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./neo-c.h"
                        self->keys[it_100]=key;
                    }
                    # 1446 "./neo-c.h"
                    # 1439 "./neo-c.h"
                    if(_if_conditional171=1,                    _if_conditional171) {
                        # 1440 "./neo-c.h"
                        self->items[it_100]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./neo-c.h"
                        self->items[it_100]=item;
                    }
                    # 1446 "./neo-c.h"
                    self->len++;
                    # 1448 "./neo-c.h"
                    break;
                }
            }
            # 1452 "./neo-c.h"
            same_key_exist_117=(_Bool)0;
            # 1460 "./neo-c.h"
            for(            it2_120=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_120=list$1charp_next(self->key_list)            ){
                # 1458 "./neo-c.h"
                # 1455 "./neo-c.h"
                if(_if_conditional176=string_equals(it2_120,key),                _if_conditional176) {
                    # 1456 "./neo-c.h"
                    same_key_exist_117=(_Bool)1;
                }
            }
            # 1464 "./neo-c.h"
            # 1460 "./neo-c.h"
            if(_if_conditional177=!same_key_exist_117,            _if_conditional177) {
                # 1461 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1464 "./neo-c.h"
            __result102__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result102__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_80;
void* right_value130;
char** keys_81;
void* right_value131;
struct sClass** items_82;
void* right_value132;
_Bool* item_existance_85;
int len_86;
char* it_89;
struct sClass* default_value_92;
struct sClass* it2_95;
unsigned int hash_96;
int n_97;
_Bool _while_condtional17;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct sClass* default_value_98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_80, 0, sizeof(int));
right_value130 = (void*)0;
memset(&keys_81, 0, sizeof(char**));
right_value131 = (void*)0;
memset(&items_82, 0, sizeof(struct sClass**));
right_value132 = (void*)0;
memset(&item_existance_85, 0, sizeof(_Bool*));
memset(&len_86, 0, sizeof(int));
memset(&it_89, 0, sizeof(char*));
memset(&default_value_92, 0, sizeof(struct sClass*));
memset(&it2_95, 0, sizeof(struct sClass*));
memset(&hash_96, 0, sizeof(unsigned int));
memset(&n_97, 0, sizeof(int));
memset(&default_value_98, 0, sizeof(struct sClass*));
                    # 1337 "./neo-c.h"
                    size_80=self->size*10;
                    # 1338 "./neo-c.h"
                    keys_81=(char**)come_increment_ref_count(((char**)(right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(size_80)), "./neo-c.h", 1338, "char*%"))));
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./neo-c.h"
                    items_82=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value131=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_80)), "./neo-c.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    item_existance_85=(_Bool*)come_increment_ref_count(((_Bool*)(right_value132=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_80)), "./neo-c.h", 1340, "bool"))));
                    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./neo-c.h"
                    len_86=0;
                    # 1377 "./neo-c.h"
                    for(                    it_89=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_89=map$2charphsClassph_next(self)                    ){
                        # 1345 "./neo-c.h"
                        # 1346 "./neo-c.h"
                        memset(&default_value_92,0,sizeof(struct sClass*));
                        # 1347 "./neo-c.h"
                        it2_95=map$2charphsClassph_at(self,it_89,default_value_92);
                        # 1348 "./neo-c.h"
                        hash_96=string_get_hash_key(it_89)%size_80;
                        # 1349 "./neo-c.h"
                        n_97=hash_96;
                        # 1375 "./neo-c.h"
                        while(_while_condtional17=(_Bool)1,                        _while_condtional17) {
                            # 1374 "./neo-c.h"
                            # 1352 "./neo-c.h"
                            if(_if_conditional142=item_existance_85[n_97],                            _if_conditional142) {
                                # 1354 "./neo-c.h"
                                n_97++;
                                # 1364 "./neo-c.h"
                                # 1356 "./neo-c.h"
                                if(_if_conditional143=n_97>=size_80,                                _if_conditional143) {
                                    # 1357 "./neo-c.h"
                                    n_97=0;
                                }
                                else {
                                    # 1364 "./neo-c.h"
                                    # 1359 "./neo-c.h"
                                    if(_if_conditional144=n_97==hash_96,                                    _if_conditional144) {
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
                                item_existance_85[n_97]=(_Bool)1;
                                # 1367 "./neo-c.h"
                                keys_81[n_97]=it_89;
                                # 1368 "./neo-c.h"
                                # 1369 "./neo-c.h"
                                items_82[n_97]=map$2charphsClassph_at(self,it_89,default_value_98);
                                # 1371 "./neo-c.h"
                                len_86++;
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
                    self->keys=keys_81;
                    # 1382 "./neo-c.h"
                    self->items=items_82;
                    # 1383 "./neo-c.h"
                    self->item_existance=item_existance_85;
                    # 1385 "./neo-c.h"
                    self->size=size_80;
                    # 1386 "./neo-c.h"
                    self->len=len_86;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional128=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional128) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional129=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional129) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional133=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional133) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_83;
_Bool _while_condtional15;
struct list_item$1tuple2$2charphsTypephph* prev_it_84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_83, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_84, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./neo-c.h"
                                it_83=self->head;
                                # 129 "./neo-c.h"
                                while(_while_condtional15=it_83!=((void*)0),                                _while_condtional15) {
                                    # 125 "./neo-c.h"
                                    prev_it_84=it_83;
                                    # 126 "./neo-c.h"
                                    it_83=it_83->next;
                                    # 127 "./neo-c.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional130=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional130) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional131=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional131) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional132=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional132) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional134;
char* result_87;
char* __result79__;
_Bool _if_conditional135;
char* __result80__;
char* result_88;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_87, 0, sizeof(char*));
memset(&result_88, 0, sizeof(char*));
                        # 1304 "./neo-c.h"
                        # 1299 "./neo-c.h"
                        if(_if_conditional134=self==((void*)0),                        _if_conditional134) {
                            # 1300 "./neo-c.h"
                            # 1301 "./neo-c.h"
                            memset(&result_87,0,sizeof(char*));
                            # 1302 "./neo-c.h"
                            __result79__ = __result_obj__ = result_87;
                            return __result79__;
                        }
                        # 1304 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./neo-c.h"
                        # 1306 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1307 "./neo-c.h"
                            __result80__ = __result_obj__ = self->key_list->it->item;
                            return __result80__;
                        }
                        # 1310 "./neo-c.h"
                        # 1311 "./neo-c.h"
                        memset(&result_88,0,sizeof(char*));
                        # 1312 "./neo-c.h"
                        __result81__ = __result_obj__ = result_88;
                        return __result81__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./neo-c.h"
                        __result82__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result82__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional136;
char* result_90;
char* __result83__;
_Bool _if_conditional137;
char* __result84__;
char* result_91;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_90, 0, sizeof(char*));
memset(&result_91, 0, sizeof(char*));
                        # 1321 "./neo-c.h"
                        # 1316 "./neo-c.h"
                        if(_if_conditional136=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional136) {
                            # 1317 "./neo-c.h"
                            # 1318 "./neo-c.h"
                            memset(&result_90,0,sizeof(char*));
                            # 1319 "./neo-c.h"
                            __result83__ = __result_obj__ = result_90;
                            return __result83__;
                        }
                        # 1321 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./neo-c.h"
                        # 1323 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1324 "./neo-c.h"
                            __result84__ = __result_obj__ = self->key_list->it->item;
                            return __result84__;
                        }
                        # 1327 "./neo-c.h"
                        # 1328 "./neo-c.h"
                        memset(&result_91,0,sizeof(char*));
                        # 1329 "./neo-c.h"
                        __result85__ = __result_obj__ = result_91;
                        return __result85__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_93;
unsigned int it_94;
_Bool _while_condtional16;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct sClass* __result86__;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sClass* __result87__;
struct sClass* __result88__;
struct sClass* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_93, 0, sizeof(unsigned int));
memset(&it_94, 0, sizeof(unsigned int));
                            # 1226 "./neo-c.h"
                            hash_93=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./neo-c.h"
                            it_94=hash_93;
                            # 1251 "./neo-c.h"
                            while(_while_condtional16=(_Bool)1,                            _while_condtional16) {
                                # 1249 "./neo-c.h"
                                # 1230 "./neo-c.h"
                                if(_if_conditional138=self->item_existance[it_94],                                _if_conditional138) {
                                    # 1237 "./neo-c.h"
                                    # 1232 "./neo-c.h"
                                    if(_if_conditional139=string_equals(self->keys[it_94],key),                                    _if_conditional139) {
                                        # 1234 "./neo-c.h"
                                        __result86__ = __result_obj__ = self->items[it_94];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result86__;
                                    }
                                    # 1237 "./neo-c.h"
                                    it_94++;
                                    # 1245 "./neo-c.h"
                                    # 1239 "./neo-c.h"
                                    if(_if_conditional140=it_94>=self->size,                                    _if_conditional140) {
                                        # 1240 "./neo-c.h"
                                        it_94=0;
                                    }
                                    else {
                                        # 1245 "./neo-c.h"
                                        # 1242 "./neo-c.h"
                                        if(_if_conditional141=it_94==hash_93,                                        _if_conditional141) {
                                            # 1243 "./neo-c.h"
                                            __result87__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result87__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./neo-c.h"
                                    __result88__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result88__;
                                }
                            }
                            # 1251 "./neo-c.h"
                            __result89__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result89__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_101;
struct list_item$1charp* it_102;
_Bool _while_condtional19;
_Bool _if_conditional148;
struct list$1charp* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_101, 0, sizeof(int));
memset(&it_102, 0, sizeof(struct list_item$1charp*));
                                # 448 "./neo-c.h"
                                it2_101=0;
                                # 449 "./neo-c.h"
                                it_102=self->head;
                                # 460 "./neo-c.h"
                                while(_while_condtional19=it_102!=((void*)0),                                _while_condtional19) {
                                    # 455 "./neo-c.h"
                                    # 451 "./neo-c.h"
                                    if(_if_conditional148=string_equals(it_102->item,item),                                    _if_conditional148) {
                                        # 452 "./neo-c.h"
                                        list$1charp_delete(self,it2_101,it2_101+1);
                                        # 453 "./neo-c.h"
                                        break;
                                    }
                                    # 455 "./neo-c.h"
                                    it2_101++;
                                    # 457 "./neo-c.h"
                                    it_102=it_102->next;
                                }
                                # 460 "./neo-c.h"
                                __result93__ = __result_obj__ = self;
                                return __result93__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
int tmp_103;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1charp* __result90__;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1charp* it_106;
int i_107;
_Bool _while_condtional21;
_Bool _if_conditional157;
struct list_item$1charp* prev_it_108;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1charp* it_109;
int i_110;
_Bool _while_condtional22;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct list_item$1charp* prev_it_111;
struct list_item$1charp* it_112;
struct list_item$1charp* head_prev_it_113;
struct list_item$1charp* tail_it_114;
int i_115;
_Bool _while_condtional23;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list_item$1charp* prev_it_116;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_103, 0, sizeof(int));
memset(&it_106, 0, sizeof(struct list_item$1charp*));
memset(&i_107, 0, sizeof(int));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_113, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_114, 0, sizeof(struct list_item$1charp*));
memset(&i_115, 0, sizeof(int));
memset(&prev_it_116, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional149=head<0,                                            _if_conditional149) {
                                                # 465 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 471 "./neo-c.h"
                                            # 467 "./neo-c.h"
                                            if(_if_conditional150=tail<0,                                            _if_conditional150) {
                                                # 468 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./neo-c.h"
                                            # 471 "./neo-c.h"
                                            if(_if_conditional151=head>tail,                                            _if_conditional151) {
                                                # 472 "./neo-c.h"
                                                tmp_103=tail;
                                                # 473 "./neo-c.h"
                                                tail=head;
                                                # 474 "./neo-c.h"
                                                head=tmp_103;
                                            }
                                            # 481 "./neo-c.h"
                                            # 477 "./neo-c.h"
                                            if(_if_conditional152=head<0,                                            _if_conditional152) {
                                                # 478 "./neo-c.h"
                                                head=0;
                                            }
                                            # 485 "./neo-c.h"
                                            # 481 "./neo-c.h"
                                            if(_if_conditional153=tail>self->len,                                            _if_conditional153) {
                                                # 482 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 489 "./neo-c.h"
                                            # 485 "./neo-c.h"
                                            if(_if_conditional154=head==tail,                                            _if_conditional154) {
                                                # 486 "./neo-c.h"
                                                __result90__ = __result_obj__ = self;
                                                return __result90__;
                                            }
                                            # 584 "./neo-c.h"
                                            # 489 "./neo-c.h"
                                            if(_if_conditional155=head==0&&tail==self->len,                                            _if_conditional155) {
                                                # 491 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 493 "./neo-c.h"
                                                if(_if_conditional156=head==0,                                                _if_conditional156) {
                                                    # 494 "./neo-c.h"
                                                    it_106=self->head;
                                                    # 495 "./neo-c.h"
                                                    i_107=0;
                                                    # 517 "./neo-c.h"
                                                    while(_while_condtional21=it_106!=((void*)0),                                                    _while_condtional21) {
                                                        # 516 "./neo-c.h"
                                                        # 497 "./neo-c.h"
                                                        if(_if_conditional157=i_107<tail,                                                        _if_conditional157) {
                                                            # 498 "./neo-c.h"
                                                            prev_it_108=it_106;
                                                            # 500 "./neo-c.h"
                                                            it_106=it_106->next;
                                                            # 501 "./neo-c.h"
                                                            i_107++;
                                                            # 503 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./neo-c.h"
                                                            # 507 "./neo-c.h"
                                                            if(_if_conditional158=i_107==tail,                                                            _if_conditional158) {
                                                                # 508 "./neo-c.h"
                                                                self->head=it_106;
                                                                # 509 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./neo-c.h"
                                                                it_106=it_106->next;
                                                                # 514 "./neo-c.h"
                                                                i_107++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./neo-c.h"
                                                    # 518 "./neo-c.h"
                                                    if(_if_conditional159=tail==self->len,                                                    _if_conditional159) {
                                                        # 519 "./neo-c.h"
                                                        it_109=self->head;
                                                        # 520 "./neo-c.h"
                                                        i_110=0;
                                                        # 542 "./neo-c.h"
                                                        while(_while_condtional22=it_109!=((void*)0),                                                        _while_condtional22) {
                                                            # 527 "./neo-c.h"
                                                            # 522 "./neo-c.h"
                                                            if(_if_conditional160=i_110==head,                                                            _if_conditional160) {
                                                                # 523 "./neo-c.h"
                                                                self->tail=it_109->prev;
                                                                # 524 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./neo-c.h"
                                                            # 527 "./neo-c.h"
                                                            if(_if_conditional161=i_110>=head,                                                            _if_conditional161) {
                                                                # 528 "./neo-c.h"
                                                                prev_it_111=it_109;
                                                                # 530 "./neo-c.h"
                                                                it_109=it_109->next;
                                                                # 531 "./neo-c.h"
                                                                i_110++;
                                                                # 533 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./neo-c.h"
                                                                it_109=it_109->next;
                                                                # 539 "./neo-c.h"
                                                                i_110++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./neo-c.h"
                                                        it_112=self->head;
                                                        # 546 "./neo-c.h"
                                                        head_prev_it_113=((void*)0);
                                                        # 547 "./neo-c.h"
                                                        tail_it_114=((void*)0);
                                                        # 550 "./neo-c.h"
                                                        i_115=0;
                                                        # 576 "./neo-c.h"
                                                        while(_while_condtional23=it_112!=((void*)0),                                                        _while_condtional23) {
                                                            # 555 "./neo-c.h"
                                                            # 552 "./neo-c.h"
                                                            if(_if_conditional162=i_115==head,                                                            _if_conditional162) {
                                                                # 553 "./neo-c.h"
                                                                head_prev_it_113=it_112->prev;
                                                            }
                                                            # 559 "./neo-c.h"
                                                            # 555 "./neo-c.h"
                                                            if(_if_conditional163=i_115==tail,                                                            _if_conditional163) {
                                                                # 556 "./neo-c.h"
                                                                tail_it_114=it_112;
                                                            }
                                                            # 574 "./neo-c.h"
                                                            # 559 "./neo-c.h"
                                                            if(_if_conditional164=i_115>=head&&i_115<tail,                                                            _if_conditional164) {
                                                                # 561 "./neo-c.h"
                                                                prev_it_116=it_112;
                                                                # 563 "./neo-c.h"
                                                                it_112=it_112->next;
                                                                # 564 "./neo-c.h"
                                                                i_115++;
                                                                # 566 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./neo-c.h"
                                                                it_112=it_112->next;
                                                                # 572 "./neo-c.h"
                                                                i_115++;
                                                            }
                                                        }
                                                        # 579 "./neo-c.h"
                                                        # 576 "./neo-c.h"
                                                        if(_if_conditional165=head_prev_it_113!=((void*)0),                                                        _if_conditional165) {
                                                            # 577 "./neo-c.h"
                                                            head_prev_it_113->next=tail_it_114;
                                                        }
                                                        # 582 "./neo-c.h"
                                                        # 579 "./neo-c.h"
                                                        if(_if_conditional166=tail_it_114!=((void*)0),                                                        _if_conditional166) {
                                                            # 580 "./neo-c.h"
                                                            tail_it_114->prev=head_prev_it_113;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./neo-c.h"
                                            __result92__ = __result_obj__ = self;
                                            return __result92__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_104;
_Bool _while_condtional20;
struct list_item$1charp* prev_it_105;
struct list$1charp* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_105, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./neo-c.h"
                                                    it_104=self->head;
                                                    # 440 "./neo-c.h"
                                                    while(_while_condtional20=it_104!=((void*)0),                                                    _while_condtional20) {
                                                        # 435 "./neo-c.h"
                                                        prev_it_105=it_104;
                                                        # 436 "./neo-c.h"
                                                        it_104=it_104->next;
                                                        # 437 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 441 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./neo-c.h"
                                                    self->len=0;
                                                    # 445 "./neo-c.h"
                                                    __result91__ = __result_obj__ = self;
                                                    return __result91__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional172;
char* result_118;
char* __result94__;
_Bool _if_conditional173;
char* __result95__;
char* result_119;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(char*));
memset(&result_119, 0, sizeof(char*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional172=self==((void*)0),                _if_conditional172) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_118,0,sizeof(char*));
                    # 288 "./neo-c.h"
                    __result94__ = __result_obj__ = result_118;
                    return __result94__;
                }
                # 290 "./neo-c.h"
                self->it=self->head;
                # 296 "./neo-c.h"
                # 292 "./neo-c.h"
                if(self->it) {
                    # 293 "./neo-c.h"
                    __result95__ = __result_obj__ = self->it->item;
                    return __result95__;
                }
                # 296 "./neo-c.h"
                # 297 "./neo-c.h"
                memset(&result_119,0,sizeof(char*));
                # 298 "./neo-c.h"
                __result96__ = __result_obj__ = result_119;
                return __result96__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./neo-c.h"
                __result97__ = self==((void*)0)||self->it==((void*)0);
                return __result97__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional174;
char* result_121;
char* __result98__;
_Bool _if_conditional175;
char* __result99__;
char* result_122;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional174=self==((void*)0)||self->it==((void*)0),                _if_conditional174) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_121,0,sizeof(char*));
                    # 305 "./neo-c.h"
                    __result98__ = __result_obj__ = result_121;
                    return __result98__;
                }
                # 308 "./neo-c.h"
                self->it=self->it->next;
                # 314 "./neo-c.h"
                # 310 "./neo-c.h"
                if(self->it) {
                    # 311 "./neo-c.h"
                    __result99__ = __result_obj__ = self->it->item;
                    return __result99__;
                }
                # 314 "./neo-c.h"
                # 315 "./neo-c.h"
                memset(&result_122,0,sizeof(char*));
                # 316 "./neo-c.h"
                __result100__ = __result_obj__ = result_122;
                return __result100__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional178;
void* right_value133;
struct list_item$1charp* litem_123;
_Bool _if_conditional179;
void* right_value134;
struct list_item$1charp* litem_124;
void* right_value135;
struct list_item$1charp* litem_125;
struct list$1charp* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&litem_123, 0, sizeof(struct list_item$1charp*));
right_value134 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1charp*));
right_value135 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1charp*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional178=self->len==0,                    _if_conditional178) {
                        # 226 "./neo-c.h"
                        litem_123=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value133=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_123->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_123->next=((void*)0);
                        # 230 "./neo-c.h"
                        litem_123->item=item;
                        # 232 "./neo-c.h"
                        self->tail=litem_123;
                        # 233 "./neo-c.h"
                        self->head=litem_123;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional179=self->len==1,                        _if_conditional179) {
                            # 236 "./neo-c.h"
                            litem_124=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value134=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_124->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_124->next=((void*)0);
                            # 240 "./neo-c.h"
                            litem_124->item=item;
                            # 242 "./neo-c.h"
                            self->tail=litem_124;
                            # 243 "./neo-c.h"
                            self->head->next=litem_124;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_125=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value135=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_125->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_125->next=((void*)0);
                            # 250 "./neo-c.h"
                            litem_125->item=item;
                            # 252 "./neo-c.h"
                            self->tail->next=litem_125;
                            # 253 "./neo-c.h"
                            self->tail=litem_125;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result101__ = __result_obj__ = self;
                    return __result101__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional180;
unsigned int hash_144;
unsigned int it_145;
_Bool _while_condtional26;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool same_key_exist_146;
char* it2_147;
_Bool _if_conditional200;
_Bool _if_conditional201;
struct map$2charphsTypeph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_144, 0, sizeof(unsigned int));
memset(&it_145, 0, sizeof(unsigned int));
memset(&same_key_exist_146, 0, sizeof(_Bool));
memset(&it2_147, 0, sizeof(char*));
            # 1393 "./neo-c.h"
            # 1390 "./neo-c.h"
            if(_if_conditional180=self->len*10>=self->size,            _if_conditional180) {
                # 1391 "./neo-c.h"
                map$2charphsTypeph_rehash(self);
            }
            # 1393 "./neo-c.h"
            hash_144=string_get_hash_key(key)%self->size;
            # 1394 "./neo-c.h"
            it_145=hash_144;
            # 1452 "./neo-c.h"
            while(_while_condtional26=(_Bool)1,            _while_condtional26) {
                # 1450 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional192=self->item_existance[it_145],                _if_conditional192) {
                    # 1420 "./neo-c.h"
                    # 1399 "./neo-c.h"
                    if(_if_conditional193=string_equals(self->keys[it_145],key),                    _if_conditional193) {
                        # 1410 "./neo-c.h"
                        # 1401 "./neo-c.h"
                        if(_if_conditional194=1,                        _if_conditional194) {
                            # 1402 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_145]);
                            # 1403 "./neo-c.h"
                            self->keys[it_145] = come_decrement_ref_count2(self->keys[it_145], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./neo-c.h"
                            self->keys[it_145]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_145]);
                            # 1408 "./neo-c.h"
                            self->keys[it_145]=key;
                        }
                        # 1417 "./neo-c.h"
                        # 1410 "./neo-c.h"
                        if(_if_conditional195=1,                        _if_conditional195) {
                            # 1411 "./neo-c.h"
                            come_call_finalizer2(sType_finalize,self->items[it_145], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./neo-c.h"
                            self->items[it_145]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./neo-c.h"
                            self->items[it_145]=item;
                        }
                        # 1417 "./neo-c.h"
                        break;
                    }
                    # 1420 "./neo-c.h"
                    it_145++;
                    # 1430 "./neo-c.h"
                    # 1422 "./neo-c.h"
                    if(_if_conditional196=it_145>=self->size,                    _if_conditional196) {
                        # 1423 "./neo-c.h"
                        it_145=0;
                    }
                    else {
                        # 1430 "./neo-c.h"
                        # 1425 "./neo-c.h"
                        if(_if_conditional197=it_145==hash_144,                        _if_conditional197) {
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
                    self->item_existance[it_145]=(_Bool)1;
                    # 1439 "./neo-c.h"
                    # 1433 "./neo-c.h"
                    if(_if_conditional198=1,                    _if_conditional198) {
                        # 1434 "./neo-c.h"
                        self->keys[it_145]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./neo-c.h"
                        self->keys[it_145]=key;
                    }
                    # 1446 "./neo-c.h"
                    # 1439 "./neo-c.h"
                    if(_if_conditional199=1,                    _if_conditional199) {
                        # 1440 "./neo-c.h"
                        self->items[it_145]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./neo-c.h"
                        self->items[it_145]=item;
                    }
                    # 1446 "./neo-c.h"
                    self->len++;
                    # 1448 "./neo-c.h"
                    break;
                }
            }
            # 1452 "./neo-c.h"
            same_key_exist_146=(_Bool)0;
            # 1460 "./neo-c.h"
            for(            it2_147=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_147=list$1charp_next(self->key_list)            ){
                # 1458 "./neo-c.h"
                # 1455 "./neo-c.h"
                if(_if_conditional200=string_equals(it2_147,key),                _if_conditional200) {
                    # 1456 "./neo-c.h"
                    same_key_exist_146=(_Bool)1;
                }
            }
            # 1464 "./neo-c.h"
            # 1460 "./neo-c.h"
            if(_if_conditional201=!same_key_exist_146,            _if_conditional201) {
                # 1461 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1464 "./neo-c.h"
            __result114__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result114__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_127;
void* right_value142;
char** keys_128;
void* right_value143;
struct sType** items_129;
void* right_value144;
_Bool* item_existance_130;
int len_131;
char* it_134;
struct sType* default_value_137;
struct sType* it2_140;
unsigned int hash_141;
int n_142;
_Bool _while_condtional25;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
struct sType* default_value_143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_127, 0, sizeof(int));
right_value142 = (void*)0;
memset(&keys_128, 0, sizeof(char**));
right_value143 = (void*)0;
memset(&items_129, 0, sizeof(struct sType**));
right_value144 = (void*)0;
memset(&item_existance_130, 0, sizeof(_Bool*));
memset(&len_131, 0, sizeof(int));
memset(&it_134, 0, sizeof(char*));
memset(&default_value_137, 0, sizeof(struct sType*));
memset(&it2_140, 0, sizeof(struct sType*));
memset(&hash_141, 0, sizeof(unsigned int));
memset(&n_142, 0, sizeof(int));
memset(&default_value_143, 0, sizeof(struct sType*));
                    # 1337 "./neo-c.h"
                    size_127=self->size*10;
                    # 1338 "./neo-c.h"
                    keys_128=(char**)come_increment_ref_count(((char**)(right_value142=(char**)come_calloc(1, sizeof(char*)*(1*(size_127)), "./neo-c.h", 1338, "char*%"))));
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./neo-c.h"
                    items_129=(struct sType**)come_increment_ref_count(((struct sType**)(right_value143=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_127)), "./neo-c.h", 1339, "sType*%"))));
                    come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    item_existance_130=(_Bool*)come_increment_ref_count(((_Bool*)(right_value144=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_127)), "./neo-c.h", 1340, "bool"))));
                    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./neo-c.h"
                    len_131=0;
                    # 1377 "./neo-c.h"
                    for(                    it_134=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_134=map$2charphsTypeph_next(self)                    ){
                        # 1345 "./neo-c.h"
                        # 1346 "./neo-c.h"
                        memset(&default_value_137,0,sizeof(struct sType*));
                        # 1347 "./neo-c.h"
                        it2_140=map$2charphsTypeph_at(self,it_134,default_value_137);
                        # 1348 "./neo-c.h"
                        hash_141=string_get_hash_key(it_134)%size_127;
                        # 1349 "./neo-c.h"
                        n_142=hash_141;
                        # 1375 "./neo-c.h"
                        while(_while_condtional25=(_Bool)1,                        _while_condtional25) {
                            # 1374 "./neo-c.h"
                            # 1352 "./neo-c.h"
                            if(_if_conditional189=item_existance_130[n_142],                            _if_conditional189) {
                                # 1354 "./neo-c.h"
                                n_142++;
                                # 1364 "./neo-c.h"
                                # 1356 "./neo-c.h"
                                if(_if_conditional190=n_142>=size_127,                                _if_conditional190) {
                                    # 1357 "./neo-c.h"
                                    n_142=0;
                                }
                                else {
                                    # 1364 "./neo-c.h"
                                    # 1359 "./neo-c.h"
                                    if(_if_conditional191=n_142==hash_141,                                    _if_conditional191) {
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
                                item_existance_130[n_142]=(_Bool)1;
                                # 1367 "./neo-c.h"
                                keys_128[n_142]=it_134;
                                # 1368 "./neo-c.h"
                                # 1369 "./neo-c.h"
                                items_129[n_142]=map$2charphsTypeph_at(self,it_134,default_value_143);
                                # 1371 "./neo-c.h"
                                len_131++;
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
                    self->keys=keys_128;
                    # 1382 "./neo-c.h"
                    self->items=items_129;
                    # 1383 "./neo-c.h"
                    self->item_existance=item_existance_130;
                    # 1385 "./neo-c.h"
                    self->size=size_127;
                    # 1386 "./neo-c.h"
                    self->len=len_131;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional181;
char* result_132;
char* __result103__;
_Bool _if_conditional182;
char* __result104__;
char* result_133;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_132, 0, sizeof(char*));
memset(&result_133, 0, sizeof(char*));
                        # 1304 "./neo-c.h"
                        # 1299 "./neo-c.h"
                        if(_if_conditional181=self==((void*)0),                        _if_conditional181) {
                            # 1300 "./neo-c.h"
                            # 1301 "./neo-c.h"
                            memset(&result_132,0,sizeof(char*));
                            # 1302 "./neo-c.h"
                            __result103__ = __result_obj__ = result_132;
                            return __result103__;
                        }
                        # 1304 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./neo-c.h"
                        # 1306 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1307 "./neo-c.h"
                            __result104__ = __result_obj__ = self->key_list->it->item;
                            return __result104__;
                        }
                        # 1310 "./neo-c.h"
                        # 1311 "./neo-c.h"
                        memset(&result_133,0,sizeof(char*));
                        # 1312 "./neo-c.h"
                        __result105__ = __result_obj__ = result_133;
                        return __result105__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./neo-c.h"
                        __result106__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result106__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional183;
char* result_135;
char* __result107__;
_Bool _if_conditional184;
char* __result108__;
char* result_136;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_135, 0, sizeof(char*));
memset(&result_136, 0, sizeof(char*));
                        # 1321 "./neo-c.h"
                        # 1316 "./neo-c.h"
                        if(_if_conditional183=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional183) {
                            # 1317 "./neo-c.h"
                            # 1318 "./neo-c.h"
                            memset(&result_135,0,sizeof(char*));
                            # 1319 "./neo-c.h"
                            __result107__ = __result_obj__ = result_135;
                            return __result107__;
                        }
                        # 1321 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./neo-c.h"
                        # 1323 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1324 "./neo-c.h"
                            __result108__ = __result_obj__ = self->key_list->it->item;
                            return __result108__;
                        }
                        # 1327 "./neo-c.h"
                        # 1328 "./neo-c.h"
                        memset(&result_136,0,sizeof(char*));
                        # 1329 "./neo-c.h"
                        __result109__ = __result_obj__ = result_136;
                        return __result109__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_138;
unsigned int it_139;
_Bool _while_condtional24;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct sType* __result110__;
_Bool _if_conditional187;
_Bool _if_conditional188;
struct sType* __result111__;
struct sType* __result112__;
struct sType* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_138, 0, sizeof(unsigned int));
memset(&it_139, 0, sizeof(unsigned int));
                            # 1226 "./neo-c.h"
                            hash_138=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./neo-c.h"
                            it_139=hash_138;
                            # 1251 "./neo-c.h"
                            while(_while_condtional24=(_Bool)1,                            _while_condtional24) {
                                # 1249 "./neo-c.h"
                                # 1230 "./neo-c.h"
                                if(_if_conditional185=self->item_existance[it_139],                                _if_conditional185) {
                                    # 1237 "./neo-c.h"
                                    # 1232 "./neo-c.h"
                                    if(_if_conditional186=string_equals(self->keys[it_139],key),                                    _if_conditional186) {
                                        # 1234 "./neo-c.h"
                                        __result110__ = __result_obj__ = self->items[it_139];
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result110__;
                                    }
                                    # 1237 "./neo-c.h"
                                    it_139++;
                                    # 1245 "./neo-c.h"
                                    # 1239 "./neo-c.h"
                                    if(_if_conditional187=it_139>=self->size,                                    _if_conditional187) {
                                        # 1240 "./neo-c.h"
                                        it_139=0;
                                    }
                                    else {
                                        # 1245 "./neo-c.h"
                                        # 1242 "./neo-c.h"
                                        if(_if_conditional188=it_139==hash_138,                                        _if_conditional188) {
                                            # 1243 "./neo-c.h"
                                            __result111__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result111__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./neo-c.h"
                                    __result112__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result112__;
                                }
                            }
                            # 1251 "./neo-c.h"
                            __result113__ = __result_obj__ = default_value;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result113__;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional204;
struct tuple2$2sTypephcharph* result_149;
struct tuple2$2sTypephcharph* __result115__;
_Bool _if_conditional205;
struct tuple2$2sTypephcharph* __result116__;
struct tuple2$2sTypephcharph* result_150;
struct tuple2$2sTypephcharph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_149, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_150, 0, sizeof(struct tuple2$2sTypephcharph*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional204=self==((void*)0),                _if_conditional204) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_149,0,sizeof(struct tuple2$2sTypephcharph*));
                    # 288 "./neo-c.h"
                    __result115__ = __result_obj__ = result_149;
                    return __result115__;
                }
                # 290 "./neo-c.h"
                self->it=self->head;
                # 296 "./neo-c.h"
                # 292 "./neo-c.h"
                if(self->it) {
                    # 293 "./neo-c.h"
                    __result116__ = __result_obj__ = self->it->item;
                    return __result116__;
                }
                # 296 "./neo-c.h"
                # 297 "./neo-c.h"
                memset(&result_150,0,sizeof(struct tuple2$2sTypephcharph*));
                # 298 "./neo-c.h"
                __result117__ = __result_obj__ = result_150;
                return __result117__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./neo-c.h"
                __result118__ = self==((void*)0)||self->it==((void*)0);
                return __result118__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional206;
struct tuple2$2sTypephcharph* result_152;
struct tuple2$2sTypephcharph* __result119__;
_Bool _if_conditional207;
struct tuple2$2sTypephcharph* __result120__;
struct tuple2$2sTypephcharph* result_153;
struct tuple2$2sTypephcharph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_153, 0, sizeof(struct tuple2$2sTypephcharph*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional206=self==((void*)0)||self->it==((void*)0),                _if_conditional206) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_152,0,sizeof(struct tuple2$2sTypephcharph*));
                    # 305 "./neo-c.h"
                    __result119__ = __result_obj__ = result_152;
                    return __result119__;
                }
                # 308 "./neo-c.h"
                self->it=self->it->next;
                # 314 "./neo-c.h"
                # 310 "./neo-c.h"
                if(self->it) {
                    # 311 "./neo-c.h"
                    __result120__ = __result_obj__ = self->it->item;
                    return __result120__;
                }
                # 314 "./neo-c.h"
                # 315 "./neo-c.h"
                memset(&result_153,0,sizeof(struct tuple2$2sTypephcharph*));
                # 316 "./neo-c.h"
                __result121__ = __result_obj__ = result_153;
                return __result121__;
}

int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    # 98 "17typedef.c"
    __result123__ = self->sline;
    return __result123__;
}

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value156;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    # 103 "17typedef.c"
    __result124__ = __result_obj__ = ((char*)(right_value156=__builtin_string(self->sname)));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_157;
_Bool _if_conditional212;
_Bool in_typedef_158;
void* right_value157;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_159;
char* type_name_160;
_Bool err_161;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value158;
struct sType* base_type_162;
void* right_value159;
void* right_value160;
struct list$1tuple2$2sTypephcharphph* multiple_declare_163;
void* right_value161;
void* right_value162;
struct tuple2$2sTypephcharph* variable_name_164;
void* right_value166;
struct tuple2$2sTypephcharph* variable_name2_168;
_Bool _while_condtional27;
void* right_value167;
struct tuple2$2sTypephcharph* variable_name_169;
char* source_tail_170;
void* right_value168;
void* right_value169;
struct buffer* header_171;
void* right_value170;
void* right_value171;
void* right_value172;
struct sNode* _inf_value1;
struct sTypedefNode* _inf_obj_value1;
void* right_value179;
struct sNode* __result129__;
char* source_tail_173;
void* right_value180;
void* right_value181;
struct buffer* header_174;
void* right_value182;
void* right_value183;
void* right_value184;
struct sNode* _inf_value2;
struct sTypedefNode* _inf_obj_value2;
void* right_value191;
struct sNode* __result132__;
void* right_value192;
struct sNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_157, 0, sizeof(char*));
memset(&in_typedef_158, 0, sizeof(_Bool));
right_value157 = (void*)0;
memset(&type_159, 0, sizeof(struct sType*));
memset(&type_name_160, 0, sizeof(char*));
memset(&err_161, 0, sizeof(_Bool));
memset(&type_159, 0, sizeof(struct sType*));
memset(&type_name_160, 0, sizeof(char*));
memset(&err_161, 0, sizeof(_Bool));
right_value158 = (void*)0;
memset(&base_type_162, 0, sizeof(struct sType*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&multiple_declare_163, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&variable_name_164, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value166 = (void*)0;
memset(&variable_name2_168, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value167 = (void*)0;
memset(&variable_name_169, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&source_tail_170, 0, sizeof(char*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&header_171, 0, sizeof(struct buffer*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value179 = (void*)0;
memset(&source_tail_173, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&header_174, 0, sizeof(struct buffer*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    # 108 "17typedef.c"
    source_head_157=info->p;
    # 167 "17typedef.c"
    # 110 "17typedef.c"
    if(_if_conditional212=charp_operator_equals(buf,"typedef"),    _if_conditional212) {
        # 111 "17typedef.c"
        in_typedef_158=info->in_typedef;
        # 112 "17typedef.c"
        info->in_typedef=(_Bool)1;
        # 113 "17typedef.c"
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value157=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_159=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        type_name_160=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_161=multiple_assign_var2->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 118 "17typedef.c"
        # 114 "17typedef.c"
        if(_if_conditional215=!err_161,        _if_conditional215) {
            # 115 "17typedef.c"
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            # 116 "17typedef.c"
            exit(2);
        }
        # 118 "17typedef.c"
        info->in_typedef=(_Bool)0;
        # 119 "17typedef.c"
        info->in_typedef=in_typedef_158;
        # 165 "17typedef.c"
        # 121 "17typedef.c"
        if(_if_conditional216=*info->p==44,        _if_conditional216) {
            # 122 "17typedef.c"
            info->p++;
            # 123 "17typedef.c"
            skip_spaces_and_lf(info);
            # 125 "17typedef.c"
            base_type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(type_159))));
            come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 127 "17typedef.c"
            multiple_declare_163=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value160=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value159=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "17typedef.c", 127, "list$1tuple2$2sTypephcharphph"))))))));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 129 "17typedef.c"
            variable_name_164=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value162=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value161=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "17typedef.c", 129, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(base_type_162),(char*)come_increment_ref_count(type_name_160)))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 130 "17typedef.c"
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_163,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_164));
            # 132 "17typedef.c"
            variable_name2_168=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value166=parse_variable_name((struct sType*)come_increment_ref_count(base_type_162),(_Bool)1,info))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 133 "17typedef.c"
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_163,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name2_168));
            # 144 "17typedef.c"
            while(_while_condtional27=*info->p==44,            _while_condtional27) {
                # 136 "17typedef.c"
                info->p++;
                # 137 "17typedef.c"
                skip_spaces_and_lf(info);
                # 139 "17typedef.c"
                variable_name_169=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value167=parse_variable_name((struct sType*)come_increment_ref_count(base_type_162),(_Bool)0,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 141 "17typedef.c"
                list$1tuple2$2sTypephcharphph_push_back(multiple_declare_163,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_169));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 144 "17typedef.c"
            source_tail_170=info->p;
            # 146 "17typedef.c"
            header_171=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value168=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 146, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 147 "17typedef.c"
            buffer_append_str(header_171,"typedef ");
            # 148 "17typedef.c"
            buffer_append(header_171,source_head_157,source_tail_170-source_head_157);
            # 150 "17typedef.c"
            add_come_code_at_come_header(info,"%s",((char*)(right_value170=buffer_to_string(header_171))));
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 152 "17typedef.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 152, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sTypedefNode*)(right_value172=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value171=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 152, "sTypedefNode")))),(char*)come_increment_ref_count(type_name_160),(struct sType*)come_increment_ref_count(type_159),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_163),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sTypedefNode_finalize;
            _inf_value1->clone=(void*)sTypedefNode_clone;
            _inf_value1->compile=(void*)sTypedefNode_compile;
            _inf_value1->sline=(void*)sTypedefNode_sline;
            _inf_value1->sname=(void*)sTypedefNode_sname;
            _inf_value1->terminated=(void*)sTypedefNode_terminated;
            _inf_value1->kind=(void*)sTypedefNode_kind;
            __result129__ = __result_obj__ = ((struct sNode*)(right_value179=_inf_value1));
            come_call_finalizer2(sType_finalize,base_type_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name2_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_160 = come_decrement_ref_count2(type_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sTypedefNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTypedefNode_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result129__;
            come_call_finalizer2(sType_finalize,base_type_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name2_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 155 "17typedef.c"
            source_tail_173=info->p;
            # 157 "17typedef.c"
            header_174=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 157, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 158 "17typedef.c"
            buffer_append_str(header_174,"typedef ");
            # 159 "17typedef.c"
            buffer_append(header_174,source_head_157,source_tail_173-source_head_157);
            # 161 "17typedef.c"
            add_come_code_at_come_header(info,"%s;\n",((char*)(right_value182=buffer_to_string(header_174))));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 163 "17typedef.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 163, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sTypedefNode*)(right_value184=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value183=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 163, "sTypedefNode")))),(char*)come_increment_ref_count(type_name_160),(struct sType*)come_increment_ref_count(type_159),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sTypedefNode_finalize;
            _inf_value2->clone=(void*)sTypedefNode_clone;
            _inf_value2->compile=(void*)sTypedefNode_compile;
            _inf_value2->sline=(void*)sTypedefNode_sline;
            _inf_value2->sname=(void*)sTypedefNode_sname;
            _inf_value2->terminated=(void*)sTypedefNode_terminated;
            _inf_value2->kind=(void*)sTypedefNode_kind;
            __result132__ = __result_obj__ = ((struct sNode*)(right_value191=_inf_value2));
            come_call_finalizer2(buffer_finalize,header_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_160 = come_decrement_ref_count2(type_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sTypedefNode_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTypedefNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result132__;
            come_call_finalizer2(buffer_finalize,header_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_160 = come_decrement_ref_count2(type_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 167 "17typedef.c"
    __result133__ = __result_obj__ = ((struct sNode*)(right_value192=top_level_v94(buf,head,head_sline,info)));
    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result133__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional213;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            # 0 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional213=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional213) {
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple3$3sTypephcharphboolp_finalize"
            # 1 "tuple3$3sTypephcharphboolp_finalize"
            if(_if_conditional214=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional214) {
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj48;
char* __dec_obj49;
struct tuple2$2sTypephcharph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1767 "./neo-c.h"
                __dec_obj48=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1768 "./neo-c.h"
                __dec_obj49=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1770 "./neo-c.h"
                __result125__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result125__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional217;
void* right_value163;
struct list_item$1tuple2$2sTypephcharphph* litem_165;
struct tuple2$2sTypephcharph* __dec_obj50;
_Bool _if_conditional218;
void* right_value164;
struct list_item$1tuple2$2sTypephcharphph* litem_166;
struct tuple2$2sTypephcharph* __dec_obj51;
void* right_value165;
struct list_item$1tuple2$2sTypephcharphph* litem_167;
struct tuple2$2sTypephcharph* __dec_obj52;
struct list$1tuple2$2sTypephcharphph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value164 = (void*)0;
memset(&litem_166, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value165 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional217=self->len==0,                _if_conditional217) {
                    # 226 "./neo-c.h"
                    litem_165=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value163=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./neo-c.h", 226, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_165->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_165->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj50=litem_165->item;
                    litem_165->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_165;
                    # 233 "./neo-c.h"
                    self->head=litem_165;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional218=self->len==1,                    _if_conditional218) {
                        # 236 "./neo-c.h"
                        litem_166=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value164=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./neo-c.h", 236, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_166->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_166->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj51=litem_166->item;
                        litem_166->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_166;
                        # 243 "./neo-c.h"
                        self->head->next=litem_166;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_167=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value165=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./neo-c.h", 246, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_167->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_167->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj52=litem_167->item;
                        litem_167->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./neo-c.h"
                        self->tail->next=litem_167;
                        # 253 "./neo-c.h"
                        self->tail=litem_167;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result126__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result126__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sTypedefNode_finalize(struct sTypedefNode* self){
void* __result_obj__;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sTypedefNode_finalize"
                # 0 "sTypedefNode_finalize"
                if(_if_conditional231=self!=((void*)0)&&self->mTypeName!=((void*)0),                _if_conditional231) {
                    # 0 "sTypedefNode_finalize"
                    self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sTypedefNode_finalize"
                # 1 "sTypedefNode_finalize"
                if(_if_conditional232=self!=((void*)0)&&self->mType!=((void*)0),                _if_conditional232) {
                    # 1 "sTypedefNode_finalize"
                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sTypedefNode_finalize"
                # 2 "sTypedefNode_finalize"
                if(_if_conditional233=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional233) {
                    # 2 "sTypedefNode_finalize"
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sTypedefNode_finalize"
                # 3 "sTypedefNode_finalize"
                if(_if_conditional234=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional234) {
                    # 3 "sTypedefNode_finalize"
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sTypedefNode_finalize"
                # 4 "sTypedefNode_finalize"
                if(_if_conditional235=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional235) {
                    # 4 "sTypedefNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self){
void* __result_obj__;
_Bool _if_conditional236;
struct sTypedefNode* __result130__;
void* right_value185;
struct sTypedefNode* result_175;
_Bool _if_conditional237;
void* right_value186;
char* __dec_obj58;
_Bool _if_conditional238;
void* right_value187;
struct sType* __dec_obj59;
_Bool _if_conditional239;
void* right_value188;
struct list$1tuple2$2sTypephcharphph* __dec_obj60;
_Bool _if_conditional240;
void* right_value189;
char* __dec_obj61;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value190;
char* __dec_obj62;
struct sTypedefNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
memset(&result_175, 0, sizeof(struct sTypedefNode*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
                # 3 "sTypedefNode_clone"
                # 2 "sTypedefNode_clone"
                if(_if_conditional236=self==(void*)0,                _if_conditional236) {
                    # 2 "sTypedefNode_clone"
                    __result130__ = __result_obj__ = (void*)0;
                    return __result130__;
                }
                # 3 "sTypedefNode_clone"
                result_175=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value185=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "sTypedefNode_clone", 3, "sTypedefNode"))));
                come_call_finalizer2(sTypedefNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sTypedefNode_clone"
                # 4 "sTypedefNode_clone"
                if(_if_conditional237=self!=((void*)0)&&self->mTypeName!=((void*)0),                _if_conditional237) {
                    # 4 "sTypedefNode_clone"
                    __dec_obj58=result_175->mTypeName;
                    result_175->mTypeName=(char*)come_increment_ref_count(((char*)(right_value186=string_clone(self->mTypeName))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sTypedefNode_clone"
                # 5 "sTypedefNode_clone"
                if(_if_conditional238=self!=((void*)0)&&self->mType!=((void*)0),                _if_conditional238) {
                    # 5 "sTypedefNode_clone"
                    __dec_obj59=result_175->mType;
                    result_175->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(self->mType))));
                    come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sTypedefNode_clone"
                # 6 "sTypedefNode_clone"
                if(_if_conditional239=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional239) {
                    # 6 "sTypedefNode_clone"
                    __dec_obj60=result_175->multiple_declare;
                    result_175->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value188=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sTypedefNode_clone"
                # 7 "sTypedefNode_clone"
                if(_if_conditional240=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional240) {
                    # 7 "sTypedefNode_clone"
                    __dec_obj61=result_175->mDeclareSName;
                    result_175->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value189=string_clone(self->mDeclareSName))));
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 9 "sTypedefNode_clone"
                # 8 "sTypedefNode_clone"
                if(_if_conditional241=self!=((void*)0),                _if_conditional241) {
                    # 8 "sTypedefNode_clone"
                    result_175->sline=self->sline;
                }
                # 10 "sTypedefNode_clone"
                # 9 "sTypedefNode_clone"
                if(_if_conditional242=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional242) {
                    # 9 "sTypedefNode_clone"
                    __dec_obj62=result_175->sname;
                    result_175->sname=(char*)come_increment_ref_count(((char*)(right_value190=string_clone(self->sname))));
                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sTypedefNode_clone"
                __result131__ = __result_obj__ = result_175;
                come_call_finalizer2(sTypedefNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result131__;
                come_call_finalizer2(sTypedefNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

