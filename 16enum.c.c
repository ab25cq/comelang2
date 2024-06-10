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
struct sClassModule
{
    char* mName;
    char* mText;
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
struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
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
    struct map$2charphsClassModuleph* modules;
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

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, struct sInfo* info);

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

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

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
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info);

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
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
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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










struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value80;
char* __dec_obj13;
void* right_value91;
struct list$1tuple2$2charphsNodephph* __dec_obj19;
void* right_value92;
char* __dec_obj20;
struct sEnumNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
    # 18 "16enum.c"
    self->sline=info->sline;
    # 19 "16enum.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 21 "16enum.c"
    __dec_obj13=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(type_name))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 22 "16enum.c"
    __dec_obj19=self->mElements;
    self->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value91=list$1tuple2$2charphsNodephphp_clone(elements))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 24 "16enum.c"
    self->mOutput=output;
    # 26 "16enum.c"
    __dec_obj20=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(info->sname))));
    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 28 "16enum.c"
    __result60__ = __result_obj__ = self;
    come_call_finalizer2(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result60__;
    come_call_finalizer2(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional19;
struct list$1tuple2$2charphsNodephph* __result52__;
void* right_value81;
void* right_value82;
struct list$1tuple2$2charphsNodephph* result_49;
struct list_item$1tuple2$2charphsNodephph* it_50;
_Bool _while_condtional8;
void* right_value90;
struct list$1tuple2$2charphsNodephph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_49, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_50, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value90 = (void*)0;
        # 142 "./neo-c.h"
        # 139 "./neo-c.h"
        if(_if_conditional19=self==((void*)0),        _if_conditional19) {
            # 140 "./neo-c.h"
            __result52__ = __result_obj__ = ((void*)0);
            return __result52__;
        }
        # 142 "./neo-c.h"
        result_49=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value82=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value81=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./neo-c.h"
        it_50=self->head;
        # 151 "./neo-c.h"
        while(_while_condtional8=it_50!=((void*)0),        _while_condtional8) {
            # 146 "./neo-c.h"
            list$1tuple2$2charphsNodephph_add(result_49,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value90=tuple2$2charphsNodephp_clone(it_50->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "./neo-c.h"
            it_50=it_50->next;
        }
        # 151 "./neo-c.h"
        __result59__ = __result_obj__ = result_49;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result59__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./neo-c.h"
            self->head=((void*)0);
            # 105 "./neo-c.h"
            self->tail=((void*)0);
            # 106 "./neo-c.h"
            self->len=0;
            # 108 "./neo-c.h"
            __result53__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result53__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_47;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsNodephph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 123 "./neo-c.h"
                it_47=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional7=it_47!=((void*)0),                _while_condtional7) {
                    # 125 "./neo-c.h"
                    prev_it_48=it_47;
                    # 126 "./neo-c.h"
                    it_47=it_47->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional20) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsNodephp_finalize"
                                # 0 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional21=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional21) {
                                    # 0 "tuple2$2charphsNodephp_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsNodephp_finalize"
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional22=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional22) {
                                    # 1 "tuple2$2charphsNodephp_finalize"
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional23;
void* right_value83;
struct list_item$1tuple2$2charphsNodephph* litem_51;
struct tuple2$2charphsNodeph* __dec_obj14;
_Bool _if_conditional26;
void* right_value84;
struct list_item$1tuple2$2charphsNodephph* litem_52;
struct tuple2$2charphsNodeph* __dec_obj15;
void* right_value85;
struct list_item$1tuple2$2charphsNodephph* litem_53;
struct tuple2$2charphsNodeph* __dec_obj16;
struct list$1tuple2$2charphsNodephph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value84 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value85 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 186 "./neo-c.h"
                # 155 "./neo-c.h"
                if(_if_conditional23=self->len==0,                _if_conditional23) {
                    # 156 "./neo-c.h"
                    litem_51=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value83=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./neo-c.h"
                    litem_51->prev=((void*)0);
                    # 159 "./neo-c.h"
                    litem_51->next=((void*)0);
                    # 160 "./neo-c.h"
                    __dec_obj14=litem_51->item;
                    litem_51->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "./neo-c.h"
                    self->tail=litem_51;
                    # 163 "./neo-c.h"
                    self->head=litem_51;
                }
                else {
                    # 186 "./neo-c.h"
                    # 165 "./neo-c.h"
                    if(_if_conditional26=self->len==1,                    _if_conditional26) {
                        # 166 "./neo-c.h"
                        litem_52=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value84=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./neo-c.h"
                        litem_52->prev=self->head;
                        # 169 "./neo-c.h"
                        litem_52->next=((void*)0);
                        # 170 "./neo-c.h"
                        __dec_obj15=litem_52->item;
                        litem_52->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "./neo-c.h"
                        self->tail=litem_52;
                        # 173 "./neo-c.h"
                        self->head->next=litem_52;
                    }
                    else {
                        # 176 "./neo-c.h"
                        litem_53=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value85=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./neo-c.h"
                        litem_53->prev=self->tail;
                        # 179 "./neo-c.h"
                        litem_53->next=((void*)0);
                        # 180 "./neo-c.h"
                        __dec_obj16=litem_53->item;
                        litem_53->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "./neo-c.h"
                        self->tail->next=litem_53;
                        # 183 "./neo-c.h"
                        self->tail=litem_53;
                    }
                }
                # 186 "./neo-c.h"
                self->len++;
                # 188 "./neo-c.h"
                __result54__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result54__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphsNodeph_finalize"
                        # 0 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional24) {
                            # 0 "tuple2$2charphsNodeph_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2charphsNodeph_finalize"
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional25=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional25) {
                            # 1 "tuple2$2charphsNodeph_finalize"
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct tuple2$2charphsNodeph* __result55__;
void* right_value86;
struct tuple2$2charphsNodeph* result_54;
_Bool _if_conditional28;
void* right_value87;
char* __dec_obj17;
_Bool _if_conditional29;
void* right_value89;
struct sNode* __dec_obj18;
struct tuple2$2charphsNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_54, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value87 = (void*)0;
right_value89 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional27=self==(void*)0,                _if_conditional27) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result55__ = __result_obj__ = (void*)0;
                    return __result55__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_54=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value86=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional28=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional28) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj17=result_54->v1;
                    result_54->v1=(char*)come_increment_ref_count(((char*)(right_value87=string_clone(self->v1))));
                    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional29=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional29) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj18=result_54->v2;
                    result_54->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=sNode_clone(self->v2))));
                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result58__ = __result_obj__ = result_54;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional30;
struct sNode* __result56__;
void* right_value88;
struct sNode* result_55;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
struct sNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_55, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional30=self==(void*)0,                        _if_conditional30) {
                            # 2 "sNode_clone"
                            __result56__ = __result_obj__ = (void*)0;
                            return __result56__;
                        }
                        # 3 "sNode_clone"
                        result_55=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional31=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional31) {
                            # 4 "sNode_clone"
                            result_55->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional32=self!=((void*)0),                        _if_conditional32) {
                            # 5 "sNode_clone"
                            result_55->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional33=self!=((void*)0),                        _if_conditional33) {
                            # 6 "sNode_clone"
                            result_55->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional34=self!=((void*)0),                        _if_conditional34) {
                            # 7 "sNode_clone"
                            result_55->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional35=self!=((void*)0),                        _if_conditional35) {
                            # 8 "sNode_clone"
                            result_55->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional36=self!=((void*)0),                        _if_conditional36) {
                            # 9 "sNode_clone"
                            result_55->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional37=self!=((void*)0),                        _if_conditional37) {
                            # 10 "sNode_clone"
                            result_55->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional38=self!=((void*)0),                        _if_conditional38) {
                            # 11 "sNode_clone"
                            result_55->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result57__ = __result_obj__ = result_55;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result57__;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sEnumNode_terminated(){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 33 "16enum.c"
    __result61__ = (_Bool)1;
    return __result61__;
}

char* sEnumNode_kind(){
void* __result_obj__;
void* right_value93;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    # 38 "16enum.c"
    __result62__ = __result_obj__ = ((char*)(right_value93=__builtin_string("sEnumNode")));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
char* type_name_56;
struct list$1tuple2$2charphsNodephph* elements_57;
void* right_value94;
void* right_value95;
struct buffer* buf_58;
_Bool _if_conditional43;
void* right_value96;
void* right_value97;
int i_59;
int n_60;
struct list$1tuple2$2charphsNodephph* o2_saved_61;
struct tuple2$2charphsNodeph* it_64;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_67;
struct sNode* value_68;
void* right_value98;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional76;
void* right_value99;
char* c_value_77;
void* right_value100;
void* right_value101;
_Bool _if_conditional77;
_Bool __result76__;
void* right_value102;
struct CVALUE* right_value_78;
void* right_value103;
void* right_value104;
void* right_value105;
_Bool _if_conditional80;
void* right_value106;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value107;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_name_56, 0, sizeof(char*));
memset(&elements_57, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&buf_58, 0, sizeof(struct buffer*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&i_59, 0, sizeof(int));
memset(&n_60, 0, sizeof(int));
memset(&o2_saved_61, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_64, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_67, 0, sizeof(char*));
memset(&value_68, 0, sizeof(struct sNode*));
memset(&name_67, 0, sizeof(char*));
memset(&value_68, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&c_value_77, 0, sizeof(char*));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&right_value_78, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
    # 43 "16enum.c"
    type_name_56=(char*)come_increment_ref_count(self->mTypeName);
    # 44 "16enum.c"
    elements_57=self->mElements;
    # 46 "16enum.c"
    buf_58=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 46, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 55 "16enum.c"
    # 48 "16enum.c"
    if(_if_conditional43=string_operator_equals(type_name_56,""),    _if_conditional43) {
        # 49 "16enum.c"
        buffer_append_str(buf_58,((char*)(right_value96=xsprintf("enum { ",type_name_56))));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 52 "16enum.c"
        buffer_append_str(buf_58,((char*)(right_value97=xsprintf("enum %s { ",type_name_56))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 55 "16enum.c"
    i_59=0;
    # 56 "16enum.c"
    n_60=0;
    # 100 "16enum.c"
    for(    o2_saved_61=(elements_57),it_64=list$1tuple2$2charphsNodephph_begin((o2_saved_61));    !list$1tuple2$2charphsNodephph_end((o2_saved_61));    it_64=list$1tuple2$2charphsNodephph_next((o2_saved_61))    ){
        # 58 "16enum.c"
        multiple_assign_var1=it_64;
        name_67=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        value_68=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        # 64 "16enum.c"
        # 60 "16enum.c"
        if(_if_conditional73=map$2charphsVarph_at(info->gv_table->mVars,((char*)(right_value98=__builtin_string(name_67))),((void*)0))!=((void*)0),        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional73) {
            # 61 "16enum.c"
            self->mOutput=(_Bool)0;
        }
        # 97 "16enum.c"
        # 64 "16enum.c"
        if(_if_conditional74=value_68==((void*)0),        _if_conditional74) {
            # 65 "16enum.c"
            buffer_append_str(buf_58,name_67);
            # 66 "16enum.c"
            buffer_append_str(buf_58,"\n");
            # 72 "16enum.c"
            # 68 "16enum.c"
            if(_if_conditional76=i_59!=list$1tuple2$2charphsNodephph_length(elements_57)-1,            _if_conditional76) {
                # 69 "16enum.c"
                buffer_append_str(buf_58,",");
            }
            # 72 "16enum.c"
            c_value_77=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("%d",n_60))));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 74 "16enum.c"
            add_variable_to_global_table_with_int_value(name_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 74, "sType")))),"int",(_Bool)0,info)))),c_value_77,info);
            come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            c_value_77 = come_decrement_ref_count2(c_value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 81 "16enum.c"
            # 77 "16enum.c"
            if(_if_conditional77=!node_compile(value_68,info),            _if_conditional77) {
                # 78 "16enum.c"
                __result76__ = (_Bool)0;
                name_67 = come_decrement_ref_count2(name_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(value_68) { value_68 = come_decrement_ref_count2(value_68, ((struct sNode*)value_68)->finalize, ((struct sNode*)value_68)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_56 = come_decrement_ref_count2(type_name_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,buf_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result76__;
            }
            # 81 "16enum.c"
            right_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 82 "16enum.c"
            dec_stack_ptr(1,info);
            # 84 "16enum.c"
            add_variable_to_global_table_with_int_value(name_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 84, "sType")))),"int",(_Bool)0,info)))),right_value_78->c_value,info);
            come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 86 "16enum.c"
            buffer_append_str(buf_58,((char*)(right_value105=xsprintf("%s=%s",name_67,right_value_78->c_value))));
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 92 "16enum.c"
            # 88 "16enum.c"
            if(_if_conditional80=i_59!=list$1tuple2$2charphsNodephph_length(elements_57)-1,            _if_conditional80) {
                # 89 "16enum.c"
                buffer_append_str(buf_58,",");
            }
            # 92 "16enum.c"
            buffer_append_str(buf_58,"\n");
            # 94 "16enum.c"
            n_60=atoi(right_value_78->c_value);
            come_call_finalizer2(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 97 "16enum.c"
        i_59++;
        # 98 "16enum.c"
        n_60++;
        name_67 = come_decrement_ref_count2(name_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_68) { value_68 = come_decrement_ref_count2(value_68, ((struct sNode*)value_68)->finalize, ((struct sNode*)value_68)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 100 "16enum.c"
    buffer_append_str(buf_58,((char*)(right_value106=xsprintf("};\n",type_name_56))));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 110 "16enum.c"
    # 102 "16enum.c"
    if(_if_conditional81=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),    _if_conditional81) {
    }
    else {
        # 108 "16enum.c"
        # 105 "16enum.c"
        if(self->mOutput) {
            # 106 "16enum.c"
            add_come_code_at_source_head(info,"%s",((char*)(right_value107=buffer_to_string(buf_58))));
            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 110 "16enum.c"
    __result77__ = (_Bool)1;
    type_name_56 = come_decrement_ref_count2(type_name_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result77__;
    type_name_56 = come_decrement_ref_count2(type_name_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct tuple2$2charphsNodeph* result_62;
struct tuple2$2charphsNodeph* __result63__;
_Bool _if_conditional45;
struct tuple2$2charphsNodeph* __result64__;
struct tuple2$2charphsNodeph* result_63;
struct tuple2$2charphsNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_63, 0, sizeof(struct tuple2$2charphsNodeph*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional44=self==((void*)0),        _if_conditional44) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_62,0,sizeof(struct tuple2$2charphsNodeph*));
            # 288 "./neo-c.h"
            __result63__ = __result_obj__ = result_62;
            return __result63__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result64__ = __result_obj__ = self->it->item;
            return __result64__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_63,0,sizeof(struct tuple2$2charphsNodeph*));
        # 298 "./neo-c.h"
        __result65__ = __result_obj__ = result_63;
        return __result65__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result66__ = self==((void*)0)||self->it==((void*)0);
        return __result66__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional46;
struct tuple2$2charphsNodeph* result_65;
struct tuple2$2charphsNodeph* __result67__;
_Bool _if_conditional47;
struct tuple2$2charphsNodeph* __result68__;
struct tuple2$2charphsNodeph* result_66;
struct tuple2$2charphsNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_66, 0, sizeof(struct tuple2$2charphsNodeph*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional46=self==((void*)0)||self->it==((void*)0),        _if_conditional46) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_65,0,sizeof(struct tuple2$2charphsNodeph*));
            # 305 "./neo-c.h"
            __result67__ = __result_obj__ = result_65;
            return __result67__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result68__ = __result_obj__ = self->it->item;
            return __result68__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_66,0,sizeof(struct tuple2$2charphsNodeph*));
        # 316 "./neo-c.h"
        __result69__ = __result_obj__ = result_66;
        return __result69__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_69;
unsigned int it_70;
_Bool _while_condtional9;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sVar* __result70__;
_Bool _if_conditional71;
_Bool _if_conditional72;
struct sVar* __result71__;
struct sVar* __result72__;
struct sVar* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_69, 0, sizeof(unsigned int));
memset(&it_70, 0, sizeof(unsigned int));
            # 1226 "./neo-c.h"
            hash_69=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./neo-c.h"
            it_70=hash_69;
            # 1251 "./neo-c.h"
            while(_while_condtional9=(_Bool)1,            _while_condtional9) {
                # 1249 "./neo-c.h"
                # 1230 "./neo-c.h"
                if(_if_conditional48=self->item_existance[it_70],                _if_conditional48) {
                    # 1237 "./neo-c.h"
                    # 1232 "./neo-c.h"
                    if(_if_conditional49=string_equals(self->keys[it_70],key),                    _if_conditional49) {
                        # 1234 "./neo-c.h"
                        __result70__ = __result_obj__ = self->items[it_70];
                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result70__;
                    }
                    # 1237 "./neo-c.h"
                    it_70++;
                    # 1245 "./neo-c.h"
                    # 1239 "./neo-c.h"
                    if(_if_conditional71=it_70>=self->size,                    _if_conditional71) {
                        # 1240 "./neo-c.h"
                        it_70=0;
                    }
                    else {
                        # 1245 "./neo-c.h"
                        # 1242 "./neo-c.h"
                        if(_if_conditional72=it_70==hash_69,                        _if_conditional72) {
                            # 1243 "./neo-c.h"
                            __result71__ = __result_obj__ = default_value;
                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result71__;
                        }
                    }
                }
                else {
                    # 1247 "./neo-c.h"
                    __result72__ = __result_obj__ = default_value;
                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                }
            }
            # 1251 "./neo-c.h"
            __result73__ = __result_obj__ = default_value;
            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result73__;
            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sVar_finalize"
                            # 0 "sVar_finalize"
                            if(_if_conditional50=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional50) {
                                # 0 "sVar_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional51=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional51) {
                                # 1 "sVar_finalize"
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional52=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional52) {
                                # 2 "sVar_finalize"
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional70=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional70) {
                                # 3 "sVar_finalize"
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional53;
_Bool _if_conditional55;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sType_finalize"
                                    # 0 "sType_finalize"
                                    if(_if_conditional53=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional53) {
                                        # 0 "sType_finalize"
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sType_finalize"
                                    # 1 "sType_finalize"
                                    if(_if_conditional55=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional55) {
                                        # 1 "sType_finalize"
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sType_finalize"
                                    # 2 "sType_finalize"
                                    if(_if_conditional57=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional57) {
                                        # 2 "sType_finalize"
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sType_finalize"
                                    # 3 "sType_finalize"
                                    if(_if_conditional58=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional58) {
                                        # 3 "sType_finalize"
                                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 5 "sType_finalize"
                                    # 4 "sType_finalize"
                                    if(_if_conditional59=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional59) {
                                        # 4 "sType_finalize"
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 6 "sType_finalize"
                                    # 5 "sType_finalize"
                                    if(_if_conditional60=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional60) {
                                        # 5 "sType_finalize"
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sType_finalize"
                                    # 6 "sType_finalize"
                                    if(_if_conditional62=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional62) {
                                        # 6 "sType_finalize"
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 8 "sType_finalize"
                                    # 7 "sType_finalize"
                                    if(_if_conditional63=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional63) {
                                        # 7 "sType_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 9 "sType_finalize"
                                    # 8 "sType_finalize"
                                    if(_if_conditional65=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional65) {
                                        # 8 "sType_finalize"
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 10 "sType_finalize"
                                    # 9 "sType_finalize"
                                    if(_if_conditional66=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional66) {
                                        # 9 "sType_finalize"
                                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 11 "sType_finalize"
                                    # 10 "sType_finalize"
                                    if(_if_conditional67=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional67) {
                                        # 10 "sType_finalize"
                                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 12 "sType_finalize"
                                    # 11 "sType_finalize"
                                    if(_if_conditional68=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional68) {
                                        # 11 "sType_finalize"
                                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 13 "sType_finalize"
                                    # 12 "sType_finalize"
                                    if(_if_conditional69=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional69) {
                                        # 12 "sType_finalize"
                                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_71;
_Bool _while_condtional10;
struct list_item$1sTypeph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sTypeph*));
                                            # 123 "./neo-c.h"
                                            it_71=self->head;
                                            # 129 "./neo-c.h"
                                            while(_while_condtional10=it_71!=((void*)0),                                            _while_condtional10) {
                                                # 125 "./neo-c.h"
                                                prev_it_72=it_71;
                                                # 126 "./neo-c.h"
                                                it_71=it_71->next;
                                                # 127 "./neo-c.h"
                                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1sTypephp_finalize"
                                                    # 0 "list_item$1sTypephp_finalize"
                                                    if(_if_conditional54=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional54) {
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional56;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "tuple1$1sTypephp_finalize"
                                            # 0 "tuple1$1sTypephp_finalize"
                                            if(_if_conditional56=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional56) {
                                                # 0 "tuple1$1sTypephp_finalize"
                                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional11;
struct list_item$1sNodeph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sNodeph*));
                                            # 123 "./neo-c.h"
                                            it_73=self->head;
                                            # 129 "./neo-c.h"
                                            while(_while_condtional11=it_73!=((void*)0),                                            _while_condtional11) {
                                                # 125 "./neo-c.h"
                                                prev_it_74=it_73;
                                                # 126 "./neo-c.h"
                                                it_73=it_73->next;
                                                # 127 "./neo-c.h"
                                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1sNodephp_finalize"
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(_if_conditional61=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional61) {
                                                        # 0 "list_item$1sNodephp_finalize"
                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_75;
_Bool _while_condtional12;
struct list_item$1charph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                                            # 123 "./neo-c.h"
                                            it_75=self->head;
                                            # 129 "./neo-c.h"
                                            while(_while_condtional12=it_75!=((void*)0),                                            _while_condtional12) {
                                                # 125 "./neo-c.h"
                                                prev_it_76=it_75;
                                                # 126 "./neo-c.h"
                                                it_75=it_75->next;
                                                # 127 "./neo-c.h"
                                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1charphp_finalize"
                                                    # 0 "list_item$1charphp_finalize"
                                                    if(_if_conditional64=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional64) {
                                                        # 0 "list_item$1charphp_finalize"
                                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional75;
int __result74__;
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./neo-c.h"
                # 364 "./neo-c.h"
                if(_if_conditional75=self==((void*)0),                _if_conditional75) {
                    # 365 "./neo-c.h"
                    __result74__ = 0;
                    return __result74__;
                }
                # 367 "./neo-c.h"
                __result75__ = self->len;
                return __result75__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional78;
_Bool _if_conditional79;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "CVALUE_finalize"
                # 0 "CVALUE_finalize"
                if(_if_conditional78=self!=((void*)0)&&self->c_value!=((void*)0),                _if_conditional78) {
                    # 0 "CVALUE_finalize"
                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "CVALUE_finalize"
                # 1 "CVALUE_finalize"
                if(_if_conditional79=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional79) {
                    # 1 "CVALUE_finalize"
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    # 115 "16enum.c"
    __result78__ = self->sline;
    return __result78__;
}

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value108;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
    # 120 "16enum.c"
    __result79__ = __result_obj__ = ((char*)(right_value108=__builtin_string(self->sname)));
    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_79;
_Bool output_80;
_Bool _if_conditional94;
void* right_value109;
void* right_value110;
struct sClass* __dec_obj21;
void* right_value169;
struct sClass* __dec_obj56;
void* right_value170;
void* right_value171;
struct list$1tuple2$2charphsNodephph* elements_153;
_Bool _while_condtional26;
void* right_value172;
char* element_name_154;
_Bool _if_conditional233;
_Bool no_comma_155;
void* right_value173;
struct sNode* element_value_156;
_Bool _if_conditional234;
void* right_value177;
void* right_value178;
_Bool _if_conditional237;
void* right_value179;
void* right_value180;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value181;
void* right_value182;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value188;
struct sNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_79, 0, sizeof(struct sClass*));
memset(&output_80, 0, sizeof(_Bool));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&elements_153, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value172 = (void*)0;
memset(&element_name_154, 0, sizeof(char*));
memset(&no_comma_155, 0, sizeof(_Bool));
right_value173 = (void*)0;
memset(&element_value_156, 0, sizeof(struct sNode*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value188 = (void*)0;
    # 125 "16enum.c"
    # 126 "16enum.c"
    # 137 "16enum.c"
    # 127 "16enum.c"
    if(_if_conditional94=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional94) {
        # 128 "16enum.c"
        output_80=(_Bool)1;
        # 129 "16enum.c"
        __dec_obj21=klass_79;
        klass_79=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value110=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value109=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 129, "sClass")))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 130 "16enum.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_79));
    }
    else {
        # 133 "16enum.c"
        output_80=(_Bool)0;
        # 134 "16enum.c"
        __dec_obj56=klass_79;
        klass_79=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value169=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer2(sClass_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 137 "16enum.c"
    expected_next_character(123,info);
    # 139 "16enum.c"
    elements_153=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value171=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value170=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 139, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 184 "16enum.c"
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        # 142 "16enum.c"
        parse_sharp_v5(info);
        # 144 "16enum.c"
        element_name_154=(char*)come_increment_ref_count(((char*)(right_value172=parse_word(info))));
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 146 "16enum.c"
        parse_sharp_v5(info);
        # 168 "16enum.c"
        # 148 "16enum.c"
        if(_if_conditional233=*info->p==61,        _if_conditional233) {
            # 149 "16enum.c"
            info->p++;
            # 150 "16enum.c"
            skip_spaces_and_lf(info);
            # 152 "16enum.c"
            no_comma_155=info->no_comma;
            # 153 "16enum.c"
            info->no_comma=(_Bool)1;
            # 154 "16enum.c"
            element_value_156=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=expression_v13(info))));
            if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 156 "16enum.c"
            info->no_comma=no_comma_155;
            # 161 "16enum.c"
            # 158 "16enum.c"
            if(_if_conditional234=!info->no_output_err,            _if_conditional234) {
                # 159 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_153,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value178=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value177=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 159, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_154),(struct sNode*)come_increment_ref_count(element_value_156))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(element_value_156) { element_value_156 = come_decrement_ref_count2(element_value_156, ((struct sNode*)element_value_156)->finalize, ((struct sNode*)element_value_156)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 166 "16enum.c"
            # 163 "16enum.c"
            if(_if_conditional237=!info->no_output_err,            _if_conditional237) {
                # 164 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_153,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value180=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value179=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 164, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_154),((void*)0))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
        }
        # 168 "16enum.c"
        parse_sharp_v5(info);
        # 175 "16enum.c"
        # 170 "16enum.c"
        if(_if_conditional238=*info->p==44,        _if_conditional238) {
            # 171 "16enum.c"
            info->p++;
            # 172 "16enum.c"
            skip_spaces_and_lf(info);
        }
        # 175 "16enum.c"
        parse_sharp_v5(info);
        # 182 "16enum.c"
        # 177 "16enum.c"
        if(_if_conditional239=*info->p==125,        _if_conditional239) {
            # 178 "16enum.c"
            info->p++;
            # 179 "16enum.c"
            skip_spaces_and_lf(info);
            # 180 "16enum.c"
            element_name_154 = come_decrement_ref_count2(element_name_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        element_name_154 = come_decrement_ref_count2(element_name_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 184 "16enum.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 184, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value182=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value181=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 184, "sEnumNode")))),(char*)come_increment_ref_count(type_name),elements_153,output_80,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sEnumNode_sline;
    _inf_value1->sname=(void*)sEnumNode_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result136__ = __result_obj__ = ((struct sNode*)(right_value188=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sEnumNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sEnumNode_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result136__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_81;
unsigned int it_82;
_Bool _while_condtional13;
_Bool _if_conditional83;
_Bool _if_conditional84;
struct sClass* __result80__;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct sClass* __result81__;
struct sClass* __result82__;
struct sClass* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_81, 0, sizeof(unsigned int));
memset(&it_82, 0, sizeof(unsigned int));
        # 1226 "./neo-c.h"
        hash_81=string_get_hash_key(((char*)key))%self->size;
        # 1227 "./neo-c.h"
        it_82=hash_81;
        # 1251 "./neo-c.h"
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            # 1249 "./neo-c.h"
            # 1230 "./neo-c.h"
            if(_if_conditional83=self->item_existance[it_82],            _if_conditional83) {
                # 1237 "./neo-c.h"
                # 1232 "./neo-c.h"
                if(_if_conditional84=string_equals(self->keys[it_82],key),                _if_conditional84) {
                    # 1234 "./neo-c.h"
                    __result80__ = __result_obj__ = self->items[it_82];
                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                }
                # 1237 "./neo-c.h"
                it_82++;
                # 1245 "./neo-c.h"
                # 1239 "./neo-c.h"
                if(_if_conditional92=it_82>=self->size,                _if_conditional92) {
                    # 1240 "./neo-c.h"
                    it_82=0;
                }
                else {
                    # 1245 "./neo-c.h"
                    # 1242 "./neo-c.h"
                    if(_if_conditional93=it_82==hash_81,                    _if_conditional93) {
                        # 1243 "./neo-c.h"
                        __result81__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                    }
                }
            }
            else {
                # 1247 "./neo-c.h"
                __result82__ = __result_obj__ = default_value;
                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result82__;
            }
        }
        # 1251 "./neo-c.h"
        __result83__ = __result_obj__ = default_value;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result83__;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional90;
_Bool _if_conditional91;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional85=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional85) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional86=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional86) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional90=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional90) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sClass_finalize"
                        # 3 "sClass_finalize"
                        if(_if_conditional91=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional91) {
                            # 3 "sClass_finalize"
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_83;
_Bool _while_condtional14;
struct list_item$1tuple2$2charphsTypephph* prev_it_84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_83, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_84, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./neo-c.h"
                                it_83=self->head;
                                # 129 "./neo-c.h"
                                while(_while_condtional14=it_83!=((void*)0),                                _while_condtional14) {
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
_Bool _if_conditional87;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional87=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional87) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional88;
_Bool _if_conditional89;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional88=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional88) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional89=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional89) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional95;
unsigned int hash_100;
unsigned int it_101;
_Bool _while_condtional16;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool same_key_exist_118;
char* it2_121;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct map$2charphsClassph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_100, 0, sizeof(unsigned int));
memset(&it_101, 0, sizeof(unsigned int));
memset(&same_key_exist_118, 0, sizeof(_Bool));
memset(&it2_121, 0, sizeof(char*));
            # 1393 "./neo-c.h"
            # 1390 "./neo-c.h"
            if(_if_conditional95=self->len*10>=self->size,            _if_conditional95) {
                # 1391 "./neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./neo-c.h"
            hash_100=string_get_hash_key(key)%self->size;
            # 1394 "./neo-c.h"
            it_101=hash_100;
            # 1452 "./neo-c.h"
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                # 1450 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional103=self->item_existance[it_101],                _if_conditional103) {
                    # 1420 "./neo-c.h"
                    # 1399 "./neo-c.h"
                    if(_if_conditional104=string_equals(self->keys[it_101],key),                    _if_conditional104) {
                        # 1410 "./neo-c.h"
                        # 1401 "./neo-c.h"
                        if(_if_conditional105=1,                        _if_conditional105) {
                            # 1402 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_101]);
                            # 1403 "./neo-c.h"
                            self->keys[it_101] = come_decrement_ref_count2(self->keys[it_101], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./neo-c.h"
                            self->keys[it_101]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_101]);
                            # 1408 "./neo-c.h"
                            self->keys[it_101]=key;
                        }
                        # 1417 "./neo-c.h"
                        # 1410 "./neo-c.h"
                        if(_if_conditional125=1,                        _if_conditional125) {
                            # 1411 "./neo-c.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_101], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./neo-c.h"
                            self->items[it_101]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./neo-c.h"
                            self->items[it_101]=item;
                        }
                        # 1417 "./neo-c.h"
                        break;
                    }
                    # 1420 "./neo-c.h"
                    it_101++;
                    # 1430 "./neo-c.h"
                    # 1422 "./neo-c.h"
                    if(_if_conditional126=it_101>=self->size,                    _if_conditional126) {
                        # 1423 "./neo-c.h"
                        it_101=0;
                    }
                    else {
                        # 1430 "./neo-c.h"
                        # 1425 "./neo-c.h"
                        if(_if_conditional127=it_101==hash_100,                        _if_conditional127) {
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
                    self->item_existance[it_101]=(_Bool)1;
                    # 1439 "./neo-c.h"
                    # 1433 "./neo-c.h"
                    if(_if_conditional128=1,                    _if_conditional128) {
                        # 1434 "./neo-c.h"
                        self->keys[it_101]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./neo-c.h"
                        self->keys[it_101]=key;
                    }
                    # 1446 "./neo-c.h"
                    # 1439 "./neo-c.h"
                    if(_if_conditional129=1,                    _if_conditional129) {
                        # 1440 "./neo-c.h"
                        self->items[it_101]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./neo-c.h"
                        self->items[it_101]=item;
                    }
                    # 1446 "./neo-c.h"
                    self->len++;
                    # 1448 "./neo-c.h"
                    break;
                }
            }
            # 1452 "./neo-c.h"
            same_key_exist_118=(_Bool)0;
            # 1460 "./neo-c.h"
            for(            it2_121=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_121=list$1charp_next(self->key_list)            ){
                # 1458 "./neo-c.h"
                # 1455 "./neo-c.h"
                if(_if_conditional134=string_equals(it2_121,key),                _if_conditional134) {
                    # 1456 "./neo-c.h"
                    same_key_exist_118=(_Bool)1;
                }
            }
            # 1464 "./neo-c.h"
            # 1460 "./neo-c.h"
            if(_if_conditional135=!same_key_exist_118,            _if_conditional135) {
                # 1461 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1464 "./neo-c.h"
            __result103__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result103__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_85;
void* right_value111;
char** keys_86;
void* right_value112;
struct sClass** items_87;
void* right_value113;
_Bool* item_existance_88;
int len_89;
char* it_92;
struct sClass* default_value_95;
struct sClass* it2_96;
unsigned int hash_97;
int n_98;
_Bool _while_condtional15;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
struct sClass* default_value_99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_85, 0, sizeof(int));
right_value111 = (void*)0;
memset(&keys_86, 0, sizeof(char**));
right_value112 = (void*)0;
memset(&items_87, 0, sizeof(struct sClass**));
right_value113 = (void*)0;
memset(&item_existance_88, 0, sizeof(_Bool*));
memset(&len_89, 0, sizeof(int));
memset(&it_92, 0, sizeof(char*));
memset(&default_value_95, 0, sizeof(struct sClass*));
memset(&it2_96, 0, sizeof(struct sClass*));
memset(&hash_97, 0, sizeof(unsigned int));
memset(&n_98, 0, sizeof(int));
memset(&default_value_99, 0, sizeof(struct sClass*));
                    # 1337 "./neo-c.h"
                    size_85=self->size*10;
                    # 1338 "./neo-c.h"
                    keys_86=(char**)come_increment_ref_count(((char**)(right_value111=(char**)come_calloc(1, sizeof(char*)*(1*(size_85)), "./neo-c.h", 1338, "char*%"))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./neo-c.h"
                    items_87=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value112=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_85)), "./neo-c.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    item_existance_88=(_Bool*)come_increment_ref_count(((_Bool*)(right_value113=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_85)), "./neo-c.h", 1340, "bool"))));
                    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./neo-c.h"
                    len_89=0;
                    # 1377 "./neo-c.h"
                    for(                    it_92=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_92=map$2charphsClassph_next(self)                    ){
                        # 1345 "./neo-c.h"
                        # 1346 "./neo-c.h"
                        memset(&default_value_95,0,sizeof(struct sClass*));
                        # 1347 "./neo-c.h"
                        it2_96=map$2charphsClassph_at(self,it_92,default_value_95);
                        # 1348 "./neo-c.h"
                        hash_97=string_get_hash_key(it_92)%size_85;
                        # 1349 "./neo-c.h"
                        n_98=hash_97;
                        # 1375 "./neo-c.h"
                        while(_while_condtional15=(_Bool)1,                        _while_condtional15) {
                            # 1374 "./neo-c.h"
                            # 1352 "./neo-c.h"
                            if(_if_conditional100=item_existance_88[n_98],                            _if_conditional100) {
                                # 1354 "./neo-c.h"
                                n_98++;
                                # 1364 "./neo-c.h"
                                # 1356 "./neo-c.h"
                                if(_if_conditional101=n_98>=size_85,                                _if_conditional101) {
                                    # 1357 "./neo-c.h"
                                    n_98=0;
                                }
                                else {
                                    # 1364 "./neo-c.h"
                                    # 1359 "./neo-c.h"
                                    if(_if_conditional102=n_98==hash_97,                                    _if_conditional102) {
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
                                item_existance_88[n_98]=(_Bool)1;
                                # 1367 "./neo-c.h"
                                keys_86[n_98]=it_92;
                                # 1368 "./neo-c.h"
                                # 1369 "./neo-c.h"
                                items_87[n_98]=map$2charphsClassph_at(self,it_92,default_value_99);
                                # 1371 "./neo-c.h"
                                len_89++;
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
                    self->keys=keys_86;
                    # 1382 "./neo-c.h"
                    self->items=items_87;
                    # 1383 "./neo-c.h"
                    self->item_existance=item_existance_88;
                    # 1385 "./neo-c.h"
                    self->size=size_85;
                    # 1386 "./neo-c.h"
                    self->len=len_89;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional96;
char* result_90;
char* __result84__;
_Bool _if_conditional97;
char* __result85__;
char* result_91;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_90, 0, sizeof(char*));
memset(&result_91, 0, sizeof(char*));
                        # 1304 "./neo-c.h"
                        # 1299 "./neo-c.h"
                        if(_if_conditional96=self==((void*)0),                        _if_conditional96) {
                            # 1300 "./neo-c.h"
                            # 1301 "./neo-c.h"
                            memset(&result_90,0,sizeof(char*));
                            # 1302 "./neo-c.h"
                            __result84__ = __result_obj__ = result_90;
                            return __result84__;
                        }
                        # 1304 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./neo-c.h"
                        # 1306 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1307 "./neo-c.h"
                            __result85__ = __result_obj__ = self->key_list->it->item;
                            return __result85__;
                        }
                        # 1310 "./neo-c.h"
                        # 1311 "./neo-c.h"
                        memset(&result_91,0,sizeof(char*));
                        # 1312 "./neo-c.h"
                        __result86__ = __result_obj__ = result_91;
                        return __result86__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./neo-c.h"
                        __result87__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result87__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional98;
char* result_93;
char* __result88__;
_Bool _if_conditional99;
char* __result89__;
char* result_94;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(char*));
memset(&result_94, 0, sizeof(char*));
                        # 1321 "./neo-c.h"
                        # 1316 "./neo-c.h"
                        if(_if_conditional98=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional98) {
                            # 1317 "./neo-c.h"
                            # 1318 "./neo-c.h"
                            memset(&result_93,0,sizeof(char*));
                            # 1319 "./neo-c.h"
                            __result88__ = __result_obj__ = result_93;
                            return __result88__;
                        }
                        # 1321 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./neo-c.h"
                        # 1323 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1324 "./neo-c.h"
                            __result89__ = __result_obj__ = self->key_list->it->item;
                            return __result89__;
                        }
                        # 1327 "./neo-c.h"
                        # 1328 "./neo-c.h"
                        memset(&result_94,0,sizeof(char*));
                        # 1329 "./neo-c.h"
                        __result90__ = __result_obj__ = result_94;
                        return __result90__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_102;
struct list_item$1charp* it_103;
_Bool _while_condtional17;
_Bool _if_conditional106;
struct list$1charp* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_102, 0, sizeof(int));
memset(&it_103, 0, sizeof(struct list_item$1charp*));
                                # 448 "./neo-c.h"
                                it2_102=0;
                                # 449 "./neo-c.h"
                                it_103=self->head;
                                # 460 "./neo-c.h"
                                while(_while_condtional17=it_103!=((void*)0),                                _while_condtional17) {
                                    # 455 "./neo-c.h"
                                    # 451 "./neo-c.h"
                                    if(_if_conditional106=string_equals(it_103->item,item),                                    _if_conditional106) {
                                        # 452 "./neo-c.h"
                                        list$1charp_delete(self,it2_102,it2_102+1);
                                        # 453 "./neo-c.h"
                                        break;
                                    }
                                    # 455 "./neo-c.h"
                                    it2_102++;
                                    # 457 "./neo-c.h"
                                    it_103=it_103->next;
                                }
                                # 460 "./neo-c.h"
                                __result94__ = __result_obj__ = self;
                                return __result94__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
int tmp_104;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct list$1charp* __result91__;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct list_item$1charp* it_107;
int i_108;
_Bool _while_condtional19;
_Bool _if_conditional115;
struct list_item$1charp* prev_it_109;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct list_item$1charp* it_110;
int i_111;
_Bool _while_condtional20;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct list_item$1charp* prev_it_112;
struct list_item$1charp* it_113;
struct list_item$1charp* head_prev_it_114;
struct list_item$1charp* tail_it_115;
int i_116;
_Bool _while_condtional21;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct list_item$1charp* prev_it_117;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list$1charp* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_104, 0, sizeof(int));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&i_108, 0, sizeof(int));
memset(&prev_it_109, 0, sizeof(struct list_item$1charp*));
memset(&it_110, 0, sizeof(struct list_item$1charp*));
memset(&i_111, 0, sizeof(int));
memset(&prev_it_112, 0, sizeof(struct list_item$1charp*));
memset(&it_113, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_114, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_115, 0, sizeof(struct list_item$1charp*));
memset(&i_116, 0, sizeof(int));
memset(&prev_it_117, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional107=head<0,                                            _if_conditional107) {
                                                # 465 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 471 "./neo-c.h"
                                            # 467 "./neo-c.h"
                                            if(_if_conditional108=tail<0,                                            _if_conditional108) {
                                                # 468 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./neo-c.h"
                                            # 471 "./neo-c.h"
                                            if(_if_conditional109=head>tail,                                            _if_conditional109) {
                                                # 472 "./neo-c.h"
                                                tmp_104=tail;
                                                # 473 "./neo-c.h"
                                                tail=head;
                                                # 474 "./neo-c.h"
                                                head=tmp_104;
                                            }
                                            # 481 "./neo-c.h"
                                            # 477 "./neo-c.h"
                                            if(_if_conditional110=head<0,                                            _if_conditional110) {
                                                # 478 "./neo-c.h"
                                                head=0;
                                            }
                                            # 485 "./neo-c.h"
                                            # 481 "./neo-c.h"
                                            if(_if_conditional111=tail>self->len,                                            _if_conditional111) {
                                                # 482 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 489 "./neo-c.h"
                                            # 485 "./neo-c.h"
                                            if(_if_conditional112=head==tail,                                            _if_conditional112) {
                                                # 486 "./neo-c.h"
                                                __result91__ = __result_obj__ = self;
                                                return __result91__;
                                            }
                                            # 584 "./neo-c.h"
                                            # 489 "./neo-c.h"
                                            if(_if_conditional113=head==0&&tail==self->len,                                            _if_conditional113) {
                                                # 491 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 493 "./neo-c.h"
                                                if(_if_conditional114=head==0,                                                _if_conditional114) {
                                                    # 494 "./neo-c.h"
                                                    it_107=self->head;
                                                    # 495 "./neo-c.h"
                                                    i_108=0;
                                                    # 517 "./neo-c.h"
                                                    while(_while_condtional19=it_107!=((void*)0),                                                    _while_condtional19) {
                                                        # 516 "./neo-c.h"
                                                        # 497 "./neo-c.h"
                                                        if(_if_conditional115=i_108<tail,                                                        _if_conditional115) {
                                                            # 498 "./neo-c.h"
                                                            prev_it_109=it_107;
                                                            # 500 "./neo-c.h"
                                                            it_107=it_107->next;
                                                            # 501 "./neo-c.h"
                                                            i_108++;
                                                            # 503 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./neo-c.h"
                                                            # 507 "./neo-c.h"
                                                            if(_if_conditional116=i_108==tail,                                                            _if_conditional116) {
                                                                # 508 "./neo-c.h"
                                                                self->head=it_107;
                                                                # 509 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./neo-c.h"
                                                                it_107=it_107->next;
                                                                # 514 "./neo-c.h"
                                                                i_108++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./neo-c.h"
                                                    # 518 "./neo-c.h"
                                                    if(_if_conditional117=tail==self->len,                                                    _if_conditional117) {
                                                        # 519 "./neo-c.h"
                                                        it_110=self->head;
                                                        # 520 "./neo-c.h"
                                                        i_111=0;
                                                        # 542 "./neo-c.h"
                                                        while(_while_condtional20=it_110!=((void*)0),                                                        _while_condtional20) {
                                                            # 527 "./neo-c.h"
                                                            # 522 "./neo-c.h"
                                                            if(_if_conditional118=i_111==head,                                                            _if_conditional118) {
                                                                # 523 "./neo-c.h"
                                                                self->tail=it_110->prev;
                                                                # 524 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./neo-c.h"
                                                            # 527 "./neo-c.h"
                                                            if(_if_conditional119=i_111>=head,                                                            _if_conditional119) {
                                                                # 528 "./neo-c.h"
                                                                prev_it_112=it_110;
                                                                # 530 "./neo-c.h"
                                                                it_110=it_110->next;
                                                                # 531 "./neo-c.h"
                                                                i_111++;
                                                                # 533 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./neo-c.h"
                                                                it_110=it_110->next;
                                                                # 539 "./neo-c.h"
                                                                i_111++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./neo-c.h"
                                                        it_113=self->head;
                                                        # 546 "./neo-c.h"
                                                        head_prev_it_114=((void*)0);
                                                        # 547 "./neo-c.h"
                                                        tail_it_115=((void*)0);
                                                        # 550 "./neo-c.h"
                                                        i_116=0;
                                                        # 576 "./neo-c.h"
                                                        while(_while_condtional21=it_113!=((void*)0),                                                        _while_condtional21) {
                                                            # 555 "./neo-c.h"
                                                            # 552 "./neo-c.h"
                                                            if(_if_conditional120=i_116==head,                                                            _if_conditional120) {
                                                                # 553 "./neo-c.h"
                                                                head_prev_it_114=it_113->prev;
                                                            }
                                                            # 559 "./neo-c.h"
                                                            # 555 "./neo-c.h"
                                                            if(_if_conditional121=i_116==tail,                                                            _if_conditional121) {
                                                                # 556 "./neo-c.h"
                                                                tail_it_115=it_113;
                                                            }
                                                            # 574 "./neo-c.h"
                                                            # 559 "./neo-c.h"
                                                            if(_if_conditional122=i_116>=head&&i_116<tail,                                                            _if_conditional122) {
                                                                # 561 "./neo-c.h"
                                                                prev_it_117=it_113;
                                                                # 563 "./neo-c.h"
                                                                it_113=it_113->next;
                                                                # 564 "./neo-c.h"
                                                                i_116++;
                                                                # 566 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./neo-c.h"
                                                                it_113=it_113->next;
                                                                # 572 "./neo-c.h"
                                                                i_116++;
                                                            }
                                                        }
                                                        # 579 "./neo-c.h"
                                                        # 576 "./neo-c.h"
                                                        if(_if_conditional123=head_prev_it_114!=((void*)0),                                                        _if_conditional123) {
                                                            # 577 "./neo-c.h"
                                                            head_prev_it_114->next=tail_it_115;
                                                        }
                                                        # 582 "./neo-c.h"
                                                        # 579 "./neo-c.h"
                                                        if(_if_conditional124=tail_it_115!=((void*)0),                                                        _if_conditional124) {
                                                            # 580 "./neo-c.h"
                                                            tail_it_115->prev=head_prev_it_114;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./neo-c.h"
                                            __result93__ = __result_obj__ = self;
                                            return __result93__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_105;
_Bool _while_condtional18;
struct list_item$1charp* prev_it_106;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./neo-c.h"
                                                    it_105=self->head;
                                                    # 440 "./neo-c.h"
                                                    while(_while_condtional18=it_105!=((void*)0),                                                    _while_condtional18) {
                                                        # 435 "./neo-c.h"
                                                        prev_it_106=it_105;
                                                        # 436 "./neo-c.h"
                                                        it_105=it_105->next;
                                                        # 437 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 441 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./neo-c.h"
                                                    self->len=0;
                                                    # 445 "./neo-c.h"
                                                    __result92__ = __result_obj__ = self;
                                                    return __result92__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional130;
char* result_119;
char* __result95__;
_Bool _if_conditional131;
char* __result96__;
char* result_120;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_119, 0, sizeof(char*));
memset(&result_120, 0, sizeof(char*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional130=self==((void*)0),                _if_conditional130) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_119,0,sizeof(char*));
                    # 288 "./neo-c.h"
                    __result95__ = __result_obj__ = result_119;
                    return __result95__;
                }
                # 290 "./neo-c.h"
                self->it=self->head;
                # 296 "./neo-c.h"
                # 292 "./neo-c.h"
                if(self->it) {
                    # 293 "./neo-c.h"
                    __result96__ = __result_obj__ = self->it->item;
                    return __result96__;
                }
                # 296 "./neo-c.h"
                # 297 "./neo-c.h"
                memset(&result_120,0,sizeof(char*));
                # 298 "./neo-c.h"
                __result97__ = __result_obj__ = result_120;
                return __result97__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./neo-c.h"
                __result98__ = self==((void*)0)||self->it==((void*)0);
                return __result98__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional132;
char* result_122;
char* __result99__;
_Bool _if_conditional133;
char* __result100__;
char* result_123;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(char*));
memset(&result_123, 0, sizeof(char*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional132=self==((void*)0)||self->it==((void*)0),                _if_conditional132) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_122,0,sizeof(char*));
                    # 305 "./neo-c.h"
                    __result99__ = __result_obj__ = result_122;
                    return __result99__;
                }
                # 308 "./neo-c.h"
                self->it=self->it->next;
                # 314 "./neo-c.h"
                # 310 "./neo-c.h"
                if(self->it) {
                    # 311 "./neo-c.h"
                    __result100__ = __result_obj__ = self->it->item;
                    return __result100__;
                }
                # 314 "./neo-c.h"
                # 315 "./neo-c.h"
                memset(&result_123,0,sizeof(char*));
                # 316 "./neo-c.h"
                __result101__ = __result_obj__ = result_123;
                return __result101__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional136;
void* right_value114;
struct list_item$1charp* litem_124;
_Bool _if_conditional137;
void* right_value115;
struct list_item$1charp* litem_125;
void* right_value116;
struct list_item$1charp* litem_126;
struct list$1charp* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1charp*));
right_value115 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1charp*));
right_value116 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1charp*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional136=self->len==0,                    _if_conditional136) {
                        # 226 "./neo-c.h"
                        litem_124=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value114=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_124->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_124->next=((void*)0);
                        # 230 "./neo-c.h"
                        litem_124->item=item;
                        # 232 "./neo-c.h"
                        self->tail=litem_124;
                        # 233 "./neo-c.h"
                        self->head=litem_124;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional137=self->len==1,                        _if_conditional137) {
                            # 236 "./neo-c.h"
                            litem_125=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value115=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_125->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_125->next=((void*)0);
                            # 240 "./neo-c.h"
                            litem_125->item=item;
                            # 242 "./neo-c.h"
                            self->tail=litem_125;
                            # 243 "./neo-c.h"
                            self->head->next=litem_125;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_126=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value116=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_126->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_126->next=((void*)0);
                            # 250 "./neo-c.h"
                            litem_126->item=item;
                            # 252 "./neo-c.h"
                            self->tail->next=litem_126;
                            # 253 "./neo-c.h"
                            self->tail=litem_126;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result102__ = __result_obj__ = self;
                    return __result102__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional138;
struct sClass* __result104__;
void* right_value117;
struct sClass* result_127;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value118;
char* __dec_obj22;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value166;
struct list$1tuple2$2charphsTypephph* __dec_obj53;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value167;
char* __dec_obj54;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value168;
char* __dec_obj55;
struct sClass* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_127, 0, sizeof(struct sClass*));
right_value118 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
            # 3 "sClass_clone"
            # 2 "sClass_clone"
            if(_if_conditional138=self==(void*)0,            _if_conditional138) {
                # 2 "sClass_clone"
                __result104__ = __result_obj__ = (void*)0;
                return __result104__;
            }
            # 3 "sClass_clone"
            result_127=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value117=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer2(sClass_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sClass_clone"
            # 4 "sClass_clone"
            if(_if_conditional139=self!=((void*)0),            _if_conditional139) {
                # 4 "sClass_clone"
                result_127->mStruct=self->mStruct;
            }
            # 6 "sClass_clone"
            # 5 "sClass_clone"
            if(_if_conditional140=self!=((void*)0),            _if_conditional140) {
                # 5 "sClass_clone"
                result_127->mFloat=self->mFloat;
            }
            # 7 "sClass_clone"
            # 6 "sClass_clone"
            if(_if_conditional141=self!=((void*)0),            _if_conditional141) {
                # 6 "sClass_clone"
                result_127->mUnion=self->mUnion;
            }
            # 8 "sClass_clone"
            # 7 "sClass_clone"
            if(_if_conditional142=self!=((void*)0),            _if_conditional142) {
                # 7 "sClass_clone"
                result_127->mGenerics=self->mGenerics;
            }
            # 9 "sClass_clone"
            # 8 "sClass_clone"
            if(_if_conditional143=self!=((void*)0),            _if_conditional143) {
                # 8 "sClass_clone"
                result_127->mMethodGenerics=self->mMethodGenerics;
            }
            # 10 "sClass_clone"
            # 9 "sClass_clone"
            if(_if_conditional144=self!=((void*)0),            _if_conditional144) {
                # 9 "sClass_clone"
                result_127->mEnum=self->mEnum;
            }
            # 11 "sClass_clone"
            # 10 "sClass_clone"
            if(_if_conditional145=self!=((void*)0),            _if_conditional145) {
                # 10 "sClass_clone"
                result_127->mProtocol=self->mProtocol;
            }
            # 12 "sClass_clone"
            # 11 "sClass_clone"
            if(_if_conditional146=self!=((void*)0),            _if_conditional146) {
                # 11 "sClass_clone"
                result_127->mNumber=self->mNumber;
            }
            # 13 "sClass_clone"
            # 12 "sClass_clone"
            if(_if_conditional147=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional147) {
                # 12 "sClass_clone"
                __dec_obj22=result_127->mName;
                result_127->mName=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->mName))));
                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 14 "sClass_clone"
            # 13 "sClass_clone"
            if(_if_conditional148=self!=((void*)0),            _if_conditional148) {
                # 13 "sClass_clone"
                result_127->mGenericsNum=self->mGenericsNum;
            }
            # 15 "sClass_clone"
            # 14 "sClass_clone"
            if(_if_conditional149=self!=((void*)0),            _if_conditional149) {
                # 14 "sClass_clone"
                result_127->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            # 16 "sClass_clone"
            # 15 "sClass_clone"
            if(_if_conditional150=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional150) {
                # 15 "sClass_clone"
                __dec_obj53=result_127->mFields;
                result_127->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value166=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 17 "sClass_clone"
            # 16 "sClass_clone"
            if(_if_conditional228=self!=((void*)0),            _if_conditional228) {
                # 16 "sClass_clone"
                result_127->mOutputed=self->mOutputed;
            }
            # 18 "sClass_clone"
            # 17 "sClass_clone"
            if(_if_conditional229=self!=((void*)0),            _if_conditional229) {
                # 17 "sClass_clone"
                result_127->mOutputed2=self->mOutputed2;
            }
            # 19 "sClass_clone"
            # 18 "sClass_clone"
            if(_if_conditional230=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional230) {
                # 18 "sClass_clone"
                __dec_obj54=result_127->mDeclareSName;
                result_127->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value167=string_clone(self->mDeclareSName))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 20 "sClass_clone"
            # 19 "sClass_clone"
            if(_if_conditional231=self!=((void*)0),            _if_conditional231) {
                # 19 "sClass_clone"
                result_127->mNobodyStruct=self->mNobodyStruct;
            }
            # 21 "sClass_clone"
            # 20 "sClass_clone"
            if(_if_conditional232=self!=((void*)0)&&self->mParentClassName!=((void*)0),            _if_conditional232) {
                # 20 "sClass_clone"
                __dec_obj55=result_127->mParentClassName;
                result_127->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(self->mParentClassName))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 21 "sClass_clone"
            __result131__ = __result_obj__ = result_127;
            come_call_finalizer2(sClass_finalize,result_127, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result131__;
            come_call_finalizer2(sClass_finalize,result_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional151;
struct list$1tuple2$2charphsTypephph* __result105__;
void* right_value119;
void* right_value120;
struct list$1tuple2$2charphsTypephph* result_128;
struct list_item$1tuple2$2charphsTypephph* it_129;
_Bool _while_condtional22;
void* right_value165;
struct list$1tuple2$2charphsTypephph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&result_128, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value165 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional151=self==((void*)0),                    _if_conditional151) {
                        # 140 "./neo-c.h"
                        __result105__ = __result_obj__ = ((void*)0);
                        return __result105__;
                    }
                    # 142 "./neo-c.h"
                    result_128=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value120=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value119=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_129=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional22=it_129!=((void*)0),                    _while_condtional22) {
                        # 146 "./neo-c.h"
                        list$1tuple2$2charphsTypephph_add(result_128,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value165=tuple2$2charphsTypephp_clone(it_129->item)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_129=it_129->next;
                    }
                    # 151 "./neo-c.h"
                    __result130__ = __result_obj__ = result_128;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result130__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result106__ = __result_obj__ = self;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result106__;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional152;
void* right_value121;
struct list_item$1tuple2$2charphsTypephph* litem_130;
struct tuple2$2charphsTypeph* __dec_obj23;
_Bool _if_conditional155;
void* right_value122;
struct list_item$1tuple2$2charphsTypephph* litem_131;
struct tuple2$2charphsTypeph* __dec_obj24;
void* right_value123;
struct list_item$1tuple2$2charphsTypephph* litem_132;
struct tuple2$2charphsTypeph* __dec_obj25;
struct list$1tuple2$2charphsTypephph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value122 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value123 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional152=self->len==0,                            _if_conditional152) {
                                # 156 "./neo-c.h"
                                litem_130=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value121=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_130->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_130->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj23=litem_130->item;
                                litem_130->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_130;
                                # 163 "./neo-c.h"
                                self->head=litem_130;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional155=self->len==1,                                _if_conditional155) {
                                    # 166 "./neo-c.h"
                                    litem_131=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value122=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_131->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_131->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj24=litem_131->item;
                                    litem_131->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_131;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_131;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_132=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value123=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_132->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_132->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj25=litem_132->item;
                                    litem_132->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_132;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_132;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result107__ = __result_obj__ = self;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result107__;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional153;
_Bool _if_conditional154;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    # 0 "tuple2$2charphsTypeph_finalize"
                                    if(_if_conditional153=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional153) {
                                        # 0 "tuple2$2charphsTypeph_finalize"
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "tuple2$2charphsTypeph_finalize"
                                    # 1 "tuple2$2charphsTypeph_finalize"
                                    if(_if_conditional154=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional154) {
                                        # 1 "tuple2$2charphsTypeph_finalize"
                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional156;
struct tuple2$2charphsTypeph* __result108__;
void* right_value124;
struct tuple2$2charphsTypeph* result_133;
_Bool _if_conditional157;
void* right_value125;
char* __dec_obj26;
_Bool _if_conditional158;
void* right_value164;
struct sType* __dec_obj52;
struct tuple2$2charphsTypeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&result_133, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value125 = (void*)0;
right_value164 = (void*)0;
                            # 3 "tuple2$2charphsTypephp_clone"
                            # 2 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional156=self==(void*)0,                            _if_conditional156) {
                                # 2 "tuple2$2charphsTypephp_clone"
                                __result108__ = __result_obj__ = (void*)0;
                                return __result108__;
                            }
                            # 3 "tuple2$2charphsTypephp_clone"
                            result_133=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value124=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "tuple2$2charphsTypephp_clone"
                            # 4 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional157=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional157) {
                                # 4 "tuple2$2charphsTypephp_clone"
                                __dec_obj26=result_133->v1;
                                result_133->v1=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(self->v1))));
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            # 5 "tuple2$2charphsTypephp_clone"
                            if(_if_conditional158=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional158) {
                                # 5 "tuple2$2charphsTypephp_clone"
                                __dec_obj52=result_133->v2;
                                result_133->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(self->v2))));
                                come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            # 6 "tuple2$2charphsTypephp_clone"
                            __result129__ = __result_obj__ = result_133;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_133, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result129__;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional159;
struct sType* __result109__;
void* right_value126;
struct sType* result_134;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value133;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional165;
void* right_value136;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional169;
void* right_value139;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional172;
void* right_value140;
char* __dec_obj35;
_Bool _if_conditional173;
void* right_value141;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional174;
void* right_value148;
struct list$1sNodeph* __dec_obj40;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value149;
struct list$1sTypeph* __dec_obj41;
_Bool _if_conditional180;
void* right_value156;
struct list$1charph* __dec_obj45;
_Bool _if_conditional184;
void* right_value159;
struct tuple1$1sTypeph* __dec_obj47;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value160;
struct sNode* __dec_obj48;
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
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
void* right_value161;
struct sNode* __dec_obj49;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value162;
char* __dec_obj50;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value163;
char* __dec_obj51;
_Bool _if_conditional227;
struct sType* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&result_134, 0, sizeof(struct sType*));
right_value133 = (void*)0;
right_value136 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value156 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
                                    # 3 "sType_clone"
                                    # 2 "sType_clone"
                                    if(_if_conditional159=self==(void*)0,                                    _if_conditional159) {
                                        # 2 "sType_clone"
                                        __result109__ = __result_obj__ = (void*)0;
                                        return __result109__;
                                    }
                                    # 3 "sType_clone"
                                    result_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sType_clone"
                                    # 4 "sType_clone"
                                    if(_if_conditional160=self!=((void*)0),                                    _if_conditional160) {
                                        # 4 "sType_clone"
                                        result_134->mClass=self->mClass;
                                    }
                                    # 6 "sType_clone"
                                    # 5 "sType_clone"
                                    if(_if_conditional161=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                    _if_conditional161) {
                                        # 5 "sType_clone"
                                        __dec_obj30=result_134->mMultipleTypes;
                                        result_134->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value133=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sType_clone"
                                    # 6 "sType_clone"
                                    if(_if_conditional165=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional165) {
                                        # 6 "sType_clone"
                                        __dec_obj32=result_134->mNoSolvedGenericsType;
                                        result_134->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value136=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sType_clone"
                                    # 7 "sType_clone"
                                    if(_if_conditional169=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional169) {
                                        # 7 "sType_clone"
                                        __dec_obj34=result_134->mOriginalLoadVarType;
                                        result_134->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value139=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sType_clone"
                                    # 8 "sType_clone"
                                    if(_if_conditional172=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional172) {
                                        # 8 "sType_clone"
                                        __dec_obj35=result_134->mGenericsName;
                                        result_134->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value140=string_clone(self->mGenericsName))));
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 10 "sType_clone"
                                    # 9 "sType_clone"
                                    if(_if_conditional173=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional173) {
                                        # 9 "sType_clone"
                                        __dec_obj36=result_134->mGenericsTypes;
                                        result_134->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value141=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 11 "sType_clone"
                                    # 10 "sType_clone"
                                    if(_if_conditional174=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional174) {
                                        # 10 "sType_clone"
                                        __dec_obj40=result_134->mArrayNum;
                                        result_134->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value148=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 12 "sType_clone"
                                    # 11 "sType_clone"
                                    if(_if_conditional178=self!=((void*)0),                                    _if_conditional178) {
                                        # 11 "sType_clone"
                                        result_134->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    # 13 "sType_clone"
                                    # 12 "sType_clone"
                                    if(_if_conditional179=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional179) {
                                        # 12 "sType_clone"
                                        __dec_obj41=result_134->mParamTypes;
                                        result_134->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value149=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 14 "sType_clone"
                                    # 13 "sType_clone"
                                    if(_if_conditional180=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional180) {
                                        # 13 "sType_clone"
                                        __dec_obj45=result_134->mParamNames;
                                        result_134->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 15 "sType_clone"
                                    # 14 "sType_clone"
                                    if(_if_conditional184=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional184) {
                                        # 14 "sType_clone"
                                        __dec_obj47=result_134->mResultType;
                                        result_134->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value159=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 16 "sType_clone"
                                    # 15 "sType_clone"
                                    if(_if_conditional187=self!=((void*)0),                                    _if_conditional187) {
                                        # 15 "sType_clone"
                                        result_134->mVarArgs=self->mVarArgs;
                                    }
                                    # 17 "sType_clone"
                                    # 16 "sType_clone"
                                    if(_if_conditional188=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional188) {
                                        # 16 "sType_clone"
                                        __dec_obj48=result_134->mAlignas;
                                        result_134->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=sNode_clone(self->mAlignas))));
                                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 18 "sType_clone"
                                    # 17 "sType_clone"
                                    if(_if_conditional189=self!=((void*)0),                                    _if_conditional189) {
                                        # 17 "sType_clone"
                                        result_134->mUnsigned=self->mUnsigned;
                                    }
                                    # 19 "sType_clone"
                                    # 18 "sType_clone"
                                    if(_if_conditional190=self!=((void*)0),                                    _if_conditional190) {
                                        # 18 "sType_clone"
                                        result_134->mShort=self->mShort;
                                    }
                                    # 20 "sType_clone"
                                    # 19 "sType_clone"
                                    if(_if_conditional191=self!=((void*)0),                                    _if_conditional191) {
                                        # 19 "sType_clone"
                                        result_134->mLong=self->mLong;
                                    }
                                    # 21 "sType_clone"
                                    # 20 "sType_clone"
                                    if(_if_conditional192=self!=((void*)0),                                    _if_conditional192) {
                                        # 20 "sType_clone"
                                        result_134->mLongLong=self->mLongLong;
                                    }
                                    # 22 "sType_clone"
                                    # 21 "sType_clone"
                                    if(_if_conditional193=self!=((void*)0),                                    _if_conditional193) {
                                        # 21 "sType_clone"
                                        result_134->mConstant=self->mConstant;
                                    }
                                    # 23 "sType_clone"
                                    # 22 "sType_clone"
                                    if(_if_conditional194=self!=((void*)0),                                    _if_conditional194) {
                                        # 22 "sType_clone"
                                        result_134->mRegister=self->mRegister;
                                    }
                                    # 24 "sType_clone"
                                    # 23 "sType_clone"
                                    if(_if_conditional195=self!=((void*)0),                                    _if_conditional195) {
                                        # 23 "sType_clone"
                                        result_134->mVolatile=self->mVolatile;
                                    }
                                    # 25 "sType_clone"
                                    # 24 "sType_clone"
                                    if(_if_conditional196=self!=((void*)0),                                    _if_conditional196) {
                                        # 24 "sType_clone"
                                        result_134->mStatic=self->mStatic;
                                    }
                                    # 26 "sType_clone"
                                    # 25 "sType_clone"
                                    if(_if_conditional197=self!=((void*)0),                                    _if_conditional197) {
                                        # 25 "sType_clone"
                                        result_134->mRecord=self->mRecord;
                                    }
                                    # 27 "sType_clone"
                                    # 26 "sType_clone"
                                    if(_if_conditional198=self!=((void*)0),                                    _if_conditional198) {
                                        # 26 "sType_clone"
                                        result_134->mExtern=self->mExtern;
                                    }
                                    # 28 "sType_clone"
                                    # 27 "sType_clone"
                                    if(_if_conditional199=self!=((void*)0),                                    _if_conditional199) {
                                        # 27 "sType_clone"
                                        result_134->mRestrict=self->mRestrict;
                                    }
                                    # 29 "sType_clone"
                                    # 28 "sType_clone"
                                    if(_if_conditional200=self!=((void*)0),                                    _if_conditional200) {
                                        # 28 "sType_clone"
                                        result_134->mImmutable=self->mImmutable;
                                    }
                                    # 30 "sType_clone"
                                    # 29 "sType_clone"
                                    if(_if_conditional201=self!=((void*)0),                                    _if_conditional201) {
                                        # 29 "sType_clone"
                                        result_134->mHeap=self->mHeap;
                                    }
                                    # 31 "sType_clone"
                                    # 30 "sType_clone"
                                    if(_if_conditional202=self!=((void*)0),                                    _if_conditional202) {
                                        # 30 "sType_clone"
                                        result_134->mDummyHeap=self->mDummyHeap;
                                    }
                                    # 32 "sType_clone"
                                    # 31 "sType_clone"
                                    if(_if_conditional203=self!=((void*)0),                                    _if_conditional203) {
                                        # 31 "sType_clone"
                                        result_134->mDelegate=self->mDelegate;
                                    }
                                    # 33 "sType_clone"
                                    # 32 "sType_clone"
                                    if(_if_conditional204=self!=((void*)0),                                    _if_conditional204) {
                                        # 32 "sType_clone"
                                        result_134->mShare=self->mShare;
                                    }
                                    # 34 "sType_clone"
                                    # 33 "sType_clone"
                                    if(_if_conditional205=self!=((void*)0),                                    _if_conditional205) {
                                        # 33 "sType_clone"
                                        result_134->mClone=self->mClone;
                                    }
                                    # 35 "sType_clone"
                                    # 34 "sType_clone"
                                    if(_if_conditional206=self!=((void*)0),                                    _if_conditional206) {
                                        # 34 "sType_clone"
                                        result_134->mNoHeap=self->mNoHeap;
                                    }
                                    # 36 "sType_clone"
                                    # 35 "sType_clone"
                                    if(_if_conditional207=self!=((void*)0),                                    _if_conditional207) {
                                        # 35 "sType_clone"
                                        result_134->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    # 37 "sType_clone"
                                    # 36 "sType_clone"
                                    if(_if_conditional208=self!=((void*)0),                                    _if_conditional208) {
                                        # 36 "sType_clone"
                                        result_134->mRefference=self->mRefference;
                                    }
                                    # 38 "sType_clone"
                                    # 37 "sType_clone"
                                    if(_if_conditional209=self!=((void*)0),                                    _if_conditional209) {
                                        # 37 "sType_clone"
                                        result_134->mException=self->mException;
                                    }
                                    # 39 "sType_clone"
                                    # 38 "sType_clone"
                                    if(_if_conditional210=self!=((void*)0),                                    _if_conditional210) {
                                        # 38 "sType_clone"
                                        result_134->mPointerNum=self->mPointerNum;
                                    }
                                    # 40 "sType_clone"
                                    # 39 "sType_clone"
                                    if(_if_conditional211=self!=((void*)0),                                    _if_conditional211) {
                                        # 39 "sType_clone"
                                        result_134->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    # 41 "sType_clone"
                                    # 40 "sType_clone"
                                    if(_if_conditional212=self!=((void*)0),                                    _if_conditional212) {
                                        # 40 "sType_clone"
                                        result_134->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    # 42 "sType_clone"
                                    # 41 "sType_clone"
                                    if(_if_conditional213=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional213) {
                                        # 41 "sType_clone"
                                        __dec_obj49=result_134->mSizeNum;
                                        result_134->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value161=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value161) { right_value161 = come_decrement_ref_count2(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 43 "sType_clone"
                                    # 42 "sType_clone"
                                    if(_if_conditional214=self!=((void*)0),                                    _if_conditional214) {
                                        # 42 "sType_clone"
                                        result_134->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    # 44 "sType_clone"
                                    # 43 "sType_clone"
                                    if(_if_conditional215=self!=((void*)0),                                    _if_conditional215) {
                                        # 43 "sType_clone"
                                        result_134->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    # 45 "sType_clone"
                                    # 44 "sType_clone"
                                    if(_if_conditional216=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional216) {
                                        # 44 "sType_clone"
                                        __dec_obj50=result_134->mOriginalTypeName;
                                        result_134->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value162=string_clone(self->mOriginalTypeName))));
                                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 46 "sType_clone"
                                    # 45 "sType_clone"
                                    if(_if_conditional217=self!=((void*)0),                                    _if_conditional217) {
                                        # 45 "sType_clone"
                                        result_134->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    # 47 "sType_clone"
                                    # 46 "sType_clone"
                                    if(_if_conditional218=self!=((void*)0),                                    _if_conditional218) {
                                        # 46 "sType_clone"
                                        result_134->mFunctionParam=self->mFunctionParam;
                                    }
                                    # 48 "sType_clone"
                                    # 47 "sType_clone"
                                    if(_if_conditional219=self!=((void*)0),                                    _if_conditional219) {
                                        # 47 "sType_clone"
                                        result_134->mAllocaValue=self->mAllocaValue;
                                    }
                                    # 49 "sType_clone"
                                    # 48 "sType_clone"
                                    if(_if_conditional220=self!=((void*)0),                                    _if_conditional220) {
                                        # 48 "sType_clone"
                                        result_134->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    # 50 "sType_clone"
                                    # 49 "sType_clone"
                                    if(_if_conditional221=self!=((void*)0),                                    _if_conditional221) {
                                        # 49 "sType_clone"
                                        result_134->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    # 51 "sType_clone"
                                    # 50 "sType_clone"
                                    if(_if_conditional222=self!=((void*)0),                                    _if_conditional222) {
                                        # 50 "sType_clone"
                                        result_134->mComeMemCore=self->mComeMemCore;
                                    }
                                    # 52 "sType_clone"
                                    # 51 "sType_clone"
                                    if(_if_conditional223=self!=((void*)0),                                    _if_conditional223) {
                                        # 51 "sType_clone"
                                        result_134->mInline=self->mInline;
                                    }
                                    # 53 "sType_clone"
                                    # 52 "sType_clone"
                                    if(_if_conditional224=self!=((void*)0),                                    _if_conditional224) {
                                        # 52 "sType_clone"
                                        result_134->mNullValue=self->mNullValue;
                                    }
                                    # 54 "sType_clone"
                                    # 53 "sType_clone"
                                    if(_if_conditional225=self!=((void*)0),                                    _if_conditional225) {
                                        # 53 "sType_clone"
                                        result_134->mGuardValue=self->mGuardValue;
                                    }
                                    # 55 "sType_clone"
                                    # 54 "sType_clone"
                                    if(_if_conditional226=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional226) {
                                        # 54 "sType_clone"
                                        __dec_obj51=result_134->mAsmName;
                                        result_134->mAsmName=(char*)come_increment_ref_count(((char*)(right_value163=string_clone(self->mAsmName))));
                                        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 56 "sType_clone"
                                    # 55 "sType_clone"
                                    if(_if_conditional227=self!=((void*)0),                                    _if_conditional227) {
                                        # 55 "sType_clone"
                                        result_134->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    # 56 "sType_clone"
                                    __result128__ = __result_obj__ = result_134;
                                    come_call_finalizer2(sType_finalize,result_134, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result128__;
                                    come_call_finalizer2(sType_finalize,result_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional162;
struct list$1sTypeph* __result110__;
void* right_value127;
void* right_value128;
struct list$1sTypeph* result_135;
struct list_item$1sTypeph* it_136;
_Bool _while_condtional23;
void* right_value132;
struct list$1sTypeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&result_135, 0, sizeof(struct list$1sTypeph*));
memset(&it_136, 0, sizeof(struct list_item$1sTypeph*));
right_value132 = (void*)0;
                                            # 142 "./neo-c.h"
                                            # 139 "./neo-c.h"
                                            if(_if_conditional162=self==((void*)0),                                            _if_conditional162) {
                                                # 140 "./neo-c.h"
                                                __result110__ = __result_obj__ = ((void*)0);
                                                return __result110__;
                                            }
                                            # 142 "./neo-c.h"
                                            result_135=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value128=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value127=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 144 "./neo-c.h"
                                            it_136=self->head;
                                            # 151 "./neo-c.h"
                                            while(_while_condtional23=it_136!=((void*)0),                                            _while_condtional23) {
                                                # 146 "./neo-c.h"
                                                list$1sTypeph_add(result_135,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(it_136->item)))));
                                                come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 148 "./neo-c.h"
                                                it_136=it_136->next;
                                            }
                                            # 151 "./neo-c.h"
                                            __result113__ = __result_obj__ = result_135;
                                            come_call_finalizer2(list$1sTypephp_finalize,result_135, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result113__;
                                            come_call_finalizer2(list$1sTypephp_finalize,result_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 104 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 105 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 106 "./neo-c.h"
                                                self->len=0;
                                                # 108 "./neo-c.h"
                                                __result111__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result111__;
                                                come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional163;
void* right_value129;
struct list_item$1sTypeph* litem_137;
struct sType* __dec_obj27;
_Bool _if_conditional164;
void* right_value130;
struct list_item$1sTypeph* litem_138;
struct sType* __dec_obj28;
void* right_value131;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj29;
struct list$1sTypeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&litem_137, 0, sizeof(struct list_item$1sTypeph*));
right_value130 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
                                                    # 186 "./neo-c.h"
                                                    # 155 "./neo-c.h"
                                                    if(_if_conditional163=self->len==0,                                                    _if_conditional163) {
                                                        # 156 "./neo-c.h"
                                                        litem_137=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 158 "./neo-c.h"
                                                        litem_137->prev=((void*)0);
                                                        # 159 "./neo-c.h"
                                                        litem_137->next=((void*)0);
                                                        # 160 "./neo-c.h"
                                                        __dec_obj27=litem_137->item;
                                                        litem_137->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 162 "./neo-c.h"
                                                        self->tail=litem_137;
                                                        # 163 "./neo-c.h"
                                                        self->head=litem_137;
                                                    }
                                                    else {
                                                        # 186 "./neo-c.h"
                                                        # 165 "./neo-c.h"
                                                        if(_if_conditional164=self->len==1,                                                        _if_conditional164) {
                                                            # 166 "./neo-c.h"
                                                            litem_138=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 168 "./neo-c.h"
                                                            litem_138->prev=self->head;
                                                            # 169 "./neo-c.h"
                                                            litem_138->next=((void*)0);
                                                            # 170 "./neo-c.h"
                                                            __dec_obj28=litem_138->item;
                                                            litem_138->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 172 "./neo-c.h"
                                                            self->tail=litem_138;
                                                            # 173 "./neo-c.h"
                                                            self->head->next=litem_138;
                                                        }
                                                        else {
                                                            # 176 "./neo-c.h"
                                                            litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 178 "./neo-c.h"
                                                            litem_139->prev=self->tail;
                                                            # 179 "./neo-c.h"
                                                            litem_139->next=((void*)0);
                                                            # 180 "./neo-c.h"
                                                            __dec_obj29=litem_139->item;
                                                            litem_139->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 182 "./neo-c.h"
                                                            self->tail->next=litem_139;
                                                            # 183 "./neo-c.h"
                                                            self->tail=litem_139;
                                                        }
                                                    }
                                                    # 186 "./neo-c.h"
                                                    self->len++;
                                                    # 188 "./neo-c.h"
                                                    __result112__ = __result_obj__ = self;
                                                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result112__;
                                                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional167;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypeph_finalize"
                                                # 0 "tuple1$1sTypeph_finalize"
                                                if(_if_conditional167=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional167) {
                                                    # 0 "tuple1$1sTypeph_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional175;
struct list$1sNodeph* __result118__;
void* right_value142;
void* right_value143;
struct list$1sNodeph* result_142;
struct list_item$1sNodeph* it_143;
_Bool _while_condtional24;
void* right_value147;
struct list$1sNodeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&result_142, 0, sizeof(struct list$1sNodeph*));
memset(&it_143, 0, sizeof(struct list_item$1sNodeph*));
right_value147 = (void*)0;
                                            # 142 "./neo-c.h"
                                            # 139 "./neo-c.h"
                                            if(_if_conditional175=self==((void*)0),                                            _if_conditional175) {
                                                # 140 "./neo-c.h"
                                                __result118__ = __result_obj__ = ((void*)0);
                                                return __result118__;
                                            }
                                            # 142 "./neo-c.h"
                                            result_142=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value143=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value142=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                                            come_call_finalizer2(list$1sNodephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1sNodephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 144 "./neo-c.h"
                                            it_143=self->head;
                                            # 151 "./neo-c.h"
                                            while(_while_condtional24=it_143!=((void*)0),                                            _while_condtional24) {
                                                # 146 "./neo-c.h"
                                                list$1sNodeph_add(result_142,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(it_143->item)))));
                                                if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 148 "./neo-c.h"
                                                it_143=it_143->next;
                                            }
                                            # 151 "./neo-c.h"
                                            __result121__ = __result_obj__ = result_142;
                                            come_call_finalizer2(list$1sNodephp_finalize,result_142, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result121__;
                                            come_call_finalizer2(list$1sNodephp_finalize,result_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 104 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 105 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 106 "./neo-c.h"
                                                self->len=0;
                                                # 108 "./neo-c.h"
                                                __result119__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result119__;
                                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional176;
void* right_value144;
struct list_item$1sNodeph* litem_144;
struct sNode* __dec_obj37;
_Bool _if_conditional177;
void* right_value145;
struct list_item$1sNodeph* litem_145;
struct sNode* __dec_obj38;
void* right_value146;
struct list_item$1sNodeph* litem_146;
struct sNode* __dec_obj39;
struct list$1sNodeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_145, 0, sizeof(struct list_item$1sNodeph*));
right_value146 = (void*)0;
memset(&litem_146, 0, sizeof(struct list_item$1sNodeph*));
                                                    # 186 "./neo-c.h"
                                                    # 155 "./neo-c.h"
                                                    if(_if_conditional176=self->len==0,                                                    _if_conditional176) {
                                                        # 156 "./neo-c.h"
                                                        litem_144=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 158 "./neo-c.h"
                                                        litem_144->prev=((void*)0);
                                                        # 159 "./neo-c.h"
                                                        litem_144->next=((void*)0);
                                                        # 160 "./neo-c.h"
                                                        __dec_obj37=litem_144->item;
                                                        litem_144->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
                                                        # 162 "./neo-c.h"
                                                        self->tail=litem_144;
                                                        # 163 "./neo-c.h"
                                                        self->head=litem_144;
                                                    }
                                                    else {
                                                        # 186 "./neo-c.h"
                                                        # 165 "./neo-c.h"
                                                        if(_if_conditional177=self->len==1,                                                        _if_conditional177) {
                                                            # 166 "./neo-c.h"
                                                            litem_145=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 168 "./neo-c.h"
                                                            litem_145->prev=self->head;
                                                            # 169 "./neo-c.h"
                                                            litem_145->next=((void*)0);
                                                            # 170 "./neo-c.h"
                                                            __dec_obj38=litem_145->item;
                                                            litem_145->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 172 "./neo-c.h"
                                                            self->tail=litem_145;
                                                            # 173 "./neo-c.h"
                                                            self->head->next=litem_145;
                                                        }
                                                        else {
                                                            # 176 "./neo-c.h"
                                                            litem_146=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value146=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 178 "./neo-c.h"
                                                            litem_146->prev=self->tail;
                                                            # 179 "./neo-c.h"
                                                            litem_146->next=((void*)0);
                                                            # 180 "./neo-c.h"
                                                            __dec_obj39=litem_146->item;
                                                            litem_146->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                                                            # 182 "./neo-c.h"
                                                            self->tail->next=litem_146;
                                                            # 183 "./neo-c.h"
                                                            self->tail=litem_146;
                                                        }
                                                    }
                                                    # 186 "./neo-c.h"
                                                    self->len++;
                                                    # 188 "./neo-c.h"
                                                    __result120__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result120__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional181;
struct list$1charph* __result122__;
void* right_value150;
void* right_value151;
struct list$1charph* result_147;
struct list_item$1charph* it_148;
_Bool _while_condtional25;
void* right_value155;
struct list$1charph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_147, 0, sizeof(struct list$1charph*));
memset(&it_148, 0, sizeof(struct list_item$1charph*));
right_value155 = (void*)0;
                                            # 142 "./neo-c.h"
                                            # 139 "./neo-c.h"
                                            if(_if_conditional181=self==((void*)0),                                            _if_conditional181) {
                                                # 140 "./neo-c.h"
                                                __result122__ = __result_obj__ = ((void*)0);
                                                return __result122__;
                                            }
                                            # 142 "./neo-c.h"
                                            result_147=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                                            come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 144 "./neo-c.h"
                                            it_148=self->head;
                                            # 151 "./neo-c.h"
                                            while(_while_condtional25=it_148!=((void*)0),                                            _while_condtional25) {
                                                # 146 "./neo-c.h"
                                                list$1charph_add(result_147,(char*)come_increment_ref_count(((char*)(right_value155=string_clone(it_148->item)))));
                                                right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 148 "./neo-c.h"
                                                it_148=it_148->next;
                                            }
                                            # 151 "./neo-c.h"
                                            __result125__ = __result_obj__ = result_147;
                                            come_call_finalizer2(list$1charphp_finalize,result_147, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result125__;
                                            come_call_finalizer2(list$1charphp_finalize,result_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 104 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 105 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 106 "./neo-c.h"
                                                self->len=0;
                                                # 108 "./neo-c.h"
                                                __result123__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result123__;
                                                come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional182;
void* right_value152;
struct list_item$1charph* litem_149;
char* __dec_obj42;
_Bool _if_conditional183;
void* right_value153;
struct list_item$1charph* litem_150;
char* __dec_obj43;
void* right_value154;
struct list_item$1charph* litem_151;
char* __dec_obj44;
struct list$1charph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
right_value153 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
right_value154 = (void*)0;
memset(&litem_151, 0, sizeof(struct list_item$1charph*));
                                                    # 186 "./neo-c.h"
                                                    # 155 "./neo-c.h"
                                                    if(_if_conditional182=self->len==0,                                                    _if_conditional182) {
                                                        # 156 "./neo-c.h"
                                                        litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                                        come_call_finalizer2(list_item$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        # 158 "./neo-c.h"
                                                        litem_149->prev=((void*)0);
                                                        # 159 "./neo-c.h"
                                                        litem_149->next=((void*)0);
                                                        # 160 "./neo-c.h"
                                                        __dec_obj42=litem_149->item;
                                                        litem_149->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        # 162 "./neo-c.h"
                                                        self->tail=litem_149;
                                                        # 163 "./neo-c.h"
                                                        self->head=litem_149;
                                                    }
                                                    else {
                                                        # 186 "./neo-c.h"
                                                        # 165 "./neo-c.h"
                                                        if(_if_conditional183=self->len==1,                                                        _if_conditional183) {
                                                            # 166 "./neo-c.h"
                                                            litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                                            come_call_finalizer2(list_item$1charphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 168 "./neo-c.h"
                                                            litem_150->prev=self->head;
                                                            # 169 "./neo-c.h"
                                                            litem_150->next=((void*)0);
                                                            # 170 "./neo-c.h"
                                                            __dec_obj43=litem_150->item;
                                                            litem_150->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 172 "./neo-c.h"
                                                            self->tail=litem_150;
                                                            # 173 "./neo-c.h"
                                                            self->head->next=litem_150;
                                                        }
                                                        else {
                                                            # 176 "./neo-c.h"
                                                            litem_151=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value154=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                                            come_call_finalizer2(list_item$1charphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            # 178 "./neo-c.h"
                                                            litem_151->prev=self->tail;
                                                            # 179 "./neo-c.h"
                                                            litem_151->next=((void*)0);
                                                            # 180 "./neo-c.h"
                                                            __dec_obj44=litem_151->item;
                                                            litem_151->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            # 182 "./neo-c.h"
                                                            self->tail->next=litem_151;
                                                            # 183 "./neo-c.h"
                                                            self->tail=litem_151;
                                                        }
                                                    }
                                                    # 186 "./neo-c.h"
                                                    self->len++;
                                                    # 188 "./neo-c.h"
                                                    __result124__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result124__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct tuple1$1sTypeph* __result126__;
void* right_value157;
struct tuple1$1sTypeph* result_152;
_Bool _if_conditional186;
void* right_value158;
struct sType* __dec_obj46;
struct tuple1$1sTypeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&result_152, 0, sizeof(struct tuple1$1sTypeph*));
right_value158 = (void*)0;
                                            # 3 "tuple1$1sTypephp_clone"
                                            # 2 "tuple1$1sTypephp_clone"
                                            if(_if_conditional185=self==(void*)0,                                            _if_conditional185) {
                                                # 2 "tuple1$1sTypephp_clone"
                                                __result126__ = __result_obj__ = (void*)0;
                                                return __result126__;
                                            }
                                            # 3 "tuple1$1sTypephp_clone"
                                            result_152=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value157=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "tuple1$1sTypephp_clone"
                                            # 4 "tuple1$1sTypephp_clone"
                                            if(_if_conditional186=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional186) {
                                                # 4 "tuple1$1sTypephp_clone"
                                                __dec_obj46=result_152->v1;
                                                result_152->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(self->v1))));
                                                come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            # 5 "tuple1$1sTypephp_clone"
                                            __result127__ = __result_obj__ = result_152;
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result127__;
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional235;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_157;
struct tuple2$2charphsNodeph* __dec_obj57;
_Bool _if_conditional236;
void* right_value175;
struct list_item$1tuple2$2charphsNodephph* litem_158;
struct tuple2$2charphsNodeph* __dec_obj58;
void* right_value176;
struct list_item$1tuple2$2charphsNodephph* litem_159;
struct tuple2$2charphsNodeph* __dec_obj59;
struct list$1tuple2$2charphsNodephph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value175 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value176 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional235=self->len==0,                    _if_conditional235) {
                        # 226 "./neo-c.h"
                        litem_157=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_157->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_157->next=((void*)0);
                        # 230 "./neo-c.h"
                        __dec_obj57=litem_157->item;
                        litem_157->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 232 "./neo-c.h"
                        self->tail=litem_157;
                        # 233 "./neo-c.h"
                        self->head=litem_157;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional236=self->len==1,                        _if_conditional236) {
                            # 236 "./neo-c.h"
                            litem_158=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_158->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_158->next=((void*)0);
                            # 240 "./neo-c.h"
                            __dec_obj58=litem_158->item;
                            litem_158->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 242 "./neo-c.h"
                            self->tail=litem_158;
                            # 243 "./neo-c.h"
                            self->head->next=litem_158;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_159=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value176=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_159->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_159->next=((void*)0);
                            # 250 "./neo-c.h"
                            __dec_obj59=litem_159->item;
                            litem_159->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 252 "./neo-c.h"
                            self->tail->next=litem_159;
                            # 253 "./neo-c.h"
                            self->tail=litem_159;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result132__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result132__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj60;
struct sNode* __dec_obj61;
struct tuple2$2charphsNodeph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1767 "./neo-c.h"
                    __dec_obj60=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 1768 "./neo-c.h"
                    __dec_obj61=self->v2;
                    self->v2=(struct sNode*)come_increment_ref_count(v2);
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                    # 1770 "./neo-c.h"
                    __result133__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result133__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional251;
char* source_head_161;
_Bool output_162;
char* type_name_163;
_Bool _if_conditional252;
void* right_value189;
char* __dec_obj66;
_Bool _if_conditional253;
void* right_value190;
char* __dec_obj67;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
struct list$1tuple2$2charphsNodephph* elements_164;
_Bool _while_condtional27;
void* right_value195;
char* element_name_165;
_Bool _if_conditional254;
_Bool no_comma_166;
void* right_value196;
struct sNode* element_value_167;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
_Bool _if_conditional255;
_Bool _if_conditional256;
char* source_tail_168;
void* right_value201;
void* right_value202;
struct buffer* header_169;
void* right_value203;
void* right_value204;
void* right_value205;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value211;
struct sNode* __result139__;
void* right_value212;
struct sNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_161, 0, sizeof(char*));
memset(&output_162, 0, sizeof(_Bool));
memset(&type_name_163, 0, sizeof(char*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&elements_164, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value195 = (void*)0;
memset(&element_name_165, 0, sizeof(char*));
memset(&no_comma_166, 0, sizeof(_Bool));
right_value196 = (void*)0;
memset(&element_value_167, 0, sizeof(struct sNode*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&source_tail_168, 0, sizeof(char*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&header_169, 0, sizeof(struct buffer*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
    # 260 "16enum.c"
    # 189 "16enum.c"
    if(_if_conditional251=charp_operator_equals(buf,"enum"),    _if_conditional251) {
        # 190 "16enum.c"
        source_head_161=info->p;
        # 192 "16enum.c"
        output_162=(_Bool)1;
        # 194 "16enum.c"
        type_name_163=((void*)0);
        # 210 "16enum.c"
        # 195 "16enum.c"
        if(_if_conditional252=*info->p==123,        _if_conditional252) {
            # 196 "16enum.c"
            __dec_obj66=type_name_163;
            type_name_163=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(""))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 205 "16enum.c"
            # 199 "16enum.c"
            if(_if_conditional253=map$2charphsClassph_at(info->classes,type_name_163,((void*)0))==((void*)0),            _if_conditional253) {
            }
            else {
                # 202 "16enum.c"
                output_162=(_Bool)0;
            }
            # 205 "16enum.c"
            __dec_obj67=type_name_163;
            type_name_163=(char*)come_increment_ref_count(((char*)(right_value190=parse_word(info))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 207 "16enum.c"
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_163),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value191=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 207, "sClass")))),type_name_163,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            come_call_finalizer2(sClass_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 210 "16enum.c"
        expected_next_character(123,info);
        # 212 "16enum.c"
        elements_164=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value194=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value193=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 212, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 249 "16enum.c"
        while(_while_condtional27=(_Bool)1,        _while_condtional27) {
            # 215 "16enum.c"
            parse_sharp_v5(info);
            # 216 "16enum.c"
            element_name_165=(char*)come_increment_ref_count(((char*)(right_value195=parse_word(info))));
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 217 "16enum.c"
            parse_sharp_v5(info);
            # 234 "16enum.c"
            # 219 "16enum.c"
            if(_if_conditional254=*info->p==61,            _if_conditional254) {
                # 220 "16enum.c"
                info->p++;
                # 221 "16enum.c"
                skip_spaces_and_lf(info);
                # 223 "16enum.c"
                no_comma_166=info->no_comma;
                # 224 "16enum.c"
                info->no_comma=(_Bool)1;
                # 225 "16enum.c"
                element_value_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=expression_v13(info))));
                if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 227 "16enum.c"
                info->no_comma=no_comma_166;
                # 229 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_164,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value198=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value197=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 229, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_165),(struct sNode*)come_increment_ref_count(element_value_167))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(element_value_167) { element_value_167 = come_decrement_ref_count2(element_value_167, ((struct sNode*)element_value_167)->finalize, ((struct sNode*)element_value_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 232 "16enum.c"
                list$1tuple2$2charphsNodephph_push_back(elements_164,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value200=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value199=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 232, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_165),((void*)0))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 234 "16enum.c"
            parse_sharp_v5(info);
            # 240 "16enum.c"
            # 236 "16enum.c"
            if(_if_conditional255=*info->p==44,            _if_conditional255) {
                # 237 "16enum.c"
                info->p++;
                # 238 "16enum.c"
                skip_spaces_and_lf(info);
            }
            # 240 "16enum.c"
            parse_sharp_v5(info);
            # 247 "16enum.c"
            # 242 "16enum.c"
            if(_if_conditional256=*info->p==125,            _if_conditional256) {
                # 243 "16enum.c"
                info->p++;
                # 244 "16enum.c"
                skip_spaces_and_lf(info);
                # 245 "16enum.c"
                element_name_165 = come_decrement_ref_count2(element_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            element_name_165 = come_decrement_ref_count2(element_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 249 "16enum.c"
        source_tail_168=info->p;
        # 251 "16enum.c"
        header_169=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 251, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 252 "16enum.c"
        buffer_append_str(header_169,"enum ");
        # 253 "16enum.c"
        buffer_append(header_169,source_head_161,source_tail_168-source_head_161);
        # 255 "16enum.c"
        add_come_code_at_come_header(info,"%s;\n",((char*)(right_value203=buffer_to_string(header_169))));
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 257 "16enum.c"
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 257, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value205=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value204=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 257, "sEnumNode")))),(char*)come_increment_ref_count(type_name_163),elements_164,output_162,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sEnumNode_sline;
        _inf_value2->sname=(void*)sEnumNode_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result139__ = __result_obj__ = ((struct sNode*)(right_value211=_inf_value2));
        type_name_163 = come_decrement_ref_count2(type_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sEnumNode_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sEnumNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value211) { right_value211 = come_decrement_ref_count2(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result139__;
        type_name_163 = come_decrement_ref_count2(type_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 260 "16enum.c"
    __result140__ = __result_obj__ = ((struct sNode*)(right_value212=top_level_v95(buf,head,head_sline,info)));
    if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result140__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sEnumNode_finalize"
            # 0 "sEnumNode_finalize"
            if(_if_conditional257=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional257) {
                # 0 "sEnumNode_finalize"
                self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "sEnumNode_finalize"
            # 1 "sEnumNode_finalize"
            if(_if_conditional258=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional258) {
                # 1 "sEnumNode_finalize"
                come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->mElements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sEnumNode_finalize"
            # 2 "sEnumNode_finalize"
            if(_if_conditional259=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional259) {
                # 2 "sEnumNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 4 "sEnumNode_finalize"
            # 3 "sEnumNode_finalize"
            if(_if_conditional260=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional260) {
                # 3 "sEnumNode_finalize"
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional261;
struct sEnumNode* __result137__;
void* right_value206;
struct sEnumNode* result_170;
_Bool _if_conditional262;
void* right_value207;
char* __dec_obj68;
_Bool _if_conditional263;
void* right_value208;
struct list$1tuple2$2charphsNodephph* __dec_obj69;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value209;
char* __dec_obj70;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value210;
char* __dec_obj71;
struct sEnumNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
memset(&result_170, 0, sizeof(struct sEnumNode*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
            # 3 "sEnumNode_clone"
            # 2 "sEnumNode_clone"
            if(_if_conditional261=self==(void*)0,            _if_conditional261) {
                # 2 "sEnumNode_clone"
                __result137__ = __result_obj__ = (void*)0;
                return __result137__;
            }
            # 3 "sEnumNode_clone"
            result_170=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value206=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3, "sEnumNode"))));
            come_call_finalizer2(sEnumNode_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sEnumNode_clone"
            # 4 "sEnumNode_clone"
            if(_if_conditional262=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional262) {
                # 4 "sEnumNode_clone"
                __dec_obj68=result_170->mTypeName;
                result_170->mTypeName=(char*)come_increment_ref_count(((char*)(right_value207=string_clone(self->mTypeName))));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sEnumNode_clone"
            # 5 "sEnumNode_clone"
            if(_if_conditional263=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional263) {
                # 5 "sEnumNode_clone"
                __dec_obj69=result_170->mElements;
                result_170->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value208=list$1tuple2$2charphsNodephphp_clone(self->mElements))));
                come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sEnumNode_clone"
            # 6 "sEnumNode_clone"
            if(_if_conditional264=self!=((void*)0),            _if_conditional264) {
                # 6 "sEnumNode_clone"
                result_170->sline=self->sline;
            }
            # 8 "sEnumNode_clone"
            # 7 "sEnumNode_clone"
            if(_if_conditional265=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional265) {
                # 7 "sEnumNode_clone"
                __dec_obj70=result_170->sname;
                result_170->sname=(char*)come_increment_ref_count(((char*)(right_value209=string_clone(self->sname))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 9 "sEnumNode_clone"
            # 8 "sEnumNode_clone"
            if(_if_conditional266=self!=((void*)0),            _if_conditional266) {
                # 8 "sEnumNode_clone"
                result_170->mOutput=self->mOutput;
            }
            # 10 "sEnumNode_clone"
            # 9 "sEnumNode_clone"
            if(_if_conditional267=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional267) {
                # 9 "sEnumNode_clone"
                __dec_obj71=result_170->mDeclareSName;
                result_170->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value210=string_clone(self->mDeclareSName))));
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sEnumNode_clone"
            __result138__ = __result_obj__ = result_170;
            come_call_finalizer2(sEnumNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result138__;
            come_call_finalizer2(sEnumNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

