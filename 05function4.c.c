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
    struct list$1charph* mParams;
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
struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
    struct map$2charphcharph* module_params;
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

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

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

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
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
    # 1943 "./neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1943, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1944 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1945 "./neo-c.h"
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    # 1950 "./neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1950, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1951 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1952 "./neo-c.h"
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    # 1957 "./neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1957, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1958 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1959 "./neo-c.h"
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    # 1964 "./neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1964, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1965 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1966 "./neo-c.h"
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    # 1971 "./neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1971, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1972 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1973 "./neo-c.h"
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    # 1978 "./neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1978, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1979 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1980 "./neo-c.h"
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    # 1993 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1993, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1995 "./neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1996 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1998 "./neo-c.h"
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
    # 2003 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2003, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2005 "./neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2006 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2008 "./neo-c.h"
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
    # 2013 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2013, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2015 "./neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2016 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2018 "./neo-c.h"
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
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
    # 2023 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2023, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2025 "./neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2026 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2028 "./neo-c.h"
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
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
    # 2033 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2033, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2035 "./neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2036 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2038 "./neo-c.h"
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    # 2204 "./neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2204, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2209 "./neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2209, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2214 "./neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2214, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2219 "./neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2219, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2224 "./neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2224, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2229 "./neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2229, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2234 "./neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2234, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2239 "./neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2239, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2244 "./neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2244, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2249 "./neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2249, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2254 "./neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2254, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
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
    # 2259 "./neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2259, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2289 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2294 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2299 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2304 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2309 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2314 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2375 "./neo-c.h"
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
    # 2380 "./neo-c.h"
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
    # 2385 "./neo-c.h"
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
        # 2045 "./neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2049 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
        # 2045 "./neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2049 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
        # 2045 "./neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2049 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
        # 2045 "./neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2049 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
        # 2045 "./neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2049 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
        # 2045 "./neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2045, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2047 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2049 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2051 "./neo-c.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 118 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 121 "./neo-c.h"
        __result26__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result26__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 227 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_12->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_12;
                    # 234 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 237 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_13->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_13;
                        # 244 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 247, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_14->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 254 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
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
            # 124 "./neo-c.h"
            it_15=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 126 "./neo-c.h"
                prev_it_16=it_15;
                # 127 "./neo-c.h"
                it_15=it_15->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 118 "./neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 121 "./neo-c.h"
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 227 "./neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_18->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_18->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_18->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_18;
                    # 234 "./neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 237 "./neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_19->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_19->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_19->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_19;
                        # 244 "./neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 247, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_20->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_20->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_20->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_20;
                        # 254 "./neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
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
            # 124 "./neo-c.h"
            it_21=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 126 "./neo-c.h"
                prev_it_22=it_21;
                # 127 "./neo-c.h"
                it_21=it_21->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 118 "./neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 121 "./neo-c.h"
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 227 "./neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_24->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_24;
                    # 234 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 237 "./neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_25->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_25;
                        # 244 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 247, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_26->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 254 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
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
            # 124 "./neo-c.h"
            it_27=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 126 "./neo-c.h"
                prev_it_28=it_27;
                # 127 "./neo-c.h"
                it_27=it_27->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 118 "./neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 121 "./neo-c.h"
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 227 "./neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_30->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_30->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_30->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_30;
                    # 234 "./neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 237 "./neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_31->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_31->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_31->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_31;
                        # 244 "./neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 247, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_32->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_32->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_32->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_32;
                        # 254 "./neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
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
            # 124 "./neo-c.h"
            it_33=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 126 "./neo-c.h"
                prev_it_34=it_33;
                # 127 "./neo-c.h"
                it_33=it_33->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 118 "./neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 121 "./neo-c.h"
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
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
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 227 "./neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_36->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_36->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_36->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_36;
                    # 234 "./neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 237 "./neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_37->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_37->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_37->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_37;
                        # 244 "./neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 247, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_38->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_38->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_38->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_38;
                        # 254 "./neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
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
            # 124 "./neo-c.h"
            it_39=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 126 "./neo-c.h"
                prev_it_40=it_39;
                # 127 "./neo-c.h"
                it_39=it_39->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 113 "./neo-c.h"
        self->head=((void*)0);
        # 114 "./neo-c.h"
        self->tail=((void*)0);
        # 115 "./neo-c.h"
        self->len=0;
        # 121 "./neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 118 "./neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 121 "./neo-c.h"
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
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
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 227 "./neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_42->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_42->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_42->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_42;
                    # 234 "./neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 237 "./neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_43->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_43->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_43->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_43;
                        # 244 "./neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 247, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_44->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_44->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_44->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_44;
                        # 254 "./neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
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
            # 124 "./neo-c.h"
            it_45=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 126 "./neo-c.h"
                prev_it_46=it_45;
                # 127 "./neo-c.h"
                it_45=it_45->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
                come_call_finalizer3(fname_49,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_52;
_Bool _if_conditional32;
void* right_value87;
char* __result58__;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&buf_51, 0, sizeof(struct buffer*));
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_52, 0, sizeof(char*));
right_value87 = (void*)0;
    # 145 "05function4.c"
    buf_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "buffer"))))))));
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result53__;
    }
    # 160 "05function4.c"
    result_52=(char*)come_increment_ref_count(((char*)(right_value86=buffer_to_string(buf_51))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 166 "05function4.c"
    # 162 "05function4.c"
    if(_if_conditional32=info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_52),    _if_conditional32) {
        # 163 "05function4.c"
        __result58__ = __result_obj__ = ((char*)(right_value87=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_52), "05function4.c", 163, 0)))));
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result58__;
    }
    # 166 "05function4.c"
    __result59__ = __result_obj__ = result_52;
    come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result59__;
    come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__;
char* default_value_53;
unsigned int hash_54;
unsigned int it_55;
_Bool _while_condtional20;
_Bool _if_conditional28;
_Bool _if_conditional29;
char* __result54__;
_Bool _if_conditional30;
_Bool _if_conditional31;
char* __result55__;
char* __result56__;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_53, 0, sizeof(char*));
memset(&hash_54, 0, sizeof(unsigned int));
memset(&it_55, 0, sizeof(unsigned int));
        # 1545 "./neo-c.h"
        # 1546 "./neo-c.h"
        memset(&default_value_53,0,sizeof(char*));
        # 1548 "./neo-c.h"
        hash_54=string_get_hash_key(((char*)key))%self->size;
        # 1549 "./neo-c.h"
        it_55=hash_54;
        # 1573 "./neo-c.h"
        while(_while_condtional20=(_Bool)1,        _while_condtional20) {
            # 1571 "./neo-c.h"
            # 1552 "./neo-c.h"
            if(_if_conditional28=self->item_existance[it_55],            _if_conditional28) {
                # 1559 "./neo-c.h"
                # 1554 "./neo-c.h"
                if(_if_conditional29=string_equals(self->keys[it_55],key),                _if_conditional29) {
                    # 1556 "./neo-c.h"
                    __result54__ = __result_obj__ = self->items[it_55];
                    default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result54__;
                }
                # 1559 "./neo-c.h"
                it_55++;
                # 1567 "./neo-c.h"
                # 1561 "./neo-c.h"
                if(_if_conditional30=it_55>=self->size,                _if_conditional30) {
                    # 1562 "./neo-c.h"
                    it_55=0;
                }
                else {
                    # 1567 "./neo-c.h"
                    # 1564 "./neo-c.h"
                    if(_if_conditional31=it_55==hash_54,                    _if_conditional31) {
                        # 1565 "./neo-c.h"
                        __result55__ = __result_obj__ = default_value_53;
                        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result55__;
                    }
                }
            }
            else {
                # 1569 "./neo-c.h"
                __result56__ = __result_obj__ = default_value_53;
                default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result56__;
            }
        }
        # 1573 "./neo-c.h"
        __result57__ = __result_obj__ = default_value_53;
        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result57__;
        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional21;
_Bool _if_conditional33;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
    # 183 "05function4.c"
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        # 182 "05function4.c"
        # 172 "05function4.c"
        if(_if_conditional33=*info->p==32||*info->p==9,        _if_conditional33) {
            # 173 "05function4.c"
            info->p++;
        }
        else {
            # 182 "05function4.c"
            # 175 "05function4.c"
            if(_if_conditional34=*info->p==10,            _if_conditional34) {
                # 176 "05function4.c"
                info->p++;
                # 177 "05function4.c"
                info->sline++;
            }
            else {
                # 180 "05function4.c"
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_56;
struct sType* it_59;
_Bool _if_conditional39;
_Bool __result67__;
struct list$1sTypeph* o2_saved_68;
struct sType* it_69;
_Bool _if_conditional57;
_Bool __result68__;
_Bool _if_conditional58;
_Bool __result69__;
_Bool _if_conditional59;
_Bool __result70__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_56, 0, sizeof(struct list$1sTypeph*));
memset(&it_59, 0, sizeof(struct sType*));
memset(&o2_saved_68, 0, sizeof(struct list$1sTypeph*));
memset(&it_69, 0, sizeof(struct sType*));
    # 192 "05function4.c"
    for(    o2_saved_56=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_59=list$1sTypeph_begin((o2_saved_56));    !list$1sTypeph_end((o2_saved_56));    it_59=list$1sTypeph_next((o2_saved_56))    ){
        # 191 "05function4.c"
        # 188 "05function4.c"
        if(_if_conditional39=is_contained_generics_class(it_59,info),        _if_conditional39) {
            # 189 "05function4.c"
            __result67__ = (_Bool)1;
            come_call_finalizer3(o2_saved_56,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result67__;
        }
    }
    come_call_finalizer3(o2_saved_56,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 198 "05function4.c"
    for(    o2_saved_68=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_69=list$1sTypeph_begin((o2_saved_68));    !list$1sTypeph_end((o2_saved_68));    it_69=list$1sTypeph_next((o2_saved_68))    ){
        # 196 "05function4.c"
        # 193 "05function4.c"
        if(_if_conditional57=is_contained_generics_class(it_69,info),        _if_conditional57) {
            # 194 "05function4.c"
            __result68__ = (_Bool)1;
            come_call_finalizer3(o2_saved_68,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result68__;
        }
    }
    come_call_finalizer3(o2_saved_68,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 201 "05function4.c"
    # 198 "05function4.c"
    if(type->mClass->mGenerics) {
        # 199 "05function4.c"
        __result69__ = (_Bool)1;
        return __result69__;
    }
    # 205 "05function4.c"
    # 201 "05function4.c"
    if(type->mClass->mMethodGenerics) {
        # 202 "05function4.c"
        __result70__ = (_Bool)1;
        return __result70__;
    }
    # 205 "05function4.c"
    __result71__ = (_Bool)0;
    return __result71__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct sType* result_57;
struct sType* __result60__;
_Bool _if_conditional36;
struct sType* __result61__;
struct sType* result_58;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct sType*));
memset(&result_58, 0, sizeof(struct sType*));
        # 291 "./neo-c.h"
        # 286 "./neo-c.h"
        if(_if_conditional35=self==((void*)0),        _if_conditional35) {
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_57,0,sizeof(struct sType*));
            # 289 "./neo-c.h"
            __result60__ = __result_obj__ = result_57;
            return __result60__;
        }
        # 291 "./neo-c.h"
        self->it=self->head;
        # 297 "./neo-c.h"
        # 293 "./neo-c.h"
        if(self->it) {
            # 294 "./neo-c.h"
            __result61__ = __result_obj__ = self->it->item;
            return __result61__;
        }
        # 297 "./neo-c.h"
        # 298 "./neo-c.h"
        memset(&result_58,0,sizeof(struct sType*));
        # 299 "./neo-c.h"
        __result62__ = __result_obj__ = result_58;
        return __result62__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
        # 321 "./neo-c.h"
        __result63__ = self==((void*)0)||self->it==((void*)0);
        return __result63__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sType* result_60;
struct sType* __result64__;
_Bool _if_conditional38;
struct sType* __result65__;
struct sType* result_61;
struct sType* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_60, 0, sizeof(struct sType*));
memset(&result_61, 0, sizeof(struct sType*));
        # 309 "./neo-c.h"
        # 303 "./neo-c.h"
        if(_if_conditional37=self==((void*)0)||self->it==((void*)0),        _if_conditional37) {
            # 304 "./neo-c.h"
            # 305 "./neo-c.h"
            memset(&result_60,0,sizeof(struct sType*));
            # 306 "./neo-c.h"
            __result64__ = __result_obj__ = result_60;
            return __result64__;
        }
        # 309 "./neo-c.h"
        self->it=self->it->next;
        # 315 "./neo-c.h"
        # 311 "./neo-c.h"
        if(self->it) {
            # 312 "./neo-c.h"
            __result65__ = __result_obj__ = self->it->item;
            return __result65__;
        }
        # 315 "./neo-c.h"
        # 316 "./neo-c.h"
        memset(&result_61,0,sizeof(struct sType*));
        # 317 "./neo-c.h"
        __result66__ = __result_obj__ = result_61;
        return __result66__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_62;
_Bool _while_condtional22;
struct list_item$1sTypeph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1sTypeph*));
                # 124 "./neo-c.h"
                it_62=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional22=it_62!=((void*)0),                _while_condtional22) {
                    # 126 "./neo-c.h"
                    prev_it_63=it_62;
                    # 127 "./neo-c.h"
                    it_62=it_62->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_63,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional40=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional40) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sType_finalize"
                                # 0 "sType_finalize"
                                if(_if_conditional41=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional41) {
                                    # 0 "sType_finalize"
                                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sType_finalize"
                                # 1 "sType_finalize"
                                if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional42) {
                                    # 1 "sType_finalize"
                                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sType_finalize"
                                # 2 "sType_finalize"
                                if(_if_conditional44=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional44) {
                                    # 2 "sType_finalize"
                                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sType_finalize"
                                # 3 "sType_finalize"
                                if(_if_conditional45=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional45) {
                                    # 3 "sType_finalize"
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sType_finalize"
                                # 4 "sType_finalize"
                                if(_if_conditional46=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional46) {
                                    # 4 "sType_finalize"
                                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sType_finalize"
                                # 5 "sType_finalize"
                                if(_if_conditional47=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional47) {
                                    # 5 "sType_finalize"
                                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sType_finalize"
                                # 6 "sType_finalize"
                                if(_if_conditional49=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional49) {
                                    # 6 "sType_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sType_finalize"
                                # 7 "sType_finalize"
                                if(_if_conditional50=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional50) {
                                    # 7 "sType_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sType_finalize"
                                # 8 "sType_finalize"
                                if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional52) {
                                    # 8 "sType_finalize"
                                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sType_finalize"
                                # 9 "sType_finalize"
                                if(_if_conditional53=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional53) {
                                    # 9 "sType_finalize"
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 11 "sType_finalize"
                                # 10 "sType_finalize"
                                if(_if_conditional54=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional54) {
                                    # 10 "sType_finalize"
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 12 "sType_finalize"
                                # 11 "sType_finalize"
                                if(_if_conditional55=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional55) {
                                    # 11 "sType_finalize"
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sType_finalize"
                                # 12 "sType_finalize"
                                if(_if_conditional56=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional56) {
                                    # 12 "sType_finalize"
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple1$1sTypephp_finalize"
                                        # 0 "tuple1$1sTypephp_finalize"
                                        if(_if_conditional43=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional43) {
                                            # 0 "tuple1$1sTypephp_finalize"
                                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional23;
struct list_item$1sNodeph* prev_it_65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_65, 0, sizeof(struct list_item$1sNodeph*));
                                        # 124 "./neo-c.h"
                                        it_64=self->head;
                                        # 130 "./neo-c.h"
                                        while(_while_condtional23=it_64!=((void*)0),                                        _while_condtional23) {
                                            # 126 "./neo-c.h"
                                            prev_it_65=it_64;
                                            # 127 "./neo-c.h"
                                            it_64=it_64->next;
                                            # 128 "./neo-c.h"
                                            come_call_finalizer3(prev_it_65,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1sNodephp_finalize"
                                                # 0 "list_item$1sNodephp_finalize"
                                                if(_if_conditional48=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional48) {
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_66;
_Bool _while_condtional24;
struct list_item$1charph* prev_it_67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_67, 0, sizeof(struct list_item$1charph*));
                                        # 124 "./neo-c.h"
                                        it_66=self->head;
                                        # 130 "./neo-c.h"
                                        while(_while_condtional24=it_66!=((void*)0),                                        _while_condtional24) {
                                            # 126 "./neo-c.h"
                                            prev_it_67=it_66;
                                            # 127 "./neo-c.h"
                                            it_66=it_66->next;
                                            # 128 "./neo-c.h"
                                            come_call_finalizer3(prev_it_67,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1charphp_finalize"
                                                # 0 "list_item$1charphp_finalize"
                                                if(_if_conditional51=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional51) {
                                                    # 0 "list_item$1charphp_finalize"
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__;
void* right_value88;
void* right_value89;
struct list$1sTypeph* param_types_70;
void* right_value90;
void* right_value91;
struct list$1charph* param_names_71;
void* right_value92;
void* right_value93;
struct list$1charph* param_default_parametors_72;
_Bool var_args_73;
_Bool _if_conditional60;
void* right_value97;
void* right_value130;
struct sType* type__98;
_Bool _if_conditional135;
void* right_value131;
void* right_value132;
_Bool void_param_99;
char* p_100;
int sline_101;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _while_condtional31;
_Bool _if_conditional141;
void* right_value133;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_102;
char* param_name_103;
_Bool err_104;
_Bool _if_conditional144;
void* right_value134;
void* right_value135;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result91__;
void* right_value136;
struct sType* param_type2_105;
void* right_value140;
void* right_value144;
_Bool _if_conditional149;
char* p_112;
_Bool no_comma_113;
void* right_value145;
struct sNode* node_114;
char* p2_115;
void* right_value146;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value147;
void* right_value148;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&param_types_70, 0, sizeof(struct list$1sTypeph*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&param_names_71, 0, sizeof(struct list$1charph*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&param_default_parametors_72, 0, sizeof(struct list$1charph*));
memset(&var_args_73, 0, sizeof(_Bool));
right_value97 = (void*)0;
right_value130 = (void*)0;
memset(&type__98, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&void_param_99, 0, sizeof(_Bool));
memset(&p_100, 0, sizeof(char*));
memset(&sline_101, 0, sizeof(int));
right_value133 = (void*)0;
memset(&param_type_102, 0, sizeof(struct sType*));
memset(&param_name_103, 0, sizeof(char*));
memset(&err_104, 0, sizeof(_Bool));
memset(&param_type_102, 0, sizeof(struct sType*));
memset(&param_name_103, 0, sizeof(char*));
memset(&err_104, 0, sizeof(_Bool));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&param_type2_105, 0, sizeof(struct sType*));
right_value140 = (void*)0;
right_value144 = (void*)0;
memset(&p_112, 0, sizeof(char*));
memset(&no_comma_113, 0, sizeof(_Bool));
right_value145 = (void*)0;
memset(&node_114, 0, sizeof(struct sNode*));
memset(&p2_115, 0, sizeof(char*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    # 210 "05function4.c"
    param_types_70=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 210, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 211 "05function4.c"
    param_names_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 211, "list$1charph"))))))));
    come_call_finalizer3(right_value90,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value91,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 212 "05function4.c"
    param_default_parametors_72=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 212, "list$1charph"))))))));
    come_call_finalizer3(right_value92,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 213 "05function4.c"
    var_args_73=(_Bool)0;
    # 228 "05function4.c"
    # 215 "05function4.c"
    if(in_constructor_) {
        # 216 "05function4.c"
        list$1charph_add(param_names_71,(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("self")))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 217 "05function4.c"
        type__98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(info->impl_type))));
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 218 "05function4.c"
        type__98->mHeap=(_Bool)1;
        # 219 "05function4.c"
        list$1sTypeph_add(param_types_70,(struct sType*)come_increment_ref_count(type__98));
        # 220 "05function4.c"
        list$1charph_add(param_default_parametors_72,((void*)0));
        come_call_finalizer3(type__98,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 228 "05function4.c"
        # 222 "05function4.c"
        if(info->in_class) {
            # 223 "05function4.c"
            list$1charph_add(param_names_71,(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("self")))));
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 224 "05function4.c"
            list$1sTypeph_add(param_types_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(info->impl_type)))));
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 225 "05function4.c"
            list$1charph_add(param_default_parametors_72,((void*)0));
        }
    }
    # 228 "05function4.c"
    expected_next_character(40,info);
    # 231 "05function4.c"
    void_param_99=(_Bool)0;
    # 249 "05function4.c"
    {
        # 233 "05function4.c"
        p_100=info->p;
        # 234 "05function4.c"
        sline_101=info->sline;
        # 245 "05function4.c"
        # 236 "05function4.c"
        if(_if_conditional136=strmemcmp(info->p,"void"),        _if_conditional136) {
            # 237 "05function4.c"
            info->p+=strlen("void");
            # 238 "05function4.c"
            skip_spaces_and_lf(info);
            # 243 "05function4.c"
            # 240 "05function4.c"
            if(_if_conditional137=*info->p==41,            _if_conditional137) {
                # 241 "05function4.c"
                void_param_99=(_Bool)1;
            }
        }
        # 245 "05function4.c"
        info->p=p_100;
        # 246 "05function4.c"
        info->sline=sline_101;
    }
    # 334 "05function4.c"
    # 249 "05function4.c"
    if(void_param_99) {
        # 259 "05function4.c"
        # 250 "05function4.c"
        if(_if_conditional139=strmemcmp(info->p,"void"),        _if_conditional139) {
            # 251 "05function4.c"
            info->p+=strlen("void");
            # 252 "05function4.c"
            skip_spaces_and_lf(info);
            # 258 "05function4.c"
            # 254 "05function4.c"
            if(_if_conditional140=*info->p==41,            _if_conditional140) {
                # 255 "05function4.c"
                info->p++;
                # 256 "05function4.c"
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        # 332 "05function4.c"
        while(_while_condtional31=(_Bool)1,        _while_condtional31) {
            # 268 "05function4.c"
            # 262 "05function4.c"
            if(_if_conditional141=*info->p==41,            _if_conditional141) {
                # 263 "05function4.c"
                info->p++;
                # 264 "05function4.c"
                skip_spaces_and_lf(info);
                # 265 "05function4.c"
                break;
            }
            # 268 "05function4.c"
            parse_sharp_v5(info);
            # 270 "05function4.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value133=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_102=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_103=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_104=multiple_assign_var1->v3;
            come_call_finalizer3(right_value133,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 277 "05function4.c"
            # 272 "05function4.c"
            if(_if_conditional144=!err_104,            _if_conditional144) {
                # 273 "05function4.c"
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                # 274 "05function4.c"
                __result91__ = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value135=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value134=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05function4.c", 274, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")))),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value135,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result91__;
            }
            # 277 "05function4.c"
            param_type2_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=solve_generics(param_type_102,info->generics_type,info))));
            come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 279 "05function4.c"
            param_type2_105->mFunctionParam=(_Bool)1;
            # 281 "05function4.c"
            list$1sTypeph_push_back(param_types_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(param_type2_105)))));
            come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 282 "05function4.c"
            list$1charph_push_back(param_names_71,(char*)come_increment_ref_count(((char*)(right_value144=string_clone(param_name_103)))));
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 311 "05function4.c"
            # 284 "05function4.c"
            if(_if_conditional149=*info->p==61,            _if_conditional149) {
                # 285 "05function4.c"
                info->p++;
                # 286 "05function4.c"
                skip_spaces_and_lf(info);
                # 288 "05function4.c"
                parse_sharp_v5(info);
                # 290 "05function4.c"
                p_112=info->p;
                # 292 "05function4.c"
                no_comma_113=info->no_comma;
                # 293 "05function4.c"
                info->no_comma=(_Bool)1;
                # 295 "05function4.c"
                node_114=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=expression_v13(info))));
                if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 297 "05function4.c"
                info->no_comma=no_comma_113;
                # 299 "05function4.c"
                p2_115=info->p;
                # 301 "05function4.c"
                char buf_116[p2_115-p_112+1];
                memset(&buf_116, 0, sizeof(char)                *(p2_115-p_112+1)                );
                # 302 "05function4.c"
                memcpy(buf_116,p_112,p2_115-p_112);
                # 303 "05function4.c"
                buf_116[p2_115-p_112]=0;
                # 305 "05function4.c"
                list$1charph_push_back(param_default_parametors_72,(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(buf_116)))));
                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_114) { node_114 = come_decrement_ref_count2(node_114, ((struct sNode*)node_114)->finalize, ((struct sNode*)node_114)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 308 "05function4.c"
                list$1charph_push_back(param_default_parametors_72,((void*)0));
            }
            # 311 "05function4.c"
            parse_sharp_v5(info);
            # 331 "05function4.c"
            # 313 "05function4.c"
            if(_if_conditional150=*info->p==44,            _if_conditional150) {
                # 314 "05function4.c"
                info->p++;
                # 315 "05function4.c"
                skip_spaces_and_lf(info);
                # 325 "05function4.c"
                # 317 "05function4.c"
                if(_if_conditional151=strmemcmp(info->p,"..."),                _if_conditional151) {
                    # 318 "05function4.c"
                    info->p+=strlen("...");
                    # 319 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 320 "05function4.c"
                    var_args_73=(_Bool)1;
                    # 322 "05function4.c"
                    expected_next_character(41,info);
                    # 323 "05function4.c"
                    come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                # 331 "05function4.c"
                # 326 "05function4.c"
                if(_if_conditional152=*info->p==41,                _if_conditional152) {
                    # 327 "05function4.c"
                    info->p++;
                    # 328 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 329 "05function4.c"
                    come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer3(param_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_103 = come_decrement_ref_count2(param_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_105,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 334 "05function4.c"
    __result95__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value148=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value147=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 334, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_70),(struct list$1charph*)come_increment_ref_count(param_names_71),(struct list$1charph*)come_increment_ref_count(param_default_parametors_72),var_args_73)));
    come_call_finalizer3(param_types_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value148,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result95__;
    come_call_finalizer3(param_types_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
        # 105 "./neo-c.h"
        self->head=((void*)0);
        # 106 "./neo-c.h"
        self->tail=((void*)0);
        # 107 "./neo-c.h"
        self->len=0;
        # 109 "./neo-c.h"
        __result72__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
        # 105 "./neo-c.h"
        self->head=((void*)0);
        # 106 "./neo-c.h"
        self->tail=((void*)0);
        # 107 "./neo-c.h"
        self->len=0;
        # 109 "./neo-c.h"
        __result73__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value94;
struct list_item$1charph* litem_74;
char* __dec_obj13;
_Bool _if_conditional62;
void* right_value95;
struct list_item$1charph* litem_75;
char* __dec_obj14;
void* right_value96;
struct list_item$1charph* litem_76;
char* __dec_obj15;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value96 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
            # 187 "./neo-c.h"
            # 156 "./neo-c.h"
            if(_if_conditional61=self->len==0,            _if_conditional61) {
                # 157 "./neo-c.h"
                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                come_call_finalizer3(right_value94,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 159 "./neo-c.h"
                litem_74->prev=((void*)0);
                # 160 "./neo-c.h"
                litem_74->next=((void*)0);
                # 161 "./neo-c.h"
                __dec_obj13=litem_74->item;
                litem_74->item=(char*)come_increment_ref_count(item);
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 163 "./neo-c.h"
                self->tail=litem_74;
                # 164 "./neo-c.h"
                self->head=litem_74;
            }
            else {
                # 187 "./neo-c.h"
                # 166 "./neo-c.h"
                if(_if_conditional62=self->len==1,                _if_conditional62) {
                    # 167 "./neo-c.h"
                    litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                    come_call_finalizer3(right_value95,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 169 "./neo-c.h"
                    litem_75->prev=self->head;
                    # 170 "./neo-c.h"
                    litem_75->next=((void*)0);
                    # 171 "./neo-c.h"
                    __dec_obj14=litem_75->item;
                    litem_75->item=(char*)come_increment_ref_count(item);
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 173 "./neo-c.h"
                    self->tail=litem_75;
                    # 174 "./neo-c.h"
                    self->head->next=litem_75;
                }
                else {
                    # 177 "./neo-c.h"
                    litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 177, "list_item$1charph"))));
                    come_call_finalizer3(right_value96,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 179 "./neo-c.h"
                    litem_76->prev=self->tail;
                    # 180 "./neo-c.h"
                    litem_76->next=((void*)0);
                    # 181 "./neo-c.h"
                    __dec_obj15=litem_76->item;
                    litem_76->item=(char*)come_increment_ref_count(item);
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 183 "./neo-c.h"
                    self->tail->next=litem_76;
                    # 184 "./neo-c.h"
                    self->tail=litem_76;
                }
            }
            # 187 "./neo-c.h"
            self->len++;
            # 189 "./neo-c.h"
            __result74__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result74__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional63;
struct sType* __result75__;
void* right_value98;
struct sType* result_77;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value105;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional69;
void* right_value108;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional73;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional74;
void* right_value110;
char* __dec_obj23;
_Bool _if_conditional75;
void* right_value111;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional76;
void* right_value119;
struct list$1sNodeph* __dec_obj28;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value120;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional91;
void* right_value124;
struct list$1charph* __dec_obj30;
_Bool _if_conditional93;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value126;
struct sNode* __dec_obj32;
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
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value127;
struct sNode* __dec_obj33;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value128;
char* __dec_obj34;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value129;
char* __dec_obj35;
_Bool _if_conditional134;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_77, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional63=self==(void*)0,            _if_conditional63) {
                # 2 "sType_clone"
                __result75__ = __result_obj__ = (void*)0;
                return __result75__;
            }
            # 3 "sType_clone"
            result_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value98,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                # 4 "sType_clone"
                result_77->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional65=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional65) {
                # 5 "sType_clone"
                __dec_obj19=result_77->mMultipleTypes;
                result_77->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj19,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional69=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional69) {
                # 6 "sType_clone"
                __dec_obj21=result_77->mNoSolvedGenericsType;
                result_77->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj21,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value108,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional73=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional73) {
                # 7 "sType_clone"
                __dec_obj22=result_77->mOriginalLoadVarType;
                result_77->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj22,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional74=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional74) {
                # 8 "sType_clone"
                __dec_obj23=result_77->mGenericsName;
                result_77->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(self->mGenericsName))));
                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional75=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional75) {
                # 9 "sType_clone"
                __dec_obj24=result_77->mGenericsTypes;
                result_77->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional76=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional76) {
                # 10 "sType_clone"
                __dec_obj28=result_77->mArrayNum;
                result_77->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value119=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj28,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value119,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 11 "sType_clone"
                result_77->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional90=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional90) {
                # 12 "sType_clone"
                __dec_obj29=result_77->mParamTypes;
                result_77->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value120,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional91=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional91) {
                # 13 "sType_clone"
                __dec_obj30=result_77->mParamNames;
                result_77->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value124,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional93=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional93) {
                # 14 "sType_clone"
                __dec_obj31=result_77->mResultType;
                result_77->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value125,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 15 "sType_clone"
                result_77->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional95=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional95) {
                # 16 "sType_clone"
                __dec_obj32=result_77->mAlignas;
                result_77->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 17 "sType_clone"
                result_77->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 18 "sType_clone"
                result_77->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 19 "sType_clone"
                result_77->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 20 "sType_clone"
                result_77->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 21 "sType_clone"
                result_77->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 22 "sType_clone"
                result_77->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 23 "sType_clone"
                result_77->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 24 "sType_clone"
                result_77->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 25 "sType_clone"
                result_77->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 26 "sType_clone"
                result_77->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 27 "sType_clone"
                result_77->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 28 "sType_clone"
                result_77->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 29 "sType_clone"
                result_77->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 30 "sType_clone"
                result_77->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 31 "sType_clone"
                result_77->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 32 "sType_clone"
                result_77->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                # 33 "sType_clone"
                result_77->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 34 "sType_clone"
                result_77->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                # 35 "sType_clone"
                result_77->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                # 36 "sType_clone"
                result_77->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                # 37 "sType_clone"
                result_77->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                # 38 "sType_clone"
                result_77->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                # 39 "sType_clone"
                result_77->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 40 "sType_clone"
                result_77->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional120=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional120) {
                # 41 "sType_clone"
                __dec_obj33=result_77->mSizeNum;
                result_77->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                # 42 "sType_clone"
                result_77->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                # 43 "sType_clone"
                result_77->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional123=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional123) {
                # 44 "sType_clone"
                __dec_obj34=result_77->mOriginalTypeName;
                result_77->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional124=self!=((void*)0),            _if_conditional124) {
                # 45 "sType_clone"
                result_77->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                # 46 "sType_clone"
                result_77->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                # 47 "sType_clone"
                result_77->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                # 48 "sType_clone"
                result_77->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                # 49 "sType_clone"
                result_77->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                # 50 "sType_clone"
                result_77->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                # 51 "sType_clone"
                result_77->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                # 52 "sType_clone"
                result_77->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                # 53 "sType_clone"
                result_77->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional133=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional133) {
                # 54 "sType_clone"
                __dec_obj35=result_77->mAsmName;
                result_77->mAsmName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional134=self!=((void*)0),            _if_conditional134) {
                # 55 "sType_clone"
                result_77->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result89__ = __result_obj__ = result_77;
            come_call_finalizer3(result_77,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result89__;
            come_call_finalizer3(result_77,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1sTypeph* __result76__;
void* right_value99;
void* right_value100;
struct list$1sTypeph* result_78;
struct list_item$1sTypeph* it_79;
_Bool _while_condtional25;
void* right_value104;
struct list$1sTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_78, 0, sizeof(struct list$1sTypeph*));
memset(&it_79, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
                    # 143 "./neo-c.h"
                    # 140 "./neo-c.h"
                    if(_if_conditional66=self==((void*)0),                    _if_conditional66) {
                        # 141 "./neo-c.h"
                        __result76__ = __result_obj__ = ((void*)0);
                        return __result76__;
                    }
                    # 143 "./neo-c.h"
                    result_78=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 143, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value100,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 145 "./neo-c.h"
                    it_79=self->head;
                    # 152 "./neo-c.h"
                    while(_while_condtional25=it_79!=((void*)0),                    _while_condtional25) {
                        # 147 "./neo-c.h"
                        list$1sTypeph_add(result_78,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(it_79->item)))));
                        come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 149 "./neo-c.h"
                        it_79=it_79->next;
                    }
                    # 152 "./neo-c.h"
                    __result78__ = __result_obj__ = result_78;
                    come_call_finalizer3(result_78,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result78__;
                    come_call_finalizer3(result_78,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value101;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj16;
_Bool _if_conditional68;
void* right_value102;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj17;
void* right_value103;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj18;
struct list$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1sTypeph*));
right_value102 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1sTypeph*));
right_value103 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sTypeph*));
                            # 187 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional67=self->len==0,                            _if_conditional67) {
                                # 157 "./neo-c.h"
                                litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value101,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_80->prev=((void*)0);
                                # 160 "./neo-c.h"
                                litem_80->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj16=litem_80->item;
                                litem_80->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_80;
                                # 164 "./neo-c.h"
                                self->head=litem_80;
                            }
                            else {
                                # 187 "./neo-c.h"
                                # 166 "./neo-c.h"
                                if(_if_conditional68=self->len==1,                                _if_conditional68) {
                                    # 167 "./neo-c.h"
                                    litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value102,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_81->prev=self->head;
                                    # 170 "./neo-c.h"
                                    litem_81->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj17=litem_81->item;
                                    litem_81->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail=litem_81;
                                    # 174 "./neo-c.h"
                                    self->head->next=litem_81;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 177, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value103,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 179 "./neo-c.h"
                                    litem_82->prev=self->tail;
                                    # 180 "./neo-c.h"
                                    litem_82->next=((void*)0);
                                    # 181 "./neo-c.h"
                                    __dec_obj18=litem_82->item;
                                    litem_82->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 183 "./neo-c.h"
                                    self->tail->next=litem_82;
                                    # 184 "./neo-c.h"
                                    self->tail=litem_82;
                                }
                            }
                            # 187 "./neo-c.h"
                            self->len++;
                            # 189 "./neo-c.h"
                            __result77__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result77__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_83;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_83, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_84, 0, sizeof(struct list_item$1sTypeph*));
                    # 124 "./neo-c.h"
                    it_83=self->head;
                    # 130 "./neo-c.h"
                    while(_while_condtional26=it_83!=((void*)0),                    _while_condtional26) {
                        # 126 "./neo-c.h"
                        prev_it_84=it_83;
                        # 127 "./neo-c.h"
                        it_83=it_83->next;
                        # 128 "./neo-c.h"
                        come_call_finalizer3(prev_it_84,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional70;
struct tuple1$1sTypeph* __result79__;
void* right_value106;
struct tuple1$1sTypeph* result_85;
_Bool _if_conditional72;
void* right_value107;
struct sType* __dec_obj20;
struct tuple1$1sTypeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_85, 0, sizeof(struct tuple1$1sTypeph*));
right_value107 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional70=self==(void*)0,                    _if_conditional70) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result79__ = __result_obj__ = (void*)0;
                        return __result79__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_85=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value106,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional72=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional72) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj20=result_85->v1;
                        result_85->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value107,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result80__ = __result_obj__ = result_85;
                    come_call_finalizer3(result_85,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                    come_call_finalizer3(result_85,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional71=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional71) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional77;
struct list$1sNodeph* __result81__;
void* right_value112;
void* right_value113;
struct list$1sNodeph* result_86;
struct list_item$1sNodeph* it_87;
_Bool _while_condtional27;
void* right_value118;
struct list$1sNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_86, 0, sizeof(struct list$1sNodeph*));
memset(&it_87, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
                    # 143 "./neo-c.h"
                    # 140 "./neo-c.h"
                    if(_if_conditional77=self==((void*)0),                    _if_conditional77) {
                        # 141 "./neo-c.h"
                        __result81__ = __result_obj__ = ((void*)0);
                        return __result81__;
                    }
                    # 143 "./neo-c.h"
                    result_86=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 143, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value112,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value113,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 145 "./neo-c.h"
                    it_87=self->head;
                    # 152 "./neo-c.h"
                    while(_while_condtional27=it_87!=((void*)0),                    _while_condtional27) {
                        # 147 "./neo-c.h"
                        list$1sNodeph_add(result_86,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(it_87->item)))));
                        if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 149 "./neo-c.h"
                        it_87=it_87->next;
                    }
                    # 152 "./neo-c.h"
                    __result86__ = __result_obj__ = result_86;
                    come_call_finalizer3(result_86,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result86__;
                    come_call_finalizer3(result_86,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 105 "./neo-c.h"
                        self->head=((void*)0);
                        # 106 "./neo-c.h"
                        self->tail=((void*)0);
                        # 107 "./neo-c.h"
                        self->len=0;
                        # 109 "./neo-c.h"
                        __result82__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result82__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional78;
void* right_value114;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
void* right_value115;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj26;
void* right_value116;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj27;
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sNodeph*));
                            # 187 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional78=self->len==0,                            _if_conditional78) {
                                # 157 "./neo-c.h"
                                litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value114,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_88->prev=((void*)0);
                                # 160 "./neo-c.h"
                                litem_88->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj25=litem_88->item;
                                litem_88->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_88;
                                # 164 "./neo-c.h"
                                self->head=litem_88;
                            }
                            else {
                                # 187 "./neo-c.h"
                                # 166 "./neo-c.h"
                                if(_if_conditional79=self->len==1,                                _if_conditional79) {
                                    # 167 "./neo-c.h"
                                    litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value115,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_89->prev=self->head;
                                    # 170 "./neo-c.h"
                                    litem_89->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj26=litem_89->item;
                                    litem_89->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 173 "./neo-c.h"
                                    self->tail=litem_89;
                                    # 174 "./neo-c.h"
                                    self->head->next=litem_89;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 177, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value116,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 179 "./neo-c.h"
                                    litem_90->prev=self->tail;
                                    # 180 "./neo-c.h"
                                    litem_90->next=((void*)0);
                                    # 181 "./neo-c.h"
                                    __dec_obj27=litem_90->item;
                                    litem_90->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 183 "./neo-c.h"
                                    self->tail->next=litem_90;
                                    # 184 "./neo-c.h"
                                    self->tail=litem_90;
                                }
                            }
                            # 187 "./neo-c.h"
                            self->len++;
                            # 189 "./neo-c.h"
                            __result83__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result83__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional80;
struct sNode* __result84__;
void* right_value117;
struct sNode* result_91;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct sNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_91, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional80=self==(void*)0,                            _if_conditional80) {
                                # 2 "sNode_clone"
                                __result84__ = __result_obj__ = (void*)0;
                                return __result84__;
                            }
                            # 3 "sNode_clone"
                            result_91=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional81=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional81) {
                                # 4 "sNode_clone"
                                result_91->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional82=self!=((void*)0),                            _if_conditional82) {
                                # 5 "sNode_clone"
                                result_91->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional83=self!=((void*)0),                            _if_conditional83) {
                                # 6 "sNode_clone"
                                result_91->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional84=self!=((void*)0),                            _if_conditional84) {
                                # 7 "sNode_clone"
                                result_91->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                # 8 "sNode_clone"
                                result_91->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                # 9 "sNode_clone"
                                result_91->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                # 10 "sNode_clone"
                                result_91->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                # 11 "sNode_clone"
                                result_91->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result85__ = __result_obj__ = result_91;
                            if(result_91) { result_91 = come_decrement_ref_count2(result_91, ((struct sNode*)result_91)->finalize, ((struct sNode*)result_91)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result85__;
                            if(result_91) { result_91 = come_decrement_ref_count2(result_91, ((struct sNode*)result_91)->finalize, ((struct sNode*)result_91)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_92;
_Bool _while_condtional28;
struct list_item$1sNodeph* prev_it_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_92, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_93, 0, sizeof(struct list_item$1sNodeph*));
                    # 124 "./neo-c.h"
                    it_92=self->head;
                    # 130 "./neo-c.h"
                    while(_while_condtional28=it_92!=((void*)0),                    _while_condtional28) {
                        # 126 "./neo-c.h"
                        prev_it_93=it_92;
                        # 127 "./neo-c.h"
                        it_92=it_92->next;
                        # 128 "./neo-c.h"
                        come_call_finalizer3(prev_it_93,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional92;
struct list$1charph* __result87__;
void* right_value121;
void* right_value122;
struct list$1charph* result_94;
struct list_item$1charph* it_95;
_Bool _while_condtional29;
void* right_value123;
struct list$1charph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&result_94, 0, sizeof(struct list$1charph*));
memset(&it_95, 0, sizeof(struct list_item$1charph*));
right_value123 = (void*)0;
                    # 143 "./neo-c.h"
                    # 140 "./neo-c.h"
                    if(_if_conditional92=self==((void*)0),                    _if_conditional92) {
                        # 141 "./neo-c.h"
                        __result87__ = __result_obj__ = ((void*)0);
                        return __result87__;
                    }
                    # 143 "./neo-c.h"
                    result_94=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 143, "list$1charph"))))))));
                    come_call_finalizer3(right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value122,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 145 "./neo-c.h"
                    it_95=self->head;
                    # 152 "./neo-c.h"
                    while(_while_condtional29=it_95!=((void*)0),                    _while_condtional29) {
                        # 147 "./neo-c.h"
                        list$1charph_add(result_94,(char*)come_increment_ref_count(((char*)(right_value123=string_clone(it_95->item)))));
                        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 149 "./neo-c.h"
                        it_95=it_95->next;
                    }
                    # 152 "./neo-c.h"
                    __result88__ = __result_obj__ = result_94;
                    come_call_finalizer3(result_94,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result88__;
                    come_call_finalizer3(result_94,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_96;
_Bool _while_condtional30;
struct list_item$1charph* prev_it_97;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1charph*));
                    # 124 "./neo-c.h"
                    it_96=self->head;
                    # 130 "./neo-c.h"
                    while(_while_condtional30=it_96!=((void*)0),                    _while_condtional30) {
                        # 126 "./neo-c.h"
                        prev_it_97=it_96;
                        # 127 "./neo-c.h"
                        it_96=it_96->next;
                        # 128 "./neo-c.h"
                        come_call_finalizer3(prev_it_97,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional142;
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional142=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional142) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional143=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional143) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1843 "./neo-c.h"
                    self->v1=v1;
                    # 1844 "./neo-c.h"
                    self->v2=v2;
                    # 1845 "./neo-c.h"
                    self->v3=v3;
                    # 1846 "./neo-c.h"
                    self->v4=v4;
                    # 1848 "./neo-c.h"
                    __result90__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result90__;
                    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional145;
void* right_value137;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj36;
_Bool _if_conditional146;
void* right_value138;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj37;
void* right_value139;
struct list_item$1sTypeph* litem_108;
struct sType* __dec_obj38;
struct list$1sTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
right_value138 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1sTypeph*));
right_value139 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1sTypeph*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional145=self->len==0,                _if_conditional145) {
                    # 227 "./neo-c.h"
                    litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value137,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_106->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_106->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj36=litem_106->item;
                    litem_106->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_106;
                    # 234 "./neo-c.h"
                    self->head=litem_106;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional146=self->len==1,                    _if_conditional146) {
                        # 237 "./neo-c.h"
                        litem_107=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value138=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value138,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_107->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_107->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj37=litem_107->item;
                        litem_107->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail=litem_107;
                        # 244 "./neo-c.h"
                        self->head->next=litem_107;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_108=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 247, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value139,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_108->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_108->next=((void*)0);
                        # 251 "./neo-c.h"
                        __dec_obj38=litem_108->item;
                        litem_108->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 253 "./neo-c.h"
                        self->tail->next=litem_108;
                        # 254 "./neo-c.h"
                        self->tail=litem_108;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result92__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional147;
void* right_value141;
struct list_item$1charph* litem_109;
char* __dec_obj39;
_Bool _if_conditional148;
void* right_value142;
struct list_item$1charph* litem_110;
char* __dec_obj40;
void* right_value143;
struct list_item$1charph* litem_111;
char* __dec_obj41;
struct list$1charph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
right_value142 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
right_value143 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional147=self->len==0,                _if_conditional147) {
                    # 227 "./neo-c.h"
                    litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                    come_call_finalizer3(right_value141,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_109->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_109->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj39=litem_109->item;
                    litem_109->item=(char*)come_increment_ref_count(item);
                    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_109;
                    # 234 "./neo-c.h"
                    self->head=litem_109;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional148=self->len==1,                    _if_conditional148) {
                        # 237 "./neo-c.h"
                        litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value142,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_110->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_110->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj40=litem_110->item;
                        litem_110->item=(char*)come_increment_ref_count(item);
                        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail=litem_110;
                        # 244 "./neo-c.h"
                        self->head->next=litem_110;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 247, "list_item$1charph"))));
                        come_call_finalizer3(right_value143,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_111->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_111->next=((void*)0);
                        # 251 "./neo-c.h"
                        __dec_obj41=litem_111->item;
                        litem_111->item=(char*)come_increment_ref_count(item);
                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 253 "./neo-c.h"
                        self->tail->next=litem_111;
                        # 254 "./neo-c.h"
                        self->tail=litem_111;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result93__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result93__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1843 "./neo-c.h"
        __dec_obj42=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        # 1844 "./neo-c.h"
        __dec_obj43=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer3(__dec_obj43,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        # 1845 "./neo-c.h"
        __dec_obj44=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        # 1846 "./neo-c.h"
        self->v4=v4;
        # 1848 "./neo-c.h"
        __result94__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result94__;
        come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional153=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional153) {
                # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional154=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional154) {
                # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional155=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional155) {
                # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __result_obj__;
void* right_value149;
struct sType* right_type2_117;
_Bool _if_conditional157;
void* right_value150;
struct sType* left_type2_118;
_Bool found_match_type_119;
struct list$1sTypeph* o2_saved_120;
struct sType* it_121;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value151;
char* tmp_122;
void* right_value152;
char* __dec_obj45;
void* right_value153;
void* right_value154;
struct sType* __dec_obj46;
_Bool __result100__;
struct sType* left_no_solved_generics_type_126;
struct sType* right_no_solved_generics_type_127;
struct sClass* left_class_128;
struct sClass* right_class_129;
_Bool parent_class_130;
_Bool _if_conditional162;
_Bool _while_condtional33;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool __result105__;
int i_136;
_Bool _if_conditional183;
void* right_value155;
char* __dec_obj47;
void* right_value156;
struct sType* __dec_obj48;
void* right_value157;
struct sType* __dec_obj49;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool __result106__;
_Bool _if_conditional191;
_Bool __result107__;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool __result108__;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool __result109__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool __result110__;
void* right_value158;
void* right_value159;
struct buffer* buf2_137;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
char* __dec_obj50;
void* right_value166;
struct sType* __dec_obj51;
void* right_value167;
struct sType* __dec_obj52;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool __result111__;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool __result112__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool __result113__;
void* right_value168;
char* method_name_138;
_Bool _if_conditional233;
struct sType* obj_type_141;
_Bool _if_conditional234;
struct sType* obj_type2_142;
void* right_value169;
void* right_value170;
char* __dec_obj53;
_Bool _if_conditional235;
_Bool __result118__;
void* right_value171;
void* right_value172;
struct buffer* buf2_143;
void* right_value173;
void* right_value174;
struct sType* type_144;
void* right_value175;
void* right_value176;
char* __dec_obj54;
void* right_value177;
struct sType* __dec_obj55;
void* right_value178;
struct sType* __dec_obj56;
_Bool _if_conditional236;
void* right_value179;
char* method_name_145;
_Bool _if_conditional237;
struct sType* obj_type_146;
_Bool _if_conditional238;
struct sType* obj_type2_147;
void* right_value180;
void* right_value181;
char* __dec_obj57;
_Bool _if_conditional239;
_Bool __result119__;
void* right_value182;
void* right_value183;
struct buffer* buf2_148;
void* right_value184;
void* right_value185;
struct sType* type_149;
void* right_value186;
char* __dec_obj58;
void* right_value187;
struct sType* __dec_obj59;
void* right_value188;
struct sType* __dec_obj60;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool __result120__;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool __result121__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool __result122__;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool __result123__;
_Bool _if_conditional259;
void* right_value189;
char* tmp_150;
void* right_value190;
char* __dec_obj61;
void* right_value191;
struct sType* __dec_obj62;
void* right_value192;
struct sType* __dec_obj63;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool __result124__;
_Bool _if_conditional266;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool __result127__;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool __result128__;
_Bool _if_conditional277;
_Bool _if_conditional278;
int i_151;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&right_type2_117, 0, sizeof(struct sType*));
right_value150 = (void*)0;
memset(&left_type2_118, 0, sizeof(struct sType*));
memset(&found_match_type_119, 0, sizeof(_Bool));
memset(&o2_saved_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
right_value151 = (void*)0;
memset(&tmp_122, 0, sizeof(char*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&left_no_solved_generics_type_126, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_127, 0, sizeof(struct sType*));
memset(&left_class_128, 0, sizeof(struct sClass*));
memset(&right_class_129, 0, sizeof(struct sClass*));
memset(&parent_class_130, 0, sizeof(_Bool));
memset(&i_136, 0, sizeof(int));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&buf2_137, 0, sizeof(struct buffer*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&method_name_138, 0, sizeof(char*));
memset(&obj_type_141, 0, sizeof(struct sType*));
memset(&obj_type2_142, 0, sizeof(struct sType*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&buf2_143, 0, sizeof(struct buffer*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&type_144, 0, sizeof(struct sType*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&method_name_145, 0, sizeof(char*));
memset(&obj_type_146, 0, sizeof(struct sType*));
memset(&obj_type2_147, 0, sizeof(struct sType*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&buf2_148, 0, sizeof(struct buffer*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&type_149, 0, sizeof(struct sType*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&tmp_150, 0, sizeof(char*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&i_151, 0, sizeof(int));
    # 339 "05function4.c"
    right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(right_type))));
    come_call_finalizer3(right_value149,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 366 "05function4.c"
    # 341 "05function4.c"
    if(_if_conditional157=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional157) {
        # 342 "05function4.c"
        left_type2_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_type))));
        come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 343 "05function4.c"
        found_match_type_119=(_Bool)0;
        # 350 "05function4.c"
        for(        o2_saved_120=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_121=list$1sTypeph_begin((o2_saved_120));        !list$1sTypeph_end((o2_saved_120));        it_121=list$1sTypeph_next((o2_saved_120))        ){
            # 348 "05function4.c"
            # 345 "05function4.c"
            if(_if_conditional158=check_assign_type(msg,it_121,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional158) {
                # 346 "05function4.c"
                found_match_type_119=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_120,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        # 357 "05function4.c"
        # 350 "05function4.c"
        if(_if_conditional159=!found_match_type_119,        _if_conditional159) {
            # 351 "05function4.c"
            err_msg(info,"type errorX");
            # 352 "05function4.c"
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            # 353 "05function4.c"
            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
            # 354 "05function4.c"
            exit(2);
        }
        # 357 "05function4.c"
        tmp_122=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("(void*)%s",come_value->c_value))));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 358 "05function4.c"
        __dec_obj45=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value152=string_clone(tmp_122))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 359 "05function4.c"
        __dec_obj46=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 359, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value153,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 360 "05function4.c"
        come_value->type->mHeap=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mMultipleTypes,0), "05function4.c", 360, 1))->mHeap;
        # 361 "05function4.c"
        come_value->var=((void*)0);
        # 363 "05function4.c"
        __result100__ = (_Bool)1;
        come_call_finalizer3(left_type2_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_122 = come_decrement_ref_count2(tmp_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result100__;
        come_call_finalizer3(left_type2_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_122 = come_decrement_ref_count2(tmp_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 366 "05function4.c"
    left_no_solved_generics_type_126=left_type->mNoSolvedGenericsType->v1;
    # 367 "05function4.c"
    right_no_solved_generics_type_127=right_type2_117->mNoSolvedGenericsType->v1;
    # 369 "05function4.c"
    left_class_128=left_type->mClass;
    # 370 "05function4.c"
    right_class_129=right_type2_117->mClass;
    # 372 "05function4.c"
    parent_class_130=(_Bool)0;
    # 387 "05function4.c"
    # 373 "05function4.c"
    if(_if_conditional162=string_operator_not_equals(left_class_128->mName,right_class_129->mName),    _if_conditional162) {
        # 385 "05function4.c"
        while(_while_condtional33=left_class_128&&right_class_129,        _while_condtional33) {
            # 378 "05function4.c"
            # 375 "05function4.c"
            if(_if_conditional163=string_operator_equals(left_class_128->mName,right_class_129->mName),            _if_conditional163) {
                # 376 "05function4.c"
                parent_class_130=(_Bool)1;
            }
            # 384 "05function4.c"
            # 378 "05function4.c"
            if(right_class_129->mParentClassName) {
                # 379 "05function4.c"
                right_class_129=map$2charphsClassphp_operator_load_element(info->classes,right_class_129->mParentClassName);
            }
            else {
                # 382 "05function4.c"
                right_class_129=((void*)0);
            }
        }
    }
    # 744 "05function4.c"
    # 387 "05function4.c"
    if(_if_conditional176=left_no_solved_generics_type_126&&right_no_solved_generics_type_127,    _if_conditional176) {
        # 420 "05function4.c"
        # 388 "05function4.c"
        if(_if_conditional177=string_operator_equals(left_type->mClass->mName,right_type2_117->mClass->mName)&&left_type->mPointerNum==right_type2_117->mPointerNum,        _if_conditional177) {
        }
        else {
            # 420 "05function4.c"
            # 390 "05function4.c"
            if(_if_conditional178=string_operator_equals(left_type->mClass->mName,right_type2_117->mClass->mName)&&(left_type->mPointerNum!=right_type2_117->mPointerNum||left_type->mHeap!=right_type2_117->mHeap),            _if_conditional178) {
                # 391 "05function4.c"
                err_msg(info,"poinetr num err");
                # 392 "05function4.c"
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes),left_no_solved_generics_type_126->mClass->mName,left_type->mClass->mName);
                # 393 "05function4.c"
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_127->mGenericsTypes),right_no_solved_generics_type_127->mClass->mName,right_type2_117->mClass->mName);
                # 394 "05function4.c"
                exit(2);
            }
            else {
                # 420 "05function4.c"
                # 396 "05function4.c"
                if(_if_conditional179=list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes)>0,                _if_conditional179) {
                    # 419 "05function4.c"
                    # 397 "05function4.c"
                    if(_if_conditional180=(string_operator_equals(left_no_solved_generics_type_126->mClass->mName,"void")&&left_no_solved_generics_type_126->mPointerNum>0&&right_no_solved_generics_type_127->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_127->mClass->mName,"void")&&right_no_solved_generics_type_127->mPointerNum>0&&left_no_solved_generics_type_126->mPointerNum>0),                    _if_conditional180) {
                    }
                    else {
                        # 413 "05function4.c"
                        # 401 "05function4.c"
                        if(_if_conditional181=list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_127->mGenericsTypes),                        _if_conditional181) {
                            # 410 "05function4.c"
                            # 403 "05function4.c"
                            if(print_err_msg) {
                                # 404 "05function4.c"
                                err_msg(info,"generics type parametor number error");
                                # 405 "05function4.c"
                                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes),left_no_solved_generics_type_126->mClass->mName,left_type->mClass->mName);
                                # 406 "05function4.c"
                                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_127->mGenericsTypes),right_no_solved_generics_type_127->mClass->mName,right_type2_117->mClass->mName);
                                # 407 "05function4.c"
                                exit(2);
                            }
                            # 410 "05function4.c"
                            __result105__ = (_Bool)0;
                            come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result105__;
                        }
                        # 417 "05function4.c"
                        for(                        i_136=0;                        i_136<list$1sTypeph_length(left_no_solved_generics_type_126->mGenericsTypes);                        i_136++                        ){
                            # 414 "05function4.c"
                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_126->mGenericsTypes,i_136), "05function4.c", 414, 2)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_127->mGenericsTypes,i_136), "05function4.c", 414, 3)),come_value,(_Bool)0,(_Bool)1,info);
                        }
                        # 417 "05function4.c"
                        check_assign_type(msg,left_no_solved_generics_type_126,right_no_solved_generics_type_127,come_value,(_Bool)0,(_Bool)1,info);
                    }
                }
            }
        }
    }
    else {
        # 744 "05function4.c"
        # 421 "05function4.c"
        if(_if_conditional183=parent_class_130&&left_type->mPointerNum==1&&right_type->mPointerNum==1,        _if_conditional183) {
            # 422 "05function4.c"
            __dec_obj47=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 423 "05function4.c"
            __dec_obj48=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 424 "05function4.c"
            come_value->var=((void*)0);
            # 426 "05function4.c"
            __dec_obj49=right_type2_117;
            right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            # 744 "05function4.c"
            # 428 "05function4.c"
            if(check_no_pointer) {
                # 476 "05function4.c"
                # 429 "05function4.c"
                if(_if_conditional185=left_type->mPointerNum>0,                _if_conditional185) {
                    # 455 "05function4.c"
                    # 430 "05function4.c"
                    if(_if_conditional186=right_type2_117->mPointerNum>0,                    _if_conditional186) {
                        # 444 "05function4.c"
                        # 431 "05function4.c"
                        if(_if_conditional187=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_117->mClass->mName,"void"),                        _if_conditional187) {
                        }
                        else {
                            # 444 "05function4.c"
                            # 433 "05function4.c"
                            if(_if_conditional188=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                            _if_conditional188) {
                            }
                            else {
                                # 444 "05function4.c"
                                # 435 "05function4.c"
                                if(_if_conditional189=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                                _if_conditional189) {
                                    # 442 "05function4.c"
                                    # 436 "05function4.c"
                                    if(print_err_msg) {
                                        # 437 "05function4.c"
                                        err_msg(info,"type error1");
                                        # 438 "05function4.c"
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        # 439 "05function4.c"
                                        printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                        # 440 "05function4.c"
                                        exit(2);
                                    }
                                    # 442 "05function4.c"
                                    __result106__ = (_Bool)0;
                                    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result106__;
                                }
                            }
                        }
                    }
                    else {
                        # 453 "05function4.c"
                        # 446 "05function4.c"
                        if(print_err_msg) {
                            # 447 "05function4.c"
                            err_msg(info,"type error2");
                            # 448 "05function4.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 449 "05function4.c"
                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                            # 450 "05function4.c"
                            exit(2);
                        }
                        # 453 "05function4.c"
                        __result107__ = (_Bool)0;
                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result107__;
                    }
                }
                else {
                    # 476 "05function4.c"
                    # 456 "05function4.c"
                    if(_if_conditional192=left_type->mPointerNum==0&&right_type2_117->mPointerNum>0,                    _if_conditional192) {
                        # 463 "05function4.c"
                        # 457 "05function4.c"
                        if(print_err_msg) {
                            # 458 "05function4.c"
                            err_msg(info,"type error3");
                            # 459 "05function4.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 460 "05function4.c"
                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                            # 461 "05function4.c"
                            exit(2);
                        }
                        # 463 "05function4.c"
                        __result108__ = (_Bool)0;
                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result108__;
                    }
                    else {
                        # 476 "05function4.c"
                        # 465 "05function4.c"
                        if(_if_conditional194=left_type->mPointerNum>0&&right_type2_117->mPointerNum==0&&string_operator_equals(right_type2_117->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                        _if_conditional194) {
                        }
                        else {
                            # 476 "05function4.c"
                            # 467 "05function4.c"
                            if(_if_conditional195=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                            _if_conditional195) {
                                # 474 "05function4.c"
                                # 468 "05function4.c"
                                if(print_err_msg) {
                                    # 469 "05function4.c"
                                    err_msg(info,"type error4");
                                    # 470 "05function4.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 471 "05function4.c"
                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                    # 472 "05function4.c"
                                    exit(2);
                                }
                                # 474 "05function4.c"
                                __result109__ = (_Bool)0;
                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result109__;
                            }
                        }
                    }
                }
            }
            else {
                # 744 "05function4.c"
                # 477 "05function4.c"
                if(_if_conditional197=!left_type->mNullValue&&right_type2_117->mNullValue,                _if_conditional197) {
                    # 502 "05function4.c"
                    # 478 "05function4.c"
                    if(_if_conditional198=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                    _if_conditional198) {
                    }
                    else {
                        # 502 "05function4.c"
                        # 480 "05function4.c"
                        if(_if_conditional199=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                        _if_conditional199) {
                        }
                        else {
                            # 502 "05function4.c"
                            # 482 "05function4.c"
                            if(_if_conditional200=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum==0,                            _if_conditional200) {
                                # 489 "05function4.c"
                                # 483 "05function4.c"
                                if(print_err_msg) {
                                    # 484 "05function4.c"
                                    err_msg(info,"type error6");
                                    # 485 "05function4.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 486 "05function4.c"
                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                    # 487 "05function4.c"
                                    exit(2);
                                }
                                # 489 "05function4.c"
                                __result110__ = (_Bool)0;
                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result110__;
                            }
                            else {
                                # 492 "05function4.c"
                                buf2_137=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 492, "buffer"))))))));
                                come_call_finalizer3(right_value158,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value159,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                # 494 "05function4.c"
                                buffer_append_str(buf2_137,((char*)(right_value164=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value160=string_to_string(come_value->c_value))),((char*)(right_value161=string_to_string(info->sname))),((char*)(right_value162=int_to_string(info->sline))),((char*)(right_value163=int_to_string(gComeDebugStackFrameID++)))))));
                                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 496 "05function4.c"
                                __dec_obj50=come_value->c_value;
                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value165=buffer_to_string(buf2_137))));
                                __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 497 "05function4.c"
                                __dec_obj51=come_value->type;
                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(left_type))));
                                come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 498 "05function4.c"
                                come_value->var=((void*)0);
                                # 500 "05function4.c"
                                __dec_obj52=right_type2_117;
                                right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(left_type))));
                                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(buf2_137,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
                else {
                    # 744 "05function4.c"
                    # 503 "05function4.c"
                    if(_if_conditional202=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                    _if_conditional202) {
                        # 576 "05function4.c"
                        # 504 "05function4.c"
                        if(_if_conditional203=string_operator_equals(right_type2_117->mClass->mName,"integer")&&right_type2_117->mPointerNum==1,                        _if_conditional203) {
                        }
                        else {
                            # 576 "05function4.c"
                            # 506 "05function4.c"
                            if(_if_conditional204=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                            _if_conditional204) {
                            }
                            else {
                                # 576 "05function4.c"
                                # 508 "05function4.c"
                                if(_if_conditional205=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                _if_conditional205) {
                                }
                                else {
                                    # 576 "05function4.c"
                                    # 510 "05function4.c"
                                    if(_if_conditional206=string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                    _if_conditional206) {
                                        # 517 "05function4.c"
                                        # 511 "05function4.c"
                                        if(print_err_msg) {
                                            # 512 "05function4.c"
                                            err_msg(info,"type error6");
                                            # 513 "05function4.c"
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            # 514 "05function4.c"
                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                            # 515 "05function4.c"
                                            exit(2);
                                        }
                                        # 517 "05function4.c"
                                        __result111__ = (_Bool)0;
                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result111__;
                                    }
                                    else {
                                        # 576 "05function4.c"
                                        # 519 "05function4.c"
                                        if(_if_conditional208=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum>0,                                        _if_conditional208) {
                                        }
                                        else {
                                            # 576 "05function4.c"
                                            # 521 "05function4.c"
                                            if(_if_conditional209=string_operator_equals(right_type2_117->mClass->mName,"void"),                                            _if_conditional209) {
                                                # 528 "05function4.c"
                                                # 522 "05function4.c"
                                                if(print_err_msg) {
                                                    # 523 "05function4.c"
                                                    err_msg(info,"type error6");
                                                    # 524 "05function4.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 525 "05function4.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                    # 526 "05function4.c"
                                                    exit(2);
                                                }
                                                # 528 "05function4.c"
                                                __result112__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result112__;
                                            }
                                            else {
                                                # 576 "05function4.c"
                                                # 530 "05function4.c"
                                                if(_if_conditional211=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                                _if_conditional211) {
                                                }
                                                else {
                                                    # 576 "05function4.c"
                                                    # 532 "05function4.c"
                                                    if(_if_conditional212=right_type2_117->mPointerNum>0,                                                    _if_conditional212) {
                                                        # 539 "05function4.c"
                                                        # 533 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 534 "05function4.c"
                                                            err_msg(info,"type error10");
                                                            # 535 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 536 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                            # 537 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 539 "05function4.c"
                                                        __result113__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result113__;
                                                    }
                                                    else {
                                                        # 542 "05function4.c"
                                                        method_name_138=(char*)come_increment_ref_count(((char*)(right_value168=create_method_name(right_type2_117,(_Bool)0,"to_integer",info,(_Bool)1))));
                                                        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 559 "05function4.c"
                                                        # 544 "05function4.c"
                                                        if(_if_conditional233=map$2charphsFunph_at(info->funcs,method_name_138,((void*)0))==((void*)0),                                                        _if_conditional233) {
                                                            # 545 "05function4.c"
                                                            obj_type_141=right_type2_117->mNoSolvedGenericsType->v1;
                                                            # 557 "05function4.c"
                                                            # 546 "05function4.c"
                                                            if(_if_conditional234=obj_type_141&&list$1sTypeph_length(obj_type_141->mGenericsTypes)>0,                                                            _if_conditional234) {
                                                                # 547 "05function4.c"
                                                                obj_type2_142=right_type2_117;
                                                                # 548 "05function4.c"
                                                                __dec_obj53=method_name_138;
                                                                method_name_138=(char*)come_increment_ref_count(((char*)(right_value170=make_generics_function(obj_type2_142,(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                                __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                # 555 "05function4.c"
                                                                # 551 "05function4.c"
                                                                if(print_err_msg) {
                                                                    # 552 "05function4.c"
                                                                    err_msg(info,"require to_string implementation(%s)",right_type2_117->mClass->mName);
                                                                    # 553 "05function4.c"
                                                                    exit(2);
                                                                }
                                                                # 555 "05function4.c"
                                                                __result118__ = (_Bool)0;
                                                                method_name_138 = come_decrement_ref_count2(method_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result118__;
                                                            }
                                                        }
                                                        # 559 "05function4.c"
                                                        buf2_143=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 559, "buffer"))))))));
                                                        come_call_finalizer3(right_value171,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value172,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 561 "05function4.c"
                                                        buffer_append_str(buf2_143,method_name_138);
                                                        # 562 "05function4.c"
                                                        buffer_append_str(buf2_143,"(");
                                                        # 563 "05function4.c"
                                                        buffer_append_str(buf2_143,come_value->c_value);
                                                        # 564 "05function4.c"
                                                        buffer_append_str(buf2_143,")");
                                                        # 566 "05function4.c"
                                                        type_144=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 566, "sType")))),"integer",(_Bool)0,info))));
                                                        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 567 "05function4.c"
                                                        type_144->mHeap=(_Bool)1;
                                                        # 568 "05function4.c"
                                                        type_144->mPointerNum=1;
                                                        # 570 "05function4.c"
                                                        __dec_obj54=come_value->c_value;
                                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value176=append_object_to_right_values(((char*)(right_value175=buffer_to_string(buf2_143))),(struct sType*)come_increment_ref_count(type_144),info))));
                                                        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 571 "05function4.c"
                                                        __dec_obj55=come_value->type;
                                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(type_144))));
                                                        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 572 "05function4.c"
                                                        come_value->var=((void*)0);
                                                        # 574 "05function4.c"
                                                        __dec_obj56=right_type2_117;
                                                        right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(type_144))));
                                                        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        method_name_138 = come_decrement_ref_count2(method_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(buf2_143,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                        # 744 "05function4.c"
                        # 577 "05function4.c"
                        if(_if_conditional236=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                        _if_conditional236) {
                            # 578 "05function4.c"
                            method_name_145=(char*)come_increment_ref_count(((char*)(right_value179=create_method_name(right_type2_117,(_Bool)0,"to_int",info,(_Bool)1))));
                            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 595 "05function4.c"
                            # 580 "05function4.c"
                            if(_if_conditional237=map$2charphsFunph_at(info->funcs,method_name_145,((void*)0))==((void*)0),                            _if_conditional237) {
                                # 581 "05function4.c"
                                obj_type_146=right_type2_117->mNoSolvedGenericsType->v1;
                                # 593 "05function4.c"
                                # 582 "05function4.c"
                                if(_if_conditional238=obj_type_146&&list$1sTypeph_length(obj_type_146->mGenericsTypes)>0,                                _if_conditional238) {
                                    # 583 "05function4.c"
                                    obj_type2_147=right_type2_117;
                                    # 584 "05function4.c"
                                    __dec_obj57=method_name_145;
                                    method_name_145=(char*)come_increment_ref_count(((char*)(right_value181=make_generics_function(obj_type2_147,(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("to_int")))),info,(_Bool)1))));
                                    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 591 "05function4.c"
                                    # 587 "05function4.c"
                                    if(print_err_msg) {
                                        # 588 "05function4.c"
                                        err_msg(info,"require to_string implementation(%s)",right_type2_117->mClass->mName);
                                        # 589 "05function4.c"
                                        exit(1);
                                    }
                                    # 591 "05function4.c"
                                    __result119__ = (_Bool)0;
                                    method_name_145 = come_decrement_ref_count2(method_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result119__;
                                }
                            }
                            # 595 "05function4.c"
                            buf2_148=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value183=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 595, "buffer"))))))));
                            come_call_finalizer3(right_value182,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value183,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 597 "05function4.c"
                            buffer_append_str(buf2_148,method_name_145);
                            # 598 "05function4.c"
                            buffer_append_str(buf2_148,"(");
                            # 599 "05function4.c"
                            buffer_append_str(buf2_148,come_value->c_value);
                            # 600 "05function4.c"
                            buffer_append_str(buf2_148,")");
                            # 602 "05function4.c"
                            type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 602, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 604 "05function4.c"
                            __dec_obj58=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value186=buffer_to_string(buf2_148))));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 605 "05function4.c"
                            __dec_obj59=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(type_149))));
                            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 606 "05function4.c"
                            come_value->var=((void*)0);
                            # 608 "05function4.c"
                            __dec_obj60=right_type2_117;
                            right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(type_149))));
                            come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value188,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            method_name_145 = come_decrement_ref_count2(method_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(buf2_148,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 744 "05function4.c"
                            # 610 "05function4.c"
                            if(_if_conditional240=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                            _if_conditional240) {
                                # 647 "05function4.c"
                                # 611 "05function4.c"
                                if(_if_conditional241=string_operator_equals(right_type2_117->mClass->mName,"char")&&right_type2_117->mPointerNum==1,                                _if_conditional241) {
                                }
                                else {
                                    # 647 "05function4.c"
                                    # 613 "05function4.c"
                                    if(_if_conditional242=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                                    _if_conditional242) {
                                    }
                                    else {
                                        # 647 "05function4.c"
                                        # 615 "05function4.c"
                                        if(_if_conditional243=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                        _if_conditional243) {
                                        }
                                        else {
                                            # 647 "05function4.c"
                                            # 617 "05function4.c"
                                            if(_if_conditional244=string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                            _if_conditional244) {
                                                # 625 "05function4.c"
                                                # 618 "05function4.c"
                                                if(print_err_msg) {
                                                    # 619 "05function4.c"
                                                    err_msg(info,"type error6");
                                                    # 620 "05function4.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 621 "05function4.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                    # 622 "05function4.c"
                                                    exit(2);
                                                }
                                                # 625 "05function4.c"
                                                __result120__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result120__;
                                            }
                                            else {
                                                # 647 "05function4.c"
                                                # 627 "05function4.c"
                                                if(_if_conditional246=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum>0,                                                _if_conditional246) {
                                                }
                                                else {
                                                    # 647 "05function4.c"
                                                    # 629 "05function4.c"
                                                    if(_if_conditional247=string_operator_equals(right_type2_117->mClass->mName,"void"),                                                    _if_conditional247) {
                                                        # 636 "05function4.c"
                                                        # 630 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 631 "05function4.c"
                                                            err_msg(info,"type error6");
                                                            # 632 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 633 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                            # 634 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 636 "05function4.c"
                                                        __result121__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result121__;
                                                    }
                                                    else {
                                                        # 647 "05function4.c"
                                                        # 638 "05function4.c"
                                                        if(_if_conditional249=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                                                        _if_conditional249) {
                                                            # 645 "05function4.c"
                                                            # 639 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 640 "05function4.c"
                                                                err_msg(info,"type error5");
                                                                # 641 "05function4.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 642 "05function4.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                # 643 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 645 "05function4.c"
                                                            __result122__ = (_Bool)0;
                                                            come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result122__;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                # 744 "05function4.c"
                                # 648 "05function4.c"
                                if(_if_conditional251=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                                _if_conditional251) {
                                    # 676 "05function4.c"
                                    # 649 "05function4.c"
                                    if(_if_conditional252=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum==1,                                    _if_conditional252) {
                                    }
                                    else {
                                        # 676 "05function4.c"
                                        # 651 "05function4.c"
                                        if(_if_conditional253=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                                        _if_conditional253) {
                                        }
                                        else {
                                            # 676 "05function4.c"
                                            # 653 "05function4.c"
                                            if(_if_conditional254=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                            _if_conditional254) {
                                            }
                                            else {
                                                # 676 "05function4.c"
                                                # 655 "05function4.c"
                                                if(_if_conditional255=string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                                _if_conditional255) {
                                                }
                                                else {
                                                    # 676 "05function4.c"
                                                    # 657 "05function4.c"
                                                    if(_if_conditional256=string_operator_equals(right_type2_117->mClass->mName,"void")&&right_type2_117->mPointerNum>0,                                                    _if_conditional256) {
                                                    }
                                                    else {
                                                        # 676 "05function4.c"
                                                        # 659 "05function4.c"
                                                        if(_if_conditional257=string_operator_equals(right_type2_117->mClass->mName,"void"),                                                        _if_conditional257) {
                                                            # 666 "05function4.c"
                                                            # 660 "05function4.c"
                                                            if(print_err_msg) {
                                                                # 661 "05function4.c"
                                                                err_msg(info,"type error6");
                                                                # 662 "05function4.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 663 "05function4.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                # 664 "05function4.c"
                                                                exit(2);
                                                            }
                                                            # 666 "05function4.c"
                                                            __result123__ = (_Bool)0;
                                                            come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result123__;
                                                        }
                                                        else {
                                                            # 676 "05function4.c"
                                                            # 668 "05function4.c"
                                                            if(_if_conditional259=right_type2_117->mPointerNum==0,                                                            _if_conditional259) {
                                                                # 669 "05function4.c"
                                                                tmp_150=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("(void*)%s",come_value->c_value))));
                                                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 670 "05function4.c"
                                                                __dec_obj61=come_value->c_value;
                                                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value190=string_clone(tmp_150))));
                                                                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 671 "05function4.c"
                                                                __dec_obj62=come_value->type;
                                                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_type))));
                                                                come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 672 "05function4.c"
                                                                come_value->var=((void*)0);
                                                                # 674 "05function4.c"
                                                                __dec_obj63=right_type2_117;
                                                                right_type2_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(left_type))));
                                                                come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value192,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                tmp_150 = come_decrement_ref_count2(tmp_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 744 "05function4.c"
                                    # 677 "05function4.c"
                                    if(_if_conditional260=left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct),                                    _if_conditional260) {
                                        # 731 "05function4.c"
                                        # 678 "05function4.c"
                                        if(_if_conditional261=right_type2_117->mPointerNum>0||(right_type2_117->mPointerNum==0&&right_type2_117->mClass->mStruct),                                        _if_conditional261) {
                                            # 702 "05function4.c"
                                            # 679 "05function4.c"
                                            if(_if_conditional262=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_117->mClass->mName,"void"),                                            _if_conditional262) {
                                            }
                                            else {
                                                # 702 "05function4.c"
                                                # 681 "05function4.c"
                                                if(_if_conditional263=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                                _if_conditional263) {
                                                }
                                                else {
                                                    # 702 "05function4.c"
                                                    # 683 "05function4.c"
                                                    if(_if_conditional264=string_operator_not_equals(left_type->mClass->mName,right_type2_117->mClass->mName),                                                    _if_conditional264) {
                                                        # 690 "05function4.c"
                                                        # 684 "05function4.c"
                                                        if(print_err_msg) {
                                                            # 685 "05function4.c"
                                                            err_msg(info,"type error5");
                                                            # 686 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 687 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                            # 688 "05function4.c"
                                                            exit(2);
                                                        }
                                                        # 690 "05function4.c"
                                                        __result124__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result124__;
                                                    }
                                                    else {
                                                        # 702 "05function4.c"
                                                        # 692 "05function4.c"
                                                        if(_if_conditional266=left_type->mPointerNum!=right_type2_117->mPointerNum,                                                        _if_conditional266) {
                                                            # 693 "05function4.c"
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            # 694 "05function4.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 695 "05function4.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                        }
                                                        else {
                                                            # 702 "05function4.c"
                                                            # 697 "05function4.c"
                                                            if(_if_conditional268=list$1sNodeph_length(right_type2_117->mArrayNum)>0,                                                            _if_conditional268) {
                                                                # 698 "05function4.c"
                                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                # 699 "05function4.c"
                                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                                # 700 "05function4.c"
                                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum,list$1sNodeph_length(right_type2_117->mArrayNum));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else {
                                            # 731 "05function4.c"
                                            # 703 "05function4.c"
                                            if(_if_conditional269=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_117->mClass->mName,"void"),                                            _if_conditional269) {
                                            }
                                            else {
                                                # 731 "05function4.c"
                                                # 705 "05function4.c"
                                                if(_if_conditional270=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_117->mClass->mName,"va_list"),                                                _if_conditional270) {
                                                }
                                                else {
                                                    # 731 "05function4.c"
                                                    # 707 "05function4.c"
                                                    if(_if_conditional271=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_117->mClass->mName,"__builtin_va_list"),                                                    _if_conditional271) {
                                                    }
                                                    else {
                                                        # 731 "05function4.c"
                                                        # 709 "05function4.c"
                                                        if(_if_conditional272=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_117->mClass->mName,"lambda"),                                                        _if_conditional272) {
                                                        }
                                                        else {
                                                            # 731 "05function4.c"
                                                            # 711 "05function4.c"
                                                            if(_if_conditional273=left_type->mPointerNum>0&&right_type2_117->mPointerNum==0&&string_operator_equals(right_type2_117->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                            _if_conditional273) {
                                                                # 719 "05function4.c"
                                                                # 712 "05function4.c"
                                                                if(print_err_msg) {
                                                                    # 713 "05function4.c"
                                                                    err_msg(info,"type error10");
                                                                    # 714 "05function4.c"
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    # 715 "05function4.c"
                                                                    printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                    # 716 "05function4.c"
                                                                    exit(2);
                                                                }
                                                                # 719 "05function4.c"
                                                                __result127__ = (_Bool)0;
                                                                come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result127__;
                                                            }
                                                            else {
                                                                # 731 "05function4.c"
                                                                # 721 "05function4.c"
                                                                if(_if_conditional275=!(string_operator_equals(right_type2_117->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_117->mPointerNum==0,                                                                _if_conditional275) {
                                                                    # 728 "05function4.c"
                                                                    # 722 "05function4.c"
                                                                    if(print_err_msg) {
                                                                        # 723 "05function4.c"
                                                                        err_msg(info,"type error6");
                                                                        # 724 "05function4.c"
                                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                        # 725 "05function4.c"
                                                                        printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                                        # 726 "05function4.c"
                                                                        exit(2);
                                                                    }
                                                                    # 728 "05function4.c"
                                                                    __result128__ = (_Bool)0;
                                                                    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result128__;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        # 742 "05function4.c"
                                        # 731 "05function4.c"
                                        if(_if_conditional277=list$1sTypeph_length(left_type->mGenericsTypes)>0,                                        _if_conditional277) {
                                            # 738 "05function4.c"
                                            # 732 "05function4.c"
                                            if(_if_conditional278=list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_117->mGenericsTypes),                                            _if_conditional278) {
                                                # 733 "05function4.c"
                                                err_msg(info,"generics type number error");
                                                # 734 "05function4.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 735 "05function4.c"
                                                printf("right type is %s pointer num %d\n",right_type2_117->mClass->mName,right_type2_117->mPointerNum);
                                                # 736 "05function4.c"
                                                exit(2);
                                            }
                                            # 741 "05function4.c"
                                            for(                                            i_151=0;                                            i_151<list$1sTypeph_length(left_type->mGenericsTypes);                                            i_151++                                            ){
                                                # 739 "05function4.c"
                                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_151), "05function4.c", 739, 4)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_117->mGenericsTypes,i_151), "05function4.c", 739, 5)),come_value,(_Bool)0,(_Bool)1,info);
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
    # 744 "05function4.c"
    __result129__ = (_Bool)1;
    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result129__;
    come_call_finalizer3(right_type2_117,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional156;
int __result96__;
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
        # 368 "./neo-c.h"
        # 365 "./neo-c.h"
        if(_if_conditional156=self==((void*)0),        _if_conditional156) {
            # 366 "./neo-c.h"
            __result96__ = 0;
            return __result96__;
        }
        # 368 "./neo-c.h"
        __result97__ = self->len;
        return __result97__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional160;
struct list_item$1sTypeph* it_123;
int i_124;
_Bool _while_condtional32;
_Bool _if_conditional161;
struct sType* __result98__;
struct sType* default_value_125;
struct sType* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_124, 0, sizeof(int));
memset(&default_value_125, 0, sizeof(struct sType*));
            # 687 "./neo-c.h"
            # 683 "./neo-c.h"
            if(_if_conditional160=position<0,            _if_conditional160) {
                # 684 "./neo-c.h"
                position+=self->len;
            }
            # 687 "./neo-c.h"
            it_123=self->head;
            # 688 "./neo-c.h"
            i_124=0;
            # 695 "./neo-c.h"
            while(_while_condtional32=it_123!=((void*)0),            _while_condtional32) {
                # 693 "./neo-c.h"
                # 690 "./neo-c.h"
                if(_if_conditional161=position==i_124,                _if_conditional161) {
                    # 691 "./neo-c.h"
                    __result98__ = __result_obj__ = it_123->item;
                    return __result98__;
                }
                # 693 "./neo-c.h"
                it_123=it_123->next;
                # 694 "./neo-c.h"
                i_124++;
            }
            # 697 "./neo-c.h"
            # 698 "./neo-c.h"
            memset(&default_value_125,0,sizeof(struct sType*));
            # 699 "./neo-c.h"
            __result99__ = __result_obj__ = default_value_125;
            come_call_finalizer3(default_value_125,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer3(default_value_125,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_131;
unsigned int hash_132;
unsigned int it_133;
_Bool _while_condtional34;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct sClass* __result101__;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct sClass* __result102__;
struct sClass* __result103__;
struct sClass* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_131, 0, sizeof(struct sClass*));
memset(&hash_132, 0, sizeof(unsigned int));
memset(&it_133, 0, sizeof(unsigned int));
                    # 1545 "./neo-c.h"
                    # 1546 "./neo-c.h"
                    memset(&default_value_131,0,sizeof(struct sClass*));
                    # 1548 "./neo-c.h"
                    hash_132=string_get_hash_key(((char*)key))%self->size;
                    # 1549 "./neo-c.h"
                    it_133=hash_132;
                    # 1573 "./neo-c.h"
                    while(_while_condtional34=(_Bool)1,                    _while_condtional34) {
                        # 1571 "./neo-c.h"
                        # 1552 "./neo-c.h"
                        if(_if_conditional165=self->item_existance[it_133],                        _if_conditional165) {
                            # 1559 "./neo-c.h"
                            # 1554 "./neo-c.h"
                            if(_if_conditional166=string_equals(self->keys[it_133],key),                            _if_conditional166) {
                                # 1556 "./neo-c.h"
                                __result101__ = __result_obj__ = self->items[it_133];
                                come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                return __result101__;
                            }
                            # 1559 "./neo-c.h"
                            it_133++;
                            # 1567 "./neo-c.h"
                            # 1561 "./neo-c.h"
                            if(_if_conditional174=it_133>=self->size,                            _if_conditional174) {
                                # 1562 "./neo-c.h"
                                it_133=0;
                            }
                            else {
                                # 1567 "./neo-c.h"
                                # 1564 "./neo-c.h"
                                if(_if_conditional175=it_133==hash_132,                                _if_conditional175) {
                                    # 1565 "./neo-c.h"
                                    __result102__ = __result_obj__ = default_value_131;
                                    come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result102__;
                                }
                            }
                        }
                        else {
                            # 1569 "./neo-c.h"
                            __result103__ = __result_obj__ = default_value_131;
                            come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result103__;
                        }
                    }
                    # 1573 "./neo-c.h"
                    __result104__ = __result_obj__ = default_value_131;
                    come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result104__;
                    come_call_finalizer3(default_value_131,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional172;
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sClass_finalize"
                                    # 0 "sClass_finalize"
                                    if(_if_conditional167=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional167) {
                                        # 0 "sClass_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sClass_finalize"
                                    # 1 "sClass_finalize"
                                    if(_if_conditional168=self!=((void*)0)&&self->mFields!=((void*)0),                                    _if_conditional168) {
                                        # 1 "sClass_finalize"
                                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sClass_finalize"
                                    # 2 "sClass_finalize"
                                    if(_if_conditional172=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                    _if_conditional172) {
                                        # 2 "sClass_finalize"
                                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sClass_finalize"
                                    # 3 "sClass_finalize"
                                    if(_if_conditional173=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                    _if_conditional173) {
                                        # 3 "sClass_finalize"
                                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_134;
_Bool _while_condtional35;
struct list_item$1tuple2$2charphsTypephph* prev_it_135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_134, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_135, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                            # 124 "./neo-c.h"
                                            it_134=self->head;
                                            # 130 "./neo-c.h"
                                            while(_while_condtional35=it_134!=((void*)0),                                            _while_condtional35) {
                                                # 126 "./neo-c.h"
                                                prev_it_135=it_134;
                                                # 127 "./neo-c.h"
                                                it_134=it_134->next;
                                                # 128 "./neo-c.h"
                                                come_call_finalizer3(prev_it_135,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    if(_if_conditional169=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional169) {
                                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            # 0 "tuple2$2charphsTypephp_finalize"
                                                            if(_if_conditional170=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional170) {
                                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            # 2 "tuple2$2charphsTypephp_finalize"
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            if(_if_conditional171=self!=((void*)0)&&self->v2!=((void*)0),                                                            _if_conditional171) {
                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_139;
unsigned int it_140;
_Bool _while_condtional36;
_Bool _if_conditional214;
_Bool _if_conditional215;
struct sFun* __result114__;
_Bool _if_conditional231;
_Bool _if_conditional232;
struct sFun* __result115__;
struct sFun* __result116__;
struct sFun* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_139, 0, sizeof(unsigned int));
memset(&it_140, 0, sizeof(unsigned int));
                                                            # 1227 "./neo-c.h"
                                                            hash_139=string_get_hash_key(((char*)key))%self->size;
                                                            # 1228 "./neo-c.h"
                                                            it_140=hash_139;
                                                            # 1252 "./neo-c.h"
                                                            while(_while_condtional36=(_Bool)1,                                                            _while_condtional36) {
                                                                # 1250 "./neo-c.h"
                                                                # 1231 "./neo-c.h"
                                                                if(_if_conditional214=self->item_existance[it_140],                                                                _if_conditional214) {
                                                                    # 1238 "./neo-c.h"
                                                                    # 1233 "./neo-c.h"
                                                                    if(_if_conditional215=string_equals(self->keys[it_140],key),                                                                    _if_conditional215) {
                                                                        # 1235 "./neo-c.h"
                                                                        __result114__ = __result_obj__ = self->items[it_140];
                                                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result114__;
                                                                    }
                                                                    # 1238 "./neo-c.h"
                                                                    it_140++;
                                                                    # 1246 "./neo-c.h"
                                                                    # 1240 "./neo-c.h"
                                                                    if(_if_conditional231=it_140>=self->size,                                                                    _if_conditional231) {
                                                                        # 1241 "./neo-c.h"
                                                                        it_140=0;
                                                                    }
                                                                    else {
                                                                        # 1246 "./neo-c.h"
                                                                        # 1243 "./neo-c.h"
                                                                        if(_if_conditional232=it_140==hash_139,                                                                        _if_conditional232) {
                                                                            # 1244 "./neo-c.h"
                                                                            __result115__ = __result_obj__ = default_value;
                                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result115__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1248 "./neo-c.h"
                                                                    __result116__ = __result_obj__ = default_value;
                                                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result116__;
                                                                }
                                                            }
                                                            # 1252 "./neo-c.h"
                                                            __result117__ = __result_obj__ = default_value;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result117__;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            # 1 "sFun_finalize"
                                                                            # 0 "sFun_finalize"
                                                                            if(_if_conditional216=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional216) {
                                                                                # 0 "sFun_finalize"
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 2 "sFun_finalize"
                                                                            # 1 "sFun_finalize"
                                                                            if(_if_conditional217=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                            _if_conditional217) {
                                                                                # 1 "sFun_finalize"
                                                                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 3 "sFun_finalize"
                                                                            # 2 "sFun_finalize"
                                                                            if(_if_conditional218=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                            _if_conditional218) {
                                                                                # 2 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 4 "sFun_finalize"
                                                                            # 3 "sFun_finalize"
                                                                            if(_if_conditional219=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                            _if_conditional219) {
                                                                                # 3 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 5 "sFun_finalize"
                                                                            # 4 "sFun_finalize"
                                                                            if(_if_conditional220=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                            _if_conditional220) {
                                                                                # 4 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 6 "sFun_finalize"
                                                                            # 5 "sFun_finalize"
                                                                            if(_if_conditional221=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                            _if_conditional221) {
                                                                                # 5 "sFun_finalize"
                                                                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 7 "sFun_finalize"
                                                                            # 6 "sFun_finalize"
                                                                            if(_if_conditional222=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                            _if_conditional222) {
                                                                                # 6 "sFun_finalize"
                                                                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 8 "sFun_finalize"
                                                                            # 7 "sFun_finalize"
                                                                            if(_if_conditional225=self!=((void*)0)&&self->mSource!=((void*)0),                                                                            _if_conditional225) {
                                                                                # 7 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 9 "sFun_finalize"
                                                                            # 8 "sFun_finalize"
                                                                            if(_if_conditional226=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                            _if_conditional226) {
                                                                                # 8 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 10 "sFun_finalize"
                                                                            # 9 "sFun_finalize"
                                                                            if(_if_conditional227=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                            _if_conditional227) {
                                                                                # 9 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 11 "sFun_finalize"
                                                                            # 10 "sFun_finalize"
                                                                            if(_if_conditional228=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                            _if_conditional228) {
                                                                                # 10 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 12 "sFun_finalize"
                                                                            # 11 "sFun_finalize"
                                                                            if(_if_conditional229=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                            _if_conditional229) {
                                                                                # 11 "sFun_finalize"
                                                                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 13 "sFun_finalize"
                                                                            # 12 "sFun_finalize"
                                                                            if(_if_conditional230=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional230) {
                                                                                # 12 "sFun_finalize"
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sBlock_finalize"
                                                                                    # 0 "sBlock_finalize"
                                                                                    if(_if_conditional223=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                    _if_conditional223) {
                                                                                        # 0 "sBlock_finalize"
                                                                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sBlock_finalize"
                                                                                    # 1 "sBlock_finalize"
                                                                                    if(_if_conditional224=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                    _if_conditional224) {
                                                                                        # 1 "sBlock_finalize"
                                                                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional267;
int __result125__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 368 "./neo-c.h"
                                                                # 365 "./neo-c.h"
                                                                if(_if_conditional267=self==((void*)0),                                                                _if_conditional267) {
                                                                    # 366 "./neo-c.h"
                                                                    __result125__ = 0;
                                                                    return __result125__;
                                                                }
                                                                # 368 "./neo-c.h"
                                                                __result126__ = self->len;
                                                                return __result126__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value193;
struct sType* right_type2_152;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value194;
char* method_name_153;
_Bool _if_conditional288;
struct sType* obj_type_154;
_Bool _if_conditional289;
struct sType* obj_type2_155;
void* right_value195;
void* right_value196;
char* __dec_obj64;
void* right_value197;
void* right_value198;
struct buffer* buf2_156;
void* right_value199;
void* right_value200;
struct sType* type_157;
void* right_value201;
void* right_value202;
char* __dec_obj65;
void* right_value203;
struct sType* __dec_obj66;
void* right_value204;
struct sType* __dec_obj67;
_Bool _if_conditional290;
void* right_value205;
char* method_name_158;
_Bool _if_conditional291;
struct sType* obj_type_159;
_Bool _if_conditional292;
struct sType* obj_type2_160;
void* right_value206;
void* right_value207;
char* __dec_obj68;
void* right_value208;
void* right_value209;
struct buffer* buf2_161;
void* right_value210;
void* right_value211;
struct sType* type_162;
void* right_value212;
char* __dec_obj69;
void* right_value213;
struct sType* __dec_obj70;
void* right_value214;
struct sType* __dec_obj71;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
memset(&right_type2_152, 0, sizeof(struct sType*));
right_value194 = (void*)0;
memset(&method_name_153, 0, sizeof(char*));
memset(&obj_type_154, 0, sizeof(struct sType*));
memset(&obj_type2_155, 0, sizeof(struct sType*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&buf2_156, 0, sizeof(struct buffer*));
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&type_157, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&method_name_158, 0, sizeof(char*));
memset(&obj_type_159, 0, sizeof(struct sType*));
memset(&obj_type2_160, 0, sizeof(struct sType*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&buf2_161, 0, sizeof(struct buffer*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&type_162, 0, sizeof(struct sType*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
    # 749 "05function4.c"
    right_type2_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(right_type))));
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 830 "05function4.c"
    # 750 "05function4.c"
    if(_if_conditional279=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional279) {
        # 799 "05function4.c"
        # 751 "05function4.c"
        if(_if_conditional280=string_operator_equals(right_type2_152->mClass->mName,"integer")&&right_type2_152->mPointerNum==1,        _if_conditional280) {
        }
        else {
            # 799 "05function4.c"
            # 753 "05function4.c"
            if(_if_conditional281=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_152->mClass->mName,"__builtin_va_list"),            _if_conditional281) {
            }
            else {
                # 799 "05function4.c"
                # 755 "05function4.c"
                if(_if_conditional282=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_152->mClass->mName,"va_list"),                _if_conditional282) {
                }
                else {
                    # 799 "05function4.c"
                    # 757 "05function4.c"
                    if(_if_conditional283=string_operator_equals(right_type2_152->mClass->mName,"lambda"),                    _if_conditional283) {
                    }
                    else {
                        # 799 "05function4.c"
                        # 759 "05function4.c"
                        if(_if_conditional284=string_operator_equals(right_type2_152->mClass->mName,"void")&&right_type2_152->mPointerNum>0,                        _if_conditional284) {
                        }
                        else {
                            # 799 "05function4.c"
                            # 761 "05function4.c"
                            if(_if_conditional285=string_operator_equals(right_type2_152->mClass->mName,"void"),                            _if_conditional285) {
                            }
                            else {
                                # 799 "05function4.c"
                                # 763 "05function4.c"
                                if(_if_conditional286=left_type->mPointerNum>0&&right_type2_152->mPointerNum==0&&string_operator_equals(right_type2_152->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional286) {
                                }
                                else {
                                    # 799 "05function4.c"
                                    # 765 "05function4.c"
                                    if(_if_conditional287=right_type->mPointerNum>0,                                    _if_conditional287) {
                                    }
                                    else {
                                        # 768 "05function4.c"
                                        method_name_153=(char*)come_increment_ref_count(((char*)(right_value194=create_method_name(right_type2_152,(_Bool)0,"to_integer",info,(_Bool)1))));
                                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 782 "05function4.c"
                                        # 770 "05function4.c"
                                        if(_if_conditional288=map$2charphsFunph_at(info->funcs,method_name_153,((void*)0))==((void*)0),                                        _if_conditional288) {
                                            # 771 "05function4.c"
                                            obj_type_154=right_type2_152->mNoSolvedGenericsType->v1;
                                            # 780 "05function4.c"
                                            # 772 "05function4.c"
                                            if(_if_conditional289=obj_type_154&&list$1sTypeph_length(obj_type_154->mGenericsTypes)>0,                                            _if_conditional289) {
                                                # 773 "05function4.c"
                                                obj_type2_155=right_type2_152;
                                                # 774 "05function4.c"
                                                __dec_obj64=method_name_153;
                                                method_name_153=(char*)come_increment_ref_count(((char*)(right_value196=make_generics_function(obj_type2_155,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 777 "05function4.c"
                                                err_msg(info,"require to_string implementation(%s)",right_type2_152->mClass->mName);
                                                # 778 "05function4.c"
                                                exit(1);
                                            }
                                        }
                                        # 782 "05function4.c"
                                        buf2_156=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 782, "buffer"))))))));
                                        come_call_finalizer3(right_value197,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value198,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 784 "05function4.c"
                                        buffer_append_str(buf2_156,method_name_153);
                                        # 785 "05function4.c"
                                        buffer_append_str(buf2_156,"(");
                                        # 786 "05function4.c"
                                        buffer_append_str(buf2_156,come_value->c_value);
                                        # 787 "05function4.c"
                                        buffer_append_str(buf2_156,")");
                                        # 789 "05function4.c"
                                        type_157=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value199=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 789, "sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value200,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 790 "05function4.c"
                                        type_157->mHeap=(_Bool)1;
                                        # 791 "05function4.c"
                                        type_157->mPointerNum=1;
                                        # 793 "05function4.c"
                                        __dec_obj65=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value202=append_object_to_right_values(((char*)(right_value201=buffer_to_string(buf2_156))),(struct sType*)come_increment_ref_count(type_157),info))));
                                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 794 "05function4.c"
                                        __dec_obj66=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(type_157))));
                                        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 795 "05function4.c"
                                        come_value->var=((void*)0);
                                        # 797 "05function4.c"
                                        __dec_obj67=right_type2_152;
                                        right_type2_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(type_157))));
                                        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        method_name_153 = come_decrement_ref_count2(method_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(buf2_156,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(type_157,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        # 830 "05function4.c"
        # 800 "05function4.c"
        if(_if_conditional290=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional290) {
            # 801 "05function4.c"
            method_name_158=(char*)come_increment_ref_count(((char*)(right_value205=create_method_name(right_type2_152,(_Bool)0,"to_int",info,(_Bool)1))));
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 815 "05function4.c"
            # 803 "05function4.c"
            if(_if_conditional291=map$2charphsFunph_at(info->funcs,method_name_158,((void*)0))==((void*)0),            _if_conditional291) {
                # 804 "05function4.c"
                obj_type_159=right_type2_152->mNoSolvedGenericsType->v1;
                # 813 "05function4.c"
                # 805 "05function4.c"
                if(_if_conditional292=obj_type_159&&list$1sTypeph_length(obj_type_159->mGenericsTypes)>0,                _if_conditional292) {
                    # 806 "05function4.c"
                    obj_type2_160=right_type2_152;
                    # 807 "05function4.c"
                    __dec_obj68=method_name_158;
                    method_name_158=(char*)come_increment_ref_count(((char*)(right_value207=make_generics_function(obj_type2_160,(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("to_int")))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 810 "05function4.c"
                    err_msg(info,"require to_string implementation(%s)",right_type2_152->mClass->mName);
                    # 811 "05function4.c"
                    exit(1);
                }
            }
            # 815 "05function4.c"
            buf2_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value208=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 815, "buffer"))))))));
            come_call_finalizer3(right_value208,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value209,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 817 "05function4.c"
            buffer_append_str(buf2_161,method_name_158);
            # 818 "05function4.c"
            buffer_append_str(buf2_161,"(");
            # 819 "05function4.c"
            buffer_append_str(buf2_161,come_value->c_value);
            # 820 "05function4.c"
            buffer_append_str(buf2_161,")");
            # 822 "05function4.c"
            type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 822, "sType")))),"int",(_Bool)0,info))));
            come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 824 "05function4.c"
            __dec_obj69=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value212=buffer_to_string(buf2_161))));
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 825 "05function4.c"
            __dec_obj70=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(type_162))));
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 826 "05function4.c"
            come_value->var=((void*)0);
            # 828 "05function4.c"
            __dec_obj71=right_type2_152;
            right_type2_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type_162))));
            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
            method_name_158 = come_decrement_ref_count2(method_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(right_type2_152,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value215;
struct sType* result_type_163;
_Bool _if_conditional293;
char* var_name_164;
char* p_165;
int sline_166;
_Bool _if_conditional294;
void* right_value216;
char* __exception_result_var_b1;
char* word_167;
_Bool _if_conditional295;
_Bool between_brace_168;
char* p_169;
int sline_170;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value217;
char* __exception_result_var_b2;
char* word_171;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _while_condtional37;
char* p_172;
int sline_173;
_Bool _if_conditional301;
void* right_value218;
char* __exception_result_var_b3;
char* word_174;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value219;
char* __exception_result_var_b4;
char* __dec_obj72;
static int num_anonymous_var_name_175=0;
void* right_value220;
char* __dec_obj73;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool no_comma_176;
void* right_value221;
struct sNode* node_177;
struct sNode* __dec_obj74;
_Bool _while_condtional38;
char* p_178;
int sline_179;
_Bool _if_conditional307;
void* right_value222;
char* __exception_result_var_b5;
char* word_180;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value223;
struct sNode* node_181;
void* right_value227;
void* right_value228;
struct tuple2$2sTypephcharph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&result_type_163, 0, sizeof(struct sType*));
memset(&var_name_164, 0, sizeof(char*));
memset(&p_165, 0, sizeof(char*));
memset(&sline_166, 0, sizeof(int));
right_value216 = (void*)0;
memset(&word_167, 0, sizeof(char*));
memset(&between_brace_168, 0, sizeof(_Bool));
memset(&p_169, 0, sizeof(char*));
memset(&sline_170, 0, sizeof(int));
right_value217 = (void*)0;
memset(&word_171, 0, sizeof(char*));
memset(&p_172, 0, sizeof(char*));
memset(&sline_173, 0, sizeof(int));
right_value218 = (void*)0;
memset(&word_174, 0, sizeof(char*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&no_comma_176, 0, sizeof(_Bool));
right_value221 = (void*)0;
memset(&node_177, 0, sizeof(struct sNode*));
memset(&p_178, 0, sizeof(char*));
memset(&sline_179, 0, sizeof(int));
right_value222 = (void*)0;
memset(&word_180, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&node_181, 0, sizeof(struct sNode*));
right_value227 = (void*)0;
right_value228 = (void*)0;
    # 834 "05function4.c"
    result_type_163=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(base_type_name))));
    come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 838 "05function4.c"
    # 835 "05function4.c"
    if(_if_conditional293=!first,    _if_conditional293) {
        # 836 "05function4.c"
        result_type_163->mPointerNum=0;
    }
    # 838 "05function4.c"
    var_name_164=((void*)0);
    # 860 "05function4.c"
    {
        # 841 "05function4.c"
        p_165=info->p;
        # 842 "05function4.c"
        sline_166=info->sline;
        # 858 "05function4.c"
        # 844 "05function4.c"
        if(_if_conditional294=xisalpha(*info->p)||*info->p==95,        _if_conditional294) {
            # 845 "05function4.c"
            word_167=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 845, 6),__exception_result_var_b1=((char*)(right_value216=parse_word(info))), come_pop_stackframe(), __exception_result_var_b1));
            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 853 "05function4.c"
            # 847 "05function4.c"
            if(_if_conditional295=string_operator_equals(word_167,"const")||string_operator_equals(word_167,"__restrict")||string_operator_equals(word_167,"restrict")||string_operator_equals(word_167,"__user")||string_operator_equals(word_167,"volatile")||string_operator_equals(word_167,"_Nonnull")||string_operator_equals(word_167,"_Nullable")||string_operator_equals(word_167,"_Null_unspecified")||string_operator_equals(word_167,"__user")||string_operator_equals(word_167,"_Addr"),            _if_conditional295) {
            }
            else {
                # 850 "05function4.c"
                info->p=p_165;
                # 851 "05function4.c"
                info->sline=sline_166;
            }
            word_167 = come_decrement_ref_count2(word_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 855 "05function4.c"
            info->p=p_165;
            # 856 "05function4.c"
            info->sline=sline_166;
        }
    }
    # 860 "05function4.c"
    between_brace_168=(_Bool)0;
    # 889 "05function4.c"
    {
        # 862 "05function4.c"
        p_169=info->p;
        # 863 "05function4.c"
        sline_170=info->sline;
        # 885 "05function4.c"
        # 865 "05function4.c"
        if(_if_conditional296=*info->p==40,        _if_conditional296) {
            # 866 "05function4.c"
            info->p++;
            # 867 "05function4.c"
            skip_spaces_and_lf(info);
            # 883 "05function4.c"
            # 869 "05function4.c"
            if(_if_conditional297=xisalpha(*info->p)||*info->p==95,            _if_conditional297) {
                # 870 "05function4.c"
                word_171=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 870, 7),__exception_result_var_b2=((char*)(right_value217=parse_word(info))), come_pop_stackframe(), __exception_result_var_b2));
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 882 "05function4.c"
                # 872 "05function4.c"
                if(_if_conditional298=is_type_name(word_171,info),                _if_conditional298) {
                }
                else {
                    # 882 "05function4.c"
                    # 874 "05function4.c"
                    if(_if_conditional299=*info->p==41,                    _if_conditional299) {
                        # 875 "05function4.c"
                        info->p++;
                        # 876 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 881 "05function4.c"
                        # 878 "05function4.c"
                        if(_if_conditional300=*info->p!=40,                        _if_conditional300) {
                            # 879 "05function4.c"
                            between_brace_168=(_Bool)1;
                        }
                    }
                }
                word_171 = come_decrement_ref_count2(word_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 885 "05function4.c"
        info->p=p_169;
        # 886 "05function4.c"
        info->sline=sline_170;
    }
    # 889 "05function4.c"
    parse_sharp_v5(info);
    # 916 "05function4.c"
    while(_while_condtional37=*info->p==42,    _while_condtional37) {
        # 891 "05function4.c"
        info->p++;
        # 892 "05function4.c"
        skip_spaces_and_lf(info);
        # 914 "05function4.c"
        {
            # 895 "05function4.c"
            p_172=info->p;
            # 896 "05function4.c"
            sline_173=info->sline;
            # 912 "05function4.c"
            # 898 "05function4.c"
            if(_if_conditional301=xisalpha(*info->p)||*info->p==95,            _if_conditional301) {
                # 899 "05function4.c"
                word_174=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 899, 8),__exception_result_var_b3=((char*)(right_value218=parse_word(info))), come_pop_stackframe(), __exception_result_var_b3));
                right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 907 "05function4.c"
                # 901 "05function4.c"
                if(_if_conditional302=string_operator_equals(word_174,"const")||string_operator_equals(word_174,"__restrict")||string_operator_equals(word_174,"restrict")||string_operator_equals(word_174,"__user")||string_operator_equals(word_174,"volatile")||string_operator_equals(word_174,"_Nonnull")||string_operator_equals(word_174,"_Nullable")||string_operator_equals(word_174,"_Null_unspecified")||string_operator_equals(word_174,"__user")||string_operator_equals(word_174,"_Addr"),                _if_conditional302) {
                }
                else {
                    # 904 "05function4.c"
                    info->p=p_172;
                    # 905 "05function4.c"
                    info->sline=sline_173;
                }
                word_174 = come_decrement_ref_count2(word_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 909 "05function4.c"
                info->p=p_172;
                # 910 "05function4.c"
                info->sline=sline_173;
            }
        }
        # 914 "05function4.c"
        result_type_163->mPointerNum++;
    }
    # 916 "05function4.c"
    parse_sharp_v5(info);
    # 923 "05function4.c"
    # 918 "05function4.c"
    if(_if_conditional303=between_brace_168&&*info->p==40,    _if_conditional303) {
        # 919 "05function4.c"
        info->p++;
        # 920 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 932 "05function4.c"
    # 923 "05function4.c"
    if(_if_conditional304=xisalnum(*info->p)||*info->p==95,    _if_conditional304) {
        # 924 "05function4.c"
        __dec_obj72=var_name_164;
        var_name_164=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 924, 9),__exception_result_var_b4=((char*)(right_value219=parse_word(info))), come_pop_stackframe(), __exception_result_var_b4));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 927 "05function4.c"
        # 928 "05function4.c"
        num_anonymous_var_name_175++;
        # 929 "05function4.c"
        __dec_obj73=var_name_164;
        var_name_164=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_175))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 937 "05function4.c"
    # 932 "05function4.c"
    if(_if_conditional305=between_brace_168&&*info->p==41,    _if_conditional305) {
        # 933 "05function4.c"
        info->p++;
        # 934 "05function4.c"
        skip_spaces_and_lf(info);
    }
    # 949 "05function4.c"
    # 937 "05function4.c"
    if(_if_conditional306=*info->p==58,    _if_conditional306) {
        # 938 "05function4.c"
        info->p++;
        # 939 "05function4.c"
        skip_spaces_and_lf(info);
        # 941 "05function4.c"
        no_comma_176=info->no_comma;
        # 942 "05function4.c"
        info->no_comma=(_Bool)1;
        # 943 "05function4.c"
        node_177=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=expression_v13(info))));
        if(right_value221) { right_value221 = come_decrement_ref_count2(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 944 "05function4.c"
        info->no_comma=no_comma_176;
        # 946 "05function4.c"
        __dec_obj74=result_type_163->mSizeNum;
        result_type_163->mSizeNum=(struct sNode*)come_increment_ref_count(node_177);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_177) { node_177 = come_decrement_ref_count2(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 990 "05function4.c"
    while(_while_condtional38=*info->p==91,    _while_condtional38) {
        # 950 "05function4.c"
        info->p++;
        # 951 "05function4.c"
        skip_spaces_and_lf(info);
        # 952 "05function4.c"
        parse_sharp_v5(info);
        # 974 "05function4.c"
        {
            # 955 "05function4.c"
            p_178=info->p;
            # 956 "05function4.c"
            sline_179=info->sline;
            # 972 "05function4.c"
            # 958 "05function4.c"
            if(_if_conditional307=xisalpha(*info->p)||*info->p==95,            _if_conditional307) {
                # 959 "05function4.c"
                word_180=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 959, 10),__exception_result_var_b5=((char*)(right_value222=parse_word(info))), come_pop_stackframe(), __exception_result_var_b5));
                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 967 "05function4.c"
                # 961 "05function4.c"
                if(_if_conditional308=string_operator_equals(word_180,"const")||string_operator_equals(word_180,"__restrict")||string_operator_equals(word_180,"restrict")||string_operator_equals(word_180,"__user")||string_operator_equals(word_180,"volatile")||string_operator_equals(word_180,"_Nonnull")||string_operator_equals(word_180,"_Nullable")||string_operator_equals(word_180,"_Null_unspecified")||string_operator_equals(word_180,"__user")||string_operator_equals(word_180,"_Addr"),                _if_conditional308) {
                }
                else {
                    # 964 "05function4.c"
                    info->p=p_178;
                    # 965 "05function4.c"
                    info->sline=sline_179;
                }
                word_180 = come_decrement_ref_count2(word_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 969 "05function4.c"
                info->p=p_178;
                # 970 "05function4.c"
                info->sline=sline_179;
            }
        }
        # 981 "05function4.c"
        # 974 "05function4.c"
        if(_if_conditional309=*info->p==93,        _if_conditional309) {
            # 975 "05function4.c"
            info->p++;
            # 976 "05function4.c"
            skip_spaces_and_lf(info);
            # 978 "05function4.c"
            result_type_163->mPointerNum++;
            # 979 "05function4.c"
            break;
        }
        # 981 "05function4.c"
        parse_sharp_v5(info);
        # 983 "05function4.c"
        node_181=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=expression_v13(info))));
        if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 984 "05function4.c"
        list$1sNodeph_push_back(result_type_163->mArrayNum,(struct sNode*)come_increment_ref_count(node_181));
        # 985 "05function4.c"
        parse_sharp_v5(info);
        # 987 "05function4.c"
        expected_next_character(93,info);
        if(node_181) { node_181 = come_decrement_ref_count2(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 990 "05function4.c"
    __result132__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value228=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value227=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 990, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_163),(char*)come_increment_ref_count(var_name_164))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_163,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_164 = come_decrement_ref_count2(var_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value228,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result132__;
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_163,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_164 = come_decrement_ref_count2(var_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional310;
void* right_value224;
struct list_item$1sNodeph* litem_182;
struct sNode* __dec_obj75;
_Bool _if_conditional311;
void* right_value225;
struct list_item$1sNodeph* litem_183;
struct sNode* __dec_obj76;
void* right_value226;
struct list_item$1sNodeph* litem_184;
struct sNode* __dec_obj77;
struct list$1sNodeph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
memset(&litem_182, 0, sizeof(struct list_item$1sNodeph*));
right_value225 = (void*)0;
memset(&litem_183, 0, sizeof(struct list_item$1sNodeph*));
right_value226 = (void*)0;
memset(&litem_184, 0, sizeof(struct list_item$1sNodeph*));
            # 257 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional310=self->len==0,            _if_conditional310) {
                # 227 "./neo-c.h"
                litem_182=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value224=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value224,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_182->prev=((void*)0);
                # 230 "./neo-c.h"
                litem_182->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj75=litem_182->item;
                litem_182->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
                # 233 "./neo-c.h"
                self->tail=litem_182;
                # 234 "./neo-c.h"
                self->head=litem_182;
            }
            else {
                # 257 "./neo-c.h"
                # 236 "./neo-c.h"
                if(_if_conditional311=self->len==1,                _if_conditional311) {
                    # 237 "./neo-c.h"
                    litem_183=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value225=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value225,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_183->prev=self->head;
                    # 240 "./neo-c.h"
                    litem_183->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj76=litem_183->item;
                    litem_183->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
                    # 243 "./neo-c.h"
                    self->tail=litem_183;
                    # 244 "./neo-c.h"
                    self->head->next=litem_183;
                }
                else {
                    # 247 "./neo-c.h"
                    litem_184=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value226=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 247, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value226,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 249 "./neo-c.h"
                    litem_184->prev=self->tail;
                    # 250 "./neo-c.h"
                    litem_184->next=((void*)0);
                    # 251 "./neo-c.h"
                    __dec_obj77=litem_184->item;
                    litem_184->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
                    # 253 "./neo-c.h"
                    self->tail->next=litem_184;
                    # 254 "./neo-c.h"
                    self->tail=litem_184;
                }
            }
            # 257 "./neo-c.h"
            self->len++;
            # 259 "./neo-c.h"
            __result130__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result130__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj78;
char* __dec_obj79;
struct tuple2$2sTypephcharph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1768 "./neo-c.h"
        __dec_obj78=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1769 "./neo-c.h"
        __dec_obj79=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1771 "./neo-c.h"
        __result131__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result131__;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional312;
_Bool _if_conditional313;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional312=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional312) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional313=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional313) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_185;
int sline_186;
_Bool _if_conditional314;
void* right_value229;
char* __exception_result_var_b6;
char* word_187;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_185, 0, sizeof(char*));
memset(&sline_186, 0, sizeof(int));
right_value229 = (void*)0;
memset(&word_187, 0, sizeof(char*));
    # 995 "05function4.c"
    p_185=info->p;
    # 996 "05function4.c"
    sline_186=info->sline;
    # 1012 "05function4.c"
    # 998 "05function4.c"
    if(_if_conditional314=xisalpha(*info->p)||*info->p==95,    _if_conditional314) {
        # 999 "05function4.c"
        word_187=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 999, 11),__exception_result_var_b6=((char*)(right_value229=parse_word(info))), come_pop_stackframe(), __exception_result_var_b6));
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1007 "05function4.c"
        # 1001 "05function4.c"
        if(_if_conditional315=string_operator_equals(word_187,"const")||string_operator_equals(word_187,"__restrict")||string_operator_equals(word_187,"restrict")||string_operator_equals(word_187,"__user")||string_operator_equals(word_187,"volatile")||string_operator_equals(word_187,"_Nonnull")||string_operator_equals(word_187,"_Nullable")||string_operator_equals(word_187,"_Null_unspecified")||string_operator_equals(word_187,"__user")||string_operator_equals(word_187,"_Addr"),        _if_conditional315) {
        }
        else {
            # 1004 "05function4.c"
            info->p=p_185;
            # 1005 "05function4.c"
            info->sline=sline_186;
        }
        word_187 = come_decrement_ref_count2(word_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1009 "05function4.c"
        info->p=p_185;
        # 1010 "05function4.c"
        info->sline=sline_186;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__;
char* head_188;
int head_sline_189;
void* right_value230;
char* __exception_result_var_b7;
char* type_name_190;
_Bool _while_condtional39;
void* right_value231;
char* __exception_result_var_b8;
char* __dec_obj80;
_Bool record__191;
_Bool constant_192;
_Bool static__193;
_Bool volatile__194;
_Bool register__195;
_Bool unsigned__196;
_Bool long__197;
_Bool long_long_198;
_Bool short__199;
_Bool restrict__200;
_Bool struct__201;
_Bool union__202;
_Bool enum__203;
_Bool no_heap_204;
_Bool extern__205;
_Bool inline__206;
_Bool come_mem_core__207;
struct sNode* alignas__208;
_Bool anonymous_type_209;
_Bool anonymous_name_210;
_Bool _while_condtional40;
_Bool _if_conditional316;
_Bool _if_conditional317;
char* p_211;
int sline_212;
void* right_value232;
_Bool _if_conditional318;
void* right_value233;
char* __dec_obj81;
void* right_value234;
char* __dec_obj82;
_Bool _if_conditional319;
void* right_value235;
char* __exception_result_var_b9;
char* __dec_obj83;
_Bool _if_conditional320;
char* p_213;
int sline_214;
_Bool _while_condtional41;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value236;
void* right_value237;
struct tuple3$3sTypephcharphbool* __result134__;
_Bool _if_conditional324;
char* p_215;
int sline_216;
void* right_value238;
_Bool _if_conditional325;
void* right_value239;
void* right_value240;
struct tuple3$3sTypephcharphbool* __result135__;
_Bool _if_conditional326;
_Bool _if_conditional327;
char* p_217;
int sline_218;
void* right_value241;
_Bool _if_conditional328;
void* right_value242;
char* __dec_obj86;
void* right_value243;
char* __dec_obj87;
void* right_value244;
char* __exception_result_var_b10;
char* __dec_obj88;
_Bool _if_conditional329;
char* p_219;
int sline_220;
void* right_value245;
_Bool _if_conditional330;
void* right_value246;
void* right_value247;
struct tuple3$3sTypephcharphbool* __result136__;
_Bool _if_conditional331;
_Bool _if_conditional332;
char* p_221;
int sline_222;
void* right_value248;
_Bool _if_conditional333;
void* right_value249;
void* right_value250;
struct tuple3$3sTypephcharphbool* __result137__;
void* right_value251;
char* __dec_obj89;
void* right_value252;
char* __exception_result_var_b11;
char* __dec_obj90;
_Bool _if_conditional334;
char* p_223;
int sline_224;
void* right_value253;
_Bool _if_conditional335;
void* right_value254;
void* right_value255;
struct tuple3$3sTypephcharphbool* __result138__;
_Bool _if_conditional336;
void* right_value256;
struct sNode* exp_225;
struct sNode* __dec_obj91;
void* right_value257;
char* __exception_result_var_b12;
char* __dec_obj92;
_Bool _if_conditional337;
void* right_value258;
char* __exception_result_var_b13;
char* __dec_obj93;
_Bool _if_conditional338;
void* right_value259;
char* __exception_result_var_b14;
char* __dec_obj94;
_Bool _if_conditional339;
void* right_value260;
char* __exception_result_var_b15;
char* __dec_obj95;
_Bool _if_conditional340;
void* right_value261;
char* __exception_result_var_b16;
char* __dec_obj96;
_Bool _if_conditional341;
void* right_value262;
char* __exception_result_var_b17;
char* __dec_obj97;
_Bool _if_conditional342;
void* right_value263;
char* __exception_result_var_b18;
char* __dec_obj98;
_Bool _if_conditional343;
void* right_value264;
char* __exception_result_var_b19;
char* __dec_obj99;
_Bool _if_conditional344;
void* right_value265;
char* __exception_result_var_b20;
char* __dec_obj100;
_Bool _if_conditional345;
char* p_226;
int sline_227;
_Bool _if_conditional346;
void* right_value266;
char* __dec_obj101;
void* right_value267;
char* __exception_result_var_b21;
char* __dec_obj102;
_Bool _if_conditional347;
void* right_value268;
char* __exception_result_var_b22;
char* __dec_obj103;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value269;
char* __exception_result_var_b23;
char* __dec_obj104;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value270;
char* __dec_obj105;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value271;
char* __dec_obj106;
_Bool _if_conditional355;
_Bool _if_conditional356;
char* p_228;
int sline_229;
void* right_value272;
char* __exception_result_var_b24;
char* __dec_obj107;
_Bool _if_conditional357;
_Bool _if_conditional358;
char* p_230;
int sline_231;
void* right_value273;
char* __exception_result_var_b25;
char* __dec_obj108;
_Bool _if_conditional359;
void* right_value274;
char* __dec_obj109;
void* right_value275;
char* __dec_obj110;
_Bool _if_conditional360;
_Bool _if_conditional361;
char* p_232;
int sline_233;
void* right_value276;
char* __exception_result_var_b26;
char* __dec_obj111;
_Bool _if_conditional362;
void* right_value277;
char* __dec_obj112;
void* right_value278;
char* __dec_obj113;
_Bool _if_conditional363;
void* right_value279;
char* __dec_obj114;
void* right_value280;
char* __dec_obj115;
_Bool _if_conditional364;
void* right_value281;
char* __exception_result_var_b27;
char* __dec_obj116;
_Bool _if_conditional365;
void* right_value282;
char* __exception_result_var_b28;
char* __dec_obj117;
_Bool _if_conditional366;
void* right_value283;
char* __exception_result_var_b29;
char* __dec_obj118;
_Bool _if_conditional367;
void* right_value284;
char* __exception_result_var_b30;
char* __dec_obj119;
_Bool _if_conditional368;
void* right_value285;
char* __exception_result_var_b31;
char* __dec_obj120;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
char* p_234;
int sline_235;
void* right_value286;
char* __exception_result_var_b32;
char* __dec_obj121;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value287;
char* __dec_obj122;
int pointer_num_236;
_Bool _while_condtional42;
_Bool heap_237;
_Bool _if_conditional375;
_Bool lambda_flag_238;
char* pX_239;
int slineX_240;
_Bool _if_conditional376;
void* right_value288;
char* __exception_result_var_b33;
_Bool _if_conditional377;
struct sType* type_241;
char* var_name_242;
_Bool function_pointer_flag_243;
char* p_244;
int sline_245;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value289;
char* __exception_result_var_b34;
char* word_246;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool var_name_between_brace_247;
char* p_248;
int sline_249;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value290;
char* __exception_result_var_b35;
char* word_250;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
static int anonymous_num_251=0;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value291;
char* __dec_obj123;
void* right_value292;
struct sNode* node_252;
_Bool _if_conditional391;
void* right_value293;
void* right_value294;
struct tuple3$3sTypephcharphbool* __result139__;
int pointer_num_253;
_Bool _while_condtional43;
void* right_value295;
void* right_value296;
struct sType* __dec_obj124;
_Bool _if_conditional392;
_Bool _if_conditional393;
void* right_value297;
char* __dec_obj125;
void* right_value298;
struct sNode* node_254;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value299;
void* right_value300;
struct tuple3$3sTypephcharphbool* __result140__;
void* right_value301;
void* right_value302;
struct sType* __dec_obj126;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value303;
char* __dec_obj127;
void* right_value304;
struct sNode* node_255;
_Bool _if_conditional398;
void* right_value305;
void* right_value306;
struct tuple3$3sTypephcharphbool* __result141__;
int pointer_num_256;
_Bool _while_condtional44;
void* right_value307;
void* right_value308;
struct sType* __dec_obj128;
void* right_value309;
void* right_value310;
struct tuple3$3sTypephcharphbool* __result142__;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value311;
char* __dec_obj129;
_Bool _if_conditional402;
static int num_anonymous_var_name_257=0;
void* right_value312;
char* __dec_obj130;
_Bool _if_conditional403;
void* right_value313;
char* __exception_result_var_b36;
char* __dec_obj131;
static int num_anonymous_var_name_258=0;
void* right_value314;
char* __dec_obj132;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool no_comma_259;
void* right_value315;
struct sNode* node_260;
struct sNode* __dec_obj133;
_Bool _if_conditional406;
struct sType* result_type_261;
_Bool _if_conditional411;
void* right_value316;
struct sType* __dec_obj134;
_Bool _if_conditional417;
int i_270;
_Bool _if_conditional421;
void* right_value317;
void* right_value318;
void* right_value319;
struct sType* __dec_obj135;
_Bool _if_conditional422;
int i_274;
_Bool _if_conditional423;
void* right_value320;
void* right_value321;
void* right_value322;
struct sType* __dec_obj136;
void* right_value323;
void* right_value324;
struct sType* __dec_obj137;
struct sNode* __dec_obj138;
void* right_value325;
char* __exception_result_var_b37;
char* __dec_obj139;
void* right_value326;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_275;
struct list$1charph* param_names_276;
struct list$1charph* param_default_parametors_277;
_Bool var_args_278;
void* right_value327;
void* right_value328;
struct sType* __dec_obj140;
void* right_value329;
void* right_value330;
struct tuple1$1sTypeph* __dec_obj142;
struct list$1sTypeph* __dec_obj143;
struct list$1charph* __dec_obj144;
_Bool _if_conditional424;
_Bool _if_conditional425;
struct sType* result_type_279;
_Bool _if_conditional426;
void* right_value331;
struct sType* __dec_obj145;
_Bool _if_conditional427;
int i_280;
_Bool _if_conditional428;
void* right_value332;
void* right_value333;
void* right_value334;
struct sType* __dec_obj146;
_Bool _if_conditional429;
int i_281;
_Bool _if_conditional430;
void* right_value335;
void* right_value336;
void* right_value337;
struct sType* __dec_obj147;
void* right_value338;
void* right_value339;
struct sType* __dec_obj148;
struct sNode* __dec_obj149;
_Bool _if_conditional431;
void* right_value340;
char* __exception_result_var_b38;
char* __dec_obj150;
_Bool _if_conditional432;
void* right_value341;
void* right_value342;
struct tuple3$3sTypephcharphbool* __result161__;
static int num_anonymous_var_name_282=0;
void* right_value343;
char* __dec_obj151;
void* right_value344;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_283;
struct list$1charph* param_names_284;
struct list$1charph* param_default_parametors_285;
_Bool var_args_286;
void* right_value345;
void* right_value346;
struct sType* __dec_obj152;
void* right_value347;
void* right_value348;
struct tuple1$1sTypeph* __dec_obj153;
struct list$1sTypeph* __dec_obj154;
struct list$1charph* __dec_obj155;
_Bool _if_conditional433;
void* right_value349;
struct sNode* exp_287;
_Bool _if_conditional434;
void* right_value350;
void* right_value351;
struct tuple3$3sTypephcharphbool* __result163__;
void* right_value352;
struct CVALUE* come_value_288;
void* right_value353;
struct sType* __dec_obj157;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value354;
char* __dec_obj158;
_Bool _if_conditional441;
static int num_anonymous_var_name_289=0;
void* right_value355;
char* __dec_obj159;
_Bool _if_conditional442;
void* right_value356;
char* __exception_result_var_b39;
char* __dec_obj160;
static int num_anonymous_var_name_290=0;
void* right_value357;
char* __dec_obj161;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool no_comma_291;
void* right_value358;
struct sNode* node_292;
struct sNode* __dec_obj162;
_Bool _if_conditional445;
void* right_value359;
struct sType* __dec_obj163;
void* right_value360;
char* __dec_obj164;
struct sNode* __dec_obj165;
_Bool _if_conditional446;
int i_293;
_Bool _if_conditional447;
void* right_value361;
void* right_value362;
void* right_value363;
struct sType* __dec_obj166;
struct sNode* __dec_obj167;
_Bool _if_conditional448;
int i_294;
_Bool _if_conditional449;
void* right_value364;
void* right_value365;
void* right_value366;
struct sType* __dec_obj168;
struct sNode* __dec_obj169;
_Bool _if_conditional450;
_Bool _if_conditional451;
void* right_value367;
void* right_value368;
struct tuple3$3sTypephcharphbool* __result164__;
void* right_value369;
void* right_value370;
struct sType* __dec_obj170;
_Bool _while_condtional47;
void* right_value371;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_295;
char* var_name_296;
_Bool err_297;
_Bool _if_conditional452;
void* right_value372;
void* right_value373;
struct tuple3$3sTypephcharphbool* __result165__;
_Bool _if_conditional453;
_Bool _if_conditional454;
void* right_value374;
void* right_value375;
struct tuple3$3sTypephcharphbool* __result166__;
_Bool _if_conditional455;
void* right_value376;
struct sType* __dec_obj171;
_Bool _if_conditional456;
void* right_value377;
char* new_name_298;
struct sNode* __dec_obj172;
_Bool _if_conditional457;
struct sClass* klass_299;
_Bool _if_conditional458;
void* right_value384;
void* right_value385;
void* right_value386;
void* right_value387;
struct sType* __dec_obj173;
struct sNode* __dec_obj174;
_Bool _while_condtional56;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
_Bool _if_conditional512;
_Bool _if_conditional513;
_Bool _while_condtional57;
_Bool _if_conditional514;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
void* right_value388;
void* right_value389;
struct list$1sTypeph* types_344;
void* right_value390;
_Bool _while_condtional58;
void* right_value391;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_345;
char* name_346;
_Bool err_347;
_Bool _if_conditional518;
void* right_value392;
void* right_value393;
struct tuple3$3sTypephcharphbool* __result191__;
void* right_value394;
int num_tuples_348;
void* right_value395;
void* right_value396;
void* right_value397;
struct sType* __dec_obj175;
struct list$1sTypeph* o2_saved_349;
struct sType* it_350;
void* right_value398;
_Bool _if_conditional519;
void* right_value399;
struct sType* __dec_obj176;
_Bool _if_conditional520;
void* right_value400;
char* new_name_351;
_Bool _if_conditional521;
_Bool _if_conditional522;
_Bool _if_conditional523;
void* right_value401;
char* __dec_obj177;
_Bool _if_conditional524;
static int num_anonymous_var_name_352=0;
void* right_value402;
char* __dec_obj178;
_Bool _if_conditional525;
void* right_value403;
char* __exception_result_var_b40;
char* __dec_obj179;
static int num_anonymous_var_name_353=0;
void* right_value404;
char* __dec_obj180;
_Bool _if_conditional526;
_Bool _if_conditional527;
_Bool no_comma_354;
void* right_value405;
struct sNode* node_355;
struct sNode* __dec_obj181;
_Bool _while_condtional59;
_Bool _if_conditional528;
void* right_value406;
struct sNode* node_356;
void* right_value407;
char* asm_name_357;
char* __dec_obj182;
void* right_value408;
void* right_value409;
struct tuple3$3sTypephcharphbool* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_188, 0, sizeof(char*));
memset(&head_sline_189, 0, sizeof(int));
right_value230 = (void*)0;
memset(&type_name_190, 0, sizeof(char*));
right_value231 = (void*)0;
memset(&record__191, 0, sizeof(_Bool));
memset(&constant_192, 0, sizeof(_Bool));
memset(&static__193, 0, sizeof(_Bool));
memset(&volatile__194, 0, sizeof(_Bool));
memset(&register__195, 0, sizeof(_Bool));
memset(&unsigned__196, 0, sizeof(_Bool));
memset(&long__197, 0, sizeof(_Bool));
memset(&long_long_198, 0, sizeof(_Bool));
memset(&short__199, 0, sizeof(_Bool));
memset(&restrict__200, 0, sizeof(_Bool));
memset(&struct__201, 0, sizeof(_Bool));
memset(&union__202, 0, sizeof(_Bool));
memset(&enum__203, 0, sizeof(_Bool));
memset(&no_heap_204, 0, sizeof(_Bool));
memset(&extern__205, 0, sizeof(_Bool));
memset(&inline__206, 0, sizeof(_Bool));
memset(&come_mem_core__207, 0, sizeof(_Bool));
memset(&alignas__208, 0, sizeof(struct sNode*));
memset(&anonymous_type_209, 0, sizeof(_Bool));
memset(&anonymous_name_210, 0, sizeof(_Bool));
memset(&p_211, 0, sizeof(char*));
memset(&sline_212, 0, sizeof(int));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&p_213, 0, sizeof(char*));
memset(&sline_214, 0, sizeof(int));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&p_215, 0, sizeof(char*));
memset(&sline_216, 0, sizeof(int));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&p_217, 0, sizeof(char*));
memset(&sline_218, 0, sizeof(int));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&p_219, 0, sizeof(char*));
memset(&sline_220, 0, sizeof(int));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&p_221, 0, sizeof(char*));
memset(&sline_222, 0, sizeof(int));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&p_223, 0, sizeof(char*));
memset(&sline_224, 0, sizeof(int));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&exp_225, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&p_226, 0, sizeof(char*));
memset(&sline_227, 0, sizeof(int));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&p_228, 0, sizeof(char*));
memset(&sline_229, 0, sizeof(int));
right_value272 = (void*)0;
memset(&p_230, 0, sizeof(char*));
memset(&sline_231, 0, sizeof(int));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&p_232, 0, sizeof(char*));
memset(&sline_233, 0, sizeof(int));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&p_234, 0, sizeof(char*));
memset(&sline_235, 0, sizeof(int));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&pointer_num_236, 0, sizeof(int));
memset(&heap_237, 0, sizeof(_Bool));
memset(&lambda_flag_238, 0, sizeof(_Bool));
memset(&pX_239, 0, sizeof(char*));
memset(&slineX_240, 0, sizeof(int));
right_value288 = (void*)0;
memset(&type_241, 0, sizeof(struct sType*));
memset(&var_name_242, 0, sizeof(char*));
memset(&function_pointer_flag_243, 0, sizeof(_Bool));
memset(&p_244, 0, sizeof(char*));
memset(&sline_245, 0, sizeof(int));
right_value289 = (void*)0;
memset(&word_246, 0, sizeof(char*));
memset(&var_name_between_brace_247, 0, sizeof(_Bool));
memset(&p_248, 0, sizeof(char*));
memset(&sline_249, 0, sizeof(int));
right_value290 = (void*)0;
memset(&word_250, 0, sizeof(char*));
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&node_252, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&pointer_num_253, 0, sizeof(int));
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&node_254, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&node_255, 0, sizeof(struct sNode*));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&pointer_num_256, 0, sizeof(int));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&no_comma_259, 0, sizeof(_Bool));
right_value315 = (void*)0;
memset(&node_260, 0, sizeof(struct sNode*));
memset(&result_type_261, 0, sizeof(struct sType*));
right_value316 = (void*)0;
memset(&i_270, 0, sizeof(int));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&i_274, 0, sizeof(int));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&param_types_275, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_276, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_277, 0, sizeof(struct list$1charph*));
memset(&var_args_278, 0, sizeof(_Bool));
memset(&param_types_275, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_276, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_277, 0, sizeof(struct list$1charph*));
memset(&var_args_278, 0, sizeof(_Bool));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&result_type_279, 0, sizeof(struct sType*));
right_value331 = (void*)0;
memset(&i_280, 0, sizeof(int));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&i_281, 0, sizeof(int));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&param_types_283, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_284, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_285, 0, sizeof(struct list$1charph*));
memset(&var_args_286, 0, sizeof(_Bool));
memset(&param_types_283, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_284, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_285, 0, sizeof(struct list$1charph*));
memset(&var_args_286, 0, sizeof(_Bool));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&exp_287, 0, sizeof(struct sNode*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&come_value_288, 0, sizeof(struct CVALUE*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&no_comma_291, 0, sizeof(_Bool));
right_value358 = (void*)0;
memset(&node_292, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&i_293, 0, sizeof(int));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&i_294, 0, sizeof(int));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&generics_type_295, 0, sizeof(struct sType*));
memset(&var_name_296, 0, sizeof(char*));
memset(&err_297, 0, sizeof(_Bool));
memset(&generics_type_295, 0, sizeof(struct sType*));
memset(&var_name_296, 0, sizeof(char*));
memset(&err_297, 0, sizeof(_Bool));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&new_name_298, 0, sizeof(char*));
memset(&klass_299, 0, sizeof(struct sClass*));
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&types_344, 0, sizeof(struct list$1sTypeph*));
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&type2_345, 0, sizeof(struct sType*));
memset(&name_346, 0, sizeof(char*));
memset(&err_347, 0, sizeof(_Bool));
memset(&type2_345, 0, sizeof(struct sType*));
memset(&name_346, 0, sizeof(char*));
memset(&err_347, 0, sizeof(_Bool));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&num_tuples_348, 0, sizeof(int));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&o2_saved_349, 0, sizeof(struct list$1sTypeph*));
memset(&it_350, 0, sizeof(struct sType*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&new_name_351, 0, sizeof(char*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
memset(&no_comma_354, 0, sizeof(_Bool));
right_value405 = (void*)0;
memset(&node_355, 0, sizeof(struct sNode*));
right_value406 = (void*)0;
memset(&node_356, 0, sizeof(struct sNode*));
right_value407 = (void*)0;
memset(&asm_name_357, 0, sizeof(char*));
right_value408 = (void*)0;
right_value409 = (void*)0;
    # 1016 "05function4.c"
    head_188=info->p;
    # 1017 "05function4.c"
    head_sline_189=info->sline;
    # 1018 "05function4.c"
    info->define_struct=(_Bool)0;
    # 1020 "05function4.c"
    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1020, 12),__exception_result_var_b7=((char*)(right_value230=parse_word(info))), come_pop_stackframe(), __exception_result_var_b7));
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1025 "05function4.c"
    while(_while_condtional39=string_operator_equals(type_name_190,"__extension__"),    _while_condtional39) {
        # 1022 "05function4.c"
        __dec_obj80=type_name_190;
        type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1022, 13),__exception_result_var_b8=((char*)(right_value231=parse_word(info))), come_pop_stackframe(), __exception_result_var_b8));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1025 "05function4.c"
    record__191=(_Bool)0;
    # 1026 "05function4.c"
    constant_192=(_Bool)0;
    # 1027 "05function4.c"
    static__193=(_Bool)0;
    # 1028 "05function4.c"
    volatile__194=(_Bool)0;
    # 1029 "05function4.c"
    register__195=(_Bool)0;
    # 1030 "05function4.c"
    unsigned__196=(_Bool)0;
    # 1031 "05function4.c"
    long__197=(_Bool)0;
    # 1032 "05function4.c"
    long_long_198=(_Bool)0;
    # 1033 "05function4.c"
    short__199=(_Bool)0;
    # 1034 "05function4.c"
    restrict__200=(_Bool)0;
    # 1035 "05function4.c"
    struct__201=(_Bool)0;
    # 1036 "05function4.c"
    union__202=(_Bool)0;
    # 1037 "05function4.c"
    enum__203=(_Bool)0;
    # 1038 "05function4.c"
    no_heap_204=(_Bool)0;
    # 1039 "05function4.c"
    extern__205=(_Bool)0;
    # 1040 "05function4.c"
    inline__206=(_Bool)0;
    # 1041 "05function4.c"
    come_mem_core__207=(_Bool)0;
    # 1043 "05function4.c"
    alignas__208=((void*)0);
    # 1045 "05function4.c"
    anonymous_type_209=(_Bool)0;
    # 1046 "05function4.c"
    anonymous_name_210=(_Bool)0;
    # 1487 "05function4.c"
    while(_while_condtional40=(_Bool)1,    _while_condtional40) {
        # 1485 "05function4.c"
        # 1049 "05function4.c"
        if(_if_conditional316=string_operator_equals(type_name_190,"struct"),        _if_conditional316) {
            # 1050 "05function4.c"
            struct__201=(_Bool)1;
            # 1075 "05function4.c"
            # 1052 "05function4.c"
            if(_if_conditional317=*info->p==123,            _if_conditional317) {
                # 1053 "05function4.c"
                p_211=info->p;
                # 1054 "05function4.c"
                sline_212=info->sline;
                # 1056 "05function4.c"
                ((char*)(right_value232=skip_block(info)));
                right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1073 "05function4.c"
                # 1058 "05function4.c"
                if(_if_conditional318=*info->p==59,                _if_conditional318) {
                    # 1059 "05function4.c"
                    anonymous_name_210=(_Bool)1;
                    # 1060 "05function4.c"
                    anonymous_type_209=(_Bool)1;
                    # 1061 "05function4.c"
                    __dec_obj81=type_name_190;
                    type_name_190=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(""))));
                    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1062 "05function4.c"
                    info->p=p_211;
                    # 1063 "05function4.c"
                    info->sline=sline_212;
                    # 1064 "05function4.c"
                    break;
                }
                else {
                    # 1067 "05function4.c"
                    anonymous_type_209=(_Bool)1;
                    # 1068 "05function4.c"
                    __dec_obj82=type_name_190;
                    type_name_190=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(""))));
                    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1069 "05function4.c"
                    info->p=p_211;
                    # 1070 "05function4.c"
                    info->sline=sline_212;
                    # 1071 "05function4.c"
                    break;
                }
            }
            # 1075 "05function4.c"
            parse_sharp_v5(info);
            # 1132 "05function4.c"
            # 1077 "05function4.c"
            if(_if_conditional319=*info->p!=62,            _if_conditional319) {
                # 1078 "05function4.c"
                __dec_obj83=type_name_190;
                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1078, 14),__exception_result_var_b9=((char*)(right_value235=parse_word(info))), come_pop_stackframe(), __exception_result_var_b9));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1080 "05function4.c"
                parse_sharp_v5(info);
                # 1112 "05function4.c"
                # 1082 "05function4.c"
                if(_if_conditional320=*info->p==60,                _if_conditional320) {
                    # 1083 "05function4.c"
                    p_213=info->p;
                    # 1084 "05function4.c"
                    sline_214=info->sline;
                    # 1086 "05function4.c"
                    info->p++;
                    # 1087 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 1110 "05function4.c"
                    while(_while_condtional41=(_Bool)1,                    _while_condtional41) {
                        # 1109 "05function4.c"
                        # 1090 "05function4.c"
                        if(_if_conditional321=*info->p==62,                        _if_conditional321) {
                            # 1091 "05function4.c"
                            info->p++;
                            # 1092 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 1100 "05function4.c"
                            # 1094 "05function4.c"
                            if(_if_conditional322=*info->p==123,                            _if_conditional322) {
                            }
                            else {
                                # 1097 "05function4.c"
                                info->p=p_213;
                                # 1098 "05function4.c"
                                info->sline=sline_214;
                            }
                            # 1100 "05function4.c"
                            break;
                        }
                        else {
                            # 1109 "05function4.c"
                            # 1102 "05function4.c"
                            if(_if_conditional323=*info->p==0,                            _if_conditional323) {
                                # 1103 "05function4.c"
                                err_msg(info,"invalid struct definition");
                                # 1104 "05function4.c"
                                __result134__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value237=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value236=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1104, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value236,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value237,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result134__;
                            }
                            else {
                                # 1107 "05function4.c"
                                info->p++;
                            }
                        }
                    }
                }
                # 1131 "05function4.c"
                # 1112 "05function4.c"
                if(_if_conditional324=*info->p==123,                _if_conditional324) {
                    # 1113 "05function4.c"
                    p_215=info->p;
                    # 1114 "05function4.c"
                    sline_216=info->sline;
                    # 1116 "05function4.c"
                    ((char*)(right_value238=skip_block(info)));
                    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1130 "05function4.c"
                    # 1118 "05function4.c"
                    if(_if_conditional325=*info->p==59,                    _if_conditional325) {
                        # 1119 "05function4.c"
                        info->p=head_188;
                        # 1120 "05function4.c"
                        info->sline=head_sline_189;
                        # 1121 "05function4.c"
                        info->define_struct=(_Bool)1;
                        # 1122 "05function4.c"
                        __result135__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value240=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value239=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1122, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value239,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value240,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result135__;
                    }
                    else {
                        # 1125 "05function4.c"
                        anonymous_type_209=(_Bool)1;
                        # 1126 "05function4.c"
                        info->p=p_215;
                        # 1127 "05function4.c"
                        info->sline=sline_216;
                        # 1128 "05function4.c"
                        break;
                    }
                }
            }
        }
        else {
            # 1485 "05function4.c"
            # 1133 "05function4.c"
            if(_if_conditional326=string_operator_equals(type_name_190,"union"),            _if_conditional326) {
                # 1134 "05function4.c"
                union__202=(_Bool)1;
                # 1162 "05function4.c"
                # 1136 "05function4.c"
                if(_if_conditional327=*info->p==123,                _if_conditional327) {
                    # 1137 "05function4.c"
                    p_217=info->p;
                    # 1138 "05function4.c"
                    sline_218=info->sline;
                    # 1140 "05function4.c"
                    ((char*)(right_value241=skip_block(info)));
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1160 "05function4.c"
                    # 1142 "05function4.c"
                    if(_if_conditional328=*info->p==59,                    _if_conditional328) {
                        # 1143 "05function4.c"
                        info->p=head_188;
                        # 1144 "05function4.c"
                        info->sline=head_sline_189;
                        # 1146 "05function4.c"
                        info->define_struct=(_Bool)0;
                        # 1147 "05function4.c"
                        anonymous_type_209=(_Bool)1;
                        # 1148 "05function4.c"
                        __dec_obj86=type_name_190;
                        type_name_190=(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(""))));
                        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1149 "05function4.c"
                        info->p=p_217;
                        # 1150 "05function4.c"
                        info->sline=sline_218;
                        # 1151 "05function4.c"
                        break;
                    }
                    else {
                        # 1154 "05function4.c"
                        anonymous_type_209=(_Bool)1;
                        # 1155 "05function4.c"
                        __dec_obj87=type_name_190;
                        type_name_190=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(""))));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1156 "05function4.c"
                        info->p=p_217;
                        # 1157 "05function4.c"
                        info->sline=sline_218;
                        # 1158 "05function4.c"
                        break;
                    }
                }
                # 1162 "05function4.c"
                parse_sharp_v5(info);
                # 1164 "05function4.c"
                __dec_obj88=type_name_190;
                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1164, 15),__exception_result_var_b10=((char*)(right_value244=parse_word(info))), come_pop_stackframe(), __exception_result_var_b10));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1166 "05function4.c"
                parse_sharp_v5(info);
                # 1187 "05function4.c"
                # 1168 "05function4.c"
                if(_if_conditional329=*info->p==123,                _if_conditional329) {
                    # 1169 "05function4.c"
                    p_219=info->p;
                    # 1170 "05function4.c"
                    sline_220=info->sline;
                    # 1172 "05function4.c"
                    ((char*)(right_value245=skip_block(info)));
                    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1186 "05function4.c"
                    # 1174 "05function4.c"
                    if(_if_conditional330=*info->p==59,                    _if_conditional330) {
                        # 1175 "05function4.c"
                        info->p=head_188;
                        # 1176 "05function4.c"
                        info->sline=head_sline_189;
                        # 1177 "05function4.c"
                        info->define_struct=(_Bool)1;
                        # 1178 "05function4.c"
                        __result136__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value247=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value246=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1178, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value246,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value247,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result136__;
                    }
                    else {
                        # 1181 "05function4.c"
                        anonymous_type_209=(_Bool)1;
                        # 1182 "05function4.c"
                        info->p=p_219;
                        # 1183 "05function4.c"
                        info->sline=sline_220;
                        # 1184 "05function4.c"
                        break;
                    }
                }
            }
            else {
                # 1485 "05function4.c"
                # 1188 "05function4.c"
                if(_if_conditional331=string_operator_equals(type_name_190,"enum"),                _if_conditional331) {
                    # 1189 "05function4.c"
                    enum__203=(_Bool)1;
                    # 1191 "05function4.c"
                    parse_sharp_v5(info);
                    # 1214 "05function4.c"
                    # 1193 "05function4.c"
                    if(_if_conditional332=*info->p==123,                    _if_conditional332) {
                        # 1194 "05function4.c"
                        p_221=info->p;
                        # 1195 "05function4.c"
                        sline_222=info->sline;
                        # 1197 "05function4.c"
                        ((char*)(right_value248=skip_block(info)));
                        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1212 "05function4.c"
                        # 1199 "05function4.c"
                        if(_if_conditional333=*info->p==59,                        _if_conditional333) {
                            # 1200 "05function4.c"
                            info->p=head_188;
                            # 1201 "05function4.c"
                            info->sline=head_sline_189;
                            # 1202 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1203 "05function4.c"
                            __result137__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value250=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value249=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1203, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value249,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value250,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result137__;
                        }
                        else {
                            # 1206 "05function4.c"
                            anonymous_type_209=(_Bool)1;
                            # 1207 "05function4.c"
                            __dec_obj89=type_name_190;
                            type_name_190=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(""))));
                            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1208 "05function4.c"
                            info->p=p_221;
                            # 1209 "05function4.c"
                            info->sline=sline_222;
                            # 1210 "05function4.c"
                            break;
                        }
                    }
                    # 1214 "05function4.c"
                    parse_sharp_v5(info);
                    # 1216 "05function4.c"
                    __dec_obj90=type_name_190;
                    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1216, 16),__exception_result_var_b11=((char*)(right_value252=parse_word(info))), come_pop_stackframe(), __exception_result_var_b11));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1218 "05function4.c"
                    parse_sharp_v5(info);
                    # 1239 "05function4.c"
                    # 1220 "05function4.c"
                    if(_if_conditional334=*info->p==123,                    _if_conditional334) {
                        # 1221 "05function4.c"
                        p_223=info->p;
                        # 1222 "05function4.c"
                        sline_224=info->sline;
                        # 1224 "05function4.c"
                        ((char*)(right_value253=skip_block(info)));
                        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1238 "05function4.c"
                        # 1226 "05function4.c"
                        if(_if_conditional335=*info->p==59,                        _if_conditional335) {
                            # 1227 "05function4.c"
                            info->p=head_188;
                            # 1228 "05function4.c"
                            info->sline=head_sline_189;
                            # 1229 "05function4.c"
                            info->define_struct=(_Bool)1;
                            # 1230 "05function4.c"
                            __result138__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value255=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value254=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1230, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value254,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value255,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result138__;
                        }
                        else {
                            # 1233 "05function4.c"
                            anonymous_type_209=(_Bool)1;
                            # 1234 "05function4.c"
                            info->p=p_223;
                            # 1235 "05function4.c"
                            info->sline=sline_224;
                            # 1236 "05function4.c"
                            break;
                        }
                    }
                }
                else {
                    # 1485 "05function4.c"
                    # 1240 "05function4.c"
                    if(_if_conditional336=string_operator_equals(type_name_190,"_Alignas"),                    _if_conditional336) {
                        # 1241 "05function4.c"
                        expected_next_character(40,info);
                        # 1243 "05function4.c"
                        exp_225=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=expression_v13(info))));
                        if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1245 "05function4.c"
                        __dec_obj91=alignas__208;
                        alignas__208=(struct sNode*)come_increment_ref_count(exp_225);
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1247 "05function4.c"
                        expected_next_character(41,info);
                        # 1249 "05function4.c"
                        __dec_obj92=type_name_190;
                        type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1249, 17),__exception_result_var_b12=((char*)(right_value257=parse_word(info))), come_pop_stackframe(), __exception_result_var_b12));
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_225) { exp_225 = come_decrement_ref_count2(exp_225, ((struct sNode*)exp_225)->finalize, ((struct sNode*)exp_225)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1485 "05function4.c"
                        # 1251 "05function4.c"
                        if(_if_conditional337=string_operator_equals(type_name_190,"const"),                        _if_conditional337) {
                            # 1252 "05function4.c"
                            constant_192=(_Bool)1;
                            # 1254 "05function4.c"
                            __dec_obj93=type_name_190;
                            type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1254, 18),__exception_result_var_b13=((char*)(right_value258=parse_word(info))), come_pop_stackframe(), __exception_result_var_b13));
                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1485 "05function4.c"
                            # 1256 "05function4.c"
                            if(_if_conditional338=string_operator_equals(type_name_190,"static"),                            _if_conditional338) {
                                # 1257 "05function4.c"
                                static__193=(_Bool)1;
                                # 1259 "05function4.c"
                                __dec_obj94=type_name_190;
                                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1259, 19),__exception_result_var_b14=((char*)(right_value259=parse_word(info))), come_pop_stackframe(), __exception_result_var_b14));
                                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1485 "05function4.c"
                                # 1261 "05function4.c"
                                if(_if_conditional339=string_operator_equals(type_name_190,"record"),                                _if_conditional339) {
                                    # 1262 "05function4.c"
                                    record__191=(_Bool)1;
                                    # 1264 "05function4.c"
                                    __dec_obj95=type_name_190;
                                    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1264, 20),__exception_result_var_b15=((char*)(right_value260=parse_word(info))), come_pop_stackframe(), __exception_result_var_b15));
                                    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1485 "05function4.c"
                                    # 1266 "05function4.c"
                                    if(_if_conditional340=string_operator_equals(type_name_190,"come_mem_core"),                                    _if_conditional340) {
                                        # 1267 "05function4.c"
                                        come_mem_core__207=(_Bool)1;
                                        # 1269 "05function4.c"
                                        __dec_obj96=type_name_190;
                                        type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1269, 21),__exception_result_var_b16=((char*)(right_value261=parse_word(info))), come_pop_stackframe(), __exception_result_var_b16));
                                        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1485 "05function4.c"
                                        # 1271 "05function4.c"
                                        if(_if_conditional341=string_operator_equals(type_name_190,"extern"),                                        _if_conditional341) {
                                            # 1272 "05function4.c"
                                            extern__205=(_Bool)1;
                                            # 1274 "05function4.c"
                                            __dec_obj97=type_name_190;
                                            type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1274, 22),__exception_result_var_b17=((char*)(right_value262=parse_word(info))), come_pop_stackframe(), __exception_result_var_b17));
                                            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1485 "05function4.c"
                                            # 1276 "05function4.c"
                                            if(_if_conditional342=string_operator_equals(type_name_190,"_Noreturn"),                                            _if_conditional342) {
                                                # 1277 "05function4.c"
                                                __dec_obj98=type_name_190;
                                                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1277, 23),__exception_result_var_b18=((char*)(right_value263=parse_word(info))), come_pop_stackframe(), __exception_result_var_b18));
                                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 1485 "05function4.c"
                                                # 1279 "05function4.c"
                                                if(_if_conditional343=string_operator_equals(type_name_190,"inline")||string_operator_equals(type_name_190,"__inline")||string_operator_equals(type_name_190,"__inline__")||string_operator_equals(type_name_190,"__always_inline"),                                                _if_conditional343) {
                                                    # 1280 "05function4.c"
                                                    inline__206=(_Bool)1;
                                                    # 1282 "05function4.c"
                                                    __dec_obj99=type_name_190;
                                                    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1282, 24),__exception_result_var_b19=((char*)(right_value264=parse_word(info))), come_pop_stackframe(), __exception_result_var_b19));
                                                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 1485 "05function4.c"
                                                    # 1284 "05function4.c"
                                                    if(_if_conditional344=string_operator_equals(type_name_190,"volatile"),                                                    _if_conditional344) {
                                                        # 1285 "05function4.c"
                                                        volatile__194=(_Bool)1;
                                                        # 1287 "05function4.c"
                                                        __dec_obj100=type_name_190;
                                                        type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1287, 25),__exception_result_var_b20=((char*)(right_value265=parse_word(info))), come_pop_stackframe(), __exception_result_var_b20));
                                                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        # 1485 "05function4.c"
                                                        # 1289 "05function4.c"
                                                        if(_if_conditional345=string_operator_equals(type_name_190,"long"),                                                        _if_conditional345) {
                                                            # 1356 "05function4.c"
                                                            {
                                                                # 1292 "05function4.c"
                                                                p_226=info->p;
                                                                # 1293 "05function4.c"
                                                                sline_227=info->sline;
                                                                # 1355 "05function4.c"
                                                                # 1295 "05function4.c"
                                                                if(_if_conditional346=!xisalpha(*info->p),                                                                _if_conditional346) {
                                                                    # 1296 "05function4.c"
                                                                    info->p=p_226;
                                                                    # 1297 "05function4.c"
                                                                    info->sline=sline_227;
                                                                    # 1299 "05function4.c"
                                                                    __dec_obj101=type_name_190;
                                                                    type_name_190=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("long"))));
                                                                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1300 "05function4.c"
                                                                    break;
                                                                }
                                                                else {
                                                                    # 1303 "05function4.c"
                                                                    __dec_obj102=type_name_190;
                                                                    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1303, 26),__exception_result_var_b21=((char*)(right_value267=parse_word(info))), come_pop_stackframe(), __exception_result_var_b21));
                                                                    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1354 "05function4.c"
                                                                    # 1305 "05function4.c"
                                                                    if(_if_conditional347=string_operator_equals(type_name_190,"unsigned"),                                                                    _if_conditional347) {
                                                                        # 1306 "05function4.c"
                                                                        __dec_obj103=type_name_190;
                                                                        type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1306, 27),__exception_result_var_b22=((char*)(right_value268=parse_word(info))), come_pop_stackframe(), __exception_result_var_b22));
                                                                        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 1312 "05function4.c"
                                                                        # 1308 "05function4.c"
                                                                        if(_if_conditional348=string_operator_equals(type_name_190,"int"),                                                                        _if_conditional348) {
                                                                            # 1309 "05function4.c"
                                                                            long__197=(_Bool)1;
                                                                            # 1310 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1354 "05function4.c"
                                                                        # 1313 "05function4.c"
                                                                        if(_if_conditional349=string_operator_equals(type_name_190,"long"),                                                                        _if_conditional349) {
                                                                            # 1314 "05function4.c"
                                                                            p_226=info->p;
                                                                            # 1315 "05function4.c"
                                                                            sline_227=info->sline;
                                                                            # 1325 "05function4.c"
                                                                            # 1316 "05function4.c"
                                                                            if(_if_conditional350=xisalpha(*info->p),                                                                            _if_conditional350) {
                                                                                # 1317 "05function4.c"
                                                                                long_long_198=(_Bool)1;
                                                                                # 1318 "05function4.c"
                                                                                __dec_obj104=type_name_190;
                                                                                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1318, 28),__exception_result_var_b23=((char*)(right_value269=parse_word(info))), come_pop_stackframe(), __exception_result_var_b23));
                                                                                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1321 "05function4.c"
                                                                                long__197=(_Bool)1;
                                                                                # 1322 "05function4.c"
                                                                                break;
                                                                            }
                                                                            # 1336 "05function4.c"
                                                                            # 1325 "05function4.c"
                                                                            if(_if_conditional351=string_operator_equals(type_name_190,"int"),                                                                            _if_conditional351) {
                                                                                # 1326 "05function4.c"
                                                                                long_long_198=(_Bool)1;
                                                                                # 1327 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1336 "05function4.c"
                                                                                # 1329 "05function4.c"
                                                                                if(_if_conditional352=!is_type_name(type_name_190,info),                                                                                _if_conditional352) {
                                                                                    # 1330 "05function4.c"
                                                                                    __dec_obj105=type_name_190;
                                                                                    type_name_190=(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string("long"))));
                                                                                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1331 "05function4.c"
                                                                                    long_long_198=(_Bool)1;
                                                                                    # 1332 "05function4.c"
                                                                                    info->p=p_226;
                                                                                    # 1333 "05function4.c"
                                                                                    info->sline=sline_227;
                                                                                    # 1334 "05function4.c"
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1354 "05function4.c"
                                                                            # 1337 "05function4.c"
                                                                            if(_if_conditional353=is_type_name(type_name_190,info),                                                                            _if_conditional353) {
                                                                                # 1345 "05function4.c"
                                                                                # 1338 "05function4.c"
                                                                                if(long__197) {
                                                                                    # 1339 "05function4.c"
                                                                                    long_long_198=(_Bool)1;
                                                                                    # 1340 "05function4.c"
                                                                                    long__197=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    # 1343 "05function4.c"
                                                                                    long__197=(_Bool)1;
                                                                                }
                                                                                # 1345 "05function4.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1348 "05function4.c"
                                                                                info->p=p_226;
                                                                                # 1349 "05function4.c"
                                                                                info->sline=sline_227;
                                                                                # 1351 "05function4.c"
                                                                                __dec_obj106=type_name_190;
                                                                                type_name_190=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string("long"))));
                                                                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1352 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            # 1485 "05function4.c"
                                                            # 1357 "05function4.c"
                                                            if(_if_conditional355=string_operator_equals(type_name_190,"unsigned"),                                                            _if_conditional355) {
                                                                # 1358 "05function4.c"
                                                                unsigned__196=(_Bool)1;
                                                                # 1425 "05function4.c"
                                                                # 1360 "05function4.c"
                                                                if(_if_conditional356=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional356) {
                                                                    # 1361 "05function4.c"
                                                                    p_228=info->p;
                                                                    # 1362 "05function4.c"
                                                                    sline_229=info->sline;
                                                                    # 1364 "05function4.c"
                                                                    __dec_obj107=type_name_190;
                                                                    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1364, 29),__exception_result_var_b24=((char*)(right_value272=parse_word(info))), come_pop_stackframe(), __exception_result_var_b24));
                                                                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1420 "05function4.c"
                                                                    # 1366 "05function4.c"
                                                                    if(_if_conditional357=string_operator_equals(type_name_190,"short"),                                                                    _if_conditional357) {
                                                                        # 1389 "05function4.c"
                                                                        # 1367 "05function4.c"
                                                                        if(_if_conditional358=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional358) {
                                                                            # 1368 "05function4.c"
                                                                            p_230=info->p;
                                                                            # 1369 "05function4.c"
                                                                            sline_231=info->sline;
                                                                            # 1371 "05function4.c"
                                                                            __dec_obj108=type_name_190;
                                                                            type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1371, 30),__exception_result_var_b25=((char*)(right_value273=parse_word(info))), come_pop_stackframe(), __exception_result_var_b25));
                                                                            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1383 "05function4.c"
                                                                            # 1373 "05function4.c"
                                                                            if(_if_conditional359=is_type_name(type_name_190,info),                                                                            _if_conditional359) {
                                                                                # 1374 "05function4.c"
                                                                                short__199=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                # 1377 "05function4.c"
                                                                                short__199=(_Bool)1;
                                                                                # 1378 "05function4.c"
                                                                                __dec_obj109=type_name_190;
                                                                                type_name_190=(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string("int"))));
                                                                                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1380 "05function4.c"
                                                                                info->p=p_230;
                                                                                # 1381 "05function4.c"
                                                                                info->sline=sline_231;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1385 "05function4.c"
                                                                            short__199=(_Bool)1;
                                                                            # 1386 "05function4.c"
                                                                            __dec_obj110=type_name_190;
                                                                            type_name_190=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("int"))));
                                                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1387 "05function4.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1420 "05function4.c"
                                                                        # 1390 "05function4.c"
                                                                        if(_if_conditional360=string_operator_equals(type_name_190,"long"),                                                                        _if_conditional360) {
                                                                            # 1413 "05function4.c"
                                                                            # 1391 "05function4.c"
                                                                            if(_if_conditional361=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional361) {
                                                                                # 1392 "05function4.c"
                                                                                p_232=info->p;
                                                                                # 1393 "05function4.c"
                                                                                sline_233=info->sline;
                                                                                # 1395 "05function4.c"
                                                                                __dec_obj111=type_name_190;
                                                                                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1395, 31),__exception_result_var_b26=((char*)(right_value276=parse_word(info))), come_pop_stackframe(), __exception_result_var_b26));
                                                                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1407 "05function4.c"
                                                                                # 1397 "05function4.c"
                                                                                if(_if_conditional362=is_type_name(type_name_190,info),                                                                                _if_conditional362) {
                                                                                    # 1398 "05function4.c"
                                                                                    long__197=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 1401 "05function4.c"
                                                                                    long__197=(_Bool)1;
                                                                                    # 1402 "05function4.c"
                                                                                    __dec_obj112=type_name_190;
                                                                                    type_name_190=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string("int"))));
                                                                                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1404 "05function4.c"
                                                                                    info->p=p_232;
                                                                                    # 1405 "05function4.c"
                                                                                    info->sline=sline_233;
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1409 "05function4.c"
                                                                                long__197=(_Bool)1;
                                                                                # 1410 "05function4.c"
                                                                                __dec_obj113=type_name_190;
                                                                                type_name_190=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string("int"))));
                                                                                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1411 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1420 "05function4.c"
                                                                            # 1414 "05function4.c"
                                                                            if(_if_conditional363=!is_type_name(type_name_190,info),                                                                            _if_conditional363) {
                                                                                # 1415 "05function4.c"
                                                                                __dec_obj114=type_name_190;
                                                                                type_name_190=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("int"))));
                                                                                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1416 "05function4.c"
                                                                                info->p=p_228;
                                                                                # 1417 "05function4.c"
                                                                                info->sline=sline_229;
                                                                                # 1418 "05function4.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1422 "05function4.c"
                                                                    __dec_obj115=type_name_190;
                                                                    type_name_190=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string("int"))));
                                                                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1423 "05function4.c"
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                # 1485 "05function4.c"
                                                                # 1426 "05function4.c"
                                                                if(_if_conditional364=string_operator_equals(type_name_190,"signed")||string_operator_equals(type_name_190,"__signed__"),                                                                _if_conditional364) {
                                                                    # 1427 "05function4.c"
                                                                    unsigned__196=(_Bool)0;
                                                                    # 1429 "05function4.c"
                                                                    __dec_obj116=type_name_190;
                                                                    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1429, 32),__exception_result_var_b27=((char*)(right_value281=parse_word(info))), come_pop_stackframe(), __exception_result_var_b27));
                                                                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    # 1485 "05function4.c"
                                                                    # 1431 "05function4.c"
                                                                    if(_if_conditional365=string_operator_equals(type_name_190,"register"),                                                                    _if_conditional365) {
                                                                        # 1432 "05function4.c"
                                                                        register__195=(_Bool)1;
                                                                        # 1434 "05function4.c"
                                                                        __dec_obj117=type_name_190;
                                                                        type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1434, 33),__exception_result_var_b28=((char*)(right_value282=parse_word(info))), come_pop_stackframe(), __exception_result_var_b28));
                                                                        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        # 1485 "05function4.c"
                                                                        # 1436 "05function4.c"
                                                                        if(_if_conditional366=string_operator_equals(type_name_190,"restrict"),                                                                        _if_conditional366) {
                                                                            # 1437 "05function4.c"
                                                                            restrict__200=(_Bool)1;
                                                                            # 1439 "05function4.c"
                                                                            __dec_obj118=type_name_190;
                                                                            type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1439, 34),__exception_result_var_b29=((char*)(right_value283=parse_word(info))), come_pop_stackframe(), __exception_result_var_b29));
                                                                            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 1485 "05function4.c"
                                                                            # 1441 "05function4.c"
                                                                            if(_if_conditional367=string_operator_equals(type_name_190,"_Addr"),                                                                            _if_conditional367) {
                                                                                # 1442 "05function4.c"
                                                                                __dec_obj119=type_name_190;
                                                                                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1442, 35),__exception_result_var_b30=((char*)(right_value284=parse_word(info))), come_pop_stackframe(), __exception_result_var_b30));
                                                                                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1485 "05function4.c"
                                                                                # 1444 "05function4.c"
                                                                                if(_if_conditional368=string_operator_equals(type_name_190,"__restrict"),                                                                                _if_conditional368) {
                                                                                    # 1445 "05function4.c"
                                                                                    restrict__200=(_Bool)1;
                                                                                    # 1447 "05function4.c"
                                                                                    __dec_obj120=type_name_190;
                                                                                    type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1447, 36),__exception_result_var_b31=((char*)(right_value285=parse_word(info))), come_pop_stackframe(), __exception_result_var_b31));
                                                                                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 1485 "05function4.c"
                                                                                    # 1449 "05function4.c"
                                                                                    if(_if_conditional369=string_operator_equals(type_name_190,"short"),                                                                                    _if_conditional369) {
                                                                                        # 1450 "05function4.c"
                                                                                        short__199=(_Bool)1;
                                                                                        # 1481 "05function4.c"
                                                                                        # 1452 "05function4.c"
                                                                                        if(_if_conditional370=*info->p==58,                                                                                        _if_conditional370) {
                                                                                            # 1453 "05function4.c"
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            # 1481 "05function4.c"
                                                                                            # 1455 "05function4.c"
                                                                                            if(_if_conditional371=xisalnum(*info->p),                                                                                            _if_conditional371) {
                                                                                                # 1456 "05function4.c"
                                                                                                p_234=info->p;
                                                                                                # 1457 "05function4.c"
                                                                                                sline_235=info->sline;
                                                                                                # 1458 "05function4.c"
                                                                                                __dec_obj121=type_name_190;
                                                                                                type_name_190=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1458, 37),__exception_result_var_b32=((char*)(right_value286=parse_word(info))), come_pop_stackframe(), __exception_result_var_b32));
                                                                                                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 1477 "05function4.c"
                                                                                                # 1460 "05function4.c"
                                                                                                if(_if_conditional372=string_operator_equals(type_name_190,"int"),                                                                                                _if_conditional372) {
                                                                                                    # 1461 "05function4.c"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 1477 "05function4.c"
                                                                                                    # 1463 "05function4.c"
                                                                                                    if(_if_conditional373=string_operator_equals(type_name_190,"short"),                                                                                                    _if_conditional373) {
                                                                                                        # 1464 "05function4.c"
                                                                                                        short__199=(_Bool)0;
                                                                                                        # 1465 "05function4.c"
                                                                                                        break;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 1477 "05function4.c"
                                                                                                        # 1467 "05function4.c"
                                                                                                        if(_if_conditional374=is_type_name(type_name_190,info),                                                                                                        _if_conditional374) {
                                                                                                            # 1468 "05function4.c"
                                                                                                            info->p=p_234;
                                                                                                            # 1469 "05function4.c"
                                                                                                            info->sline=sline_235;
                                                                                                        }
                                                                                                        else {
                                                                                                            # 1472 "05function4.c"
                                                                                                            __dec_obj122=type_name_190;
                                                                                                            type_name_190=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("short"))));
                                                                                                            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            # 1473 "05function4.c"
                                                                                                            info->p=p_234;
                                                                                                            # 1474 "05function4.c"
                                                                                                            info->sline=sline_235;
                                                                                                            # 1475 "05function4.c"
                                                                                                            break;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else {
                                                                                                # 1479 "05function4.c"
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 1483 "05function4.c"
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
    # 1487 "05function4.c"
    skip_pointer_attribute(info);
    # 1489 "05function4.c"
    pointer_num_236=0;
    # 1499 "05function4.c"
    while(_while_condtional42=*info->p==42,    _while_condtional42) {
        # 1491 "05function4.c"
        info->p++;
        # 1492 "05function4.c"
        skip_spaces_and_lf(info);
        # 1494 "05function4.c"
        skip_pointer_attribute(info);
        # 1496 "05function4.c"
        pointer_num_236++;
    }
    # 1499 "05function4.c"
    heap_237=(_Bool)0;
    # 1507 "05function4.c"
    # 1500 "05function4.c"
    if(_if_conditional375=*info->p==37,    _if_conditional375) {
        # 1501 "05function4.c"
        info->p++;
        # 1502 "05function4.c"
        skip_spaces_and_lf(info);
        # 1504 "05function4.c"
        heap_237=(_Bool)1;
    }
    # 1507 "05function4.c"
    lambda_flag_238=(_Bool)0;
    # 1524 "05function4.c"
    {
        # 1509 "05function4.c"
        pX_239=info->p;
        # 1510 "05function4.c"
        slineX_240=info->sline;
        # 1520 "05function4.c"
        # 1512 "05function4.c"
        if(_if_conditional376=xisalpha(*info->p)||*info->p==95,        _if_conditional376) {
            # 1513 "05function4.c"
            (void)(come_push_stackframe("05function4.c", 1513, 38),__exception_result_var_b33=((char*)(right_value288=parse_word(info))), come_pop_stackframe(), __exception_result_var_b33);
            right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1518 "05function4.c"
            # 1515 "05function4.c"
            if(_if_conditional377=*info->p==40&&info->in_typedef,            _if_conditional377) {
                # 1516 "05function4.c"
                lambda_flag_238=(_Bool)1;
            }
        }
        # 1520 "05function4.c"
        info->p=pX_239;
        # 1521 "05function4.c"
        info->sline=slineX_240;
    }
    # 1524 "05function4.c"
    # 1525 "05function4.c"
    # 1527 "05function4.c"
    function_pointer_flag_243=(_Bool)0;
    # 1559 "05function4.c"
    {
        # 1529 "05function4.c"
        p_244=info->p;
        # 1530 "05function4.c"
        sline_245=info->sline;
        # 1555 "05function4.c"
        # 1532 "05function4.c"
        if(_if_conditional378=*info->p==40,        _if_conditional378) {
            # 1533 "05function4.c"
            info->p++;
            # 1534 "05function4.c"
            skip_spaces_and_lf(info);
            # 1536 "05function4.c"
            skip_pointer_attribute(info);
            # 1553 "05function4.c"
            # 1538 "05function4.c"
            if(_if_conditional379=*info->p==42||*info->p==94,            _if_conditional379) {
                # 1539 "05function4.c"
                function_pointer_flag_243=(_Bool)1;
            }
            else {
                # 1553 "05function4.c"
                # 1541 "05function4.c"
                if(_if_conditional380=xisalpha(*info->p)||*info->p==95,                _if_conditional380) {
                    # 1542 "05function4.c"
                    word_246=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1542, 39),__exception_result_var_b34=((char*)(right_value289=parse_word(info))), come_pop_stackframe(), __exception_result_var_b34));
                    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1552 "05function4.c"
                    # 1544 "05function4.c"
                    if(_if_conditional381=*info->p==41,                    _if_conditional381) {
                        # 1545 "05function4.c"
                        info->p++;
                        # 1546 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1551 "05function4.c"
                        # 1548 "05function4.c"
                        if(_if_conditional382=*info->p==40,                        _if_conditional382) {
                            # 1549 "05function4.c"
                            function_pointer_flag_243=(_Bool)1;
                        }
                    }
                    word_246 = come_decrement_ref_count2(word_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1555 "05function4.c"
        info->p=p_244;
        # 1556 "05function4.c"
        info->sline=sline_245;
    }
    # 1559 "05function4.c"
    var_name_between_brace_247=(_Bool)0;
    # 1590 "05function4.c"
    {
        # 1561 "05function4.c"
        p_248=info->p;
        # 1562 "05function4.c"
        sline_249=info->sline;
        # 1586 "05function4.c"
        # 1564 "05function4.c"
        if(_if_conditional383=*info->p==40,        _if_conditional383) {
            # 1565 "05function4.c"
            info->p++;
            # 1566 "05function4.c"
            skip_spaces_and_lf(info);
            # 1568 "05function4.c"
            skip_pointer_attribute(info);
            # 1584 "05function4.c"
            # 1570 "05function4.c"
            if(_if_conditional384=xisalpha(*info->p)||*info->p==95,            _if_conditional384) {
                # 1571 "05function4.c"
                word_250=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1571, 40),__exception_result_var_b35=((char*)(right_value290=parse_word(info))), come_pop_stackframe(), __exception_result_var_b35));
                right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1583 "05function4.c"
                # 1573 "05function4.c"
                if(_if_conditional385=is_type_name(word_250,info),                _if_conditional385) {
                }
                else {
                    # 1583 "05function4.c"
                    # 1575 "05function4.c"
                    if(_if_conditional386=*info->p==41,                    _if_conditional386) {
                        # 1576 "05function4.c"
                        info->p++;
                        # 1577 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1582 "05function4.c"
                        # 1579 "05function4.c"
                        if(_if_conditional387=*info->p!=40,                        _if_conditional387) {
                            # 1580 "05function4.c"
                            var_name_between_brace_247=(_Bool)1;
                        }
                    }
                }
                word_250 = come_decrement_ref_count2(word_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 1586 "05function4.c"
        info->p=p_248;
        # 1587 "05function4.c"
        info->sline=sline_249;
    }
    # 2272 "05function4.c"
    # 1590 "05function4.c"
    if(_if_conditional388=anonymous_type_209&&*info->p==123,    _if_conditional388) {
        # 1591 "05function4.c"
        # 1661 "05function4.c"
        # 1592 "05function4.c"
        if(struct__201) {
            # 1597 "05function4.c"
            # 1593 "05function4.c"
            if(_if_conditional390=string_operator_equals(type_name_190,""),            _if_conditional390) {
                # 1594 "05function4.c"
                __dec_obj123=type_name_190;
                type_name_190=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("anonymous_typeX%d",++anonymous_num_251))));
                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 1597 "05function4.c"
            node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=parse_struct((char*)come_increment_ref_count(type_name_190),info))));
            if(right_value292) { right_value292 = come_decrement_ref_count2(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1604 "05function4.c"
            # 1599 "05function4.c"
            if(_if_conditional391=!node_compile(node_252,info),            _if_conditional391) {
                # 1600 "05function4.c"
                err_msg(info,"parse_struct is failed");
                # 1601 "05function4.c"
                __result139__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value294=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value293=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1601, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_252) { node_252 = come_decrement_ref_count2(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value293,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value294,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result139__;
            }
            # 1604 "05function4.c"
            pointer_num_253=0;
            # 1611 "05function4.c"
            while(_while_condtional43=*info->p==42,            _while_condtional43) {
                # 1607 "05function4.c"
                info->p++;
                # 1607 "05function4.c"
                skip_spaces_and_lf(info);
                # 1608 "05function4.c"
                pointer_num_253++;
            }
            # 1611 "05function4.c"
            __dec_obj124=type_241;
            type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value295=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1611, "sType")))),type_name_190,(_Bool)0,info))));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value295,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value296,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1613 "05function4.c"
            type_241->mPointerNum=pointer_num_253;
            if(node_252) { node_252 = come_decrement_ref_count2(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1661 "05function4.c"
            # 1615 "05function4.c"
            if(enum__203) {
                # 1620 "05function4.c"
                # 1616 "05function4.c"
                if(_if_conditional393=string_operator_equals(type_name_190,""),                _if_conditional393) {
                    # 1617 "05function4.c"
                    __dec_obj125=type_name_190;
                    type_name_190=(char*)come_increment_ref_count(((char*)(right_value297=xsprintf("anonymous_typeY%d",++anonymous_num_251))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1620 "05function4.c"
                node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=parse_enum((char*)come_increment_ref_count(type_name_190),info))));
                if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1629 "05function4.c"
                # 1622 "05function4.c"
                if(_if_conditional394=!info->no_output_err,                _if_conditional394) {
                    # 1627 "05function4.c"
                    # 1623 "05function4.c"
                    if(_if_conditional395=!node_compile(node_254,info),                    _if_conditional395) {
                        # 1624 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1625 "05function4.c"
                        __result140__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value300=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value299=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1625, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value299,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value300,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result140__;
                    }
                }
                # 1629 "05function4.c"
                __dec_obj126=type_241;
                type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value301=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1629, "sType")))),type_name_190,(_Bool)0,info))));
                come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value301,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value302,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1661 "05function4.c"
                # 1631 "05function4.c"
                if(union__202) {
                    # 1636 "05function4.c"
                    # 1632 "05function4.c"
                    if(_if_conditional397=string_operator_equals(type_name_190,""),                    _if_conditional397) {
                        # 1633 "05function4.c"
                        __dec_obj127=type_name_190;
                        type_name_190=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("anonymous_typeZ%d",++anonymous_num_251))));
                        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1636 "05function4.c"
                    node_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=parse_union((char*)come_increment_ref_count(type_name_190),info))));
                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1645 "05function4.c"
                    # 1639 "05function4.c"
                    if(_if_conditional398=!node_compile(node_255,info),                    _if_conditional398) {
                        # 1640 "05function4.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1641 "05function4.c"
                        __result141__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value306=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value305=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1641, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_255) { node_255 = come_decrement_ref_count2(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value305,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value306,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result141__;
                    }
                    # 1645 "05function4.c"
                    pointer_num_256=0;
                    # 1652 "05function4.c"
                    while(_while_condtional44=*info->p==42,                    _while_condtional44) {
                        # 1648 "05function4.c"
                        info->p++;
                        # 1648 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 1649 "05function4.c"
                        pointer_num_256++;
                    }
                    # 1652 "05function4.c"
                    __dec_obj128=type_241;
                    type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value307=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1652, "sType")))),type_name_190,(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value308,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1654 "05function4.c"
                    type_241->mPointerNum=pointer_num_256;
                    if(node_255) { node_255 = come_decrement_ref_count2(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1657 "05function4.c"
                    err_msg(info,"unexpected { character");
                    # 1658 "05function4.c"
                    __result142__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value310=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value309=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1658, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value309,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value310,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    return __result142__;
                }
            }
        }
        # 1702 "05function4.c"
        # 1661 "05function4.c"
        if(parse_variable_name) {
            # 1662 "05function4.c"
            parse_sharp_v5(info);
            # 1668 "05function4.c"
            # 1663 "05function4.c"
            if(_if_conditional400=var_name_between_brace_247&&*info->p==40,            _if_conditional400) {
                # 1664 "05function4.c"
                info->p++;
                # 1665 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1685 "05function4.c"
            # 1668 "05function4.c"
            if(_if_conditional401=*info->p==58,            _if_conditional401) {
                # 1669 "05function4.c"
                __dec_obj129=var_name_242;
                var_name_242=(char*)come_increment_ref_count(((char*)(right_value311=__builtin_string(""))));
                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1685 "05function4.c"
                # 1671 "05function4.c"
                if(anonymous_name_210) {
                    # 1672 "05function4.c"
                    # 1673 "05function4.c"
                    num_anonymous_var_name_257++;
                    # 1674 "05function4.c"
                    __dec_obj130=var_name_242;
                    var_name_242=(char*)come_increment_ref_count(((char*)(right_value312=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_257))));
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1685 "05function4.c"
                    # 1676 "05function4.c"
                    if(_if_conditional403=xisalnum(*info->p)||*info->p==95,                    _if_conditional403) {
                        # 1677 "05function4.c"
                        __dec_obj131=var_name_242;
                        var_name_242=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1677, 41),__exception_result_var_b36=((char*)(right_value313=parse_word(info))), come_pop_stackframe(), __exception_result_var_b36));
                        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 1680 "05function4.c"
                        # 1681 "05function4.c"
                        num_anonymous_var_name_258++;
                        # 1682 "05function4.c"
                        __dec_obj132=var_name_242;
                        var_name_242=(char*)come_increment_ref_count(((char*)(right_value314=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_258))));
                        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1690 "05function4.c"
            # 1685 "05function4.c"
            if(_if_conditional404=var_name_between_brace_247&&*info->p==41,            _if_conditional404) {
                # 1686 "05function4.c"
                info->p++;
                # 1687 "05function4.c"
                skip_spaces_and_lf(info);
            }
            # 1701 "05function4.c"
            # 1690 "05function4.c"
            if(_if_conditional405=*info->p==58,            _if_conditional405) {
                # 1691 "05function4.c"
                info->p++;
                # 1692 "05function4.c"
                skip_spaces_and_lf(info);
                # 1694 "05function4.c"
                no_comma_259=info->no_comma;
                # 1695 "05function4.c"
                info->no_comma=(_Bool)1;
                # 1696 "05function4.c"
                node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=expression_v13(info))));
                if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1697 "05function4.c"
                info->no_comma=no_comma_259;
                # 1699 "05function4.c"
                __dec_obj133=type_241->mSizeNum;
                type_241->mSizeNum=(struct sNode*)come_increment_ref_count(node_260);
                if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_260) { node_260 = come_decrement_ref_count2(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        # 2272 "05function4.c"
        # 1703 "05function4.c"
        if(lambda_flag_238) {
            # 1704 "05function4.c"
            # 1727 "05function4.c"
            # 1705 "05function4.c"
            if(_if_conditional411=map$2charphsTypephp_operator_load_element(info->types,type_name_190),            _if_conditional411) {
                # 1706 "05function4.c"
                __dec_obj134=result_type_261;
                result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_190)))));
                come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1707 "05function4.c"
                result_type_261->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_261->mClass->mName), "05function4.c", 1707, 42));
            }
            else {
                # 1727 "05function4.c"
                # 1709 "05function4.c"
                if(_if_conditional417=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_190)),                _if_conditional417) {
                    # 1715 "05function4.c"
                    for(                    i_270=0;                    i_270<list$1charph_length(info->generics_type_names);                    i_270++                    ){
                        # 1714 "05function4.c"
                        # 1711 "05function4.c"
                        if(_if_conditional421=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_270), "05function4.c", 1711, 43)),type_name_190),                        _if_conditional421) {
                            # 1712 "05function4.c"
                            __dec_obj135=result_type_261;
                            result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1712, "sType")))),((char*)(right_value318=xsprintf("generics_type%d",i_270))),(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value319,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    # 1727 "05function4.c"
                    # 1716 "05function4.c"
                    if(_if_conditional422=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_190)),                    _if_conditional422) {
                        # 1722 "05function4.c"
                        for(                        i_274=0;                        i_274<list$1charph_length(info->method_generics_type_names);                        i_274++                        ){
                            # 1721 "05function4.c"
                            # 1718 "05function4.c"
                            if(_if_conditional423=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_274), "05function4.c", 1718, 44)),type_name_190),                            _if_conditional423) {
                                # 1719 "05function4.c"
                                __dec_obj136=result_type_261;
                                result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value320=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1719, "sType")))),((char*)(right_value321=xsprintf("mgenerics_type%d",i_274))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1724 "05function4.c"
                        __dec_obj137=result_type_261;
                        result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value323=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1724, "sType")))),type_name_190,(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1727 "05function4.c"
            result_type_261->mConstant=result_type_261->mConstant||constant_192;
            # 1728 "05function4.c"
            __dec_obj138=result_type_261->mAlignas;
            result_type_261->mAlignas=(struct sNode*)come_increment_ref_count(alignas__208);
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
            # 1729 "05function4.c"
            result_type_261->mComeMemCore=result_type_261->mComeMemCore||come_mem_core__207;
            # 1730 "05function4.c"
            result_type_261->mRegister=register__195;
            # 1731 "05function4.c"
            result_type_261->mUnsigned=result_type_261->mUnsigned||unsigned__196;
            # 1732 "05function4.c"
            result_type_261->mVolatile=volatile__194;
            # 1733 "05function4.c"
            result_type_261->mRecord=result_type_261->mStatic||static__193;
            # 1734 "05function4.c"
            result_type_261->mStatic=result_type_261->mRecord||record__191;
            # 1735 "05function4.c"
            result_type_261->mExtern=result_type_261->mExtern||extern__205;
            # 1736 "05function4.c"
            result_type_261->mInline=result_type_261->mInline||inline__206;
            # 1737 "05function4.c"
            result_type_261->mRestrict=result_type_261->mRestrict||restrict__200;
            # 1738 "05function4.c"
            result_type_261->mLongLong=result_type_261->mLongLong||long_long_198;
            # 1739 "05function4.c"
            result_type_261->mLong=result_type_261->mLong||long__197;
            # 1740 "05function4.c"
            result_type_261->mShort=result_type_261->mShort||short__199;
            # 1741 "05function4.c"
            result_type_261->mPointerNum=pointer_num_236;
            # 1742 "05function4.c"
            result_type_261->mHeap=result_type_261->mHeap||heap_237;
            # 1744 "05function4.c"
            __dec_obj139=var_name_242;
            var_name_242=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1744, 45),__exception_result_var_b37=((char*)(right_value325=parse_word(info))), come_pop_stackframe(), __exception_result_var_b37));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1746 "05function4.c"
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value326=parse_params(info,(_Bool)0)));
            param_types_275=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_276=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_277=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_278=multiple_assign_var2->v4;
            come_call_finalizer3(right_value326,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1748 "05function4.c"
            __dec_obj140=type_241;
            type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value327=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1748, "sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1750 "05function4.c"
            __dec_obj142=type_241->mResultType;
            type_241->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value330=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value329=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1750, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_261)))));
            come_call_finalizer3(__dec_obj142,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value329,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value330,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1751 "05function4.c"
            __dec_obj143=type_241->mParamTypes;
            type_241->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_275);
            come_call_finalizer3(__dec_obj143,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            # 1752 "05function4.c"
            __dec_obj144=type_241->mParamNames;
            type_241->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_276);
            come_call_finalizer3(__dec_obj144,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            # 1753 "05function4.c"
            type_241->mVarArgs=var_args_278;
            # 1754 "05function4.c"
            type_241->mExtern=extern__205;
            come_call_finalizer3(result_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_275,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_276,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_277,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2272 "05function4.c"
            # 1756 "05function4.c"
            if(function_pointer_flag_243) {
                # 1757 "05function4.c"
                info->p++;
                # 1758 "05function4.c"
                skip_spaces_and_lf(info);
                # 1760 "05function4.c"
                skip_pointer_attribute(info);
                # 1767 "05function4.c"
                # 1762 "05function4.c"
                if(_if_conditional425=*info->p==42||*info->p==94,                _if_conditional425) {
                    # 1763 "05function4.c"
                    info->p++;
                    # 1764 "05function4.c"
                    skip_spaces_and_lf(info);
                }
                # 1767 "05function4.c"
                skip_pointer_attribute(info);
                # 1769 "05function4.c"
                # 1793 "05function4.c"
                # 1770 "05function4.c"
                if(_if_conditional426=map$2charphsTypephp_operator_load_element(info->types,type_name_190),                _if_conditional426) {
                    # 1771 "05function4.c"
                    __dec_obj145=result_type_279;
                    result_type_279=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_190)))));
                    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value331,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1772 "05function4.c"
                    result_type_279->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_279->mClass->mName), "05function4.c", 1772, 46));
                }
                else {
                    # 1793 "05function4.c"
                    # 1775 "05function4.c"
                    if(_if_conditional427=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_190)),                    _if_conditional427) {
                        # 1781 "05function4.c"
                        for(                        i_280=0;                        i_280<list$1charph_length(info->generics_type_names);                        i_280++                        ){
                            # 1780 "05function4.c"
                            # 1777 "05function4.c"
                            if(_if_conditional428=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_280), "05function4.c", 1777, 47)),type_name_190),                            _if_conditional428) {
                                # 1778 "05function4.c"
                                __dec_obj146=result_type_279;
                                result_type_279=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value332=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1778, "sType")))),((char*)(right_value333=xsprintf("generics_type%d",i_280))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value334,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1793 "05function4.c"
                        # 1782 "05function4.c"
                        if(_if_conditional429=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_190)),                        _if_conditional429) {
                            # 1788 "05function4.c"
                            for(                            i_281=0;                            i_281<list$1charph_length(info->method_generics_type_names);                            i_281++                            ){
                                # 1787 "05function4.c"
                                # 1784 "05function4.c"
                                if(_if_conditional430=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_281), "05function4.c", 1784, 48)),type_name_190),                                _if_conditional430) {
                                    # 1785 "05function4.c"
                                    __dec_obj147=result_type_279;
                                    result_type_279=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value335=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1785, "sType")))),((char*)(right_value336=xsprintf("mgenerics_type%d",i_281))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value335,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value337,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            # 1790 "05function4.c"
                            __dec_obj148=result_type_279;
                            result_type_279=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1790, "sType")))),type_name_190,(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                # 1793 "05function4.c"
                result_type_279->mConstant=result_type_279->mConstant||constant_192;
                # 1794 "05function4.c"
                __dec_obj149=result_type_279->mAlignas;
                result_type_279->mAlignas=(struct sNode*)come_increment_ref_count(alignas__208);
                if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                # 1795 "05function4.c"
                result_type_279->mComeMemCore=result_type_279->mComeMemCore||come_mem_core__207;
                # 1796 "05function4.c"
                result_type_279->mRegister=register__195;
                # 1797 "05function4.c"
                result_type_279->mUnsigned=result_type_279->mUnsigned||unsigned__196;
                # 1798 "05function4.c"
                result_type_279->mVolatile=volatile__194;
                # 1799 "05function4.c"
                result_type_279->mStatic=result_type_279->mStatic||static__193;
                # 1800 "05function4.c"
                result_type_279->mRecord=result_type_279->mRecord||record__191;
                # 1801 "05function4.c"
                result_type_279->mExtern=result_type_279->mExtern||extern__205;
                # 1802 "05function4.c"
                result_type_279->mInline=result_type_279->mInline||inline__206;
                # 1803 "05function4.c"
                result_type_279->mRestrict=result_type_279->mRestrict||restrict__200;
                # 1804 "05function4.c"
                result_type_279->mLongLong=result_type_279->mLongLong||long_long_198;
                # 1805 "05function4.c"
                result_type_279->mLong=result_type_279->mLong||long__197;
                # 1806 "05function4.c"
                result_type_279->mShort=result_type_279->mShort||short__199;
                # 1807 "05function4.c"
                result_type_279->mPointerNum+=pointer_num_236;
                # 1808 "05function4.c"
                result_type_279->mHeap=result_type_279->mHeap||heap_237;
                # 1821 "05function4.c"
                # 1810 "05function4.c"
                if(_if_conditional431=xisalnum(*info->p)||*info->p==95,                _if_conditional431) {
                    # 1811 "05function4.c"
                    __dec_obj150=var_name_242;
                    var_name_242=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1811, 49),__exception_result_var_b38=((char*)(right_value340=parse_word(info))), come_pop_stackframe(), __exception_result_var_b38));
                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1815 "05function4.c"
                    # 1812 "05function4.c"
                    if(_if_conditional432=*info->p==40,                    _if_conditional432) {
                        # 1813 "05function4.c"
                        __result161__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value342=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value341=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1813, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_279),(char*)come_increment_ref_count(var_name_242),(_Bool)0)));
                        come_call_finalizer3(result_type_279,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value341,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value342,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result161__;
                    }
                }
                else {
                    # 1817 "05function4.c"
                    # 1818 "05function4.c"
                    num_anonymous_var_name_282++;
                    # 1819 "05function4.c"
                    __dec_obj151=var_name_242;
                    var_name_242=(char*)come_increment_ref_count(((char*)(right_value343=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_282))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1821 "05function4.c"
                expected_next_character(41,info);
                # 1823 "05function4.c"
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value344=parse_params(info,(_Bool)0)));
                param_types_283=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_284=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_285=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_286=multiple_assign_var3->v4;
                come_call_finalizer3(right_value344,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1825 "05function4.c"
                __dec_obj152=type_241;
                type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value346=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value345=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1825, "sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value346,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1827 "05function4.c"
                __dec_obj153=type_241->mResultType;
                type_241->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value348=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value347=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1827, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_279)))));
                come_call_finalizer3(__dec_obj153,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value347,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value348,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1828 "05function4.c"
                __dec_obj154=type_241->mParamTypes;
                type_241->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_283);
                come_call_finalizer3(__dec_obj154,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                # 1829 "05function4.c"
                __dec_obj155=type_241->mParamNames;
                type_241->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_284);
                come_call_finalizer3(__dec_obj155,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                # 1830 "05function4.c"
                type_241->mVarArgs=var_args_286;
                # 1831 "05function4.c"
                type_241->mExtern=extern__205;
                come_call_finalizer3(result_type_279,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_283,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_285,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 2272 "05function4.c"
                # 1833 "05function4.c"
                if(_if_conditional433=string_operator_equals(type_name_190,"__typeof__")&&*info->p==40,                _if_conditional433) {
                    # 1834 "05function4.c"
                    info->p++;
                    # 1835 "05function4.c"
                    skip_spaces_and_lf(info);
                    # 1837 "05function4.c"
                    exp_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=expression_v13(info))));
                    if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1839 "05function4.c"
                    expected_next_character(41,info);
                    # 1846 "05function4.c"
                    # 1841 "05function4.c"
                    if(_if_conditional434=!node_compile(exp_287,info),                    _if_conditional434) {
                        # 1842 "05function4.c"
                        err_msg(info,"invalid __typeof__ expression");
                        # 1843 "05function4.c"
                        __result163__ = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(right_value351=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count(((struct tuple3$3sTypepcharphbool*)(right_value350=(struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05function4.c", 1843, "struct tuple3$3sTypepcharphbool")))),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value351,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result163__;
                    }
                    # 1846 "05function4.c"
                    come_value_288=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value352=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value352,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1847 "05function4.c"
                    dec_stack_ptr(1,info);
                    # 1849 "05function4.c"
                    __dec_obj157=type_241;
                    type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value353=sType_clone(come_value_288->type))));
                    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value353,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1893 "05function4.c"
                    # 1851 "05function4.c"
                    if(parse_variable_name) {
                        # 1852 "05function4.c"
                        parse_sharp_v5(info);
                        # 1859 "05function4.c"
                        # 1854 "05function4.c"
                        if(_if_conditional439=var_name_between_brace_247&&*info->p==40,                        _if_conditional439) {
                            # 1855 "05function4.c"
                            info->p++;
                            # 1856 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1876 "05function4.c"
                        # 1859 "05function4.c"
                        if(_if_conditional440=*info->p==58,                        _if_conditional440) {
                            # 1860 "05function4.c"
                            __dec_obj158=var_name_242;
                            var_name_242=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string(""))));
                            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1876 "05function4.c"
                            # 1862 "05function4.c"
                            if(anonymous_name_210) {
                                # 1863 "05function4.c"
                                # 1864 "05function4.c"
                                num_anonymous_var_name_289++;
                                # 1865 "05function4.c"
                                __dec_obj159=var_name_242;
                                var_name_242=(char*)come_increment_ref_count(((char*)(right_value355=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_289))));
                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1876 "05function4.c"
                                # 1867 "05function4.c"
                                if(_if_conditional442=xisalnum(*info->p)||*info->p==95,                                _if_conditional442) {
                                    # 1868 "05function4.c"
                                    __dec_obj160=var_name_242;
                                    var_name_242=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 1868, 50),__exception_result_var_b39=((char*)(right_value356=parse_word(info))), come_pop_stackframe(), __exception_result_var_b39));
                                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1871 "05function4.c"
                                    # 1872 "05function4.c"
                                    num_anonymous_var_name_290++;
                                    # 1873 "05function4.c"
                                    __dec_obj161=var_name_242;
                                    var_name_242=(char*)come_increment_ref_count(((char*)(right_value357=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_290))));
                                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 1881 "05function4.c"
                        # 1876 "05function4.c"
                        if(_if_conditional443=var_name_between_brace_247&&*info->p==41,                        _if_conditional443) {
                            # 1877 "05function4.c"
                            info->p++;
                            # 1878 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1892 "05function4.c"
                        # 1881 "05function4.c"
                        if(_if_conditional444=*info->p==58,                        _if_conditional444) {
                            # 1882 "05function4.c"
                            info->p++;
                            # 1883 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 1885 "05function4.c"
                            no_comma_291=info->no_comma;
                            # 1886 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 1887 "05function4.c"
                            node_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
                            if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1888 "05function4.c"
                            info->no_comma=no_comma_291;
                            # 1890 "05function4.c"
                            __dec_obj162=type_241->mSizeNum;
                            type_241->mSizeNum=(struct sNode*)come_increment_ref_count(node_292);
                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_288,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 2060 "05function4.c"
                    # 1895 "05function4.c"
                    if(_if_conditional445=map$2charphsTypephp_operator_load_element(info->types,type_name_190),                    _if_conditional445) {
                        # 1896 "05function4.c"
                        __dec_obj163=type_241;
                        type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value359=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_190)))));
                        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value359,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1897 "05function4.c"
                        type_241->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_241->mClass->mName), "05function4.c", 1897, 51));
                        # 1898 "05function4.c"
                        __dec_obj164=type_241->mOriginalTypeName;
                        type_241->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string(type_name_190))));
                        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1899 "05function4.c"
                        type_241->mOriginalTypeNamePointerNum=pointer_num_236;
                        # 1901 "05function4.c"
                        type_241->mConstant=type_241->mConstant||constant_192;
                        # 1902 "05function4.c"
                        __dec_obj165=type_241->mAlignas;
                        type_241->mAlignas=(struct sNode*)come_increment_ref_count(alignas__208);
                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1903 "05function4.c"
                        type_241->mComeMemCore=type_241->mComeMemCore||come_mem_core__207;
                        # 1904 "05function4.c"
                        type_241->mRegister=register__195;
                        # 1905 "05function4.c"
                        type_241->mUnsigned=type_241->mUnsigned||unsigned__196;
                        # 1906 "05function4.c"
                        type_241->mVolatile=volatile__194;
                        # 1907 "05function4.c"
                        type_241->mStatic=type_241->mStatic||static__193;
                        # 1908 "05function4.c"
                        type_241->mRecord=type_241->mRecord||record__191;
                        # 1909 "05function4.c"
                        type_241->mExtern=type_241->mExtern||extern__205;
                        # 1910 "05function4.c"
                        type_241->mInline=type_241->mInline||inline__206;
                        # 1911 "05function4.c"
                        type_241->mRestrict=type_241->mRestrict||restrict__200;
                        # 1912 "05function4.c"
                        type_241->mLongLong=type_241->mLongLong||long_long_198;
                        # 1913 "05function4.c"
                        type_241->mLong=type_241->mLong||long__197;
                        # 1914 "05function4.c"
                        type_241->mShort=type_241->mShort||short__199;
                        # 1915 "05function4.c"
                        type_241->mPointerNum+=pointer_num_236;
                        # 1916 "05function4.c"
                        type_241->mHeap=type_241->mHeap||heap_237;
                    }
                    else {
                        # 2060 "05function4.c"
                        # 1918 "05function4.c"
                        if(_if_conditional446=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_190)),                        _if_conditional446) {
                            # 1925 "05function4.c"
                            for(                            i_293=0;                            i_293<list$1charph_length(info->generics_type_names);                            i_293++                            ){
                                # 1923 "05function4.c"
                                # 1920 "05function4.c"
                                if(_if_conditional447=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_293), "05function4.c", 1920, 52)),type_name_190),                                _if_conditional447) {
                                    # 1921 "05function4.c"
                                    __dec_obj166=type_241;
                                    type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value363=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1921, "sType")))),((char*)(right_value362=xsprintf("generics_type%d",i_293))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value363,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            # 1925 "05function4.c"
                            type_241->mConstant=type_241->mConstant||constant_192;
                            # 1926 "05function4.c"
                            __dec_obj167=type_241->mAlignas;
                            type_241->mAlignas=(struct sNode*)come_increment_ref_count(alignas__208);
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                            # 1927 "05function4.c"
                            type_241->mComeMemCore=type_241->mComeMemCore||come_mem_core__207;
                            # 1928 "05function4.c"
                            type_241->mRegister=register__195;
                            # 1929 "05function4.c"
                            type_241->mUnsigned=type_241->mUnsigned||unsigned__196;
                            # 1930 "05function4.c"
                            type_241->mVolatile=volatile__194;
                            # 1931 "05function4.c"
                            type_241->mStatic=type_241->mStatic||static__193;
                            # 1932 "05function4.c"
                            type_241->mRecord=type_241->mRecord||record__191;
                            # 1933 "05function4.c"
                            type_241->mExtern=type_241->mExtern||extern__205;
                            # 1934 "05function4.c"
                            type_241->mInline=type_241->mInline||inline__206;
                            # 1935 "05function4.c"
                            type_241->mRestrict=type_241->mRestrict||restrict__200;
                            # 1936 "05function4.c"
                            type_241->mLongLong=type_241->mLongLong||long_long_198;
                            # 1937 "05function4.c"
                            type_241->mLong=type_241->mLong||long__197;
                            # 1938 "05function4.c"
                            type_241->mShort=type_241->mShort||short__199;
                            # 1939 "05function4.c"
                            type_241->mPointerNum+=pointer_num_236;
                            # 1940 "05function4.c"
                            type_241->mHeap=type_241->mHeap||heap_237;
                        }
                        else {
                            # 2060 "05function4.c"
                            # 1942 "05function4.c"
                            if(_if_conditional448=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_190)),                            _if_conditional448) {
                                # 1949 "05function4.c"
                                for(                                i_294=0;                                i_294<list$1charph_length(info->method_generics_type_names);                                i_294++                                ){
                                    # 1947 "05function4.c"
                                    # 1944 "05function4.c"
                                    if(_if_conditional449=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_294), "05function4.c", 1944, 53)),type_name_190),                                    _if_conditional449) {
                                        # 1945 "05function4.c"
                                        __dec_obj168=type_241;
                                        type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value366=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value364=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1945, "sType")))),((char*)(right_value365=xsprintf("mgenerics_type%d",i_294))),(_Bool)0,info))));
                                        come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value364,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value366,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                # 1949 "05function4.c"
                                type_241->mConstant=type_241->mConstant||constant_192;
                                # 1950 "05function4.c"
                                __dec_obj169=type_241->mAlignas;
                                type_241->mAlignas=(struct sNode*)come_increment_ref_count(alignas__208);
                                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                # 1951 "05function4.c"
                                type_241->mComeMemCore=type_241->mComeMemCore||come_mem_core__207;
                                # 1952 "05function4.c"
                                type_241->mRegister=register__195;
                                # 1953 "05function4.c"
                                type_241->mUnsigned=type_241->mUnsigned||unsigned__196;
                                # 1954 "05function4.c"
                                type_241->mVolatile=volatile__194;
                                # 1955 "05function4.c"
                                type_241->mStatic=type_241->mStatic||static__193;
                                # 1956 "05function4.c"
                                type_241->mRecord=type_241->mRecord||record__191;
                                # 1957 "05function4.c"
                                type_241->mExtern=type_241->mExtern||extern__205;
                                # 1958 "05function4.c"
                                type_241->mInline=type_241->mInline||inline__206;
                                # 1959 "05function4.c"
                                type_241->mRestrict=type_241->mRestrict||restrict__200;
                                # 1960 "05function4.c"
                                type_241->mLongLong=type_241->mLongLong||long_long_198;
                                # 1961 "05function4.c"
                                type_241->mLong=type_241->mLong||long__197;
                                # 1962 "05function4.c"
                                type_241->mShort=type_241->mShort||short__199;
                                # 1963 "05function4.c"
                                type_241->mPointerNum+=pointer_num_236;
                                # 1964 "05function4.c"
                                type_241->mHeap=type_241->mHeap||heap_237;
                            }
                            else {
                                # 2060 "05function4.c"
                                # 1966 "05function4.c"
                                if(_if_conditional450=*info->p==60,                                _if_conditional450) {
                                    # 1967 "05function4.c"
                                    info->p++;
                                    # 1968 "05function4.c"
                                    skip_spaces_and_lf(info);
                                    # 1975 "05function4.c"
                                    # 1970 "05function4.c"
                                    if(_if_conditional451=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_190)==((void*)0),                                    _if_conditional451) {
                                        # 1972 "05function4.c"
                                        __result164__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value368=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value367=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1972, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value367,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value368,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        return __result164__;
                                    }
                                    # 1975 "05function4.c"
                                    __dec_obj170=type_241;
                                    type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value369=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1975, "sType")))),type_name_190,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value369,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value370,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 2002 "05function4.c"
                                    while(_while_condtional47=(_Bool)1,                                    _while_condtional47) {
                                        # 1980 "05function4.c"
                                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value371=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_295=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                        var_name_296=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                        err_297=multiple_assign_var4->v3;
                                        come_call_finalizer3(right_value371,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 1984 "05function4.c"
                                        # 1980 "05function4.c"
                                        if(_if_conditional452=!err_297,                                        _if_conditional452) {
                                            # 1981 "05function4.c"
                                            __result165__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value373=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value372=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1981, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer3(generics_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_296 = come_decrement_ref_count2(var_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value372,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            return __result165__;
                                        }
                                        # 1984 "05function4.c"
                                        list$1sTypeph_push_back(type_241->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_295));
                                        # 2000 "05function4.c"
                                        # 1986 "05function4.c"
                                        if(_if_conditional453=*info->p==44,                                        _if_conditional453) {
                                            # 1987 "05function4.c"
                                            info->p++;
                                            # 1988 "05function4.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            # 2000 "05function4.c"
                                            # 1990 "05function4.c"
                                            if(_if_conditional454=*info->p==62,                                            _if_conditional454) {
                                                # 1991 "05function4.c"
                                                info->p++;
                                                # 1992 "05function4.c"
                                                skip_spaces_and_lf(info);
                                                # 1994 "05function4.c"
                                                come_call_finalizer3(generics_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_296 = come_decrement_ref_count2(var_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                # 1997 "05function4.c"
                                                err_msg(info,"invalid generics type\n");
                                                # 1998 "05function4.c"
                                                __result166__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value375=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value374=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1998, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer3(generics_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_296 = come_decrement_ref_count2(var_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value374,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value375,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                return __result166__;
                                            }
                                        }
                                        come_call_finalizer3(generics_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_296 = come_decrement_ref_count2(var_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2014 "05function4.c"
                                    # 2002 "05function4.c"
                                    if(_if_conditional455=is_contained_generics_class(type_241,info),                                    _if_conditional455) {
                                        # 2003 "05function4.c"
                                        __dec_obj171=type_241;
                                        type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value376=solve_generics(type_241,info->generics_type,info))));
                                        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value376,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 2012 "05function4.c"
                                        # 2006 "05function4.c"
                                        if(_if_conditional456=!output_generics_struct(type_241,type_241,info),                                        _if_conditional456) {
                                            # 2008 "05function4.c"
                                            new_name_298=(char*)come_increment_ref_count(((char*)(right_value377=create_generics_name(type_241,info))));
                                            right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 2009 "05function4.c"
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_298);
                                            # 2010 "05function4.c"
                                            exit(7);
                                            new_name_298 = come_decrement_ref_count2(new_name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 2014 "05function4.c"
                                    type_241->mConstant=type_241->mConstant||constant_192;
                                    # 2015 "05function4.c"
                                    __dec_obj172=type_241->mAlignas;
                                    type_241->mAlignas=(struct sNode*)come_increment_ref_count(alignas__208);
                                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2016 "05function4.c"
                                    type_241->mComeMemCore=type_241->mComeMemCore||come_mem_core__207;
                                    # 2017 "05function4.c"
                                    type_241->mRegister=register__195;
                                    # 2018 "05function4.c"
                                    type_241->mUnsigned=type_241->mUnsigned||unsigned__196;
                                    # 2019 "05function4.c"
                                    type_241->mVolatile=volatile__194;
                                    # 2020 "05function4.c"
                                    type_241->mStatic=type_241->mStatic||static__193;
                                    # 2021 "05function4.c"
                                    type_241->mRecord=type_241->mRecord||record__191;
                                    # 2022 "05function4.c"
                                    type_241->mExtern=type_241->mExtern||extern__205;
                                    # 2023 "05function4.c"
                                    type_241->mInline=type_241->mInline||inline__206;
                                    # 2024 "05function4.c"
                                    type_241->mRestrict=type_241->mRestrict||restrict__200;
                                    # 2025 "05function4.c"
                                    type_241->mLongLong=type_241->mLongLong||long_long_198;
                                    # 2026 "05function4.c"
                                    type_241->mLong=type_241->mLong||long__197;
                                    # 2027 "05function4.c"
                                    type_241->mShort=type_241->mShort||short__199;
                                    # 2028 "05function4.c"
                                    type_241->mPointerNum+=pointer_num_236;
                                    # 2029 "05function4.c"
                                    type_241->mHeap=type_241->mHeap||heap_237;
                                }
                                else {
                                    # 2040 "05function4.c"
                                    # 2032 "05function4.c"
                                    if(struct__201) {
                                        # 2033 "05function4.c"
                                        klass_299=map$2charphsClassphp_operator_load_element(info->classes,type_name_190);
                                        # 2038 "05function4.c"
                                        # 2035 "05function4.c"
                                        if(_if_conditional458=klass_299==((void*)0)&&*info->p!=60,                                        _if_conditional458) {
                                            # 2036 "05function4.c"
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_190),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value385=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value384=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 2036, "sClass")))),type_name_190,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer3(right_value384,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value385,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    # 2040 "05function4.c"
                                    __dec_obj173=type_241;
                                    type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value387=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value386=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2040, "sType")))),type_name_190,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value386,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value387,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 2042 "05function4.c"
                                    type_241->mConstant=type_241->mConstant||constant_192;
                                    # 2043 "05function4.c"
                                    __dec_obj174=type_241->mAlignas;
                                    type_241->mAlignas=(struct sNode*)come_increment_ref_count(alignas__208);
                                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2044 "05function4.c"
                                    type_241->mComeMemCore=type_241->mComeMemCore||come_mem_core__207;
                                    # 2045 "05function4.c"
                                    type_241->mRegister=register__195;
                                    # 2046 "05function4.c"
                                    type_241->mUnsigned=type_241->mUnsigned||unsigned__196;
                                    # 2047 "05function4.c"
                                    type_241->mVolatile=volatile__194;
                                    # 2048 "05function4.c"
                                    type_241->mStatic=type_241->mStatic||static__193;
                                    # 2049 "05function4.c"
                                    type_241->mRecord=type_241->mRecord||record__191;
                                    # 2050 "05function4.c"
                                    type_241->mExtern=type_241->mExtern||extern__205;
                                    # 2051 "05function4.c"
                                    type_241->mInline=type_241->mInline||inline__206;
                                    # 2052 "05function4.c"
                                    type_241->mRestrict=type_241->mRestrict||restrict__200;
                                    # 2053 "05function4.c"
                                    type_241->mLongLong=type_241->mLongLong||long_long_198;
                                    # 2054 "05function4.c"
                                    type_241->mLong=type_241->mLong||long__197;
                                    # 2055 "05function4.c"
                                    type_241->mShort=type_241->mShort||short__199;
                                    # 2056 "05function4.c"
                                    type_241->mPointerNum+=pointer_num_236;
                                    # 2057 "05function4.c"
                                    type_241->mHeap=type_241->mHeap||heap_237;
                                }
                            }
                        }
                    }
                    # 2060 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2074 "05function4.c"
                    while(_while_condtional56=*info->p==42,                    _while_condtional56) {
                        # 2063 "05function4.c"
                        info->p++;
                        # 2064 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2066 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2068 "05function4.c"
                        type_241->mPointerNum++;
                        # 2072 "05function4.c"
                        # 2069 "05function4.c"
                        if(type_241->mNoSolvedGenericsType->v1) {
                            # 2070 "05function4.c"
                            type_241->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2084 "05function4.c"
                    # 2074 "05function4.c"
                    if(_if_conditional507=*info->p==37,                    _if_conditional507) {
                        # 2075 "05function4.c"
                        info->p++;
                        # 2076 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2078 "05function4.c"
                        type_241->mHeap=(_Bool)1;
                        # 2082 "05function4.c"
                        # 2079 "05function4.c"
                        if(type_241->mNoSolvedGenericsType->v1) {
                            # 2080 "05function4.c"
                            type_241->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2095 "05function4.c"
                    # 2084 "05function4.c"
                    if(_if_conditional509=*info->p==38,                    _if_conditional509) {
                        # 2085 "05function4.c"
                        info->p++;
                        # 2086 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2088 "05function4.c"
                        type_241->mNoHeap=(_Bool)1;
                        # 2093 "05function4.c"
                        # 2090 "05function4.c"
                        if(type_241->mNoSolvedGenericsType->v1) {
                            # 2091 "05function4.c"
                            type_241->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    # 2108 "05function4.c"
                    # 2095 "05function4.c"
                    if(_if_conditional511=*info->p==63,                    _if_conditional511) {
                        # 2096 "05function4.c"
                        info->p++;
                        # 2106 "05function4.c"
                        # 2098 "05function4.c"
                        if(_if_conditional512=*info->p==63,                        _if_conditional512) {
                            # 2099 "05function4.c"
                            info->p++;
                            # 2100 "05function4.c"
                            type_241->mGuardValue=(_Bool)1;
                        }
                        else {
                            # 2103 "05function4.c"
                            type_241->mNullValue=(_Bool)1;
                        }
                        # 2106 "05function4.c"
                        skip_spaces_and_lf(info);
                    }
                    # 2115 "05function4.c"
                    # 2108 "05function4.c"
                    if(_if_conditional513=*info->p==96,                    _if_conditional513) {
                        # 2109 "05function4.c"
                        info->p++;
                        # 2110 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2112 "05function4.c"
                        type_241->mNoCallingDestructor=(_Bool)1;
                    }
                    # 2115 "05function4.c"
                    skip_pointer_attribute(info);
                    # 2130 "05function4.c"
                    while(_while_condtional57=*info->p==42,                    _while_condtional57) {
                        # 2118 "05function4.c"
                        info->p++;
                        # 2119 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2121 "05function4.c"
                        skip_pointer_attribute(info);
                        # 2123 "05function4.c"
                        type_241->mPointerNum++;
                        # 2128 "05function4.c"
                        # 2125 "05function4.c"
                        if(type_241->mNoSolvedGenericsType->v1) {
                            # 2126 "05function4.c"
                            type_241->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2140 "05function4.c"
                    # 2130 "05function4.c"
                    if(_if_conditional515=*info->p==37,                    _if_conditional515) {
                        # 2131 "05function4.c"
                        info->p++;
                        # 2132 "05function4.c"
                        skip_spaces_and_lf(info);
                        # 2134 "05function4.c"
                        type_241->mHeap=(_Bool)1;
                        # 2138 "05function4.c"
                        # 2135 "05function4.c"
                        if(type_241->mNoSolvedGenericsType->v1) {
                            # 2136 "05function4.c"
                            type_241->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2180 "05function4.c"
                    # 2140 "05function4.c"
                    if(_if_conditional517=parse_multiple_type&&*info->p==44,                    _if_conditional517) {
                        # 2141 "05function4.c"
                        types_344=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value389=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value388=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 2141, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value388,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value389,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2143 "05function4.c"
                        list$1sTypeph_push_back(types_344,(struct sType*)come_increment_ref_count(((struct sType*)(right_value390=sType_clone(type_241)))));
                        come_call_finalizer3(right_value390,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2158 "05function4.c"
                        while(_while_condtional58=*info->p==44,                        _while_condtional58) {
                            # 2146 "05function4.c"
                            info->p++;
                            # 2147 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2149 "05function4.c"
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value391=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_345=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_346=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_347=multiple_assign_var5->v3;
                            come_call_finalizer3(right_value391,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 2155 "05function4.c"
                            # 2151 "05function4.c"
                            if(_if_conditional518=!err_347,                            _if_conditional518) {
                                # 2152 "05function4.c"
                                __result191__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value393=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value392=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2152, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer3(type2_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_346 = come_decrement_ref_count2(name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(types_344,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value392,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value393,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result191__;
                            }
                            # 2155 "05function4.c"
                            list$1sTypeph_push_back(types_344,(struct sType*)come_increment_ref_count(((struct sType*)(right_value394=sType_clone(type2_345)))));
                            come_call_finalizer3(right_value394,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_346 = come_decrement_ref_count2(name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2158 "05function4.c"
                        num_tuples_348=list$1sTypeph_length(types_344);
                        # 2160 "05function4.c"
                        __dec_obj175=type_241;
                        type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value397=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value395=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 2160, "sType")))),((char*)(right_value396=xsprintf("tuple%d",num_tuples_348))),(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value395,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value397,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2161 "05function4.c"
                        type_241->mPointerNum++;
                        # 2162 "05function4.c"
                        type_241->mHeap=(_Bool)1;
                        # 2168 "05function4.c"
                        for(                        o2_saved_349=(struct list$1sTypeph*)come_increment_ref_count((types_344)),it_350=list$1sTypeph_begin((o2_saved_349));                        !list$1sTypeph_end((o2_saved_349));                        it_350=list$1sTypeph_next((o2_saved_349))                        ){
                            # 2165 "05function4.c"
                            list$1sTypeph_push_back(type_241->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value398=sType_clone(it_350)))));
                            come_call_finalizer3(right_value398,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer3(o2_saved_349,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 2179 "05function4.c"
                        # 2168 "05function4.c"
                        if(_if_conditional519=is_contained_generics_class(type_241,info),                        _if_conditional519) {
                            # 2169 "05function4.c"
                            __dec_obj176=type_241;
                            type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value399=solve_generics(type_241,info->generics_type,info))));
                            come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value399,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2178 "05function4.c"
                            # 2172 "05function4.c"
                            if(_if_conditional520=!output_generics_struct(type_241,type_241,info),                            _if_conditional520) {
                                # 2174 "05function4.c"
                                new_name_351=(char*)come_increment_ref_count(((char*)(right_value400=create_generics_name(type_241,info))));
                                right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 2175 "05function4.c"
                                printf("output generics is failed(%s)\n",new_name_351);
                                # 2176 "05function4.c"
                                exit(9);
                                new_name_351 = come_decrement_ref_count2(new_name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer3(types_344,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2271 "05function4.c"
                    # 2229 "05function4.c"
                    if(parse_variable_name) {
                        # 2230 "05function4.c"
                        parse_sharp_v5(info);
                        # 2237 "05function4.c"
                        # 2232 "05function4.c"
                        if(_if_conditional522=var_name_between_brace_247&&*info->p==40,                        _if_conditional522) {
                            # 2233 "05function4.c"
                            info->p++;
                            # 2234 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2254 "05function4.c"
                        # 2237 "05function4.c"
                        if(_if_conditional523=*info->p==58,                        _if_conditional523) {
                            # 2238 "05function4.c"
                            __dec_obj177=var_name_242;
                            var_name_242=(char*)come_increment_ref_count(((char*)(right_value401=__builtin_string(""))));
                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2254 "05function4.c"
                            # 2240 "05function4.c"
                            if(anonymous_name_210) {
                                # 2241 "05function4.c"
                                # 2242 "05function4.c"
                                num_anonymous_var_name_352++;
                                # 2243 "05function4.c"
                                __dec_obj178=var_name_242;
                                var_name_242=(char*)come_increment_ref_count(((char*)(right_value402=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_352))));
                                __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 2254 "05function4.c"
                                # 2245 "05function4.c"
                                if(_if_conditional525=xisalnum(*info->p)||*info->p==95,                                _if_conditional525) {
                                    # 2246 "05function4.c"
                                    __dec_obj179=var_name_242;
                                    var_name_242=(char*)come_increment_ref_count((come_push_stackframe("05function4.c", 2246, 54),__exception_result_var_b40=((char*)(right_value403=parse_word(info))), come_pop_stackframe(), __exception_result_var_b40));
                                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 2249 "05function4.c"
                                    # 2250 "05function4.c"
                                    num_anonymous_var_name_353++;
                                    # 2251 "05function4.c"
                                    __dec_obj180=var_name_242;
                                    var_name_242=(char*)come_increment_ref_count(((char*)(right_value404=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_353))));
                                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 2259 "05function4.c"
                        # 2254 "05function4.c"
                        if(_if_conditional526=var_name_between_brace_247&&*info->p==41,                        _if_conditional526) {
                            # 2255 "05function4.c"
                            info->p++;
                            # 2256 "05function4.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2270 "05function4.c"
                        # 2259 "05function4.c"
                        if(_if_conditional527=*info->p==58,                        _if_conditional527) {
                            # 2260 "05function4.c"
                            info->p++;
                            # 2261 "05function4.c"
                            skip_spaces_and_lf(info);
                            # 2263 "05function4.c"
                            no_comma_354=info->no_comma;
                            # 2264 "05function4.c"
                            info->no_comma=(_Bool)1;
                            # 2265 "05function4.c"
                            node_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=expression_v13(info))));
                            if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2266 "05function4.c"
                            info->no_comma=no_comma_354;
                            # 2268 "05function4.c"
                            __dec_obj181=type_241->mSizeNum;
                            type_241->mSizeNum=(struct sNode*)come_increment_ref_count(node_355);
                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_355) { node_355 = come_decrement_ref_count2(node_355, ((struct sNode*)node_355)->finalize, ((struct sNode*)node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    # 2272 "05function4.c"
    parse_sharp_v5(info);
    # 2297 "05function4.c"
    while(_while_condtional59=*info->p==91,    _while_condtional59) {
        # 2275 "05function4.c"
        info->p++;
        # 2276 "05function4.c"
        skip_spaces_and_lf(info);
        # 2277 "05function4.c"
        parse_sharp_v5(info);
        # 2279 "05function4.c"
        skip_pointer_attribute(info);
        # 2289 "05function4.c"
        # 2281 "05function4.c"
        if(_if_conditional528=*info->p==93,        _if_conditional528) {
            # 2282 "05function4.c"
            info->p++;
            # 2283 "05function4.c"
            skip_spaces_and_lf(info);
            # 2285 "05function4.c"
            type_241->mArrayPointerType=(_Bool)1;
            # 2286 "05function4.c"
            type_241->mPointerNum++;
            # 2287 "05function4.c"
            break;
        }
        # 2289 "05function4.c"
        parse_sharp_v5(info);
        # 2291 "05function4.c"
        node_356=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=expression_v13(info))));
        if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2292 "05function4.c"
        list$1sNodeph_push_back(type_241->mArrayNum,(struct sNode*)come_increment_ref_count(node_356));
        # 2293 "05function4.c"
        parse_sharp_v5(info);
        # 2295 "05function4.c"
        expected_next_character(93,info);
        if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2297 "05function4.c"
    asm_name_357=(char*)come_increment_ref_count(((char*)(right_value407=parse_attribute(info))));
    right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2299 "05function4.c"
    __dec_obj182=type_241->mAsmName;
    type_241->mAsmName=(char*)come_increment_ref_count(asm_name_357);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2301 "05function4.c"
    parse_sharp_v5(info);
    # 2303 "05function4.c"
    __result192__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value409=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value408=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 2303, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_241),(char*)come_increment_ref_count(var_name_242),(_Bool)1)));
    type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_357 = come_decrement_ref_count2(asm_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value408,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value409,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result192__;
    type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__208) { alignas__208 = come_decrement_ref_count2(alignas__208, ((struct sNode*)alignas__208)->finalize, ((struct sNode*)alignas__208)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_242 = come_decrement_ref_count2(var_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_357 = come_decrement_ref_count2(asm_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj84;
char* __dec_obj85;
struct tuple3$3sTypephcharphbool* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1805 "./neo-c.h"
                                    __dec_obj84=self->v1;
                                    self->v1=(struct sType*)come_increment_ref_count(v1);
                                    come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 1806 "./neo-c.h"
                                    __dec_obj85=self->v2;
                                    self->v2=(char*)come_increment_ref_count(v2);
                                    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 1807 "./neo-c.h"
                                    self->v3=v3;
                                    # 1809 "./neo-c.h"
                                    __result133__ = __result_obj__ = self;
                                    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result133__;
                                    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_262;
unsigned int hash_263;
unsigned int it_264;
_Bool _while_condtional45;
_Bool _if_conditional407;
_Bool _if_conditional408;
struct sType* __result143__;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct sType* __result144__;
struct sType* __result145__;
struct sType* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_262, 0, sizeof(struct sType*));
memset(&hash_263, 0, sizeof(unsigned int));
memset(&it_264, 0, sizeof(unsigned int));
                # 1545 "./neo-c.h"
                # 1546 "./neo-c.h"
                memset(&default_value_262,0,sizeof(struct sType*));
                # 1548 "./neo-c.h"
                hash_263=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./neo-c.h"
                it_264=hash_263;
                # 1573 "./neo-c.h"
                while(_while_condtional45=(_Bool)1,                _while_condtional45) {
                    # 1571 "./neo-c.h"
                    # 1552 "./neo-c.h"
                    if(_if_conditional407=self->item_existance[it_264],                    _if_conditional407) {
                        # 1559 "./neo-c.h"
                        # 1554 "./neo-c.h"
                        if(_if_conditional408=string_equals(self->keys[it_264],key),                        _if_conditional408) {
                            # 1556 "./neo-c.h"
                            __result143__ = __result_obj__ = self->items[it_264];
                            come_call_finalizer3(default_value_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result143__;
                        }
                        # 1559 "./neo-c.h"
                        it_264++;
                        # 1567 "./neo-c.h"
                        # 1561 "./neo-c.h"
                        if(_if_conditional409=it_264>=self->size,                        _if_conditional409) {
                            # 1562 "./neo-c.h"
                            it_264=0;
                        }
                        else {
                            # 1567 "./neo-c.h"
                            # 1564 "./neo-c.h"
                            if(_if_conditional410=it_264==hash_263,                            _if_conditional410) {
                                # 1565 "./neo-c.h"
                                __result144__ = __result_obj__ = default_value_262;
                                come_call_finalizer3(default_value_262,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result144__;
                            }
                        }
                    }
                    else {
                        # 1569 "./neo-c.h"
                        __result145__ = __result_obj__ = default_value_262;
                        come_call_finalizer3(default_value_262,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result145__;
                    }
                }
                # 1573 "./neo-c.h"
                __result146__ = __result_obj__ = default_value_262;
                come_call_finalizer3(default_value_262,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result146__;
                come_call_finalizer3(default_value_262,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_267;
_Bool _if_conditional416;
_Bool __result154__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_267, 0, sizeof(char*));
                    # 747 "./neo-c.h"
                    for(                    it_267=list$1charph_begin(self);                    !list$1charph_end(self);                    it_267=list$1charph_next(self)                    ){
                        # 745 "./neo-c.h"
                        # 742 "./neo-c.h"
                        if(_if_conditional416=string_operator_equals(it_267,item),                        _if_conditional416) {
                            # 743 "./neo-c.h"
                            __result154__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result154__;
                        }
                    }
                    # 747 "./neo-c.h"
                    __result155__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result155__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional412;
char* result_265;
char* __result147__;
_Bool _if_conditional413;
char* __result148__;
char* result_266;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_265, 0, sizeof(char*));
memset(&result_266, 0, sizeof(char*));
                        # 291 "./neo-c.h"
                        # 286 "./neo-c.h"
                        if(_if_conditional412=self==((void*)0),                        _if_conditional412) {
                            # 287 "./neo-c.h"
                            # 288 "./neo-c.h"
                            memset(&result_265,0,sizeof(char*));
                            # 289 "./neo-c.h"
                            __result147__ = __result_obj__ = result_265;
                            return __result147__;
                        }
                        # 291 "./neo-c.h"
                        self->it=self->head;
                        # 297 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(self->it) {
                            # 294 "./neo-c.h"
                            __result148__ = __result_obj__ = self->it->item;
                            return __result148__;
                        }
                        # 297 "./neo-c.h"
                        # 298 "./neo-c.h"
                        memset(&result_266,0,sizeof(char*));
                        # 299 "./neo-c.h"
                        __result149__ = __result_obj__ = result_266;
                        return __result149__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 321 "./neo-c.h"
                        __result150__ = self==((void*)0)||self->it==((void*)0);
                        return __result150__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional414;
char* result_268;
char* __result151__;
_Bool _if_conditional415;
char* __result152__;
char* result_269;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_268, 0, sizeof(char*));
memset(&result_269, 0, sizeof(char*));
                        # 309 "./neo-c.h"
                        # 303 "./neo-c.h"
                        if(_if_conditional414=self==((void*)0)||self->it==((void*)0),                        _if_conditional414) {
                            # 304 "./neo-c.h"
                            # 305 "./neo-c.h"
                            memset(&result_268,0,sizeof(char*));
                            # 306 "./neo-c.h"
                            __result151__ = __result_obj__ = result_268;
                            return __result151__;
                        }
                        # 309 "./neo-c.h"
                        self->it=self->it->next;
                        # 315 "./neo-c.h"
                        # 311 "./neo-c.h"
                        if(self->it) {
                            # 312 "./neo-c.h"
                            __result152__ = __result_obj__ = self->it->item;
                            return __result152__;
                        }
                        # 315 "./neo-c.h"
                        # 316 "./neo-c.h"
                        memset(&result_269,0,sizeof(char*));
                        # 317 "./neo-c.h"
                        __result153__ = __result_obj__ = result_269;
                        return __result153__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional418;
int __result156__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 368 "./neo-c.h"
                        # 365 "./neo-c.h"
                        if(_if_conditional418=self==((void*)0),                        _if_conditional418) {
                            # 366 "./neo-c.h"
                            __result156__ = 0;
                            return __result156__;
                        }
                        # 368 "./neo-c.h"
                        __result157__ = self->len;
                        return __result157__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional419;
struct list_item$1charph* it_271;
int i_272;
_Bool _while_condtional46;
_Bool _if_conditional420;
char* __result158__;
char* default_value_273;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1charph*));
memset(&i_272, 0, sizeof(int));
memset(&default_value_273, 0, sizeof(char*));
                            # 687 "./neo-c.h"
                            # 683 "./neo-c.h"
                            if(_if_conditional419=position<0,                            _if_conditional419) {
                                # 684 "./neo-c.h"
                                position+=self->len;
                            }
                            # 687 "./neo-c.h"
                            it_271=self->head;
                            # 688 "./neo-c.h"
                            i_272=0;
                            # 695 "./neo-c.h"
                            while(_while_condtional46=it_271!=((void*)0),                            _while_condtional46) {
                                # 693 "./neo-c.h"
                                # 690 "./neo-c.h"
                                if(_if_conditional420=position==i_272,                                _if_conditional420) {
                                    # 691 "./neo-c.h"
                                    __result158__ = __result_obj__ = it_271->item;
                                    return __result158__;
                                }
                                # 693 "./neo-c.h"
                                it_271=it_271->next;
                                # 694 "./neo-c.h"
                                i_272++;
                            }
                            # 697 "./neo-c.h"
                            # 698 "./neo-c.h"
                            memset(&default_value_273,0,sizeof(char*));
                            # 699 "./neo-c.h"
                            __result159__ = __result_obj__ = default_value_273;
                            default_value_273 = come_decrement_ref_count2(default_value_273, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result159__;
                            default_value_273 = come_decrement_ref_count2(default_value_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj141;
struct tuple1$1sTypeph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1736 "./neo-c.h"
                __dec_obj141=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 1738 "./neo-c.h"
                __result160__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result160__;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
char* __dec_obj156;
struct tuple3$3sTypepcharphbool* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1805 "./neo-c.h"
                            self->v1=v1;
                            # 1806 "./neo-c.h"
                            __dec_obj156=self->v2;
                            self->v2=(char*)come_increment_ref_count(v2);
                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 1807 "./neo-c.h"
                            self->v3=v3;
                            # 1809 "./neo-c.h"
                            __result162__ = __result_obj__ = self;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result162__;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
void* __result_obj__;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple3$3sTypepcharphboolp_finalize"
                                # 0 "tuple3$3sTypepcharphboolp_finalize"
                                if(_if_conditional435=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional435) {
                                    # 0 "tuple3$3sTypepcharphboolp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional436=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional436) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional437=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional437) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional459;
unsigned int hash_317;
unsigned int it_318;
_Bool _while_condtional50;
_Bool _if_conditional471;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional493;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool same_key_exist_335;
char* it2_338;
_Bool _if_conditional502;
_Bool _if_conditional503;
struct map$2charphsClassph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_317, 0, sizeof(unsigned int));
memset(&it_318, 0, sizeof(unsigned int));
memset(&same_key_exist_335, 0, sizeof(_Bool));
memset(&it2_338, 0, sizeof(char*));
                                                # 1394 "./neo-c.h"
                                                # 1391 "./neo-c.h"
                                                if(_if_conditional459=self->len*10>=self->size,                                                _if_conditional459) {
                                                    # 1392 "./neo-c.h"
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                # 1394 "./neo-c.h"
                                                hash_317=string_get_hash_key(key)%self->size;
                                                # 1395 "./neo-c.h"
                                                it_318=hash_317;
                                                # 1453 "./neo-c.h"
                                                while(_while_condtional50=(_Bool)1,                                                _while_condtional50) {
                                                    # 1451 "./neo-c.h"
                                                    # 1398 "./neo-c.h"
                                                    if(_if_conditional471=self->item_existance[it_318],                                                    _if_conditional471) {
                                                        # 1421 "./neo-c.h"
                                                        # 1400 "./neo-c.h"
                                                        if(_if_conditional472=string_equals(self->keys[it_318],key),                                                        _if_conditional472) {
                                                            # 1411 "./neo-c.h"
                                                            # 1402 "./neo-c.h"
                                                            if(_if_conditional473=1,                                                            _if_conditional473) {
                                                                # 1403 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_318]);
                                                                # 1404 "./neo-c.h"
                                                                self->keys[it_318] = come_decrement_ref_count2(self->keys[it_318], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                # 1405 "./neo-c.h"
                                                                self->keys[it_318]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                # 1408 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_318]);
                                                                # 1409 "./neo-c.h"
                                                                self->keys[it_318]=key;
                                                            }
                                                            # 1418 "./neo-c.h"
                                                            # 1411 "./neo-c.h"
                                                            if(_if_conditional493=1,                                                            _if_conditional493) {
                                                                # 1412 "./neo-c.h"
                                                                come_call_finalizer3(self->items[it_318],sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 1413 "./neo-c.h"
                                                                self->items[it_318]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                # 1416 "./neo-c.h"
                                                                self->items[it_318]=item;
                                                            }
                                                            # 1418 "./neo-c.h"
                                                            break;
                                                        }
                                                        # 1421 "./neo-c.h"
                                                        it_318++;
                                                        # 1431 "./neo-c.h"
                                                        # 1423 "./neo-c.h"
                                                        if(_if_conditional494=it_318>=self->size,                                                        _if_conditional494) {
                                                            # 1424 "./neo-c.h"
                                                            it_318=0;
                                                        }
                                                        else {
                                                            # 1431 "./neo-c.h"
                                                            # 1426 "./neo-c.h"
                                                            if(_if_conditional495=it_318==hash_317,                                                            _if_conditional495) {
                                                                # 1427 "./neo-c.h"
                                                                printf("unexpected error in map.insert\n");
                                                                # 1428 "./neo-c.h"
                                                                stackframe();
                                                                # 1429 "./neo-c.h"
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 1433 "./neo-c.h"
                                                        self->item_existance[it_318]=(_Bool)1;
                                                        # 1440 "./neo-c.h"
                                                        # 1434 "./neo-c.h"
                                                        if(_if_conditional496=1,                                                        _if_conditional496) {
                                                            # 1435 "./neo-c.h"
                                                            self->keys[it_318]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            # 1438 "./neo-c.h"
                                                            self->keys[it_318]=key;
                                                        }
                                                        # 1447 "./neo-c.h"
                                                        # 1440 "./neo-c.h"
                                                        if(_if_conditional497=1,                                                        _if_conditional497) {
                                                            # 1441 "./neo-c.h"
                                                            self->items[it_318]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            # 1444 "./neo-c.h"
                                                            self->items[it_318]=item;
                                                        }
                                                        # 1447 "./neo-c.h"
                                                        self->len++;
                                                        # 1449 "./neo-c.h"
                                                        break;
                                                    }
                                                }
                                                # 1453 "./neo-c.h"
                                                same_key_exist_335=(_Bool)0;
                                                # 1461 "./neo-c.h"
                                                for(                                                it2_338=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_338=list$1charp_next(self->key_list)                                                ){
                                                    # 1459 "./neo-c.h"
                                                    # 1456 "./neo-c.h"
                                                    if(_if_conditional502=string_equals(it2_338,key),                                                    _if_conditional502) {
                                                        # 1457 "./neo-c.h"
                                                        same_key_exist_335=(_Bool)1;
                                                    }
                                                }
                                                # 1465 "./neo-c.h"
                                                # 1461 "./neo-c.h"
                                                if(_if_conditional503=!same_key_exist_335,                                                _if_conditional503) {
                                                    # 1462 "./neo-c.h"
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                # 1465 "./neo-c.h"
                                                __result190__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result190__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_300;
void* right_value378;
char** keys_301;
void* right_value379;
struct sClass** items_302;
void* right_value380;
_Bool* item_existance_303;
int len_304;
char* it_307;
struct sClass* default_value_310;
struct sClass* it2_313;
unsigned int hash_314;
int n_315;
_Bool _while_condtional49;
_Bool _if_conditional468;
_Bool _if_conditional469;
_Bool _if_conditional470;
struct sClass* default_value_316;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_300, 0, sizeof(int));
right_value378 = (void*)0;
memset(&keys_301, 0, sizeof(char**));
right_value379 = (void*)0;
memset(&items_302, 0, sizeof(struct sClass**));
right_value380 = (void*)0;
memset(&item_existance_303, 0, sizeof(_Bool*));
memset(&len_304, 0, sizeof(int));
memset(&it_307, 0, sizeof(char*));
memset(&default_value_310, 0, sizeof(struct sClass*));
memset(&it2_313, 0, sizeof(struct sClass*));
memset(&hash_314, 0, sizeof(unsigned int));
memset(&n_315, 0, sizeof(int));
memset(&default_value_316, 0, sizeof(struct sClass*));
                                                        # 1338 "./neo-c.h"
                                                        size_300=self->size*10;
                                                        # 1339 "./neo-c.h"
                                                        keys_301=(char**)come_increment_ref_count(((char**)(right_value378=(char**)come_calloc(1, sizeof(char*)*(1*(size_300)), "./neo-c.h", 1339, "char*%"))));
                                                        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1340 "./neo-c.h"
                                                        items_302=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value379=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_300)), "./neo-c.h", 1340, "sClass*%"))));
                                                        come_call_finalizer3(right_value379,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 1341 "./neo-c.h"
                                                        item_existance_303=(_Bool*)come_increment_ref_count(((_Bool*)(right_value380=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_300)), "./neo-c.h", 1341, "bool"))));
                                                        right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1343 "./neo-c.h"
                                                        len_304=0;
                                                        # 1378 "./neo-c.h"
                                                        for(                                                        it_307=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_307=map$2charphsClassph_next(self)                                                        ){
                                                            # 1346 "./neo-c.h"
                                                            # 1347 "./neo-c.h"
                                                            memset(&default_value_310,0,sizeof(struct sClass*));
                                                            # 1348 "./neo-c.h"
                                                            it2_313=map$2charphsClassph_at(self,it_307,default_value_310);
                                                            # 1349 "./neo-c.h"
                                                            hash_314=string_get_hash_key(it_307)%size_300;
                                                            # 1350 "./neo-c.h"
                                                            n_315=hash_314;
                                                            # 1376 "./neo-c.h"
                                                            while(_while_condtional49=(_Bool)1,                                                            _while_condtional49) {
                                                                # 1375 "./neo-c.h"
                                                                # 1353 "./neo-c.h"
                                                                if(_if_conditional468=item_existance_303[n_315],                                                                _if_conditional468) {
                                                                    # 1355 "./neo-c.h"
                                                                    n_315++;
                                                                    # 1365 "./neo-c.h"
                                                                    # 1357 "./neo-c.h"
                                                                    if(_if_conditional469=n_315>=size_300,                                                                    _if_conditional469) {
                                                                        # 1358 "./neo-c.h"
                                                                        n_315=0;
                                                                    }
                                                                    else {
                                                                        # 1365 "./neo-c.h"
                                                                        # 1360 "./neo-c.h"
                                                                        if(_if_conditional470=n_315==hash_314,                                                                        _if_conditional470) {
                                                                            # 1361 "./neo-c.h"
                                                                            printf("unexpected error in map.rehash(1)\n");
                                                                            # 1362 "./neo-c.h"
                                                                            stackframe();
                                                                            # 1363 "./neo-c.h"
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1367 "./neo-c.h"
                                                                    item_existance_303[n_315]=(_Bool)1;
                                                                    # 1368 "./neo-c.h"
                                                                    keys_301[n_315]=it_307;
                                                                    # 1369 "./neo-c.h"
                                                                    # 1370 "./neo-c.h"
                                                                    items_302[n_315]=map$2charphsClassph_at(self,it_307,default_value_316);
                                                                    # 1372 "./neo-c.h"
                                                                    len_304++;
                                                                    # 1373 "./neo-c.h"
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        # 1378 "./neo-c.h"
                                                        come_free((char*)self->items);
                                                        # 1379 "./neo-c.h"
                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        # 1380 "./neo-c.h"
                                                        come_free((char*)self->keys);
                                                        # 1382 "./neo-c.h"
                                                        self->keys=keys_301;
                                                        # 1383 "./neo-c.h"
                                                        self->items=items_302;
                                                        # 1384 "./neo-c.h"
                                                        self->item_existance=item_existance_303;
                                                        # 1386 "./neo-c.h"
                                                        self->size=size_300;
                                                        # 1387 "./neo-c.h"
                                                        self->len=len_304;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional460;
char* result_305;
char* __result167__;
_Bool _if_conditional461;
char* __result168__;
char* result_306;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_305, 0, sizeof(char*));
memset(&result_306, 0, sizeof(char*));
                                                            # 1305 "./neo-c.h"
                                                            # 1300 "./neo-c.h"
                                                            if(_if_conditional460=self==((void*)0),                                                            _if_conditional460) {
                                                                # 1301 "./neo-c.h"
                                                                # 1302 "./neo-c.h"
                                                                memset(&result_305,0,sizeof(char*));
                                                                # 1303 "./neo-c.h"
                                                                __result167__ = __result_obj__ = result_305;
                                                                return __result167__;
                                                            }
                                                            # 1305 "./neo-c.h"
                                                            self->key_list->it=self->key_list->head;
                                                            # 1311 "./neo-c.h"
                                                            # 1307 "./neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1308 "./neo-c.h"
                                                                __result168__ = __result_obj__ = self->key_list->it->item;
                                                                return __result168__;
                                                            }
                                                            # 1311 "./neo-c.h"
                                                            # 1312 "./neo-c.h"
                                                            memset(&result_306,0,sizeof(char*));
                                                            # 1313 "./neo-c.h"
                                                            __result169__ = __result_obj__ = result_306;
                                                            return __result169__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1334 "./neo-c.h"
                                                            __result170__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result170__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional462;
char* result_308;
char* __result171__;
_Bool _if_conditional463;
char* __result172__;
char* result_309;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_308, 0, sizeof(char*));
memset(&result_309, 0, sizeof(char*));
                                                            # 1322 "./neo-c.h"
                                                            # 1317 "./neo-c.h"
                                                            if(_if_conditional462=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional462) {
                                                                # 1318 "./neo-c.h"
                                                                # 1319 "./neo-c.h"
                                                                memset(&result_308,0,sizeof(char*));
                                                                # 1320 "./neo-c.h"
                                                                __result171__ = __result_obj__ = result_308;
                                                                return __result171__;
                                                            }
                                                            # 1322 "./neo-c.h"
                                                            self->key_list->it=self->key_list->it->next;
                                                            # 1328 "./neo-c.h"
                                                            # 1324 "./neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1325 "./neo-c.h"
                                                                __result172__ = __result_obj__ = self->key_list->it->item;
                                                                return __result172__;
                                                            }
                                                            # 1328 "./neo-c.h"
                                                            # 1329 "./neo-c.h"
                                                            memset(&result_309,0,sizeof(char*));
                                                            # 1330 "./neo-c.h"
                                                            __result173__ = __result_obj__ = result_309;
                                                            return __result173__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_311;
unsigned int it_312;
_Bool _while_condtional48;
_Bool _if_conditional464;
_Bool _if_conditional465;
struct sClass* __result174__;
_Bool _if_conditional466;
_Bool _if_conditional467;
struct sClass* __result175__;
struct sClass* __result176__;
struct sClass* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_311, 0, sizeof(unsigned int));
memset(&it_312, 0, sizeof(unsigned int));
                                                                # 1227 "./neo-c.h"
                                                                hash_311=string_get_hash_key(((char*)key))%self->size;
                                                                # 1228 "./neo-c.h"
                                                                it_312=hash_311;
                                                                # 1252 "./neo-c.h"
                                                                while(_while_condtional48=(_Bool)1,                                                                _while_condtional48) {
                                                                    # 1250 "./neo-c.h"
                                                                    # 1231 "./neo-c.h"
                                                                    if(_if_conditional464=self->item_existance[it_312],                                                                    _if_conditional464) {
                                                                        # 1238 "./neo-c.h"
                                                                        # 1233 "./neo-c.h"
                                                                        if(_if_conditional465=string_equals(self->keys[it_312],key),                                                                        _if_conditional465) {
                                                                            # 1235 "./neo-c.h"
                                                                            __result174__ = __result_obj__ = self->items[it_312];
                                                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result174__;
                                                                        }
                                                                        # 1238 "./neo-c.h"
                                                                        it_312++;
                                                                        # 1246 "./neo-c.h"
                                                                        # 1240 "./neo-c.h"
                                                                        if(_if_conditional466=it_312>=self->size,                                                                        _if_conditional466) {
                                                                            # 1241 "./neo-c.h"
                                                                            it_312=0;
                                                                        }
                                                                        else {
                                                                            # 1246 "./neo-c.h"
                                                                            # 1243 "./neo-c.h"
                                                                            if(_if_conditional467=it_312==hash_311,                                                                            _if_conditional467) {
                                                                                # 1244 "./neo-c.h"
                                                                                __result175__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result175__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1248 "./neo-c.h"
                                                                        __result176__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result176__;
                                                                    }
                                                                }
                                                                # 1252 "./neo-c.h"
                                                                __result177__ = __result_obj__ = default_value;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result177__;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_319;
struct list_item$1charp* it_320;
_Bool _while_condtional51;
_Bool _if_conditional474;
struct list$1charp* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_319, 0, sizeof(int));
memset(&it_320, 0, sizeof(struct list_item$1charp*));
                                                                    # 449 "./neo-c.h"
                                                                    it2_319=0;
                                                                    # 450 "./neo-c.h"
                                                                    it_320=self->head;
                                                                    # 461 "./neo-c.h"
                                                                    while(_while_condtional51=it_320!=((void*)0),                                                                    _while_condtional51) {
                                                                        # 456 "./neo-c.h"
                                                                        # 452 "./neo-c.h"
                                                                        if(_if_conditional474=string_equals(it_320->item,item),                                                                        _if_conditional474) {
                                                                            # 453 "./neo-c.h"
                                                                            list$1charp_delete(self,it2_319,it2_319+1);
                                                                            # 454 "./neo-c.h"
                                                                            break;
                                                                        }
                                                                        # 456 "./neo-c.h"
                                                                        it2_319++;
                                                                        # 458 "./neo-c.h"
                                                                        it_320=it_320->next;
                                                                    }
                                                                    # 461 "./neo-c.h"
                                                                    __result181__ = __result_obj__ = self;
                                                                    return __result181__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
int tmp_321;
_Bool _if_conditional478;
_Bool _if_conditional479;
_Bool _if_conditional480;
struct list$1charp* __result178__;
_Bool _if_conditional481;
_Bool _if_conditional482;
struct list_item$1charp* it_324;
int i_325;
_Bool _while_condtional53;
_Bool _if_conditional483;
struct list_item$1charp* prev_it_326;
_Bool _if_conditional484;
_Bool _if_conditional485;
struct list_item$1charp* it_327;
int i_328;
_Bool _while_condtional54;
_Bool _if_conditional486;
_Bool _if_conditional487;
struct list_item$1charp* prev_it_329;
struct list_item$1charp* it_330;
struct list_item$1charp* head_prev_it_331;
struct list_item$1charp* tail_it_332;
int i_333;
_Bool _while_condtional55;
_Bool _if_conditional488;
_Bool _if_conditional489;
_Bool _if_conditional490;
struct list_item$1charp* prev_it_334;
_Bool _if_conditional491;
_Bool _if_conditional492;
struct list$1charp* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_321, 0, sizeof(int));
memset(&it_324, 0, sizeof(struct list_item$1charp*));
memset(&i_325, 0, sizeof(int));
memset(&prev_it_326, 0, sizeof(struct list_item$1charp*));
memset(&it_327, 0, sizeof(struct list_item$1charp*));
memset(&i_328, 0, sizeof(int));
memset(&prev_it_329, 0, sizeof(struct list_item$1charp*));
memset(&it_330, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_331, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_332, 0, sizeof(struct list_item$1charp*));
memset(&i_333, 0, sizeof(int));
memset(&prev_it_334, 0, sizeof(struct list_item$1charp*));
                                                                                # 468 "./neo-c.h"
                                                                                # 465 "./neo-c.h"
                                                                                if(_if_conditional475=head<0,                                                                                _if_conditional475) {
                                                                                    # 466 "./neo-c.h"
                                                                                    head+=self->len;
                                                                                }
                                                                                # 472 "./neo-c.h"
                                                                                # 468 "./neo-c.h"
                                                                                if(_if_conditional476=tail<0,                                                                                _if_conditional476) {
                                                                                    # 469 "./neo-c.h"
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                # 478 "./neo-c.h"
                                                                                # 472 "./neo-c.h"
                                                                                if(_if_conditional477=head>tail,                                                                                _if_conditional477) {
                                                                                    # 473 "./neo-c.h"
                                                                                    tmp_321=tail;
                                                                                    # 474 "./neo-c.h"
                                                                                    tail=head;
                                                                                    # 475 "./neo-c.h"
                                                                                    head=tmp_321;
                                                                                }
                                                                                # 482 "./neo-c.h"
                                                                                # 478 "./neo-c.h"
                                                                                if(_if_conditional478=head<0,                                                                                _if_conditional478) {
                                                                                    # 479 "./neo-c.h"
                                                                                    head=0;
                                                                                }
                                                                                # 486 "./neo-c.h"
                                                                                # 482 "./neo-c.h"
                                                                                if(_if_conditional479=tail>self->len,                                                                                _if_conditional479) {
                                                                                    # 483 "./neo-c.h"
                                                                                    tail=self->len;
                                                                                }
                                                                                # 490 "./neo-c.h"
                                                                                # 486 "./neo-c.h"
                                                                                if(_if_conditional480=head==tail,                                                                                _if_conditional480) {
                                                                                    # 487 "./neo-c.h"
                                                                                    __result178__ = __result_obj__ = self;
                                                                                    return __result178__;
                                                                                }
                                                                                # 585 "./neo-c.h"
                                                                                # 490 "./neo-c.h"
                                                                                if(_if_conditional481=head==0&&tail==self->len,                                                                                _if_conditional481) {
                                                                                    # 492 "./neo-c.h"
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    # 585 "./neo-c.h"
                                                                                    # 494 "./neo-c.h"
                                                                                    if(_if_conditional482=head==0,                                                                                    _if_conditional482) {
                                                                                        # 495 "./neo-c.h"
                                                                                        it_324=self->head;
                                                                                        # 496 "./neo-c.h"
                                                                                        i_325=0;
                                                                                        # 518 "./neo-c.h"
                                                                                        while(_while_condtional53=it_324!=((void*)0),                                                                                        _while_condtional53) {
                                                                                            # 517 "./neo-c.h"
                                                                                            # 498 "./neo-c.h"
                                                                                            if(_if_conditional483=i_325<tail,                                                                                            _if_conditional483) {
                                                                                                # 499 "./neo-c.h"
                                                                                                prev_it_326=it_324;
                                                                                                # 501 "./neo-c.h"
                                                                                                it_324=it_324->next;
                                                                                                # 502 "./neo-c.h"
                                                                                                i_325++;
                                                                                                # 504 "./neo-c.h"
                                                                                                come_call_finalizer3(prev_it_326,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                # 506 "./neo-c.h"
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 517 "./neo-c.h"
                                                                                                # 508 "./neo-c.h"
                                                                                                if(_if_conditional484=i_325==tail,                                                                                                _if_conditional484) {
                                                                                                    # 509 "./neo-c.h"
                                                                                                    self->head=it_324;
                                                                                                    # 510 "./neo-c.h"
                                                                                                    self->head->prev=((void*)0);
                                                                                                    # 511 "./neo-c.h"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 514 "./neo-c.h"
                                                                                                    it_324=it_324->next;
                                                                                                    # 515 "./neo-c.h"
                                                                                                    i_325++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 585 "./neo-c.h"
                                                                                        # 519 "./neo-c.h"
                                                                                        if(_if_conditional485=tail==self->len,                                                                                        _if_conditional485) {
                                                                                            # 520 "./neo-c.h"
                                                                                            it_327=self->head;
                                                                                            # 521 "./neo-c.h"
                                                                                            i_328=0;
                                                                                            # 543 "./neo-c.h"
                                                                                            while(_while_condtional54=it_327!=((void*)0),                                                                                            _while_condtional54) {
                                                                                                # 528 "./neo-c.h"
                                                                                                # 523 "./neo-c.h"
                                                                                                if(_if_conditional486=i_328==head,                                                                                                _if_conditional486) {
                                                                                                    # 524 "./neo-c.h"
                                                                                                    self->tail=it_327->prev;
                                                                                                    # 525 "./neo-c.h"
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                # 542 "./neo-c.h"
                                                                                                # 528 "./neo-c.h"
                                                                                                if(_if_conditional487=i_328>=head,                                                                                                _if_conditional487) {
                                                                                                    # 529 "./neo-c.h"
                                                                                                    prev_it_329=it_327;
                                                                                                    # 531 "./neo-c.h"
                                                                                                    it_327=it_327->next;
                                                                                                    # 532 "./neo-c.h"
                                                                                                    i_328++;
                                                                                                    # 534 "./neo-c.h"
                                                                                                    come_call_finalizer3(prev_it_329,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    # 536 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 539 "./neo-c.h"
                                                                                                    it_327=it_327->next;
                                                                                                    # 540 "./neo-c.h"
                                                                                                    i_328++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 545 "./neo-c.h"
                                                                                            it_330=self->head;
                                                                                            # 547 "./neo-c.h"
                                                                                            head_prev_it_331=((void*)0);
                                                                                            # 548 "./neo-c.h"
                                                                                            tail_it_332=((void*)0);
                                                                                            # 551 "./neo-c.h"
                                                                                            i_333=0;
                                                                                            # 577 "./neo-c.h"
                                                                                            while(_while_condtional55=it_330!=((void*)0),                                                                                            _while_condtional55) {
                                                                                                # 556 "./neo-c.h"
                                                                                                # 553 "./neo-c.h"
                                                                                                if(_if_conditional488=i_333==head,                                                                                                _if_conditional488) {
                                                                                                    # 554 "./neo-c.h"
                                                                                                    head_prev_it_331=it_330->prev;
                                                                                                }
                                                                                                # 560 "./neo-c.h"
                                                                                                # 556 "./neo-c.h"
                                                                                                if(_if_conditional489=i_333==tail,                                                                                                _if_conditional489) {
                                                                                                    # 557 "./neo-c.h"
                                                                                                    tail_it_332=it_330;
                                                                                                }
                                                                                                # 575 "./neo-c.h"
                                                                                                # 560 "./neo-c.h"
                                                                                                if(_if_conditional490=i_333>=head&&i_333<tail,                                                                                                _if_conditional490) {
                                                                                                    # 562 "./neo-c.h"
                                                                                                    prev_it_334=it_330;
                                                                                                    # 564 "./neo-c.h"
                                                                                                    it_330=it_330->next;
                                                                                                    # 565 "./neo-c.h"
                                                                                                    i_333++;
                                                                                                    # 567 "./neo-c.h"
                                                                                                    come_call_finalizer3(prev_it_334,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    # 569 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 572 "./neo-c.h"
                                                                                                    it_330=it_330->next;
                                                                                                    # 573 "./neo-c.h"
                                                                                                    i_333++;
                                                                                                }
                                                                                            }
                                                                                            # 580 "./neo-c.h"
                                                                                            # 577 "./neo-c.h"
                                                                                            if(_if_conditional491=head_prev_it_331!=((void*)0),                                                                                            _if_conditional491) {
                                                                                                # 578 "./neo-c.h"
                                                                                                head_prev_it_331->next=tail_it_332;
                                                                                            }
                                                                                            # 583 "./neo-c.h"
                                                                                            # 580 "./neo-c.h"
                                                                                            if(_if_conditional492=tail_it_332!=((void*)0),                                                                                            _if_conditional492) {
                                                                                                # 581 "./neo-c.h"
                                                                                                tail_it_332->prev=head_prev_it_331;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                # 585 "./neo-c.h"
                                                                                __result180__ = __result_obj__ = self;
                                                                                return __result180__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_322;
_Bool _while_condtional52;
struct list_item$1charp* prev_it_323;
struct list$1charp* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_322, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_323, 0, sizeof(struct list_item$1charp*));
                                                                                        # 434 "./neo-c.h"
                                                                                        it_322=self->head;
                                                                                        # 441 "./neo-c.h"
                                                                                        while(_while_condtional52=it_322!=((void*)0),                                                                                        _while_condtional52) {
                                                                                            # 436 "./neo-c.h"
                                                                                            prev_it_323=it_322;
                                                                                            # 437 "./neo-c.h"
                                                                                            it_322=it_322->next;
                                                                                            # 438 "./neo-c.h"
                                                                                            come_call_finalizer3(prev_it_323,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 441 "./neo-c.h"
                                                                                        self->head=((void*)0);
                                                                                        # 442 "./neo-c.h"
                                                                                        self->tail=((void*)0);
                                                                                        # 444 "./neo-c.h"
                                                                                        self->len=0;
                                                                                        # 446 "./neo-c.h"
                                                                                        __result179__ = __result_obj__ = self;
                                                                                        return __result179__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional498;
char* result_336;
char* __result182__;
_Bool _if_conditional499;
char* __result183__;
char* result_337;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_336, 0, sizeof(char*));
memset(&result_337, 0, sizeof(char*));
                                                    # 291 "./neo-c.h"
                                                    # 286 "./neo-c.h"
                                                    if(_if_conditional498=self==((void*)0),                                                    _if_conditional498) {
                                                        # 287 "./neo-c.h"
                                                        # 288 "./neo-c.h"
                                                        memset(&result_336,0,sizeof(char*));
                                                        # 289 "./neo-c.h"
                                                        __result182__ = __result_obj__ = result_336;
                                                        return __result182__;
                                                    }
                                                    # 291 "./neo-c.h"
                                                    self->it=self->head;
                                                    # 297 "./neo-c.h"
                                                    # 293 "./neo-c.h"
                                                    if(self->it) {
                                                        # 294 "./neo-c.h"
                                                        __result183__ = __result_obj__ = self->it->item;
                                                        return __result183__;
                                                    }
                                                    # 297 "./neo-c.h"
                                                    # 298 "./neo-c.h"
                                                    memset(&result_337,0,sizeof(char*));
                                                    # 299 "./neo-c.h"
                                                    __result184__ = __result_obj__ = result_337;
                                                    return __result184__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 321 "./neo-c.h"
                                                    __result185__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result185__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional500;
char* result_339;
char* __result186__;
_Bool _if_conditional501;
char* __result187__;
char* result_340;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_339, 0, sizeof(char*));
memset(&result_340, 0, sizeof(char*));
                                                    # 309 "./neo-c.h"
                                                    # 303 "./neo-c.h"
                                                    if(_if_conditional500=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional500) {
                                                        # 304 "./neo-c.h"
                                                        # 305 "./neo-c.h"
                                                        memset(&result_339,0,sizeof(char*));
                                                        # 306 "./neo-c.h"
                                                        __result186__ = __result_obj__ = result_339;
                                                        return __result186__;
                                                    }
                                                    # 309 "./neo-c.h"
                                                    self->it=self->it->next;
                                                    # 315 "./neo-c.h"
                                                    # 311 "./neo-c.h"
                                                    if(self->it) {
                                                        # 312 "./neo-c.h"
                                                        __result187__ = __result_obj__ = self->it->item;
                                                        return __result187__;
                                                    }
                                                    # 315 "./neo-c.h"
                                                    # 316 "./neo-c.h"
                                                    memset(&result_340,0,sizeof(char*));
                                                    # 317 "./neo-c.h"
                                                    __result188__ = __result_obj__ = result_340;
                                                    return __result188__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional504;
void* right_value381;
struct list_item$1charp* litem_341;
_Bool _if_conditional505;
void* right_value382;
struct list_item$1charp* litem_342;
void* right_value383;
struct list_item$1charp* litem_343;
struct list$1charp* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&litem_341, 0, sizeof(struct list_item$1charp*));
right_value382 = (void*)0;
memset(&litem_342, 0, sizeof(struct list_item$1charp*));
right_value383 = (void*)0;
memset(&litem_343, 0, sizeof(struct list_item$1charp*));
                                                        # 257 "./neo-c.h"
                                                        # 226 "./neo-c.h"
                                                        if(_if_conditional504=self->len==0,                                                        _if_conditional504) {
                                                            # 227 "./neo-c.h"
                                                            litem_341=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value381=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                                                            come_call_finalizer3(right_value381,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 229 "./neo-c.h"
                                                            litem_341->prev=((void*)0);
                                                            # 230 "./neo-c.h"
                                                            litem_341->next=((void*)0);
                                                            # 231 "./neo-c.h"
                                                            litem_341->item=item;
                                                            # 233 "./neo-c.h"
                                                            self->tail=litem_341;
                                                            # 234 "./neo-c.h"
                                                            self->head=litem_341;
                                                        }
                                                        else {
                                                            # 257 "./neo-c.h"
                                                            # 236 "./neo-c.h"
                                                            if(_if_conditional505=self->len==1,                                                            _if_conditional505) {
                                                                # 237 "./neo-c.h"
                                                                litem_342=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value382=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value382,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 239 "./neo-c.h"
                                                                litem_342->prev=self->head;
                                                                # 240 "./neo-c.h"
                                                                litem_342->next=((void*)0);
                                                                # 241 "./neo-c.h"
                                                                litem_342->item=item;
                                                                # 243 "./neo-c.h"
                                                                self->tail=litem_342;
                                                                # 244 "./neo-c.h"
                                                                self->head->next=litem_342;
                                                            }
                                                            else {
                                                                # 247 "./neo-c.h"
                                                                litem_343=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value383=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 247, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value383,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 249 "./neo-c.h"
                                                                litem_343->prev=self->tail;
                                                                # 250 "./neo-c.h"
                                                                litem_343->next=((void*)0);
                                                                # 251 "./neo-c.h"
                                                                litem_343->item=item;
                                                                # 253 "./neo-c.h"
                                                                self->tail->next=litem_343;
                                                                # 254 "./neo-c.h"
                                                                self->tail=litem_343;
                                                            }
                                                        }
                                                        # 257 "./neo-c.h"
                                                        self->len++;
                                                        # 259 "./neo-c.h"
                                                        __result189__ = __result_obj__ = self;
                                                        return __result189__;
}

