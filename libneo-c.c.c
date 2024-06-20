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
struct sNodeBase
{
    int sline;
    char* sname;
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
    char* mSName;
    int mSLine;
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
char* gComeStackFrameSName[1024];
int gComeStackFrameSLine[1024];
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeaderTiny
{
    unsigned long int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sMemHeader* gAllocMem;
struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    void** mFreeMem[4048];
    int mNumFreeMem[4048];
    int mSizeFreeMem[4048];
};
struct sHeapPage gHeapPages;

// header function
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
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

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

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);

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

char* dirname(char* anonymous_var_nameX597);

char* basename(char* anonymous_var_nameX598);

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

static void* alloc_from_pages(unsigned long int size);
static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

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

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(unsigned long int self, unsigned long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(unsigned long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(unsigned long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(unsigned long int left, unsigned long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

char* FILE_read(struct _IO_FILE* f);

int FILE_write(struct _IO_FILE* f, char* str);

int FILE_fclose(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* string_read(char* file_name);

char* charp_read(char* file_name);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char* charp_puts(char* self);

char* charp_print(char* self);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

char* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_compare(struct integer* left, struct integer* right);

_Bool integer_equals(struct integer* self, struct integer* right);

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










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
    # 29 "libneo-c.c"
    # 22 "libneo-c.c"
    if(_if_conditional19=gNumComeStackFrame<1024,    _if_conditional19) {
        # 23 "libneo-c.c"
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        # 24 "libneo-c.c"
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        # 25 "libneo-c.c"
        gComeStackFrameID[gNumComeStackFrame]=id;
        # 27 "libneo-c.c"
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
    # 36 "libneo-c.c"
    # 33 "libneo-c.c"
    if(_if_conditional20=gNumComeStackFrame>0,    _if_conditional20) {
        # 34 "libneo-c.c"
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* buf_47;
void* right_value81;
int i_48;
void* right_value82;
_Bool _if_conditional21;
void* right_value83;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
memset(&i_48, 0, sizeof(int));
right_value82 = (void*)0;
right_value83 = (void*)0;
    # 40 "libneo-c.c"
    buf_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 40, "buffer"))))))));
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 41 "libneo-c.c"
    buffer_append_str(buf_47,((char*)(right_value81=xsprintf("%s %d\n",sname,sline))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 46 "libneo-c.c"
    for(    i_48=gNumComeStackFrame-2;    i_48>=0;    i_48--    ){
        # 43 "libneo-c.c"
        buffer_append_str(buf_47,((char*)(right_value82=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_48],gComeStackFrameSLine[i_48],gComeStackFrameID[i_48]))));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 49 "libneo-c.c"
    # 46 "libneo-c.c"
    if(gComeStackFrameBuffer) {
        # 47 "libneo-c.c"
        free(gComeStackFrameBuffer);
    }
    # 49 "libneo-c.c"
    gComeStackFrameBuffer=strdup(((char*)(right_value83=buffer_to_string(buf_47))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_49, 0, sizeof(int));
    # 57 "libneo-c.c"
    for(    i_49=gNumComeStackFrame-1;    i_49>=0;    i_49--    ){
        # 55 "libneo-c.c"
        printf("%s %d #%d\n",gComeStackFrameSName[i_49],gComeStackFrameSLine[i_49],gComeStackFrameID[i_49]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value84;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    # 61 "libneo-c.c"
    __result52__ = __result_obj__ = ((char*)(right_value84=__builtin_string(gComeStackFrameBuffer)));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional22;
void* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 72 "libneo-c.c"
    # 66 "libneo-c.c"
    if(_if_conditional22=mem==((void*)0),    _if_conditional22) {
        # 67 "libneo-c.c"
        printf("%s %d #%d: null check error\n",sname,sline,id);
        # 68 "libneo-c.c"
        stackframe();
        # 69 "libneo-c.c"
        exit(2);
    }
    # 72 "libneo-c.c"
    __result53__ = __result_obj__ = mem;
    return __result53__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 83 "libneo-c.c"
    # 77 "libneo-c.c"
    if(_if_conditional23=mem==((void*)0),    _if_conditional23) {
        # 78 "libneo-c.c"
        printf("%s %d: null check error\n",sname,sline);
        # 79 "libneo-c.c"
        stackframe();
        # 80 "libneo-c.c"
        exit(2);
    }
    # 89 "libneo-c.c"
    # 83 "libneo-c.c"
    if(_if_conditional24=mem<begin,    _if_conditional24) {
        # 84 "libneo-c.c"
        printf("%s %d: range check error\n",sname,sline);
        # 85 "libneo-c.c"
        stackframe();
        # 86 "libneo-c.c"
        exit(2);
    }
    # 95 "libneo-c.c"
    # 89 "libneo-c.c"
    if(_if_conditional25=mem>=end,    _if_conditional25) {
        # 90 "libneo-c.c"
        printf("%s %d: range check error\n",sname,sline);
        # 91 "libneo-c.c"
        stackframe();
        # 92 "libneo-c.c"
        exit(2);
    }
    # 95 "libneo-c.c"
    __result54__ = __result_obj__ = mem;
    return __result54__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool __result55__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 109 "libneo-c.c"
    # 100 "libneo-c.c"
    if(_if_conditional26=!self,    _if_conditional26) {
        # 101 "libneo-c.c"
        block(parent);
        # 105 "libneo-c.c"
        # 102 "libneo-c.c"
        if(_if_conditional27=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional27) {
            # 103 "libneo-c.c"
            __result55__ = self;
            return __result55__;
        }
        # 105 "libneo-c.c"
        stackframe();
        # 106 "libneo-c.c"
        exit(1);
    }
    # 109 "libneo-c.c"
    __result56__ = self;
    return __result56__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    # 114 "libneo-c.c"
    __result57__ = self;
    return __result57__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional28;
_Bool _if_conditional29;
int __result58__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    # 127 "libneo-c.c"
    # 119 "libneo-c.c"
    if(_if_conditional28=self<0,    _if_conditional28) {
        # 120 "libneo-c.c"
        block(parent);
        # 125 "libneo-c.c"
        # 122 "libneo-c.c"
        if(_if_conditional29=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional29) {
            # 123 "libneo-c.c"
            __result58__ = self;
            return __result58__;
        }
    }
    # 127 "libneo-c.c"
    __result59__ = self;
    return __result59__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional30;
_Bool _if_conditional31;
int __result60__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 141 "libneo-c.c"
    # 132 "libneo-c.c"
    if(_if_conditional30=self<0,    _if_conditional30) {
        # 133 "libneo-c.c"
        block(parent);
        # 137 "libneo-c.c"
        # 134 "libneo-c.c"
        if(_if_conditional31=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional31) {
            # 135 "libneo-c.c"
            __result60__ = self;
            return __result60__;
        }
        # 137 "libneo-c.c"
        stackframe();
        # 138 "libneo-c.c"
        exit(1);
    }
    # 141 "libneo-c.c"
    __result61__ = self;
    return __result61__;
}

int int_value(int self){
void* __result_obj__;
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    # 146 "libneo-c.c"
    __result62__ = self;
    return __result62__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
int __result63__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    # 158 "libneo-c.c"
    # 151 "libneo-c.c"
    if(_if_conditional32=self<0,    _if_conditional32) {
        # 152 "libneo-c.c"
        block(parent);
        # 156 "libneo-c.c"
        # 153 "libneo-c.c"
        if(_if_conditional33=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional33) {
            # 154 "libneo-c.c"
            __result63__ = self;
            return __result63__;
        }
    }
    # 158 "libneo-c.c"
    __result64__ = self;
    return __result64__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool __result65__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    # 170 "libneo-c.c"
    # 163 "libneo-c.c"
    if(_if_conditional34=!self,    _if_conditional34) {
        # 164 "libneo-c.c"
        block(parent);
        # 168 "libneo-c.c"
        # 165 "libneo-c.c"
        if(_if_conditional35=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional35) {
            # 166 "libneo-c.c"
            __result65__ = self;
            return __result65__;
        }
    }
    # 170 "libneo-c.c"
    __result66__ = self;
    return __result66__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool __result67__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 183 "libneo-c.c"
    # 175 "libneo-c.c"
    if(_if_conditional36=!self,    _if_conditional36) {
        # 176 "libneo-c.c"
        block(parent);
        # 181 "libneo-c.c"
        # 178 "libneo-c.c"
        if(_if_conditional37=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional37) {
            # 179 "libneo-c.c"
            __result67__ = self;
            return __result67__;
        }
    }
    # 183 "libneo-c.c"
    __result68__ = self;
    return __result68__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
    # 188 "libneo-c.c"
    printf("%s...",msg);
    # 193 "libneo-c.c"
    # 189 "libneo-c.c"
    if(_if_conditional38=!test,    _if_conditional38) {
        # 190 "libneo-c.c"
        puts("false");
        # 191 "libneo-c.c"
        exit(2);
    }
    # 193 "libneo-c.c"
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
int i_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_50, 0, sizeof(int));
    # 256 "libneo-c.c"
    gComeMallocLib=come_malloc;
    # 258 "libneo-c.c"
    gComeDebugLib=come_debug;
    # 258 "libneo-c.c"
    gComeGCLib=come_gc;
    # 260 "libneo-c.c"
    gComeStackFrameBuffer=((void*)0);
    # 261 "libneo-c.c"
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    # 262 "libneo-c.c"
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    # 263 "libneo-c.c"
    memset(gComeStackFrameID,0,sizeof(int)*1024);
    # 265 "libneo-c.c"
    gHeapPages.mSizePages=4;
    # 267 "libneo-c.c"
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    # 272 "libneo-c.c"
    for(    i_50=0;    i_50<gHeapPages.mSizePages;    i_50++    ){
        # 269 "libneo-c.c"
        gHeapPages.mPages[i_50]=calloc(1,sizeof(char)*4048);
    }
    # 272 "libneo-c.c"
    gHeapPages.mTop=gHeapPages.mPages[0];
    # 273 "libneo-c.c"
    gHeapPages.mCurrentPages=0;
    # 275 "libneo-c.c"
    memset(gHeapPages.mFreeMem,0,sizeof(void**)*4048);
    # 276 "libneo-c.c"
    memset(gHeapPages.mNumFreeMem,0,sizeof(int)*4048);
    # 277 "libneo-c.c"
    memset(gHeapPages.mSizeFreeMem,0,sizeof(int)*4048);
    # 279 "libneo-c.c"
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
struct sMemHeader* it_51;
int n_52;
_Bool flag_53;
_Bool _if_conditional42;
int i_54;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct sMemHeaderTiny* it_55;
int n_56;
_Bool _if_conditional45;
int i_57;
int i_58;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct sMemHeader*));
memset(&n_52, 0, sizeof(int));
memset(&flag_53, 0, sizeof(_Bool));
memset(&i_54, 0, sizeof(int));
memset(&it_55, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
memset(&i_58, 0, sizeof(int));
    # 288 "libneo-c.c"
    # 284 "libneo-c.c"
    if(gComeStackFrameBuffer) {
        # 285 "libneo-c.c"
        free(gComeStackFrameBuffer);
    }
    # 325 "libneo-c.c"
    # 288 "libneo-c.c"
    if(gComeGCLib) {
    }
    else {
        # 325 "libneo-c.c"
        # 290 "libneo-c.c"
        if(gComeDebugLib) {
            # 291 "libneo-c.c"
            it_51=gAllocMem;
            # 292 "libneo-c.c"
            n_52=0;
            # 312 "libneo-c.c"
            while(it_51) {
                # 294 "libneo-c.c"
                n_52++;
                # 296 "libneo-c.c"
                flag_53=(_Bool)0;
                # 297 "libneo-c.c"
                printf("#%d ",n_52);
                # 301 "libneo-c.c"
                # 298 "libneo-c.c"
                if(it_51->class_name) {
                    # 299 "libneo-c.c"
                    printf("%p (%s): ",(char*)it_51+sizeof(struct sMemHeader)+sizeof(unsigned long int)+sizeof(unsigned long int),it_51->class_name);
                }
                # 307 "libneo-c.c"
                for(                i_54=0;                i_54<16;                i_54++                ){
                    # 306 "libneo-c.c"
                    # 302 "libneo-c.c"
                    if(_if_conditional43=it_51->sname[i_54],                    _if_conditional43) {
                        # 303 "libneo-c.c"
                        printf("%s %d #%d, ",it_51->sname[i_54],it_51->sline[i_54],it_51->id[i_54]);
                        # 304 "libneo-c.c"
                        flag_53=(_Bool)1;
                    }
                }
                # 310 "libneo-c.c"
                # 307 "libneo-c.c"
                if(flag_53) {
                    # 308 "libneo-c.c"
                    puts("");
                }
                # 310 "libneo-c.c"
                it_51=it_51->next;
            }
            # 312 "libneo-c.c"
            printf("%d memory leaks. %d alloc, %d free.\n",n_52,gNumAlloc,gNumFree);
        }
        else {
            # 315 "libneo-c.c"
            it_55=(struct sMemHeaderTiny*)gAllocMem;
            # 316 "libneo-c.c"
            n_56=0;
            # 321 "libneo-c.c"
            while(it_55) {
                # 318 "libneo-c.c"
                n_56++;
                # 319 "libneo-c.c"
                it_55=it_55->next;
            }
            # 324 "libneo-c.c"
            # 321 "libneo-c.c"
            if(_if_conditional45=n_56>0,            _if_conditional45) {
                # 322 "libneo-c.c"
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_56,gNumAlloc,gNumFree);
            }
        }
    }
    # 328 "libneo-c.c"
    for(    i_57=0;    i_57<gHeapPages.mSizePages;    i_57++    ){
        # 326 "libneo-c.c"
        free(gHeapPages.mPages[i_57]);
    }
    # 328 "libneo-c.c"
    free(gHeapPages.mPages);
    # 335 "libneo-c.c"
    for(    i_58=0;    i_58<4048;    i_58++    ){
        # 334 "libneo-c.c"
        # 331 "libneo-c.c"
        if(_if_conditional46=gHeapPages.mFreeMem[i_58],        _if_conditional46) {
            # 332 "libneo-c.c"
            free(gHeapPages.mFreeMem[i_58]);
        }
    }
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__;
void* result_59;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct sMemHeaderTiny* it_60;
_Bool _if_conditional49;
unsigned long int free_area_61;
_Bool _if_conditional50;
_Bool _if_conditional51;
int new_size_pages_62;
void** new_pages_63;
int i_64;
void* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_61, 0, sizeof(unsigned long int));
memset(&new_size_pages_62, 0, sizeof(int));
memset(&new_pages_63, 0, sizeof(void**));
memset(&i_64, 0, sizeof(int));
    # 339 "libneo-c.c"
    result_59=((void*)0);
    # 382 "libneo-c.c"
    # 340 "libneo-c.c"
    if(_if_conditional47=size<4048,    _if_conditional47) {
        # 346 "libneo-c.c"
        # 341 "libneo-c.c"
        if(_if_conditional48=gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0,        _if_conditional48) {
            # 342 "libneo-c.c"
            it_60=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            # 343 "libneo-c.c"
            gHeapPages.mNumFreeMem[size]--;
        }
        # 377 "libneo-c.c"
        # 346 "libneo-c.c"
        if(_if_conditional49=result_59==((void*)0),        _if_conditional49) {
            # 347 "libneo-c.c"
            free_area_61=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            # 374 "libneo-c.c"
            # 349 "libneo-c.c"
            if(_if_conditional50=size>=free_area_61,            _if_conditional50) {
                # 350 "libneo-c.c"
                gHeapPages.mCurrentPages++;
                # 371 "libneo-c.c"
                # 352 "libneo-c.c"
                if(_if_conditional51=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional51) {
                    # 353 "libneo-c.c"
                    new_size_pages_62=gHeapPages.mSizePages*2;
                    # 354 "libneo-c.c"
                    new_pages_63=calloc(1,sizeof(char*)*new_size_pages_62);
                    # 356 "libneo-c.c"
                    i_64=0;
                    # 361 "libneo-c.c"
                    for(                    ;                    i_64<gHeapPages.mSizePages;                    i_64++                    ){
                        # 358 "libneo-c.c"
                        new_pages_63[i_64]=gHeapPages.mPages[i_64];
                    }
                    # 365 "libneo-c.c"
                    for(                    ;                    i_64<new_size_pages_62;                    i_64++                    ){
                        # 362 "libneo-c.c"
                        new_pages_63[i_64]=calloc(1,sizeof(char)*4048);
                    }
                    # 365 "libneo-c.c"
                    free(gHeapPages.mPages);
                    # 367 "libneo-c.c"
                    gHeapPages.mPages=new_pages_63;
                    # 368 "libneo-c.c"
                    gHeapPages.mSizePages=new_size_pages_62;
                }
                # 371 "libneo-c.c"
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            # 374 "libneo-c.c"
            result_59=gHeapPages.mTop;
            # 375 "libneo-c.c"
            gHeapPages.mTop+=size;
        }
    }
    else {
        # 379 "libneo-c.c"
        result_59=calloc(1,size);
    }
    # 382 "libneo-c.c"
    __result69__ = __result_obj__ = result_59;
    return __result69__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional52;
void* result_65;
struct sMemHeader* it_66;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* __result70__;
void* result_67;
struct sMemHeaderTiny* it_68;
_Bool _if_conditional56;
void* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct sMemHeader*));
memset(&result_67, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct sMemHeaderTiny*));
    # 465 "libneo-c.c"
    # 387 "libneo-c.c"
    if(gComeDebugLib) {
        # 388 "libneo-c.c"
        result_65=alloc_from_pages(size+sizeof(struct sMemHeader));
        # 390 "libneo-c.c"
        it_66=result_65;
        # 392 "libneo-c.c"
        it_66->allocated=177783;
        # 394 "libneo-c.c"
        it_66->size=size+sizeof(struct sMemHeader);
        # 397 "libneo-c.c"
        come_push_stackframe(sname,sline,0);
        # 411 "libneo-c.c"
        # 400 "libneo-c.c"
        if(_if_conditional53=gNumComeStackFrame<16,        _if_conditional53) {
            # 401 "libneo-c.c"
            memcpy(it_66->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            # 402 "libneo-c.c"
            memcpy(it_66->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            # 403 "libneo-c.c"
            memcpy(it_66->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            # 406 "libneo-c.c"
            memcpy(it_66->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            # 407 "libneo-c.c"
            memcpy(it_66->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            # 408 "libneo-c.c"
            memcpy(it_66->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        # 411 "libneo-c.c"
        come_pop_stackframe();
        # 413 "libneo-c.c"
        it_66->next=gAllocMem;
        # 414 "libneo-c.c"
        it_66->prev=((void*)0);
        # 423 "libneo-c.c"
        # 416 "libneo-c.c"
        if(class_name) {
            # 417 "libneo-c.c"
            it_66->class_name=strdup(class_name);
        }
        else {
            # 420 "libneo-c.c"
            it_66->class_name=((void*)0);
        }
        # 427 "libneo-c.c"
        # 423 "libneo-c.c"
        if(gAllocMem) {
            # 424 "libneo-c.c"
            gAllocMem->prev=it_66;
        }
        # 427 "libneo-c.c"
        gAllocMem=it_66;
        # 429 "libneo-c.c"
        gNumAlloc++;
        # 431 "libneo-c.c"
        __result70__ = __result_obj__ = (char*)result_65+sizeof(struct sMemHeader);
        return __result70__;
    }
    else {
        # 434 "libneo-c.c"
        result_67=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        # 436 "libneo-c.c"
        it_68=result_67;
        # 438 "libneo-c.c"
        it_68->allocated=177783;
        # 449 "libneo-c.c"
        it_68->size=size+sizeof(struct sMemHeaderTiny);
        # 452 "libneo-c.c"
        it_68->next=(struct sMemHeaderTiny*)gAllocMem;
        # 453 "libneo-c.c"
        it_68->prev=((void*)0);
        # 459 "libneo-c.c"
        # 455 "libneo-c.c"
        if(gAllocMem) {
            # 456 "libneo-c.c"
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_68;
        }
        # 459 "libneo-c.c"
        gAllocMem=(struct sMemHeader*)it_68;
        # 461 "libneo-c.c"
        gNumAlloc++;
        # 463 "libneo-c.c"
        __result71__ = __result_obj__ = (char*)result_67+sizeof(struct sMemHeaderTiny);
        return __result71__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct sMemHeader* it_69;
_Bool _if_conditional60;
struct sMemHeader* prev_it_70;
struct sMemHeader* next_it_71;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
unsigned long int size_72;
_Bool _if_conditional66;
int num_free_mem_73;
int size_free_mem_74;
_Bool _if_conditional67;
int new_size_free_mem_75;
void** new_free_mem_76;
_Bool _if_conditional68;
int new_size_free_mem_77;
void** new_free_mem_78;
struct sMemHeaderTiny* it_79;
_Bool _if_conditional69;
struct sMemHeaderTiny* prev_it_80;
struct sMemHeaderTiny* next_it_81;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
unsigned long int size_82;
_Bool _if_conditional74;
int num_free_mem_83;
int size_free_mem_84;
_Bool _if_conditional75;
int new_size_free_mem_85;
void** new_free_mem_86;
_Bool _if_conditional76;
int new_size_free_mem_87;
void** new_free_mem_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct sMemHeader*));
memset(&prev_it_70, 0, sizeof(struct sMemHeader*));
memset(&next_it_71, 0, sizeof(struct sMemHeader*));
memset(&size_72, 0, sizeof(unsigned long int));
memset(&num_free_mem_73, 0, sizeof(int));
memset(&size_free_mem_74, 0, sizeof(int));
memset(&new_size_free_mem_75, 0, sizeof(int));
memset(&new_free_mem_76, 0, sizeof(void**));
memset(&new_size_free_mem_77, 0, sizeof(int));
memset(&new_free_mem_78, 0, sizeof(void**));
memset(&it_79, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_80, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_81, 0, sizeof(struct sMemHeaderTiny*));
memset(&size_82, 0, sizeof(unsigned long int));
memset(&num_free_mem_83, 0, sizeof(int));
memset(&size_free_mem_84, 0, sizeof(int));
memset(&new_size_free_mem_85, 0, sizeof(int));
memset(&new_free_mem_86, 0, sizeof(void**));
memset(&new_size_free_mem_87, 0, sizeof(int));
memset(&new_free_mem_88, 0, sizeof(void**));
    # 607 "libneo-c.c"
    # 469 "libneo-c.c"
    if(mem) {
        # 606 "libneo-c.c"
        # 470 "libneo-c.c"
        if(gComeGCLib) {
        }
        else {
            # 606 "libneo-c.c"
            # 472 "libneo-c.c"
            if(gComeDebugLib) {
                # 473 "libneo-c.c"
                it_69=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                # 479 "libneo-c.c"
                # 475 "libneo-c.c"
                if(_if_conditional60=it_69->allocated!=177783,                _if_conditional60) {
                    # 476 "libneo-c.c"
                    return;
                }
                # 479 "libneo-c.c"
                it_69->allocated=0;
                # 481 "libneo-c.c"
                prev_it_70=it_69->prev;
                # 482 "libneo-c.c"
                next_it_71=it_69->next;
                # 488 "libneo-c.c"
                # 484 "libneo-c.c"
                if(it_69->class_name) {
                    # 485 "libneo-c.c"
                    free(it_69->class_name);
                }
                # 504 "libneo-c.c"
                # 488 "libneo-c.c"
                if(_if_conditional62=gAllocMem==it_69,                _if_conditional62) {
                    # 489 "libneo-c.c"
                    gAllocMem=next_it_71;
                    # 494 "libneo-c.c"
                    # 491 "libneo-c.c"
                    if(gAllocMem) {
                        # 492 "libneo-c.c"
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    # 499 "libneo-c.c"
                    # 496 "libneo-c.c"
                    if(prev_it_70) {
                        # 497 "libneo-c.c"
                        prev_it_70->next=next_it_71;
                    }
                    # 502 "libneo-c.c"
                    # 499 "libneo-c.c"
                    if(next_it_71) {
                        # 500 "libneo-c.c"
                        next_it_71->prev=prev_it_70;
                    }
                }
                # 504 "libneo-c.c"
                size_72=it_69->size;
                # 536 "libneo-c.c"
                # 506 "libneo-c.c"
                if(_if_conditional66=size_72<4048,                _if_conditional66) {
                    # 507 "libneo-c.c"
                    num_free_mem_73=gHeapPages.mNumFreeMem[size_72];
                    # 508 "libneo-c.c"
                    size_free_mem_74=gHeapPages.mSizeFreeMem[size_72];
                    # 529 "libneo-c.c"
                    # 510 "libneo-c.c"
                    if(_if_conditional67=gHeapPages.mFreeMem[size_72]==((void*)0),                    _if_conditional67) {
                        # 511 "libneo-c.c"
                        new_size_free_mem_75=16;
                        # 512 "libneo-c.c"
                        new_free_mem_76=calloc(1,sizeof(void*)*new_size_free_mem_75);
                        # 514 "libneo-c.c"
                        gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_75;
                        # 515 "libneo-c.c"
                        gHeapPages.mFreeMem[size_72]=new_free_mem_76;
                    }
                    else {
                        # 529 "libneo-c.c"
                        # 517 "libneo-c.c"
                        if(_if_conditional68=num_free_mem_73==size_free_mem_74,                        _if_conditional68) {
                            # 518 "libneo-c.c"
                            new_size_free_mem_77=size_free_mem_74*2;
                            # 519 "libneo-c.c"
                            new_free_mem_78=calloc(1,sizeof(void*)*new_size_free_mem_77);
                            # 521 "libneo-c.c"
                            memcpy(new_free_mem_78,gHeapPages.mFreeMem[size_72],sizeof(void*)*num_free_mem_73);
                            # 523 "libneo-c.c"
                            free(gHeapPages.mFreeMem[size_72]);
                            # 525 "libneo-c.c"
                            gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_77;
                            # 526 "libneo-c.c"
                            gHeapPages.mFreeMem[size_72]=new_free_mem_78;
                        }
                    }
                    # 529 "libneo-c.c"
                    gHeapPages.mFreeMem[size_72][gHeapPages.mNumFreeMem[size_72]]=it_69;
                    # 530 "libneo-c.c"
                    gHeapPages.mNumFreeMem[size_72]++;
                }
                else {
                    # 533 "libneo-c.c"
                    free(it_69);
                }
                # 536 "libneo-c.c"
                gNumFree++;
            }
            else {
                # 539 "libneo-c.c"
                it_79=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                # 545 "libneo-c.c"
                # 541 "libneo-c.c"
                if(_if_conditional69=it_79->allocated!=177783,                _if_conditional69) {
                    # 542 "libneo-c.c"
                    return;
                }
                # 545 "libneo-c.c"
                it_79->allocated=0;
                # 553 "libneo-c.c"
                prev_it_80=it_79->prev;
                # 554 "libneo-c.c"
                next_it_81=it_79->next;
                # 572 "libneo-c.c"
                # 556 "libneo-c.c"
                if(_if_conditional70=gAllocMem==it_79,                _if_conditional70) {
                    # 557 "libneo-c.c"
                    gAllocMem=(struct sMemHeader*)next_it_81;
                    # 562 "libneo-c.c"
                    # 559 "libneo-c.c"
                    if(gAllocMem) {
                        # 560 "libneo-c.c"
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    # 567 "libneo-c.c"
                    # 564 "libneo-c.c"
                    if(prev_it_80) {
                        # 565 "libneo-c.c"
                        prev_it_80->next=next_it_81;
                    }
                    # 570 "libneo-c.c"
                    # 567 "libneo-c.c"
                    if(next_it_81) {
                        # 568 "libneo-c.c"
                        next_it_81->prev=prev_it_80;
                    }
                }
                # 572 "libneo-c.c"
                size_82=it_79->size;
                # 604 "libneo-c.c"
                # 574 "libneo-c.c"
                if(_if_conditional74=size_82<4048,                _if_conditional74) {
                    # 575 "libneo-c.c"
                    num_free_mem_83=gHeapPages.mNumFreeMem[size_82];
                    # 576 "libneo-c.c"
                    size_free_mem_84=gHeapPages.mSizeFreeMem[size_82];
                    # 597 "libneo-c.c"
                    # 578 "libneo-c.c"
                    if(_if_conditional75=gHeapPages.mFreeMem[size_82]==((void*)0),                    _if_conditional75) {
                        # 579 "libneo-c.c"
                        new_size_free_mem_85=16;
                        # 580 "libneo-c.c"
                        new_free_mem_86=calloc(1,sizeof(void*)*new_size_free_mem_85);
                        # 582 "libneo-c.c"
                        gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_85;
                        # 583 "libneo-c.c"
                        gHeapPages.mFreeMem[size_82]=new_free_mem_86;
                    }
                    else {
                        # 597 "libneo-c.c"
                        # 585 "libneo-c.c"
                        if(_if_conditional76=num_free_mem_83==size_free_mem_84,                        _if_conditional76) {
                            # 586 "libneo-c.c"
                            new_size_free_mem_87=size_free_mem_84*2;
                            # 587 "libneo-c.c"
                            new_free_mem_88=calloc(1,sizeof(void*)*new_size_free_mem_87);
                            # 589 "libneo-c.c"
                            memcpy(new_free_mem_88,gHeapPages.mFreeMem[size_82],sizeof(void*)*num_free_mem_83);
                            # 591 "libneo-c.c"
                            free(gHeapPages.mFreeMem[size_82]);
                            # 593 "libneo-c.c"
                            gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_87;
                            # 594 "libneo-c.c"
                            gHeapPages.mFreeMem[size_82]=new_free_mem_88;
                        }
                    }
                    # 597 "libneo-c.c"
                    gHeapPages.mFreeMem[size_82][gHeapPages.mNumFreeMem[size_82]]=it_79;
                    # 598 "libneo-c.c"
                    gHeapPages.mNumFreeMem[size_82]++;
                }
                else {
                    # 601 "libneo-c.c"
                    free(it_79);
                }
                # 604 "libneo-c.c"
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeader* it_89;
_Bool _if_conditional77;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct sMemHeader*));
    # 651 "libneo-c.c"
    it_89=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    # 658 "libneo-c.c"
    # 653 "libneo-c.c"
    if(_if_conditional77=it_89->allocated!=177783,    _if_conditional77) {
        # 654 "libneo-c.c"
        printf("invalid heap object(%p)\n",it_89);
        # 655 "libneo-c.c"
        exit(2);
    }
    # 658 "libneo-c.c"
    __result72__ = __result_obj__ = it_89->class_name;
    return __result72__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_90;
unsigned long int* ref_count_91;
unsigned long int* size2_92;
void* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_90, 0, sizeof(char*));
memset(&ref_count_91, 0, sizeof(unsigned long int*));
memset(&size2_92, 0, sizeof(unsigned long int*));
    # 665 "libneo-c.c"
    mem_90=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    # 667 "libneo-c.c"
    ref_count_91=(unsigned long int*)mem_90;
    # 669 "libneo-c.c"
    *ref_count_91=0;
    # 671 "libneo-c.c"
    size2_92=(unsigned long int*)(mem_90+sizeof(unsigned long int));
    # 673 "libneo-c.c"
    *size2_92=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    # 675 "libneo-c.c"
    __result73__ = __result_obj__ = mem_90+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result73__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional78;
unsigned long int* ref_count_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_93, 0, sizeof(unsigned long int*));
    # 683 "libneo-c.c"
    # 680 "libneo-c.c"
    if(_if_conditional78=mem==((void*)0),    _if_conditional78) {
        # 681 "libneo-c.c"
        return;
    }
    # 691 "libneo-c.c"
    ref_count_93=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 693 "libneo-c.c"
    come_free_mem_of_heap_pool((char*)ref_count_93);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional79;
unsigned long int* ref_count_94;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_94, 0, sizeof(unsigned long int*));
    # 701 "libneo-c.c"
    # 698 "libneo-c.c"
    if(_if_conditional79=mem==((void*)0),    _if_conditional79) {
        # 699 "libneo-c.c"
        return;
    }
    # 709 "libneo-c.c"
    ref_count_94=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 711 "libneo-c.c"
    come_free_mem_of_heap_pool((char*)ref_count_94);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional80;
void* __result74__;
char* mem_95;
unsigned long int* size_p_96;
unsigned long int size_97;
void* result_98;
void* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_95, 0, sizeof(char*));
memset(&size_p_96, 0, sizeof(unsigned long int*));
memset(&size_97, 0, sizeof(unsigned long int));
memset(&result_98, 0, sizeof(void*));
    # 720 "libneo-c.c"
    # 717 "libneo-c.c"
    if(_if_conditional80=!block,    _if_conditional80) {
        # 718 "libneo-c.c"
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    # 728 "libneo-c.c"
    mem_95=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 730 "libneo-c.c"
    size_p_96=(unsigned long int*)(mem_95+sizeof(unsigned long int));
    # 732 "libneo-c.c"
    size_97=*size_p_96-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 735 "libneo-c.c"
    result_98=come_calloc(1,size_97,sname,sline,class_name);
    # 737 "libneo-c.c"
    memcpy(result_98,block,size_97);
    # 739 "libneo-c.c"
    __result75__ = __result_obj__ = result_98;
    return __result75__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional81;
void* __result76__;
unsigned long int* ref_count_99;
void* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_99, 0, sizeof(unsigned long int*));
    # 747 "libneo-c.c"
    # 744 "libneo-c.c"
    if(_if_conditional81=mem==((void*)0),    _if_conditional81) {
        # 745 "libneo-c.c"
        __result76__ = __result_obj__ = mem;
        return __result76__;
    }
    # 755 "libneo-c.c"
    ref_count_99=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 757 "libneo-c.c"
    (*ref_count_99)++;
    # 759 "libneo-c.c"
    __result77__ = __result_obj__ = mem;
    return __result77__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional82;
void* __result78__;
unsigned long int* ref_count_100;
void* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_100, 0, sizeof(unsigned long int*));
    # 767 "libneo-c.c"
    # 764 "libneo-c.c"
    if(_if_conditional82=mem==((void*)0),    _if_conditional82) {
        # 765 "libneo-c.c"
        __result78__ = __result_obj__ = mem;
        return __result78__;
    }
    # 775 "libneo-c.c"
    ref_count_100=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 777 "libneo-c.c"
    printf("ref_count %ld\n",*ref_count_100);
    # 779 "libneo-c.c"
    __result79__ = __result_obj__ = mem;
    return __result79__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional83;
void* __result80__;
unsigned long int* ref_count_101;
_Bool _if_conditional84;
unsigned long int count_102;
_Bool _if_conditional85;
_Bool _if_conditional86;
void (*finalizer_103)(void*);
void* __result81__;
void* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_101, 0, sizeof(unsigned long int*));
memset(&count_102, 0, sizeof(unsigned long int));
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
    # 788 "libneo-c.c"
    # 784 "libneo-c.c"
    if(_if_conditional83=mem==((void*)0),    _if_conditional83) {
        # 785 "libneo-c.c"
        __result80__ = __result_obj__ = ((void*)0);
        return __result80__;
    }
    # 788 "libneo-c.c"
    ref_count_101=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 794 "libneo-c.c"
    # 790 "libneo-c.c"
    if(_if_conditional84=!no_decrement,    _if_conditional84) {
        # 791 "libneo-c.c"
        (*ref_count_101)--;
    }
    # 794 "libneo-c.c"
    count_102=*ref_count_101;
    # 806 "libneo-c.c"
    # 795 "libneo-c.c"
    if(_if_conditional85=!no_free&&(count_102<=0||force_delete_),    _if_conditional85) {
        # 802 "libneo-c.c"
        # 796 "libneo-c.c"
        if(_if_conditional86=protocol_obj&&protocol_fun,        _if_conditional86) {
            # 797 "libneo-c.c"
            finalizer_103=protocol_fun;
            # 798 "libneo-c.c"
            finalizer_103(protocol_obj);
            # 800 "libneo-c.c"
            come_free_object(protocol_obj);
        }
        # 802 "libneo-c.c"
        come_free_object(mem);
        # 803 "libneo-c.c"
        __result81__ = __result_obj__ = ((void*)0);
        return __result81__;
    }
    # 806 "libneo-c.c"
    __result82__ = __result_obj__ = mem;
    return __result82__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* __result83__;
_Bool _if_conditional89;
void* __result84__;
unsigned long int* ref_count_104;
_Bool _if_conditional90;
unsigned long int count_105;
_Bool _if_conditional91;
_Bool _if_conditional92;
void (*finalizer_106)(void*);
void* __result85__;
void* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_104, 0, sizeof(unsigned long int*));
memset(&count_105, 0, sizeof(unsigned long int));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    # 816 "libneo-c.c"
    # 811 "libneo-c.c"
    if(result_obj) {
        # 815 "libneo-c.c"
        # 812 "libneo-c.c"
        if(_if_conditional88=mem==result_obj,        _if_conditional88) {
            # 813 "libneo-c.c"
            __result83__ = __result_obj__ = mem;
            return __result83__;
        }
    }
    # 820 "libneo-c.c"
    # 816 "libneo-c.c"
    if(_if_conditional89=mem==((void*)0),    _if_conditional89) {
        # 817 "libneo-c.c"
        __result84__ = __result_obj__ = ((void*)0);
        return __result84__;
    }
    # 820 "libneo-c.c"
    ref_count_104=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 826 "libneo-c.c"
    # 822 "libneo-c.c"
    if(_if_conditional90=!no_decrement,    _if_conditional90) {
        # 823 "libneo-c.c"
        (*ref_count_104)--;
    }
    # 826 "libneo-c.c"
    count_105=*ref_count_104;
    # 838 "libneo-c.c"
    # 827 "libneo-c.c"
    if(_if_conditional91=!no_free&&(count_105<=0||force_delete_),    _if_conditional91) {
        # 834 "libneo-c.c"
        # 828 "libneo-c.c"
        if(_if_conditional92=protocol_obj&&protocol_fun,        _if_conditional92) {
            # 829 "libneo-c.c"
            finalizer_106=protocol_fun;
            # 830 "libneo-c.c"
            finalizer_106(protocol_obj);
            # 832 "libneo-c.c"
            come_free_object(protocol_obj);
        }
        # 834 "libneo-c.c"
        come_free_object(mem);
        # 835 "libneo-c.c"
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    # 838 "libneo-c.c"
    __result86__ = __result_obj__ = mem;
    return __result86__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void (*finalizer_107)(void*);
void (*finalizer_108)(void*);
unsigned long int* ref_count_109;
_Bool _if_conditional97;
unsigned long int count_110;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
void (*finalizer_111)(void*);
_Bool _if_conditional101;
void (*finalizer_112)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&ref_count_109, 0, sizeof(unsigned long int*));
memset(&count_110, 0, sizeof(unsigned long int));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
    # 847 "libneo-c.c"
    # 843 "libneo-c.c"
    if(_if_conditional93=mem==((void*)0),    _if_conditional93) {
        # 844 "libneo-c.c"
        return;
    }
    # 880 "libneo-c.c"
    # 847 "libneo-c.c"
    if(call_finalizer_only) {
        # 856 "libneo-c.c"
        # 848 "libneo-c.c"
        if(fun) {
            # 853 "libneo-c.c"
            # 849 "libneo-c.c"
            if(_if_conditional96=protocol_obj&&protocol_fun,            _if_conditional96) {
                # 850 "libneo-c.c"
                finalizer_107=protocol_fun;
                # 851 "libneo-c.c"
                finalizer_107(protocol_obj);
            }
            # 853 "libneo-c.c"
            finalizer_108=fun;
            # 854 "libneo-c.c"
            finalizer_108(mem);
        }
    }
    else {
        # 858 "libneo-c.c"
        ref_count_109=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 864 "libneo-c.c"
        # 860 "libneo-c.c"
        if(_if_conditional97=!no_decrement,        _if_conditional97) {
            # 861 "libneo-c.c"
            (*ref_count_109)--;
        }
        # 864 "libneo-c.c"
        count_110=*ref_count_109;
        # 879 "libneo-c.c"
        # 865 "libneo-c.c"
        if(_if_conditional98=!no_free&&(count_110<=0||force_delete_),        _if_conditional98) {
            # 878 "libneo-c.c"
            # 866 "libneo-c.c"
            if(mem) {
                # 872 "libneo-c.c"
                # 867 "libneo-c.c"
                if(_if_conditional100=protocol_obj&&protocol_fun,                _if_conditional100) {
                    # 868 "libneo-c.c"
                    finalizer_111=protocol_fun;
                    # 869 "libneo-c.c"
                    finalizer_111(protocol_obj);
                    # 870 "libneo-c.c"
                    come_free_object(protocol_obj);
                }
                # 876 "libneo-c.c"
                # 872 "libneo-c.c"
                if(fun) {
                    # 873 "libneo-c.c"
                    finalizer_112=fun;
                    # 874 "libneo-c.c"
                    finalizer_112(mem);
                }
                # 876 "libneo-c.c"
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
void (*finalizer_113)(void*);
void (*finalizer_114)(void*);
unsigned long int* ref_count_115;
_Bool _if_conditional108;
unsigned long int count_116;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
void (*finalizer_117)(void*);
_Bool _if_conditional112;
void (*finalizer_118)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&ref_count_115, 0, sizeof(unsigned long int*));
memset(&count_116, 0, sizeof(unsigned long int));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
    # 889 "libneo-c.c"
    # 884 "libneo-c.c"
    if(result_obj) {
        # 888 "libneo-c.c"
        # 885 "libneo-c.c"
        if(_if_conditional103=mem==result_obj,        _if_conditional103) {
            # 886 "libneo-c.c"
            return;
        }
    }
    # 893 "libneo-c.c"
    # 889 "libneo-c.c"
    if(_if_conditional104=mem==((void*)0),    _if_conditional104) {
        # 890 "libneo-c.c"
        return;
    }
    # 926 "libneo-c.c"
    # 893 "libneo-c.c"
    if(call_finalizer_only) {
        # 902 "libneo-c.c"
        # 894 "libneo-c.c"
        if(fun) {
            # 899 "libneo-c.c"
            # 895 "libneo-c.c"
            if(_if_conditional107=protocol_obj&&protocol_fun,            _if_conditional107) {
                # 896 "libneo-c.c"
                finalizer_113=protocol_fun;
                # 897 "libneo-c.c"
                finalizer_113(protocol_obj);
            }
            # 899 "libneo-c.c"
            finalizer_114=fun;
            # 900 "libneo-c.c"
            finalizer_114(mem);
        }
    }
    else {
        # 904 "libneo-c.c"
        ref_count_115=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 910 "libneo-c.c"
        # 906 "libneo-c.c"
        if(_if_conditional108=!no_decrement,        _if_conditional108) {
            # 907 "libneo-c.c"
            (*ref_count_115)--;
        }
        # 910 "libneo-c.c"
        count_116=*ref_count_115;
        # 925 "libneo-c.c"
        # 911 "libneo-c.c"
        if(_if_conditional109=!no_free&&(count_116<=0||force_delete_),        _if_conditional109) {
            # 924 "libneo-c.c"
            # 912 "libneo-c.c"
            if(mem) {
                # 918 "libneo-c.c"
                # 913 "libneo-c.c"
                if(_if_conditional111=protocol_obj&&protocol_fun,                _if_conditional111) {
                    # 914 "libneo-c.c"
                    finalizer_117=protocol_fun;
                    # 915 "libneo-c.c"
                    finalizer_117(protocol_obj);
                    # 916 "libneo-c.c"
                    come_free_object(protocol_obj);
                }
                # 922 "libneo-c.c"
                # 918 "libneo-c.c"
                if(fun) {
                    # 919 "libneo-c.c"
                    finalizer_118=fun;
                    # 920 "libneo-c.c"
                    finalizer_118(mem);
                }
                # 922 "libneo-c.c"
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
void (*finalizer_119)(void*);
unsigned long int* ref_count_120;
_Bool _if_conditional118;
unsigned long int count_121;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void (*finalizer_122)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
memset(&ref_count_120, 0, sizeof(unsigned long int*));
memset(&count_121, 0, sizeof(unsigned long int));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
    # 935 "libneo-c.c"
    # 930 "libneo-c.c"
    if(result_obj) {
        # 934 "libneo-c.c"
        # 931 "libneo-c.c"
        if(_if_conditional114=mem==result_obj,        _if_conditional114) {
            # 932 "libneo-c.c"
            return;
        }
    }
    # 939 "libneo-c.c"
    # 935 "libneo-c.c"
    if(_if_conditional115=mem==((void*)0),    _if_conditional115) {
        # 936 "libneo-c.c"
        return;
    }
    # 963 "libneo-c.c"
    # 939 "libneo-c.c"
    if(call_finalizer_only) {
        # 944 "libneo-c.c"
        # 940 "libneo-c.c"
        if(fun) {
            # 941 "libneo-c.c"
            finalizer_119=fun;
            # 942 "libneo-c.c"
            finalizer_119(mem);
        }
    }
    else {
        # 946 "libneo-c.c"
        ref_count_120=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 952 "libneo-c.c"
        # 948 "libneo-c.c"
        if(_if_conditional118=!no_decrement,        _if_conditional118) {
            # 949 "libneo-c.c"
            (*ref_count_120)--;
        }
        # 952 "libneo-c.c"
        count_121=*ref_count_120;
        # 962 "libneo-c.c"
        # 953 "libneo-c.c"
        if(_if_conditional119=!no_free&&(count_121<=0||force_delete_),        _if_conditional119) {
            # 961 "libneo-c.c"
            # 954 "libneo-c.c"
            if(mem) {
                # 959 "libneo-c.c"
                # 955 "libneo-c.c"
                if(fun) {
                    # 956 "libneo-c.c"
                    finalizer_122=fun;
                    # 957 "libneo-c.c"
                    finalizer_122(mem);
                }
                # 959 "libneo-c.c"
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional122;
char* __result87__;
int len_123;
void* right_value85;
char* result_124;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_123, 0, sizeof(int));
right_value85 = (void*)0;
memset(&result_124, 0, sizeof(char*));
    # 970 "libneo-c.c"
    # 967 "libneo-c.c"
    if(_if_conditional122=str==((void*)0),    _if_conditional122) {
        # 968 "libneo-c.c"
        __result87__ = __result_obj__ = ((void*)0);
        return __result87__;
    }
    # 970 "libneo-c.c"
    len_123=strlen(str)+1;
    # 972 "libneo-c.c"
    result_124=(char*)come_increment_ref_count(((char*)(right_value85=(char*)come_calloc(1, sizeof(char)*(1*(len_123)), "libneo-c.c", 972, "char"))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 974 "libneo-c.c"
    strncpy(result_124,str,len_123);
    # 976 "libneo-c.c"
    __result88__ = __result_obj__ = result_124;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result88__;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_125;
int i_126;
_Bool _if_conditional123;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_125, 0, sizeof(_Bool));
memset(&i_126, 0, sizeof(int));
    # 981 "libneo-c.c"
    found_125=(_Bool)0;
    # 988 "libneo-c.c"
    for(    i_126=0;    i_126<len;    i_126++    ){
        # 987 "libneo-c.c"
        # 983 "libneo-c.c"
        if(_if_conditional123=array[i_126]==element,        _if_conditional123) {
            # 984 "libneo-c.c"
            found_125=(_Bool)1;
            # 985 "libneo-c.c"
            break;
        }
    }
    # 988 "libneo-c.c"
    __result89__ = found_125;
    return __result89__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
void* right_value86;
char* __dec_obj12;
struct buffer* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    # 996 "libneo-c.c"
    self->size=128;
    # 997 "libneo-c.c"
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value86=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 997, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 998 "libneo-c.c"
    self->buf[0]=0;
    # 999 "libneo-c.c"
    self->len=0;
    # 1001 "libneo-c.c"
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
    # 1006 "libneo-c.c"
    # 1006 "libneo-c.c"
    if(_if_conditional124=self&&self->buf,    _if_conditional124) {
        # 1006 "libneo-c.c"
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
    # 1010 "libneo-c.c"
    # 1010 "libneo-c.c"
    if(_if_conditional125=self&&self->buf,    _if_conditional125) {
        # 1010 "libneo-c.c"
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional126;
struct buffer* __result91__;
void* right_value87;
struct buffer* result_127;
void* right_value88;
char* __dec_obj13;
struct buffer* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_127, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
    # 1019 "libneo-c.c"
    # 1015 "libneo-c.c"
    if(_if_conditional126=self==((void*)0),    _if_conditional126) {
        # 1016 "libneo-c.c"
        __result91__ = __result_obj__ = ((void*)0);
        return __result91__;
    }
    # 1019 "libneo-c.c"
    result_127=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1019, "buffer"))));
    come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1021 "libneo-c.c"
    result_127->size=self->size;
    # 1022 "libneo-c.c"
    __dec_obj13=result_127->buf;
    result_127->buf=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1022, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1023 "libneo-c.c"
    result_127->len=self->len;
    # 1024 "libneo-c.c"
    memcpy(result_127->buf,self->buf,self->len);
    # 1026 "libneo-c.c"
    __result92__ = __result_obj__ = result_127;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional127;
int __result93__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1034 "libneo-c.c"
    # 1031 "libneo-c.c"
    if(_if_conditional127=self==((void*)0),    _if_conditional127) {
        # 1032 "libneo-c.c"
        __result93__ = 0;
        return __result93__;
    }
    # 1034 "libneo-c.c"
    __result94__ = self->len;
    return __result94__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
    # 1042 "libneo-c.c"
    # 1039 "libneo-c.c"
    if(_if_conditional128=self==((void*)0),    _if_conditional128) {
        # 1040 "libneo-c.c"
        return;
    }
    # 1042 "libneo-c.c"
    self->buf[0]=0;
    # 1043 "libneo-c.c"
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
    # 1051 "libneo-c.c"
    # 1048 "libneo-c.c"
    if(_if_conditional129=self==((void*)0),    _if_conditional129) {
        # 1049 "libneo-c.c"
        return;
    }
    # 1051 "libneo-c.c"
    self->len-=len;
    # 1052 "libneo-c.c"
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional130;
struct buffer* __result95__;
_Bool _if_conditional131;
void* right_value89;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* right_value90;
char* __dec_obj14;
struct buffer* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&old_buf_128, 0, sizeof(char*));
memset(&old_len_129, 0, sizeof(int));
memset(&new_size_130, 0, sizeof(int));
right_value90 = (void*)0;
    # 1060 "libneo-c.c"
    # 1057 "libneo-c.c"
    if(_if_conditional130=self==((void*)0)||mem==((void*)0),    _if_conditional130) {
        # 1058 "libneo-c.c"
        __result95__ = __result_obj__ = self;
        return __result95__;
    }
    # 1071 "libneo-c.c"
    # 1060 "libneo-c.c"
    if(_if_conditional131=self->len+size+1+1>=self->size,    _if_conditional131) {
        # 1061 "libneo-c.c"
        old_buf_128=(char*)come_increment_ref_count(((char*)(right_value89=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1061, "char"))));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1062 "libneo-c.c"
        memcpy(old_buf_128,self->buf,self->size);
        # 1063 "libneo-c.c"
        old_len_129=self->len;
        # 1064 "libneo-c.c"
        new_size_130=(self->size+size+1)*2;
        # 1065 "libneo-c.c"
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value90=(char*)come_calloc(1, sizeof(char)*(1*(new_size_130)), "libneo-c.c", 1065, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1066 "libneo-c.c"
        memcpy(self->buf,old_buf_128,old_len_129);
        # 1067 "libneo-c.c"
        self->buf[old_len_129]=0;
        # 1068 "libneo-c.c"
        self->size=new_size_130;
        old_buf_128 = come_decrement_ref_count2(old_buf_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1071 "libneo-c.c"
    memcpy(self->buf+self->len,mem,size);
    # 1072 "libneo-c.c"
    self->len+=size;
    # 1073 "libneo-c.c"
    self->buf[self->len]=0;
    # 1075 "libneo-c.c"
    __result96__ = __result_obj__ = self;
    return __result96__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional132;
struct buffer* __result97__;
_Bool _if_conditional133;
void* right_value91;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* right_value92;
char* __dec_obj15;
struct buffer* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&old_buf_131, 0, sizeof(char*));
memset(&old_len_132, 0, sizeof(int));
memset(&new_size_133, 0, sizeof(int));
right_value92 = (void*)0;
    # 1083 "libneo-c.c"
    # 1080 "libneo-c.c"
    if(_if_conditional132=self==((void*)0),    _if_conditional132) {
        # 1081 "libneo-c.c"
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    # 1094 "libneo-c.c"
    # 1083 "libneo-c.c"
    if(_if_conditional133=self->len+1+1+1>=self->size,    _if_conditional133) {
        # 1084 "libneo-c.c"
        old_buf_131=(char*)come_increment_ref_count(((char*)(right_value91=charp_clone(self->buf))));
        right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1085 "libneo-c.c"
        old_len_132=self->len;
        # 1087 "libneo-c.c"
        new_size_133=(self->size+10+1)*2;
        # 1088 "libneo-c.c"
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value92=(char*)come_calloc(1, sizeof(char)*(1*(new_size_133)), "libneo-c.c", 1088, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1089 "libneo-c.c"
        memcpy(self->buf,old_buf_131,old_len_132);
        # 1090 "libneo-c.c"
        self->buf[old_len_132]=0;
        # 1091 "libneo-c.c"
        self->size=new_size_133;
        old_buf_131 = come_decrement_ref_count2(old_buf_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1094 "libneo-c.c"
    self->buf[self->len]=c;
    # 1095 "libneo-c.c"
    self->len++;
    # 1097 "libneo-c.c"
    self->buf[self->len]=0;
    # 1099 "libneo-c.c"
    __result98__ = __result_obj__ = self;
    return __result98__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional134;
struct buffer* __result99__;
int size_134;
_Bool _if_conditional135;
void* right_value93;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* right_value94;
char* __dec_obj16;
struct buffer* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_134, 0, sizeof(int));
right_value93 = (void*)0;
memset(&old_buf_135, 0, sizeof(char*));
memset(&old_len_136, 0, sizeof(int));
memset(&new_size_137, 0, sizeof(int));
right_value94 = (void*)0;
    # 1108 "libneo-c.c"
    # 1104 "libneo-c.c"
    if(_if_conditional134=self==((void*)0)||mem==((void*)0),    _if_conditional134) {
        # 1105 "libneo-c.c"
        __result99__ = __result_obj__ = self;
        return __result99__;
    }
    # 1108 "libneo-c.c"
    size_134=strlen(mem);
    # 1120 "libneo-c.c"
    # 1109 "libneo-c.c"
    if(_if_conditional135=self->len+size_134+1+1>=self->size,    _if_conditional135) {
        # 1110 "libneo-c.c"
        old_buf_135=(char*)come_increment_ref_count(((char*)(right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1110, "char"))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1111 "libneo-c.c"
        memcpy(old_buf_135,self->buf,self->size);
        # 1112 "libneo-c.c"
        old_len_136=self->len;
        # 1113 "libneo-c.c"
        new_size_137=(self->size+size_134+1)*2;
        # 1114 "libneo-c.c"
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(new_size_137)), "libneo-c.c", 1114, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1115 "libneo-c.c"
        memcpy(self->buf,old_buf_135,old_len_136);
        # 1116 "libneo-c.c"
        self->buf[old_len_136]=0;
        # 1117 "libneo-c.c"
        self->size=new_size_137;
        old_buf_135 = come_decrement_ref_count2(old_buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1120 "libneo-c.c"
    memcpy(self->buf+self->len,mem,size_134);
    # 1121 "libneo-c.c"
    self->len+=size_134;
    # 1122 "libneo-c.c"
    self->buf[self->len]=0;
    # 1124 "libneo-c.c"
    __result100__ = __result_obj__ = self;
    return __result100__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional136;
struct buffer* __result101__;
int size_138;
_Bool _if_conditional137;
void* right_value95;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* right_value96;
char* __dec_obj17;
struct buffer* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_138, 0, sizeof(int));
right_value95 = (void*)0;
memset(&old_buf_139, 0, sizeof(char*));
memset(&old_len_140, 0, sizeof(int));
memset(&new_size_141, 0, sizeof(int));
right_value96 = (void*)0;
    # 1132 "libneo-c.c"
    # 1129 "libneo-c.c"
    if(_if_conditional136=self==((void*)0)||mem==((void*)0),    _if_conditional136) {
        # 1130 "libneo-c.c"
        __result101__ = __result_obj__ = self;
        return __result101__;
    }
    # 1132 "libneo-c.c"
    size_138=strlen(mem)+1;
    # 1144 "libneo-c.c"
    # 1133 "libneo-c.c"
    if(_if_conditional137=self->len+size_138+1+1+1>=self->size,    _if_conditional137) {
        # 1134 "libneo-c.c"
        old_buf_139=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1134, "char"))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1135 "libneo-c.c"
        memcpy(old_buf_139,self->buf,self->size);
        # 1136 "libneo-c.c"
        old_len_140=self->len;
        # 1137 "libneo-c.c"
        new_size_141=(self->size+size_138+1)*2;
        # 1138 "libneo-c.c"
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value96=(char*)come_calloc(1, sizeof(char)*(1*(new_size_141)), "libneo-c.c", 1138, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1139 "libneo-c.c"
        memcpy(self->buf,old_buf_139,old_len_140);
        # 1140 "libneo-c.c"
        self->buf[old_len_140]=0;
        # 1141 "libneo-c.c"
        self->size=new_size_141;
        old_buf_139 = come_decrement_ref_count2(old_buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1144 "libneo-c.c"
    memcpy(self->buf+self->len,mem,size_138);
    # 1145 "libneo-c.c"
    self->len+=size_138;
    # 1146 "libneo-c.c"
    self->buf[self->len]=0;
    # 1147 "libneo-c.c"
    self->len++;
    # 1149 "libneo-c.c"
    __result102__ = __result_obj__ = self;
    return __result102__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional138;
struct buffer* __result103__;
int* mem_142;
int size_143;
_Bool _if_conditional139;
void* right_value97;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* right_value98;
char* __dec_obj18;
struct buffer* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_142, 0, sizeof(int*));
memset(&size_143, 0, sizeof(int));
right_value97 = (void*)0;
memset(&old_buf_144, 0, sizeof(char*));
memset(&old_len_145, 0, sizeof(int));
memset(&new_size_146, 0, sizeof(int));
right_value98 = (void*)0;
    # 1157 "libneo-c.c"
    # 1154 "libneo-c.c"
    if(_if_conditional138=self==((void*)0),    _if_conditional138) {
        # 1155 "libneo-c.c"
        __result103__ = __result_obj__ = ((void*)0);
        return __result103__;
    }
    # 1157 "libneo-c.c"
    mem_142=&value;
    # 1158 "libneo-c.c"
    size_143=sizeof(int);
    # 1171 "libneo-c.c"
    # 1160 "libneo-c.c"
    if(_if_conditional139=self->len+size_143+1+1>=self->size,    _if_conditional139) {
        # 1161 "libneo-c.c"
        old_buf_144=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1161, "char"))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1162 "libneo-c.c"
        memcpy(old_buf_144,self->buf,self->size);
        # 1163 "libneo-c.c"
        old_len_145=self->len;
        # 1164 "libneo-c.c"
        new_size_146=(self->size+size_143+1)*2;
        # 1165 "libneo-c.c"
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value98=(char*)come_calloc(1, sizeof(char)*(1*(new_size_146)), "libneo-c.c", 1165, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1166 "libneo-c.c"
        memcpy(self->buf,old_buf_144,old_len_145);
        # 1167 "libneo-c.c"
        self->buf[old_len_145]=0;
        # 1168 "libneo-c.c"
        self->size=new_size_146;
        old_buf_144 = come_decrement_ref_count2(old_buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1171 "libneo-c.c"
    memcpy(self->buf+self->len,mem_142,size_143);
    # 1172 "libneo-c.c"
    self->len+=size_143;
    # 1173 "libneo-c.c"
    self->buf[self->len]=0;
    # 1175 "libneo-c.c"
    __result104__ = __result_obj__ = self;
    return __result104__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_147;
int size_148;
_Bool _if_conditional140;
void* right_value99;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* right_value100;
char* __dec_obj19;
struct buffer* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_147, 0, sizeof(long*));
memset(&size_148, 0, sizeof(int));
right_value99 = (void*)0;
memset(&old_buf_149, 0, sizeof(char*));
memset(&old_len_150, 0, sizeof(int));
memset(&new_size_151, 0, sizeof(int));
right_value100 = (void*)0;
    # 1180 "libneo-c.c"
    mem_147=&value;
    # 1181 "libneo-c.c"
    size_148=sizeof(long);
    # 1194 "libneo-c.c"
    # 1183 "libneo-c.c"
    if(_if_conditional140=self->len+size_148+1+1>=self->size,    _if_conditional140) {
        # 1184 "libneo-c.c"
        old_buf_149=(char*)come_increment_ref_count(((char*)(right_value99=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1184, "char"))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1185 "libneo-c.c"
        memcpy(old_buf_149,self->buf,self->size);
        # 1186 "libneo-c.c"
        old_len_150=self->len;
        # 1187 "libneo-c.c"
        new_size_151=(self->size+size_148+1)*2;
        # 1188 "libneo-c.c"
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(new_size_151)), "libneo-c.c", 1188, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1189 "libneo-c.c"
        memcpy(self->buf,old_buf_149,old_len_150);
        # 1190 "libneo-c.c"
        self->buf[old_len_150]=0;
        # 1191 "libneo-c.c"
        self->size=new_size_151;
        old_buf_149 = come_decrement_ref_count2(old_buf_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1194 "libneo-c.c"
    memcpy(self->buf+self->len,mem_147,size_148);
    # 1195 "libneo-c.c"
    self->len+=size_148;
    # 1196 "libneo-c.c"
    self->buf[self->len]=0;
    # 1198 "libneo-c.c"
    __result105__ = __result_obj__ = self;
    return __result105__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional141;
struct buffer* __result106__;
short short* mem_152;
int size_153;
_Bool _if_conditional142;
void* right_value101;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* right_value102;
char* __dec_obj20;
struct buffer* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_152, 0, sizeof(short short*));
memset(&size_153, 0, sizeof(int));
right_value101 = (void*)0;
memset(&old_buf_154, 0, sizeof(char*));
memset(&old_len_155, 0, sizeof(int));
memset(&new_size_156, 0, sizeof(int));
right_value102 = (void*)0;
    # 1207 "libneo-c.c"
    # 1203 "libneo-c.c"
    if(_if_conditional141=self==((void*)0),    _if_conditional141) {
        # 1204 "libneo-c.c"
        __result106__ = __result_obj__ = ((void*)0);
        return __result106__;
    }
    # 1207 "libneo-c.c"
    mem_152=&value;
    # 1208 "libneo-c.c"
    size_153=sizeof(short short);
    # 1221 "libneo-c.c"
    # 1210 "libneo-c.c"
    if(_if_conditional142=self->len+size_153+1+1>=self->size,    _if_conditional142) {
        # 1211 "libneo-c.c"
        old_buf_154=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1211, "char"))));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1212 "libneo-c.c"
        memcpy(old_buf_154,self->buf,self->size);
        # 1213 "libneo-c.c"
        old_len_155=self->len;
        # 1214 "libneo-c.c"
        new_size_156=(self->size+size_153+1)*2;
        # 1215 "libneo-c.c"
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value102=(char*)come_calloc(1, sizeof(char)*(1*(new_size_156)), "libneo-c.c", 1215, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1216 "libneo-c.c"
        memcpy(self->buf,old_buf_154,old_len_155);
        # 1217 "libneo-c.c"
        self->buf[old_len_155]=0;
        # 1218 "libneo-c.c"
        self->size=new_size_156;
        old_buf_154 = come_decrement_ref_count2(old_buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1221 "libneo-c.c"
    memcpy(self->buf+self->len,mem_152,size_153);
    # 1222 "libneo-c.c"
    self->len+=size_153;
    # 1223 "libneo-c.c"
    self->buf[self->len]=0;
    # 1225 "libneo-c.c"
    __result107__ = __result_obj__ = self;
    return __result107__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional143;
struct buffer* __result108__;
int len_157;
_Bool _if_conditional144;
int new_size_158;
void* right_value103;
char* __dec_obj21;
int i_159;
struct buffer* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_157, 0, sizeof(int));
memset(&new_size_158, 0, sizeof(int));
right_value103 = (void*)0;
memset(&i_159, 0, sizeof(int));
    # 1234 "libneo-c.c"
    # 1230 "libneo-c.c"
    if(_if_conditional143=self==((void*)0),    _if_conditional143) {
        # 1231 "libneo-c.c"
        __result108__ = __result_obj__ = ((void*)0);
        return __result108__;
    }
    # 1234 "libneo-c.c"
    len_157=self->len;
    # 1235 "libneo-c.c"
    len_157=(len_157+3)&~3;
    # 1243 "libneo-c.c"
    # 1237 "libneo-c.c"
    if(_if_conditional144=len_157>=self->size,    _if_conditional144) {
        # 1238 "libneo-c.c"
        new_size_158=(self->size+1+1)*2;
        # 1239 "libneo-c.c"
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(new_size_158)), "libneo-c.c", 1239, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1240 "libneo-c.c"
        self->size=new_size_158;
    }
    # 1247 "libneo-c.c"
    for(    i_159=self->len;    i_159<len_157;    i_159++    ){
        # 1244 "libneo-c.c"
        self->buf[i_159]=0;
    }
    # 1247 "libneo-c.c"
    self->len=len_157;
    # 1249 "libneo-c.c"
    __result109__ = __result_obj__ = self;
    return __result109__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional145;
int __result110__;
_Bool _if_conditional146;
int __result111__;
_Bool _if_conditional147;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1264 "libneo-c.c"
    # 1254 "libneo-c.c"
    if(_if_conditional145=left==((void*)0)&&right==((void*)0),    _if_conditional145) {
        # 1255 "libneo-c.c"
        __result110__ = 0;
        return __result110__;
    }
    else {
        # 1264 "libneo-c.c"
        # 1257 "libneo-c.c"
        if(_if_conditional146=left==((void*)0),        _if_conditional146) {
            # 1258 "libneo-c.c"
            __result111__ = -1;
            return __result111__;
        }
        else {
            # 1264 "libneo-c.c"
            # 1260 "libneo-c.c"
            if(_if_conditional147=right==((void*)0),            _if_conditional147) {
                # 1261 "libneo-c.c"
                __result112__ = 1;
                return __result112__;
            }
        }
    }
    # 1264 "libneo-c.c"
    __result113__ = strcmp(left->buf,right->buf);
    return __result113__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct buffer* result_160;
_Bool _if_conditional148;
struct buffer* __result114__;
struct buffer* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_160, 0, sizeof(struct buffer*));
    # 1269 "libneo-c.c"
    result_160=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1269, "buffer"))))))));
    come_call_finalizer3(right_value104,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value105,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1275 "libneo-c.c"
    # 1271 "libneo-c.c"
    if(_if_conditional148=self==((void*)0),    _if_conditional148) {
        # 1272 "libneo-c.c"
        __result114__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result114__;
    }
    # 1275 "libneo-c.c"
    buffer_append_str(result_160,self);
    # 1277 "libneo-c.c"
    __result115__ = __result_obj__ = result_160;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result115__;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value106;
void* right_value107;
struct buffer* result_161;
_Bool _if_conditional149;
struct buffer* __result116__;
struct buffer* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_161, 0, sizeof(struct buffer*));
    # 1282 "libneo-c.c"
    result_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value106=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1282, "buffer"))))))));
    come_call_finalizer3(right_value106,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1288 "libneo-c.c"
    # 1284 "libneo-c.c"
    if(_if_conditional149=self==((void*)0),    _if_conditional149) {
        # 1285 "libneo-c.c"
        __result116__ = __result_obj__ = result_161;
        come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result116__;
    }
    # 1288 "libneo-c.c"
    buffer_append_str(result_161,self);
    # 1290 "libneo-c.c"
    __result117__ = __result_obj__ = result_161;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result117__;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional150;
void* right_value108;
char* __result118__;
void* right_value109;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    # 1299 "libneo-c.c"
    # 1295 "libneo-c.c"
    if(_if_conditional150=self==((void*)0),    _if_conditional150) {
        # 1296 "libneo-c.c"
        __result118__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result118__;
    }
    # 1299 "libneo-c.c"
    __result119__ = __result_obj__ = ((char*)(right_value109=__builtin_string(self->buf)));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1308 "libneo-c.c"
    __result120__ = self==right;
    return __result120__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1313 "libneo-c.c"
    __result121__ = self==right;
    return __result121__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1318 "libneo-c.c"
    __result122__ = self==right;
    return __result122__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1323 "libneo-c.c"
    __result123__ = self==right;
    return __result123__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1328 "libneo-c.c"
    __result124__ = self==right;
    return __result124__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1333 "libneo-c.c"
    __result125__ = self==right;
    return __result125__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1338 "libneo-c.c"
    __result126__ = self==right;
    return __result126__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1343 "libneo-c.c"
    __result127__ = self==right;
    return __result127__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional151;
_Bool __result128__;
_Bool _if_conditional152;
_Bool __result129__;
_Bool _if_conditional153;
_Bool __result130__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1358 "libneo-c.c"
    # 1348 "libneo-c.c"
    if(_if_conditional151=self==((void*)0)&&right==((void*)0),    _if_conditional151) {
        # 1349 "libneo-c.c"
        __result128__ = (_Bool)1;
        return __result128__;
    }
    else {
        # 1358 "libneo-c.c"
        # 1351 "libneo-c.c"
        if(_if_conditional152=self==((void*)0),        _if_conditional152) {
            # 1352 "libneo-c.c"
            __result129__ = (_Bool)0;
            return __result129__;
        }
        else {
            # 1358 "libneo-c.c"
            # 1354 "libneo-c.c"
            if(_if_conditional153=right==((void*)0),            _if_conditional153) {
                # 1355 "libneo-c.c"
                __result130__ = (_Bool)0;
                return __result130__;
            }
        }
    }
    # 1358 "libneo-c.c"
    __result131__ = strcmp(self,right)==0;
    return __result131__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional154;
_Bool __result132__;
_Bool _if_conditional155;
_Bool __result133__;
_Bool _if_conditional156;
_Bool __result134__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1373 "libneo-c.c"
    # 1363 "libneo-c.c"
    if(_if_conditional154=self==((void*)0)&&right==((void*)0),    _if_conditional154) {
        # 1364 "libneo-c.c"
        __result132__ = (_Bool)1;
        return __result132__;
    }
    else {
        # 1373 "libneo-c.c"
        # 1366 "libneo-c.c"
        if(_if_conditional155=self==((void*)0),        _if_conditional155) {
            # 1367 "libneo-c.c"
            __result133__ = (_Bool)0;
            return __result133__;
        }
        else {
            # 1373 "libneo-c.c"
            # 1369 "libneo-c.c"
            if(_if_conditional156=right==((void*)0),            _if_conditional156) {
                # 1370 "libneo-c.c"
                __result134__ = (_Bool)0;
                return __result134__;
            }
        }
    }
    # 1373 "libneo-c.c"
    __result135__ = strcmp(self,right)==0;
    return __result135__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional157;
_Bool __result136__;
_Bool _if_conditional158;
_Bool __result137__;
_Bool _if_conditional159;
_Bool __result138__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1388 "libneo-c.c"
    # 1378 "libneo-c.c"
    if(_if_conditional157=self==((void*)0)&&right==((void*)0),    _if_conditional157) {
        # 1379 "libneo-c.c"
        __result136__ = (_Bool)1;
        return __result136__;
    }
    else {
        # 1388 "libneo-c.c"
        # 1381 "libneo-c.c"
        if(_if_conditional158=self==((void*)0),        _if_conditional158) {
            # 1382 "libneo-c.c"
            __result137__ = (_Bool)0;
            return __result137__;
        }
        else {
            # 1388 "libneo-c.c"
            # 1384 "libneo-c.c"
            if(_if_conditional159=right==((void*)0),            _if_conditional159) {
                # 1385 "libneo-c.c"
                __result138__ = (_Bool)0;
                return __result138__;
            }
        }
    }
    # 1388 "libneo-c.c"
    __result139__ = strcmp(self,right)==0;
    return __result139__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional160;
_Bool __result140__;
_Bool _if_conditional161;
_Bool __result141__;
_Bool _if_conditional162;
_Bool __result142__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1403 "libneo-c.c"
    # 1393 "libneo-c.c"
    if(_if_conditional160=self==((void*)0)&&right==((void*)0),    _if_conditional160) {
        # 1394 "libneo-c.c"
        __result140__ = (_Bool)1;
        return __result140__;
    }
    else {
        # 1403 "libneo-c.c"
        # 1396 "libneo-c.c"
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            # 1397 "libneo-c.c"
            __result141__ = (_Bool)0;
            return __result141__;
        }
        else {
            # 1403 "libneo-c.c"
            # 1399 "libneo-c.c"
            if(_if_conditional162=right==((void*)0),            _if_conditional162) {
                # 1400 "libneo-c.c"
                __result142__ = (_Bool)0;
                return __result142__;
            }
        }
    }
    # 1403 "libneo-c.c"
    __result143__ = strcmp(self,right)==0;
    return __result143__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional163;
_Bool __result144__;
_Bool _if_conditional164;
_Bool __result145__;
_Bool _if_conditional165;
_Bool __result146__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1418 "libneo-c.c"
    # 1408 "libneo-c.c"
    if(_if_conditional163=self==((void*)0)&&right==((void*)0),    _if_conditional163) {
        # 1409 "libneo-c.c"
        __result144__ = (_Bool)0;
        return __result144__;
    }
    else {
        # 1418 "libneo-c.c"
        # 1411 "libneo-c.c"
        if(_if_conditional164=self==((void*)0),        _if_conditional164) {
            # 1412 "libneo-c.c"
            __result145__ = (_Bool)1;
            return __result145__;
        }
        else {
            # 1418 "libneo-c.c"
            # 1414 "libneo-c.c"
            if(_if_conditional165=right==((void*)0),            _if_conditional165) {
                # 1415 "libneo-c.c"
                __result146__ = (_Bool)1;
                return __result146__;
            }
        }
    }
    # 1418 "libneo-c.c"
    __result147__ = strcmp(self,right)!=0;
    return __result147__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional166;
_Bool __result148__;
_Bool _if_conditional167;
_Bool __result149__;
_Bool _if_conditional168;
_Bool __result150__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1433 "libneo-c.c"
    # 1423 "libneo-c.c"
    if(_if_conditional166=self==((void*)0)&&right==((void*)0),    _if_conditional166) {
        # 1424 "libneo-c.c"
        __result148__ = (_Bool)0;
        return __result148__;
    }
    else {
        # 1433 "libneo-c.c"
        # 1426 "libneo-c.c"
        if(_if_conditional167=self==((void*)0),        _if_conditional167) {
            # 1427 "libneo-c.c"
            __result149__ = (_Bool)1;
            return __result149__;
        }
        else {
            # 1433 "libneo-c.c"
            # 1429 "libneo-c.c"
            if(_if_conditional168=right==((void*)0),            _if_conditional168) {
                # 1430 "libneo-c.c"
                __result150__ = (_Bool)1;
                return __result150__;
            }
        }
    }
    # 1433 "libneo-c.c"
    __result151__ = strcmp(self,right)!=0;
    return __result151__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional169;
void* right_value110;
char* __result152__;
int len_162;
void* right_value111;
char* result_163;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&len_162, 0, sizeof(int));
right_value111 = (void*)0;
memset(&result_163, 0, sizeof(char*));
    # 1442 "libneo-c.c"
    # 1439 "libneo-c.c"
    if(_if_conditional169=self==((void*)0)||right==((void*)0),    _if_conditional169) {
        # 1440 "libneo-c.c"
        __result152__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result152__;
    }
    # 1442 "libneo-c.c"
    len_162=strlen(self)+strlen(right);
    # 1444 "libneo-c.c"
    result_163=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_162+1)), "libneo-c.c", 1444, "char"))));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1446 "libneo-c.c"
    strncpy(result_163,self,len_162+1);
    # 1447 "libneo-c.c"
    strncat(result_163,right,len_162+1);
    # 1449 "libneo-c.c"
    __result153__ = __result_obj__ = result_163;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result153__;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional170;
void* right_value112;
char* __result154__;
int len_164;
void* right_value113;
char* result_165;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&len_164, 0, sizeof(int));
right_value113 = (void*)0;
memset(&result_165, 0, sizeof(char*));
    # 1457 "libneo-c.c"
    # 1454 "libneo-c.c"
    if(_if_conditional170=self==((void*)0)||right==((void*)0),    _if_conditional170) {
        # 1455 "libneo-c.c"
        __result154__ = __result_obj__ = ((char*)(right_value112=__builtin_string("")));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result154__;
    }
    # 1457 "libneo-c.c"
    len_164=strlen(self)+strlen(right);
    # 1459 "libneo-c.c"
    result_165=(char*)come_increment_ref_count(((char*)(right_value113=(char*)come_calloc(1, sizeof(char)*(1*(len_164+1)), "libneo-c.c", 1459, "char"))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1461 "libneo-c.c"
    strncpy(result_165,self,len_164+1);
    # 1462 "libneo-c.c"
    strncat(result_165,right,len_164+1);
    # 1464 "libneo-c.c"
    __result155__ = __result_obj__ = result_165;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result155__;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional171;
void* right_value114;
char* __result156__;
void* right_value115;
void* right_value116;
struct buffer* buf_166;
int i_167;
void* right_value117;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&buf_166, 0, sizeof(struct buffer*));
memset(&i_167, 0, sizeof(int));
right_value117 = (void*)0;
    # 1472 "libneo-c.c"
    # 1469 "libneo-c.c"
    if(_if_conditional171=self==((void*)0),    _if_conditional171) {
        # 1470 "libneo-c.c"
        __result156__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result156__;
    }
    # 1472 "libneo-c.c"
    buf_166=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value116=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value115=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1472, "buffer"))))))));
    come_call_finalizer3(right_value115,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1478 "libneo-c.c"
    for(    i_167=0;    i_167<right;    i_167++    ){
        # 1475 "libneo-c.c"
        buffer_append_str(buf_166,self);
    }
    # 1478 "libneo-c.c"
    __result157__ = __result_obj__ = ((char*)(right_value117=buffer_to_string(buf_166)));
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional172;
void* right_value118;
char* __result158__;
void* right_value119;
void* right_value120;
struct buffer* buf_168;
int i_169;
void* right_value121;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&buf_168, 0, sizeof(struct buffer*));
memset(&i_169, 0, sizeof(int));
right_value121 = (void*)0;
    # 1486 "libneo-c.c"
    # 1483 "libneo-c.c"
    if(_if_conditional172=self==((void*)0),    _if_conditional172) {
        # 1484 "libneo-c.c"
        __result158__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result158__;
    }
    # 1486 "libneo-c.c"
    buf_168=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1486, "buffer"))))))));
    come_call_finalizer3(right_value119,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1492 "libneo-c.c"
    for(    i_169=0;    i_169<right;    i_169++    ){
        # 1489 "libneo-c.c"
        buffer_append_str(buf_168,self);
    }
    # 1492 "libneo-c.c"
    __result159__ = __result_obj__ = ((char*)(right_value121=buffer_to_string(buf_168)));
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1500 "libneo-c.c"
    __result160__ = (int_get_hash_key(((int)value)));
    return __result160__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1505 "libneo-c.c"
    __result161__ = value;
    return __result161__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1510 "libneo-c.c"
    __result162__ = value;
    return __result162__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1515 "libneo-c.c"
    __result163__ = value;
    return __result163__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1520 "libneo-c.c"
    __result164__ = value;
    return __result164__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1525 "libneo-c.c"
    __result165__ = value;
    return __result165__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1530 "libneo-c.c"
    __result166__ = (unsigned int)value;
    return __result166__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1535 "libneo-c.c"
    __result167__ = (unsigned int)value;
    return __result167__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional173;
unsigned int __result168__;
int result_170;
char* p_171;
_Bool _while_condtional7;
unsigned int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_170, 0, sizeof(int));
memset(&p_171, 0, sizeof(char*));
    # 1543 "libneo-c.c"
    # 1540 "libneo-c.c"
    if(_if_conditional173=value==((void*)0),    _if_conditional173) {
        # 1541 "libneo-c.c"
        __result168__ = 0;
        return __result168__;
    }
    # 1543 "libneo-c.c"
    result_170=0;
    # 1544 "libneo-c.c"
    p_171=value;
    # 1549 "libneo-c.c"
    while(_while_condtional7=*p_171,    _while_condtional7) {
        # 1546 "libneo-c.c"
        result_170+=(*p_171);
        # 1547 "libneo-c.c"
        p_171++;
    }
    # 1549 "libneo-c.c"
    __result169__ = result_170;
    return __result169__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional174;
unsigned int __result170__;
int result_172;
char* p_173;
_Bool _while_condtional8;
unsigned int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(int));
memset(&p_173, 0, sizeof(char*));
    # 1557 "libneo-c.c"
    # 1554 "libneo-c.c"
    if(_if_conditional174=value==((void*)0),    _if_conditional174) {
        # 1555 "libneo-c.c"
        __result170__ = 0;
        return __result170__;
    }
    # 1557 "libneo-c.c"
    result_172=0;
    # 1558 "libneo-c.c"
    p_173=value;
    # 1563 "libneo-c.c"
    while(_while_condtional8=*p_173,    _while_condtional8) {
        # 1560 "libneo-c.c"
        result_172+=(*p_173);
        # 1561 "libneo-c.c"
        p_173++;
    }
    # 1563 "libneo-c.c"
    __result171__ = result_172;
    return __result171__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1571 "libneo-c.c"
    __result172__ = self;
    return __result172__;
}

char char_clone(char self){
void* __result_obj__;
char __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1576 "libneo-c.c"
    __result173__ = self;
    return __result173__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1581 "libneo-c.c"
    __result174__ = self;
    return __result174__;
}

int int_clone(int self){
void* __result_obj__;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1586 "libneo-c.c"
    __result175__ = self;
    return __result175__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1591 "libneo-c.c"
    __result176__ = self;
    return __result176__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1596 "libneo-c.c"
    __result177__ = self;
    return __result177__;
}

double double_clone(double self){
void* __result_obj__;
double __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1601 "libneo-c.c"
    __result178__ = self;
    return __result178__;
}

float float_clone(float self){
void* __result_obj__;
float __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1606 "libneo-c.c"
    __result179__ = self;
    return __result179__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional175;
char* __result180__;
void* right_value122;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    # 1612 "libneo-c.c"
    # 1611 "libneo-c.c"
    if(_if_conditional175=self==((void*)0),    _if_conditional175) {
        # 1611 "libneo-c.c"
        __result180__ = __result_obj__ = ((void*)0);
        return __result180__;
    }
    # 1612 "libneo-c.c"
    __result181__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional176;
char* __result182__;
void* right_value123;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    # 1619 "libneo-c.c"
    # 1617 "libneo-c.c"
    if(_if_conditional176=self==((void*)0),    _if_conditional176) {
        # 1617 "libneo-c.c"
        __result182__ = __result_obj__ = ((void*)0);
        return __result182__;
    }
    # 1619 "libneo-c.c"
    __result183__ = __result_obj__ = ((char*)(right_value123=__builtin_string(self)));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result183__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_174;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(_Bool));
    # 1627 "libneo-c.c"
    result_174=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1628 "libneo-c.c"
    __result184__ = result_174;
    return __result184__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1633 "libneo-c.c"
    __result185__ = c==32||c==9;
    return __result185__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1638 "libneo-c.c"
    __result186__ = (c>=48&&c<=57);
    return __result186__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1643 "libneo-c.c"
    __result187__ = xiswalpha(c)||xiswdigit(c);
    return __result187__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_175;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(_Bool));
    # 1648 "libneo-c.c"
    result_175=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1649 "libneo-c.c"
    __result188__ = result_175;
    return __result188__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1654 "libneo-c.c"
    __result189__ = c==32||c==9;
    return __result189__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1659 "libneo-c.c"
    __result190__ = (c>=48&&c<=57);
    return __result190__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1664 "libneo-c.c"
    __result191__ = xisalpha(c)||xisdigit(c);
    return __result191__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_176;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(_Bool));
    # 1669 "libneo-c.c"
    result_176=(c>=32&&c<=126);
    # 1670 "libneo-c.c"
    __result192__ = result_176;
    return __result192__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_177;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_177, 0, sizeof(_Bool));
    # 1675 "libneo-c.c"
    result_177=(c>=32&&c<=126);
    # 1676 "libneo-c.c"
    __result193__ = result_177;
    return __result193__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional177;
int __result194__;
int __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1687 "libneo-c.c"
    # 1684 "libneo-c.c"
    if(_if_conditional177=str==((void*)0),    _if_conditional177) {
        # 1685 "libneo-c.c"
        __result194__ = 0;
        return __result194__;
    }
    # 1687 "libneo-c.c"
    __result195__ = strlen(str);
    return __result195__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional178;
int __result196__;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1694 "libneo-c.c"
    # 1691 "libneo-c.c"
    if(_if_conditional178=str==((void*)0),    _if_conditional178) {
        # 1692 "libneo-c.c"
        __result196__ = 0;
        return __result196__;
    }
    # 1694 "libneo-c.c"
    __result197__ = strlen(str);
    return __result197__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional179;
void* right_value124;
char* __result198__;
int len_178;
void* right_value125;
char* result_179;
int i_180;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&len_178, 0, sizeof(int));
right_value125 = (void*)0;
memset(&result_179, 0, sizeof(char*));
memset(&i_180, 0, sizeof(int));
    # 1702 "libneo-c.c"
    # 1699 "libneo-c.c"
    if(_if_conditional179=str==((void*)0),    _if_conditional179) {
        # 1700 "libneo-c.c"
        __result198__ = __result_obj__ = ((char*)(right_value124=__builtin_string("")));
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result198__;
    }
    # 1702 "libneo-c.c"
    len_178=strlen(str);
    # 1703 "libneo-c.c"
    result_179=(char*)come_increment_ref_count(((char*)(right_value125=(char*)come_calloc(1, sizeof(char)*(1*(len_178+1)), "libneo-c.c", 1703, "char"))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1709 "libneo-c.c"
    for(    i_180=0;    i_180<len_178;    i_180++    ){
        # 1706 "libneo-c.c"
        result_179[i_180]=str[len_178-i_180-1];
    }
    # 1709 "libneo-c.c"
    result_179[len_178]=0;
    # 1711 "libneo-c.c"
    __result199__ = __result_obj__ = result_179;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result199__;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional180;
void* right_value126;
char* __result200__;
int len_181;
void* right_value127;
char* result_182;
int i_183;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&len_181, 0, sizeof(int));
right_value127 = (void*)0;
memset(&result_182, 0, sizeof(char*));
memset(&i_183, 0, sizeof(int));
    # 1719 "libneo-c.c"
    # 1716 "libneo-c.c"
    if(_if_conditional180=str==((void*)0),    _if_conditional180) {
        # 1717 "libneo-c.c"
        __result200__ = __result_obj__ = ((char*)(right_value126=__builtin_string("")));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result200__;
    }
    # 1719 "libneo-c.c"
    len_181=strlen(str);
    # 1720 "libneo-c.c"
    result_182=(char*)come_increment_ref_count(((char*)(right_value127=(char*)come_calloc(1, sizeof(char)*(1*(len_181+1)), "libneo-c.c", 1720, "char"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1726 "libneo-c.c"
    for(    i_183=0;    i_183<len_181;    i_183++    ){
        # 1723 "libneo-c.c"
        result_182[i_183]=str[len_181-i_183-1];
    }
    # 1726 "libneo-c.c"
    result_182[len_181]=0;
    # 1728 "libneo-c.c"
    __result201__ = __result_obj__ = result_182;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result201__;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional181;
void* right_value128;
char* __result202__;
int len_184;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value129;
void* right_value130;
char* __result203__;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value131;
char* __result204__;
_Bool _if_conditional188;
void* right_value132;
char* __result205__;
void* right_value133;
char* result_185;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&len_184, 0, sizeof(int));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&result_185, 0, sizeof(char*));
    # 1736 "libneo-c.c"
    # 1732 "libneo-c.c"
    if(_if_conditional181=str==((void*)0),    _if_conditional181) {
        # 1733 "libneo-c.c"
        __result202__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result202__;
    }
    # 1736 "libneo-c.c"
    len_184=strlen(str);
    # 1741 "libneo-c.c"
    # 1738 "libneo-c.c"
    if(_if_conditional182=head<0,    _if_conditional182) {
        # 1739 "libneo-c.c"
        head+=len_184;
    }
    # 1745 "libneo-c.c"
    # 1741 "libneo-c.c"
    if(_if_conditional183=tail<0,    _if_conditional183) {
        # 1742 "libneo-c.c"
        tail+=len_184+1;
    }
    # 1749 "libneo-c.c"
    # 1745 "libneo-c.c"
    if(_if_conditional184=head>tail,    _if_conditional184) {
        # 1746 "libneo-c.c"
        __result203__ = __result_obj__ = ((char*)(right_value130=string_reverse(((char*)(right_value129=charp_substring(str,tail,head))))));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result203__;
    }
    # 1753 "libneo-c.c"
    # 1749 "libneo-c.c"
    if(_if_conditional185=head<0,    _if_conditional185) {
        # 1750 "libneo-c.c"
        head=0;
    }
    # 1757 "libneo-c.c"
    # 1753 "libneo-c.c"
    if(_if_conditional186=tail>=len_184,    _if_conditional186) {
        # 1754 "libneo-c.c"
        tail=len_184;
    }
    # 1761 "libneo-c.c"
    # 1757 "libneo-c.c"
    if(_if_conditional187=head==tail,    _if_conditional187) {
        # 1758 "libneo-c.c"
        __result204__ = __result_obj__ = ((char*)(right_value131=__builtin_string("")));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    # 1765 "libneo-c.c"
    # 1761 "libneo-c.c"
    if(_if_conditional188=tail-head+1<1,    _if_conditional188) {
        # 1762 "libneo-c.c"
        __result205__ = __result_obj__ = ((char*)(right_value132=__builtin_string("")));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result205__;
    }
    # 1765 "libneo-c.c"
    result_185=(char*)come_increment_ref_count(((char*)(right_value133=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1765, "char"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1767 "libneo-c.c"
    memcpy(result_185,str+head,tail-head);
    # 1768 "libneo-c.c"
    result_185[tail-head]=0;
    # 1770 "libneo-c.c"
    __result206__ = __result_obj__ = result_185;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result206__;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional189;
void* right_value134;
char* __result207__;
int len_186;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value135;
void* right_value136;
char* __result208__;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value137;
char* __result209__;
_Bool _if_conditional196;
void* right_value138;
char* __result210__;
void* right_value139;
char* result_187;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&len_186, 0, sizeof(int));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_187, 0, sizeof(char*));
    # 1779 "libneo-c.c"
    # 1775 "libneo-c.c"
    if(_if_conditional189=str==((void*)0),    _if_conditional189) {
        # 1776 "libneo-c.c"
        __result207__ = __result_obj__ = ((char*)(right_value134=__builtin_string("")));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    # 1779 "libneo-c.c"
    len_186=strlen(str);
    # 1784 "libneo-c.c"
    # 1781 "libneo-c.c"
    if(_if_conditional190=head<0,    _if_conditional190) {
        # 1782 "libneo-c.c"
        head+=len_186;
    }
    # 1788 "libneo-c.c"
    # 1784 "libneo-c.c"
    if(_if_conditional191=tail<0,    _if_conditional191) {
        # 1785 "libneo-c.c"
        tail+=len_186+1;
    }
    # 1792 "libneo-c.c"
    # 1788 "libneo-c.c"
    if(_if_conditional192=head>tail,    _if_conditional192) {
        # 1789 "libneo-c.c"
        __result208__ = __result_obj__ = ((char*)(right_value136=string_reverse(((char*)(right_value135=charp_substring(str,tail,head))))));
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result208__;
    }
    # 1796 "libneo-c.c"
    # 1792 "libneo-c.c"
    if(_if_conditional193=head<0,    _if_conditional193) {
        # 1793 "libneo-c.c"
        head=0;
    }
    # 1800 "libneo-c.c"
    # 1796 "libneo-c.c"
    if(_if_conditional194=tail>=len_186,    _if_conditional194) {
        # 1797 "libneo-c.c"
        tail=len_186;
    }
    # 1804 "libneo-c.c"
    # 1800 "libneo-c.c"
    if(_if_conditional195=head==tail,    _if_conditional195) {
        # 1801 "libneo-c.c"
        __result209__ = __result_obj__ = ((char*)(right_value137=__builtin_string("")));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    # 1808 "libneo-c.c"
    # 1804 "libneo-c.c"
    if(_if_conditional196=tail-head+1<1,    _if_conditional196) {
        # 1805 "libneo-c.c"
        __result210__ = __result_obj__ = ((char*)(right_value138=__builtin_string("")));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result210__;
    }
    # 1808 "libneo-c.c"
    result_187=(char*)come_increment_ref_count(((char*)(right_value139=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1808, "char"))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1810 "libneo-c.c"
    memcpy(result_187,str+head,tail-head);
    # 1811 "libneo-c.c"
    result_187[tail-head]=0;
    # 1813 "libneo-c.c"
    __result211__ = __result_obj__ = result_187;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result211__;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional197;
void* right_value140;
char* __result212__;
int len_188;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value141;
void* right_value142;
char* __result213__;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value143;
char* __result214__;
_Bool _if_conditional204;
void* right_value144;
char* __result215__;
void* right_value145;
char* result_189;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&len_188, 0, sizeof(int));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_189, 0, sizeof(char*));
    # 1822 "libneo-c.c"
    # 1818 "libneo-c.c"
    if(_if_conditional197=str==((void*)0),    _if_conditional197) {
        # 1819 "libneo-c.c"
        __result212__ = __result_obj__ = ((char*)(right_value140=__builtin_string("")));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result212__;
    }
    # 1822 "libneo-c.c"
    len_188=strlen(str);
    # 1827 "libneo-c.c"
    # 1824 "libneo-c.c"
    if(_if_conditional198=head<0,    _if_conditional198) {
        # 1825 "libneo-c.c"
        head+=len_188;
    }
    # 1831 "libneo-c.c"
    # 1827 "libneo-c.c"
    if(_if_conditional199=tail<0,    _if_conditional199) {
        # 1828 "libneo-c.c"
        tail+=len_188+1;
    }
    # 1835 "libneo-c.c"
    # 1831 "libneo-c.c"
    if(_if_conditional200=head>tail,    _if_conditional200) {
        # 1832 "libneo-c.c"
        __result213__ = __result_obj__ = ((char*)(right_value142=string_reverse(((char*)(right_value141=charp_substring(str,tail,head))))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    # 1839 "libneo-c.c"
    # 1835 "libneo-c.c"
    if(_if_conditional201=head<0,    _if_conditional201) {
        # 1836 "libneo-c.c"
        head=0;
    }
    # 1843 "libneo-c.c"
    # 1839 "libneo-c.c"
    if(_if_conditional202=tail>=len_188,    _if_conditional202) {
        # 1840 "libneo-c.c"
        tail=len_188;
    }
    # 1847 "libneo-c.c"
    # 1843 "libneo-c.c"
    if(_if_conditional203=head==tail,    _if_conditional203) {
        # 1844 "libneo-c.c"
        __result214__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result214__;
    }
    # 1851 "libneo-c.c"
    # 1847 "libneo-c.c"
    if(_if_conditional204=tail-head+1<1,    _if_conditional204) {
        # 1848 "libneo-c.c"
        __result215__ = __result_obj__ = ((char*)(right_value144=__builtin_string("")));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result215__;
    }
    # 1851 "libneo-c.c"
    result_189=(char*)come_increment_ref_count(((char*)(right_value145=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1851, "char"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1853 "libneo-c.c"
    memcpy(result_189,str+head,tail-head);
    # 1854 "libneo-c.c"
    result_189[tail-head]=0;
    # 1856 "libneo-c.c"
    __result216__ = __result_obj__ = result_189;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result216__;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional205;
void* right_value146;
char* __result217__;
int len_190;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
void* right_value147;
void* right_value148;
char* __result218__;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value149;
char* __result219__;
_Bool _if_conditional212;
void* right_value150;
char* __result220__;
void* right_value151;
char* result_191;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&len_190, 0, sizeof(int));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_191, 0, sizeof(char*));
    # 1865 "libneo-c.c"
    # 1861 "libneo-c.c"
    if(_if_conditional205=str==((void*)0),    _if_conditional205) {
        # 1862 "libneo-c.c"
        __result217__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result217__;
    }
    # 1865 "libneo-c.c"
    len_190=strlen(str);
    # 1870 "libneo-c.c"
    # 1867 "libneo-c.c"
    if(_if_conditional206=head<0,    _if_conditional206) {
        # 1868 "libneo-c.c"
        head+=len_190;
    }
    # 1874 "libneo-c.c"
    # 1870 "libneo-c.c"
    if(_if_conditional207=tail<0,    _if_conditional207) {
        # 1871 "libneo-c.c"
        tail+=len_190+1;
    }
    # 1878 "libneo-c.c"
    # 1874 "libneo-c.c"
    if(_if_conditional208=head>tail,    _if_conditional208) {
        # 1875 "libneo-c.c"
        __result218__ = __result_obj__ = ((char*)(right_value148=string_reverse(((char*)(right_value147=charp_substring(str,tail,head))))));
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result218__;
    }
    # 1882 "libneo-c.c"
    # 1878 "libneo-c.c"
    if(_if_conditional209=head<0,    _if_conditional209) {
        # 1879 "libneo-c.c"
        head=0;
    }
    # 1886 "libneo-c.c"
    # 1882 "libneo-c.c"
    if(_if_conditional210=tail>=len_190,    _if_conditional210) {
        # 1883 "libneo-c.c"
        tail=len_190;
    }
    # 1890 "libneo-c.c"
    # 1886 "libneo-c.c"
    if(_if_conditional211=head==tail,    _if_conditional211) {
        # 1887 "libneo-c.c"
        __result219__ = __result_obj__ = ((char*)(right_value149=__builtin_string("")));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    # 1894 "libneo-c.c"
    # 1890 "libneo-c.c"
    if(_if_conditional212=tail-head+1<1,    _if_conditional212) {
        # 1891 "libneo-c.c"
        __result220__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result220__;
    }
    # 1894 "libneo-c.c"
    result_191=(char*)come_increment_ref_count(((char*)(right_value151=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1894, "char"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1896 "libneo-c.c"
    memcpy(result_191,str+head,tail-head);
    # 1897 "libneo-c.c"
    result_191[tail-head]=0;
    # 1899 "libneo-c.c"
    __result221__ = __result_obj__ = result_191;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result221__;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional213;
void* right_value152;
char* __result222__;
va_list args_192;
char* result_193;
int len_194;
_Bool _if_conditional214;
void* right_value153;
char* __result223__;
void* right_value154;
char* result2_195;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&args_192, 0, sizeof(va_list));
memset(&result_193, 0, sizeof(char*));
memset(&len_194, 0, sizeof(int));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&result2_195, 0, sizeof(char*));
    # 1907 "libneo-c.c"
    # 1904 "libneo-c.c"
    if(_if_conditional213=msg==((void*)0),    _if_conditional213) {
        # 1905 "libneo-c.c"
        __result222__ = __result_obj__ = ((char*)(right_value152=__builtin_string("")));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result222__;
    }
    # 1907 "libneo-c.c"
    # 1908 "libneo-c.c"
    __builtin_va_start(args_192,msg);
    # 1909 "libneo-c.c"
    # 1910 "libneo-c.c"
    len_194=vasprintf(&result_193,msg,args_192);
    # 1911 "libneo-c.c"
    __builtin_va_end(args_192);
    # 1917 "libneo-c.c"
    # 1913 "libneo-c.c"
    if(_if_conditional214=len_194<0,    _if_conditional214) {
        # 1914 "libneo-c.c"
        __result223__ = __result_obj__ = ((char*)(right_value153=__builtin_string("")));
        come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
    # 1917 "libneo-c.c"
    result2_195=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(result_193))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1919 "libneo-c.c"
    free(result_193);
    # 1921 "libneo-c.c"
    __result224__ = __result_obj__ = result2_195;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result224__;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional215;
void* right_value155;
char* __result225__;
int len_196;
_Bool _if_conditional216;
void* right_value156;
char* __result226__;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value157;
char* __result227__;
_Bool _if_conditional221;
void* right_value158;
char* sub_str_197;
void* right_value159;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&len_196, 0, sizeof(int));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&sub_str_197, 0, sizeof(char*));
right_value159 = (void*)0;
    # 1930 "libneo-c.c"
    # 1926 "libneo-c.c"
    if(_if_conditional215=str==((void*)0),    _if_conditional215) {
        # 1927 "libneo-c.c"
        __result225__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
    # 1930 "libneo-c.c"
    len_196=strlen(str);
    # 1936 "libneo-c.c"
    # 1932 "libneo-c.c"
    if(_if_conditional216=strcmp(str,"")==0,    _if_conditional216) {
        # 1933 "libneo-c.c"
        __result226__ = __result_obj__ = ((char*)(right_value156=__builtin_string(str)));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result226__;
    }
    # 1940 "libneo-c.c"
    # 1936 "libneo-c.c"
    if(_if_conditional217=head<0,    _if_conditional217) {
        # 1937 "libneo-c.c"
        head+=len_196;
    }
    # 1944 "libneo-c.c"
    # 1940 "libneo-c.c"
    if(_if_conditional218=tail<0,    _if_conditional218) {
        # 1941 "libneo-c.c"
        tail+=len_196+1;
    }
    # 1948 "libneo-c.c"
    # 1944 "libneo-c.c"
    if(_if_conditional219=head<0,    _if_conditional219) {
        # 1945 "libneo-c.c"
        head=0;
    }
    # 1952 "libneo-c.c"
    # 1948 "libneo-c.c"
    if(_if_conditional220=tail<0,    _if_conditional220) {
        # 1949 "libneo-c.c"
        __result227__ = __result_obj__ = ((char*)(right_value157=__builtin_string(str)));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result227__;
    }
    # 1956 "libneo-c.c"
    # 1952 "libneo-c.c"
    if(_if_conditional221=tail>=len_196,    _if_conditional221) {
        # 1953 "libneo-c.c"
        tail=len_196;
    }
    # 1956 "libneo-c.c"
    sub_str_197=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(str,tail,-1))));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1958 "libneo-c.c"
    memcpy(str+head,sub_str_197,string_length(sub_str_197)+1);
    # 1960 "libneo-c.c"
    __result228__ = __result_obj__ = ((char*)(right_value159=__builtin_string(str)));
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional222;
void* right_value160;
char* __result229__;
int len_198;
_Bool _if_conditional223;
void* right_value161;
char* __result230__;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value162;
char* __result231__;
_Bool _if_conditional228;
void* right_value163;
char* sub_str_199;
void* right_value164;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&len_198, 0, sizeof(int));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&sub_str_199, 0, sizeof(char*));
right_value164 = (void*)0;
    # 1969 "libneo-c.c"
    # 1965 "libneo-c.c"
    if(_if_conditional222=str==((void*)0),    _if_conditional222) {
        # 1966 "libneo-c.c"
        __result229__ = __result_obj__ = ((char*)(right_value160=__builtin_string("")));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result229__;
    }
    # 1969 "libneo-c.c"
    len_198=strlen(str);
    # 1975 "libneo-c.c"
    # 1971 "libneo-c.c"
    if(_if_conditional223=strcmp(str,"")==0,    _if_conditional223) {
        # 1972 "libneo-c.c"
        __result230__ = __result_obj__ = ((char*)(right_value161=__builtin_string(str)));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result230__;
    }
    # 1979 "libneo-c.c"
    # 1975 "libneo-c.c"
    if(_if_conditional224=head<0,    _if_conditional224) {
        # 1976 "libneo-c.c"
        head+=len_198;
    }
    # 1983 "libneo-c.c"
    # 1979 "libneo-c.c"
    if(_if_conditional225=tail<0,    _if_conditional225) {
        # 1980 "libneo-c.c"
        tail+=len_198+1;
    }
    # 1987 "libneo-c.c"
    # 1983 "libneo-c.c"
    if(_if_conditional226=head<0,    _if_conditional226) {
        # 1984 "libneo-c.c"
        head=0;
    }
    # 1991 "libneo-c.c"
    # 1987 "libneo-c.c"
    if(_if_conditional227=tail<0,    _if_conditional227) {
        # 1988 "libneo-c.c"
        __result231__ = __result_obj__ = ((char*)(right_value162=__builtin_string(str)));
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result231__;
    }
    # 1995 "libneo-c.c"
    # 1991 "libneo-c.c"
    if(_if_conditional228=tail>=len_198,    _if_conditional228) {
        # 1992 "libneo-c.c"
        tail=len_198;
    }
    # 1995 "libneo-c.c"
    sub_str_199=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(str,tail,-1))));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1997 "libneo-c.c"
    memcpy(str+head,sub_str_199,string_length(sub_str_199)+1);
    # 1999 "libneo-c.c"
    __result232__ = __result_obj__ = ((char*)(right_value164=__builtin_string(str)));
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result232__;
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value165;
void* right_value166;
struct list$1charph* __result234__;
void* right_value167;
void* right_value168;
struct list$1charph* result_202;
void* right_value169;
void* right_value170;
struct buffer* str_203;
int i_204;
_Bool _if_conditional231;
void* right_value174;
_Bool _if_conditional234;
void* right_value175;
struct list$1charph* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&result_202, 0, sizeof(struct list$1charph*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&str_203, 0, sizeof(struct buffer*));
memset(&i_204, 0, sizeof(int));
right_value174 = (void*)0;
right_value175 = (void*)0;
    # 2008 "libneo-c.c"
    # 2004 "libneo-c.c"
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        # 2005 "libneo-c.c"
        __result234__ = __result_obj__ = ((struct list$1charph*)(right_value166=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2005, "list$1charph")))))));
        come_call_finalizer3(right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value166,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result234__;
    }
    # 2008 "libneo-c.c"
    result_202=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value168=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2008, "list$1charph"))))))));
    come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2010 "libneo-c.c"
    str_203=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2010, "buffer"))))))));
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2021 "libneo-c.c"
    for(    i_204=0;    i_204<charp_length(self);    i_204++    ){
        # 2020 "libneo-c.c"
        # 2013 "libneo-c.c"
        if(_if_conditional231=self[i_204]==c,        _if_conditional231) {
            # 2014 "libneo-c.c"
            list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(str_203->buf)))));
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2015 "libneo-c.c"
            buffer_reset(str_203);
        }
        else {
            # 2018 "libneo-c.c"
            buffer_append_char(str_203,self[i_204]);
        }
    }
    # 2025 "libneo-c.c"
    # 2021 "libneo-c.c"
    if(_if_conditional234=buffer_length(str_203)!=0,    _if_conditional234) {
        # 2022 "libneo-c.c"
        list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(str_203->buf)))));
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2025 "libneo-c.c"
    __result236__ = __result_obj__ = result_202;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result236__;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
            # 105 "./neo-c.h"
            self->head=((void*)0);
            # 106 "./neo-c.h"
            self->tail=((void*)0);
            # 107 "./neo-c.h"
            self->len=0;
            # 109 "./neo-c.h"
            __result233__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result233__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_200;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_200, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_201, 0, sizeof(struct list_item$1charph*));
                # 124 "./neo-c.h"
                it_200=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional9=it_200!=((void*)0),                _while_condtional9) {
                    # 126 "./neo-c.h"
                    prev_it_201=it_200;
                    # 127 "./neo-c.h"
                    it_200=it_200->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_201,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional230;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1charphp_finalize"
                        # 0 "list_item$1charphp_finalize"
                        if(_if_conditional230=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional230) {
                            # 0 "list_item$1charphp_finalize"
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional232;
void* right_value171;
struct list_item$1charph* litem_205;
char* __dec_obj22;
_Bool _if_conditional233;
void* right_value172;
struct list_item$1charph* litem_206;
char* __dec_obj23;
void* right_value173;
struct list_item$1charph* litem_207;
char* __dec_obj24;
struct list$1charph* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&litem_205, 0, sizeof(struct list_item$1charph*));
right_value172 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1charph*));
right_value173 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1charph*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional232=self->len==0,                _if_conditional232) {
                    # 227 "./neo-c.h"
                    litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                    come_call_finalizer3(right_value171,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_205->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_205->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj22=litem_205->item;
                    litem_205->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_205;
                    # 234 "./neo-c.h"
                    self->head=litem_205;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional233=self->len==1,                    _if_conditional233) {
                        # 237 "./neo-c.h"
                        litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_206->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_206->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj23=litem_206->item;
                        litem_206->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail=litem_206;
                        # 244 "./neo-c.h"
                        self->head->next=litem_206;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_207=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 247, "list_item$1charph"))));
                        come_call_finalizer3(right_value173,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_207->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_207->next=((void*)0);
                        # 251 "./neo-c.h"
                        __dec_obj24=litem_207->item;
                        litem_207->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 253 "./neo-c.h"
                        self->tail->next=litem_207;
                        # 254 "./neo-c.h"
                        self->tail=litem_207;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result235__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result235__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional235;
void* right_value176;
void* right_value177;
struct list$1charph* __result237__;
void* right_value178;
void* right_value179;
struct list$1charph* result_208;
void* right_value180;
void* right_value181;
struct buffer* str_209;
int i_210;
_Bool _if_conditional236;
void* right_value182;
_Bool _if_conditional237;
void* right_value183;
struct list$1charph* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_208, 0, sizeof(struct list$1charph*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&str_209, 0, sizeof(struct buffer*));
memset(&i_210, 0, sizeof(int));
right_value182 = (void*)0;
right_value183 = (void*)0;
    # 2034 "libneo-c.c"
    # 2030 "libneo-c.c"
    if(_if_conditional235=self==((void*)0),    _if_conditional235) {
        # 2031 "libneo-c.c"
        __result237__ = __result_obj__ = ((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2031, "list$1charph")))))));
        come_call_finalizer3(right_value176,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result237__;
    }
    # 2034 "libneo-c.c"
    result_208=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value178=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2034, "list$1charph"))))))));
    come_call_finalizer3(right_value178,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2036 "libneo-c.c"
    str_209=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2036, "buffer"))))))));
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2047 "libneo-c.c"
    for(    i_210=0;    i_210<charp_length(self);    i_210++    ){
        # 2046 "libneo-c.c"
        # 2039 "libneo-c.c"
        if(_if_conditional236=self[i_210]==c,        _if_conditional236) {
            # 2040 "libneo-c.c"
            list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(str_209->buf)))));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2041 "libneo-c.c"
            buffer_reset(str_209);
        }
        else {
            # 2044 "libneo-c.c"
            buffer_append_char(str_209,self[i_210]);
        }
    }
    # 2051 "libneo-c.c"
    # 2047 "libneo-c.c"
    if(_if_conditional237=buffer_length(str_209)!=0,    _if_conditional237) {
        # 2048 "libneo-c.c"
        list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(str_209->buf)))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2051 "libneo-c.c"
    __result238__ = __result_obj__ = result_208;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result238__;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional238;
void* right_value184;
char* __result239__;
char* p_211;
_Bool _while_condtional10;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value185;
char* __result240__;
void* right_value186;
char* __result241__;
void* right_value187;
char* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&p_211, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    # 2062 "libneo-c.c"
    # 2059 "libneo-c.c"
    if(_if_conditional238=path==((void*)0),    _if_conditional238) {
        # 2060 "libneo-c.c"
        __result239__ = __result_obj__ = ((char*)(right_value184=__builtin_string("")));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result239__;
    }
    # 2062 "libneo-c.c"
    p_211=path+strlen(path);
    # 2073 "libneo-c.c"
    while(_while_condtional10=p_211>=path,    _while_condtional10) {
        # 2071 "libneo-c.c"
        # 2065 "libneo-c.c"
        if(_if_conditional239=*p_211==47,        _if_conditional239) {
            # 2066 "libneo-c.c"
            break;
        }
        else {
            # 2069 "libneo-c.c"
            p_211--;
        }
    }
    # 2080 "libneo-c.c"
    # 2073 "libneo-c.c"
    if(_if_conditional240=p_211<path,    _if_conditional240) {
        # 2074 "libneo-c.c"
        __result240__ = __result_obj__ = ((char*)(right_value185=__builtin_string(path)));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result240__;
    }
    else {
        # 2077 "libneo-c.c"
        __result241__ = __result_obj__ = ((char*)(right_value186=__builtin_string(p_211+1)));
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result241__;
    }
    # 2080 "libneo-c.c"
    __result242__ = __result_obj__ = ((char*)(right_value187=__builtin_string("")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result242__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional241;
void* right_value188;
char* __result243__;
void* right_value189;
void* right_value190;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
    # 2088 "libneo-c.c"
    # 2085 "libneo-c.c"
    if(_if_conditional241=path==((void*)0),    _if_conditional241) {
        # 2086 "libneo-c.c"
        __result243__ = __result_obj__ = ((char*)(right_value188=__builtin_string("")));
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result243__;
    }
    # 2088 "libneo-c.c"
    __result244__ = __result_obj__ = ((char*)(right_value190=__builtin_string(dirname(((char*)(right_value189=__builtin_string(path)))))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional242;
void* right_value191;
char* __result245__;
void* right_value192;
char* path2_212;
char* p_213;
_Bool _while_condtional11;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value193;
char* __result246__;
void* right_value194;
char* __result247__;
void* right_value195;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&path2_212, 0, sizeof(char*));
memset(&p_213, 0, sizeof(char*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    # 2096 "libneo-c.c"
    # 2093 "libneo-c.c"
    if(_if_conditional242=path==((void*)0),    _if_conditional242) {
        # 2094 "libneo-c.c"
        __result245__ = __result_obj__ = ((char*)(right_value191=__builtin_string("")));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result245__;
    }
    # 2096 "libneo-c.c"
    path2_212=(char*)come_increment_ref_count(((char*)(right_value192=xbasename(path))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2098 "libneo-c.c"
    p_213=path2_212+strlen(path2_212);
    # 2109 "libneo-c.c"
    while(_while_condtional11=p_213>=path2_212,    _while_condtional11) {
        # 2107 "libneo-c.c"
        # 2101 "libneo-c.c"
        if(_if_conditional243=*p_213==46,        _if_conditional243) {
            # 2102 "libneo-c.c"
            break;
        }
        else {
            # 2105 "libneo-c.c"
            p_213--;
        }
    }
    # 2116 "libneo-c.c"
    # 2109 "libneo-c.c"
    if(_if_conditional244=p_213<path2_212,    _if_conditional244) {
        # 2110 "libneo-c.c"
        __result246__ = __result_obj__ = ((char*)(right_value193=__builtin_string(path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result246__;
    }
    else {
        # 2113 "libneo-c.c"
        __result247__ = __result_obj__ = ((char*)(right_value194=string_substring(path2_212,0,p_213-path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result247__;
    }
    # 2116 "libneo-c.c"
    __result248__ = __result_obj__ = ((char*)(right_value195=__builtin_string("")));
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result248__;
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional245;
void* right_value196;
char* __result249__;
char* p_214;
_Bool _while_condtional12;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value197;
char* __result250__;
void* right_value198;
char* __result251__;
void* right_value199;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&p_214, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    # 2124 "libneo-c.c"
    # 2121 "libneo-c.c"
    if(_if_conditional245=path==((void*)0),    _if_conditional245) {
        # 2122 "libneo-c.c"
        __result249__ = __result_obj__ = ((char*)(right_value196=__builtin_string("")));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result249__;
    }
    # 2124 "libneo-c.c"
    p_214=path+strlen(path);
    # 2135 "libneo-c.c"
    while(_while_condtional12=p_214>=path,    _while_condtional12) {
        # 2133 "libneo-c.c"
        # 2127 "libneo-c.c"
        if(_if_conditional246=*p_214==46,        _if_conditional246) {
            # 2128 "libneo-c.c"
            break;
        }
        else {
            # 2131 "libneo-c.c"
            p_214--;
        }
    }
    # 2142 "libneo-c.c"
    # 2135 "libneo-c.c"
    if(_if_conditional247=p_214<path,    _if_conditional247) {
        # 2136 "libneo-c.c"
        __result250__ = __result_obj__ = ((char*)(right_value197=__builtin_string(path)));
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result250__;
    }
    else {
        # 2139 "libneo-c.c"
        __result251__ = __result_obj__ = ((char*)(right_value198=__builtin_string(p_214+1)));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result251__;
    }
    # 2142 "libneo-c.c"
    __result252__ = __result_obj__ = ((char*)(right_value199=__builtin_string("")));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional248;
void* right_value200;
char* __result253__;
char* result_215;
void* right_value201;
char* result2_216;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
memset(&result_215, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&result2_216, 0, sizeof(char*));
    # 2150 "libneo-c.c"
    # 2147 "libneo-c.c"
    if(_if_conditional248=path==((void*)0),    _if_conditional248) {
        # 2148 "libneo-c.c"
        __result253__ = __result_obj__ = ((char*)(right_value200=__builtin_string("")));
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result253__;
    }
    # 2150 "libneo-c.c"
    result_215=realpath(path,((void*)0));
    # 2152 "libneo-c.c"
    result2_216=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(result_215))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2154 "libneo-c.c"
    free(result_215);
    # 2156 "libneo-c.c"
    __result254__ = __result_obj__ = result2_216;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result254__;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional249;
void* right_value202;
char* __result255__;
void* right_value203;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    # 2170 "libneo-c.c"
    # 2164 "libneo-c.c"
    if(self) {
        # 2165 "libneo-c.c"
        __result255__ = __result_obj__ = ((char*)(right_value202=__builtin_string("true")));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result255__;
    }
    else {
        # 2168 "libneo-c.c"
        __result256__ = __result_obj__ = ((char*)(right_value203=__builtin_string("false")));
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result256__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value204;
char* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    # 2174 "libneo-c.c"
    __result257__ = __result_obj__ = ((char*)(right_value204=xsprintf("%c",self)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result257__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value205;
char* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    # 2179 "libneo-c.c"
    __result258__ = __result_obj__ = ((char*)(right_value205=xsprintf("%d",self)));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result258__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value206;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    # 2184 "libneo-c.c"
    __result259__ = __result_obj__ = ((char*)(right_value206=xsprintf("%d",self)));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value207;
char* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    # 2189 "libneo-c.c"
    __result260__ = __result_obj__ = ((char*)(right_value207=xsprintf("%ld",self)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result260__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
void* right_value208;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    # 2194 "libneo-c.c"
    __result261__ = __result_obj__ = ((char*)(right_value208=xsprintf("%ld",self)));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result261__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value209;
char* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    # 2199 "libneo-c.c"
    __result262__ = __result_obj__ = ((char*)(right_value209=xsprintf("%f",self)));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result262__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value210;
char* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
    # 2204 "libneo-c.c"
    __result263__ = __result_obj__ = ((char*)(right_value210=xsprintf("%lf",self)));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result263__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional250;
void* right_value211;
char* __result264__;
void* right_value212;
char* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
right_value212 = (void*)0;
    # 2212 "libneo-c.c"
    # 2209 "libneo-c.c"
    if(_if_conditional250=self==((void*)0),    _if_conditional250) {
        # 2210 "libneo-c.c"
        __result264__ = __result_obj__ = ((char*)(right_value211=__builtin_string("")));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result264__;
    }
    # 2212 "libneo-c.c"
    __result265__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self)));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result265__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional251;
void* right_value213;
char* __result266__;
void* right_value214;
char* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
right_value214 = (void*)0;
    # 2220 "libneo-c.c"
    # 2217 "libneo-c.c"
    if(_if_conditional251=self==((void*)0),    _if_conditional251) {
        # 2218 "libneo-c.c"
        __result266__ = __result_obj__ = ((char*)(right_value213=__builtin_string("")));
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result266__;
    }
    # 2220 "libneo-c.c"
    __result267__ = __result_obj__ = ((char*)(right_value214=__builtin_string(self)));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result267__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional252;
int __result268__;
_Bool _if_conditional253;
int __result269__;
_Bool _if_conditional254;
int __result270__;
int __result271__;
int __result272__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2241 "libneo-c.c"
    # 2228 "libneo-c.c"
    if(_if_conditional252=!left&&right,    _if_conditional252) {
        # 2229 "libneo-c.c"
        __result268__ = -1;
        return __result268__;
    }
    else {
        # 2241 "libneo-c.c"
        # 2231 "libneo-c.c"
        if(_if_conditional253=left&&right,        _if_conditional253) {
            # 2232 "libneo-c.c"
            __result269__ = 0;
            return __result269__;
        }
        else {
            # 2241 "libneo-c.c"
            # 2234 "libneo-c.c"
            if(_if_conditional254=!left&&!right,            _if_conditional254) {
                # 2235 "libneo-c.c"
                __result270__ = 0;
                return __result270__;
            }
            else {
                # 2238 "libneo-c.c"
                __result271__ = 1;
                return __result271__;
            }
        }
    }
    # 2241 "libneo-c.c"
    __result272__ = 0;
    return __result272__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional255;
int __result273__;
_Bool _if_conditional256;
int __result274__;
int __result275__;
int __result276__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2256 "libneo-c.c"
    # 2246 "libneo-c.c"
    if(_if_conditional255=left<right,    _if_conditional255) {
        # 2247 "libneo-c.c"
        __result273__ = -1;
        return __result273__;
    }
    else {
        # 2256 "libneo-c.c"
        # 2249 "libneo-c.c"
        if(_if_conditional256=left>right,        _if_conditional256) {
            # 2250 "libneo-c.c"
            __result274__ = 1;
            return __result274__;
        }
        else {
            # 2253 "libneo-c.c"
            __result275__ = 0;
            return __result275__;
        }
    }
    # 2256 "libneo-c.c"
    __result276__ = 0;
    return __result276__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional257;
int __result277__;
_Bool _if_conditional258;
int __result278__;
int __result279__;
int __result280__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2271 "libneo-c.c"
    # 2261 "libneo-c.c"
    if(_if_conditional257=left<right,    _if_conditional257) {
        # 2262 "libneo-c.c"
        __result277__ = -1;
        return __result277__;
    }
    else {
        # 2271 "libneo-c.c"
        # 2264 "libneo-c.c"
        if(_if_conditional258=left>right,        _if_conditional258) {
            # 2265 "libneo-c.c"
            __result278__ = 1;
            return __result278__;
        }
        else {
            # 2268 "libneo-c.c"
            __result279__ = 0;
            return __result279__;
        }
    }
    # 2271 "libneo-c.c"
    __result280__ = 0;
    return __result280__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional259;
int __result281__;
_Bool _if_conditional260;
int __result282__;
int __result283__;
int __result284__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2286 "libneo-c.c"
    # 2276 "libneo-c.c"
    if(_if_conditional259=left<right,    _if_conditional259) {
        # 2277 "libneo-c.c"
        __result281__ = -1;
        return __result281__;
    }
    else {
        # 2286 "libneo-c.c"
        # 2279 "libneo-c.c"
        if(_if_conditional260=left>right,        _if_conditional260) {
            # 2280 "libneo-c.c"
            __result282__ = 1;
            return __result282__;
        }
        else {
            # 2283 "libneo-c.c"
            __result283__ = 0;
            return __result283__;
        }
    }
    # 2286 "libneo-c.c"
    __result284__ = 0;
    return __result284__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional261;
int __result285__;
_Bool _if_conditional262;
int __result286__;
int __result287__;
int __result288__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2301 "libneo-c.c"
    # 2291 "libneo-c.c"
    if(_if_conditional261=left<right,    _if_conditional261) {
        # 2292 "libneo-c.c"
        __result285__ = -1;
        return __result285__;
    }
    else {
        # 2301 "libneo-c.c"
        # 2294 "libneo-c.c"
        if(_if_conditional262=left>right,        _if_conditional262) {
            # 2295 "libneo-c.c"
            __result286__ = 1;
            return __result286__;
        }
        else {
            # 2298 "libneo-c.c"
            __result287__ = 0;
            return __result287__;
        }
    }
    # 2301 "libneo-c.c"
    __result288__ = 0;
    return __result288__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional263;
int __result289__;
_Bool _if_conditional264;
int __result290__;
int __result291__;
int __result292__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2316 "libneo-c.c"
    # 2306 "libneo-c.c"
    if(_if_conditional263=left<right,    _if_conditional263) {
        # 2307 "libneo-c.c"
        __result289__ = -1;
        return __result289__;
    }
    else {
        # 2316 "libneo-c.c"
        # 2309 "libneo-c.c"
        if(_if_conditional264=left>right,        _if_conditional264) {
            # 2310 "libneo-c.c"
            __result290__ = 1;
            return __result290__;
        }
        else {
            # 2313 "libneo-c.c"
            __result291__ = 0;
            return __result291__;
        }
    }
    # 2316 "libneo-c.c"
    __result292__ = 0;
    return __result292__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional265;
int __result293__;
_Bool _if_conditional266;
int __result294__;
int __result295__;
int __result296__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2331 "libneo-c.c"
    # 2321 "libneo-c.c"
    if(_if_conditional265=left<right,    _if_conditional265) {
        # 2322 "libneo-c.c"
        __result293__ = -1;
        return __result293__;
    }
    else {
        # 2331 "libneo-c.c"
        # 2324 "libneo-c.c"
        if(_if_conditional266=left>right,        _if_conditional266) {
            # 2325 "libneo-c.c"
            __result294__ = 1;
            return __result294__;
        }
        else {
            # 2328 "libneo-c.c"
            __result295__ = 0;
            return __result295__;
        }
    }
    # 2331 "libneo-c.c"
    __result296__ = 0;
    return __result296__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional267;
int __result297__;
_Bool _if_conditional268;
int __result298__;
int __result299__;
int __result300__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2346 "libneo-c.c"
    # 2336 "libneo-c.c"
    if(_if_conditional267=left<right,    _if_conditional267) {
        # 2337 "libneo-c.c"
        __result297__ = -1;
        return __result297__;
    }
    else {
        # 2346 "libneo-c.c"
        # 2339 "libneo-c.c"
        if(_if_conditional268=left>right,        _if_conditional268) {
            # 2340 "libneo-c.c"
            __result298__ = 1;
            return __result298__;
        }
        else {
            # 2343 "libneo-c.c"
            __result299__ = 0;
            return __result299__;
        }
    }
    # 2346 "libneo-c.c"
    __result300__ = 0;
    return __result300__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional269;
int __result301__;
_Bool _if_conditional270;
int __result302__;
_Bool _if_conditional271;
int __result303__;
int __result304__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2361 "libneo-c.c"
    # 2351 "libneo-c.c"
    if(_if_conditional269=left==((void*)0)&&right==((void*)0),    _if_conditional269) {
        # 2352 "libneo-c.c"
        __result301__ = 0;
        return __result301__;
    }
    else {
        # 2361 "libneo-c.c"
        # 2354 "libneo-c.c"
        if(_if_conditional270=left==((void*)0),        _if_conditional270) {
            # 2355 "libneo-c.c"
            __result302__ = -1;
            return __result302__;
        }
        else {
            # 2361 "libneo-c.c"
            # 2357 "libneo-c.c"
            if(_if_conditional271=right==((void*)0),            _if_conditional271) {
                # 2358 "libneo-c.c"
                __result303__ = 1;
                return __result303__;
            }
        }
    }
    # 2361 "libneo-c.c"
    __result304__ = strcmp(left,right);
    return __result304__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional272;
int __result305__;
_Bool _if_conditional273;
int __result306__;
_Bool _if_conditional274;
int __result307__;
int __result308__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2376 "libneo-c.c"
    # 2366 "libneo-c.c"
    if(_if_conditional272=left==((void*)0)&&right==((void*)0),    _if_conditional272) {
        # 2367 "libneo-c.c"
        __result305__ = 0;
        return __result305__;
    }
    else {
        # 2376 "libneo-c.c"
        # 2369 "libneo-c.c"
        if(_if_conditional273=left==((void*)0),        _if_conditional273) {
            # 2370 "libneo-c.c"
            __result306__ = -1;
            return __result306__;
        }
        else {
            # 2376 "libneo-c.c"
            # 2372 "libneo-c.c"
            if(_if_conditional274=right==((void*)0),            _if_conditional274) {
                # 2373 "libneo-c.c"
                __result307__ = 1;
                return __result307__;
            }
        }
    }
    # 2376 "libneo-c.c"
    __result308__ = strcmp(left,right);
    return __result308__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional275;
void* right_value215;
char* __result309__;
void* right_value216;
void* right_value217;
struct buffer* buf_217;
_Bool _while_condtional13;
int size_219;
_Bool _if_conditional276;
void* right_value218;
char* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&buf_217, 0, sizeof(struct buffer*));
memset(&size_219, 0, sizeof(int));
right_value218 = (void*)0;
    # 2387 "libneo-c.c"
    # 2384 "libneo-c.c"
    if(_if_conditional275=f==((void*)0),    _if_conditional275) {
        # 2385 "libneo-c.c"
        __result309__ = __result_obj__ = ((char*)(right_value215=__builtin_string("")));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result309__;
    }
    # 2387 "libneo-c.c"
    buf_217=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value216=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2387, "buffer"))))))));
    come_call_finalizer3(right_value216,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2401 "libneo-c.c"
    while(_while_condtional13=1,    _while_condtional13) {
        # 2390 "libneo-c.c"
        char buf2_218[1024];
        memset(&buf2_218, 0, sizeof(char)        *(1024)        );
        # 2392 "libneo-c.c"
        size_219=fread(buf2_218,1,1024,f);
        # 2394 "libneo-c.c"
        buffer_append(buf_217,buf2_218,size_219);
        # 2399 "libneo-c.c"
        # 2396 "libneo-c.c"
        if(_if_conditional276=size_219<1024,        _if_conditional276) {
            # 2397 "libneo-c.c"
            break;
        }
    }
    # 2401 "libneo-c.c"
    __result310__ = __result_obj__ = ((char*)(right_value218=buffer_to_string(buf_217)));
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result310__;
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional277;
int __result311__;
int __result312__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2410 "libneo-c.c"
    # 2406 "libneo-c.c"
    if(_if_conditional277=f==((void*)0)||str==((void*)0),    _if_conditional277) {
        # 2407 "libneo-c.c"
        __result311__ = -1;
        return __result311__;
    }
    # 2410 "libneo-c.c"
    __result312__ = fwrite(str,strlen(str),1,f);
    return __result312__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional278;
int __result313__;
int result_220;
_Bool _if_conditional279;
int __result314__;
int __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(int));
    # 2419 "libneo-c.c"
    # 2415 "libneo-c.c"
    if(_if_conditional278=f==((void*)0),    _if_conditional278) {
        # 2416 "libneo-c.c"
        __result313__ = -1;
        return __result313__;
    }
    # 2419 "libneo-c.c"
    result_220=fclose(f);
    # 2425 "libneo-c.c"
    # 2421 "libneo-c.c"
    if(_if_conditional279=result_220<0,    _if_conditional279) {
        # 2422 "libneo-c.c"
        __result314__ = result_220;
        return __result314__;
    }
    # 2425 "libneo-c.c"
    __result315__ = result_220;
    return __result315__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional280;
struct _IO_FILE* __result316__;
va_list args_222;
int result_223;
_Bool _if_conditional281;
struct _IO_FILE* __result317__;
struct _IO_FILE* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_222, 0, sizeof(va_list));
memset(&result_223, 0, sizeof(int));
    # 2433 "libneo-c.c"
    # 2430 "libneo-c.c"
    if(_if_conditional280=f==((void*)0)||msg==((void*)0),    _if_conditional280) {
        # 2431 "libneo-c.c"
        __result316__ = __result_obj__ = f;
        return __result316__;
    }
    # 2433 "libneo-c.c"
    char msg2_221[1024*2*2*2];
    memset(&msg2_221, 0, sizeof(char)    *(1024*2*2*2)    );
    # 2435 "libneo-c.c"
    # 2436 "libneo-c.c"
    __builtin_va_start(args_222,msg);
    # 2437 "libneo-c.c"
    vsnprintf(msg2_221,1024*2*2*2,msg,args_222);
    # 2438 "libneo-c.c"
    __builtin_va_end(args_222);
    # 2440 "libneo-c.c"
    result_223=fprintf(f,"%s",msg2_221);
    # 2446 "libneo-c.c"
    # 2442 "libneo-c.c"
    if(_if_conditional281=result_223<0,    _if_conditional281) {
        # 2443 "libneo-c.c"
        __result317__ = __result_obj__ = f;
        come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result317__;
    }
    # 2446 "libneo-c.c"
    __result318__ = __result_obj__ = f;
    come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
    return __result318__;
    come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional282;
int __result319__;
struct _IO_FILE* f_224;
_Bool _if_conditional283;
_Bool _if_conditional284;
int __result320__;
int result_225;
_Bool _if_conditional285;
int __result321__;
int result2_226;
_Bool _if_conditional286;
int __result322__;
int __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_224, 0, sizeof(struct _IO_FILE*));
memset(&result_225, 0, sizeof(int));
memset(&result2_226, 0, sizeof(int));
    # 2455 "libneo-c.c"
    # 2451 "libneo-c.c"
    if(_if_conditional282=self==((void*)0)||file_name==((void*)0),    _if_conditional282) {
        # 2452 "libneo-c.c"
        __result319__ = -1;
        return __result319__;
    }
    # 2455 "libneo-c.c"
    # 2463 "libneo-c.c"
    # 2456 "libneo-c.c"
    if(append) {
        # 2457 "libneo-c.c"
        f_224=fopen(file_name,"a");
    }
    else {
        # 2460 "libneo-c.c"
        f_224=fopen(file_name,"w");
    }
    # 2467 "libneo-c.c"
    # 2463 "libneo-c.c"
    if(_if_conditional284=f_224==((void*)0),    _if_conditional284) {
        # 2464 "libneo-c.c"
        __result320__ = -1;
        return __result320__;
    }
    # 2467 "libneo-c.c"
    result_225=fwrite(self,strlen(self),1,f_224);
    # 2473 "libneo-c.c"
    # 2469 "libneo-c.c"
    if(_if_conditional285=result_225<0,    _if_conditional285) {
        # 2470 "libneo-c.c"
        __result321__ = result_225;
        return __result321__;
    }
    # 2475 "libneo-c.c"
    result2_226=fclose(f_224);
    # 2479 "libneo-c.c"
    # 2475 "libneo-c.c"
    if(_if_conditional286=result2_226<0,    _if_conditional286) {
        # 2476 "libneo-c.c"
        __result322__ = result2_226;
        return __result322__;
    }
    # 2479 "libneo-c.c"
    __result323__ = result_225;
    return __result323__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional287;
int __result324__;
struct _IO_FILE* f_227;
_Bool _if_conditional288;
_Bool _if_conditional289;
int __result325__;
int result_228;
_Bool _if_conditional290;
int __result326__;
int result2_229;
_Bool _if_conditional291;
int __result327__;
int __result328__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_227, 0, sizeof(struct _IO_FILE*));
memset(&result_228, 0, sizeof(int));
memset(&result2_229, 0, sizeof(int));
    # 2488 "libneo-c.c"
    # 2484 "libneo-c.c"
    if(_if_conditional287=self==((void*)0)||file_name==((void*)0),    _if_conditional287) {
        # 2485 "libneo-c.c"
        __result324__ = -1;
        return __result324__;
    }
    # 2488 "libneo-c.c"
    # 2496 "libneo-c.c"
    # 2489 "libneo-c.c"
    if(append) {
        # 2490 "libneo-c.c"
        f_227=fopen(file_name,"a");
    }
    else {
        # 2493 "libneo-c.c"
        f_227=fopen(file_name,"w");
    }
    # 2500 "libneo-c.c"
    # 2496 "libneo-c.c"
    if(_if_conditional289=f_227==((void*)0),    _if_conditional289) {
        # 2497 "libneo-c.c"
        __result325__ = -1;
        return __result325__;
    }
    # 2500 "libneo-c.c"
    result_228=fwrite(self,strlen(self),1,f_227);
    # 2506 "libneo-c.c"
    # 2502 "libneo-c.c"
    if(_if_conditional290=result_228<0,    _if_conditional290) {
        # 2503 "libneo-c.c"
        __result326__ = result_228;
        return __result326__;
    }
    # 2508 "libneo-c.c"
    result2_229=fclose(f_227);
    # 2512 "libneo-c.c"
    # 2508 "libneo-c.c"
    if(_if_conditional291=result2_229<0,    _if_conditional291) {
        # 2509 "libneo-c.c"
        __result327__ = result2_229;
        return __result327__;
    }
    # 2512 "libneo-c.c"
    __result328__ = result_228;
    return __result328__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional292;
void* right_value219;
char* __result329__;
struct _IO_FILE* f_230;
_Bool _if_conditional293;
void* right_value220;
char* __result330__;
void* right_value221;
void* right_value222;
struct buffer* buf_231;
_Bool _while_condtional14;
int size_233;
_Bool _if_conditional294;
void* right_value223;
char* result_234;
int result2_235;
_Bool _if_conditional295;
void* right_value224;
char* __result331__;
char* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
memset(&f_230, 0, sizeof(struct _IO_FILE*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&buf_231, 0, sizeof(struct buffer*));
memset(&size_233, 0, sizeof(int));
right_value223 = (void*)0;
memset(&result_234, 0, sizeof(char*));
memset(&result2_235, 0, sizeof(int));
right_value224 = (void*)0;
    # 2521 "libneo-c.c"
    # 2517 "libneo-c.c"
    if(_if_conditional292=file_name==((void*)0),    _if_conditional292) {
        # 2518 "libneo-c.c"
        __result329__ = __result_obj__ = ((char*)(right_value219=__builtin_string("")));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result329__;
    }
    # 2521 "libneo-c.c"
    f_230=fopen(file_name,"r");
    # 2527 "libneo-c.c"
    # 2523 "libneo-c.c"
    if(_if_conditional293=f_230==((void*)0),    _if_conditional293) {
        # 2524 "libneo-c.c"
        __result330__ = __result_obj__ = ((char*)(right_value220=__builtin_string("")));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result330__;
    }
    # 2527 "libneo-c.c"
    buf_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2527, "buffer"))))))));
    come_call_finalizer3(right_value221,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value222,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2541 "libneo-c.c"
    while(_while_condtional14=1,    _while_condtional14) {
        # 2530 "libneo-c.c"
        char buf2_232[1024];
        memset(&buf2_232, 0, sizeof(char)        *(1024)        );
        # 2532 "libneo-c.c"
        size_233=fread(buf2_232,1,1024,f_230);
        # 2534 "libneo-c.c"
        buffer_append(buf_231,buf2_232,size_233);
        # 2539 "libneo-c.c"
        # 2536 "libneo-c.c"
        if(_if_conditional294=size_233<1024,        _if_conditional294) {
            # 2537 "libneo-c.c"
            break;
        }
    }
    # 2541 "libneo-c.c"
    result_234=(char*)come_increment_ref_count(((char*)(right_value223=buffer_to_string(buf_231))));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2545 "libneo-c.c"
    result2_235=fclose(f_230);
    # 2549 "libneo-c.c"
    # 2545 "libneo-c.c"
    if(_if_conditional295=result2_235<0,    _if_conditional295) {
        # 2546 "libneo-c.c"
        __result331__ = __result_obj__ = ((char*)(right_value224=__builtin_string("")));
        come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result331__;
    }
    # 2549 "libneo-c.c"
    __result332__ = __result_obj__ = result_234;
    come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result332__;
    come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional296;
void* right_value225;
char* __result333__;
struct _IO_FILE* f_236;
_Bool _if_conditional297;
void* right_value226;
char* __result334__;
void* right_value227;
void* right_value228;
struct buffer* buf_237;
_Bool _while_condtional15;
int size_239;
_Bool _if_conditional298;
void* right_value229;
char* result_240;
int result2_241;
_Bool _if_conditional299;
void* right_value230;
char* __result335__;
char* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
memset(&f_236, 0, sizeof(struct _IO_FILE*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&buf_237, 0, sizeof(struct buffer*));
memset(&size_239, 0, sizeof(int));
right_value229 = (void*)0;
memset(&result_240, 0, sizeof(char*));
memset(&result2_241, 0, sizeof(int));
right_value230 = (void*)0;
    # 2558 "libneo-c.c"
    # 2554 "libneo-c.c"
    if(_if_conditional296=file_name==((void*)0),    _if_conditional296) {
        # 2555 "libneo-c.c"
        __result333__ = __result_obj__ = ((char*)(right_value225=__builtin_string("")));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result333__;
    }
    # 2558 "libneo-c.c"
    f_236=fopen(file_name,"r");
    # 2564 "libneo-c.c"
    # 2560 "libneo-c.c"
    if(_if_conditional297=f_236==((void*)0),    _if_conditional297) {
        # 2561 "libneo-c.c"
        __result334__ = __result_obj__ = ((char*)(right_value226=__builtin_string("")));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result334__;
    }
    # 2564 "libneo-c.c"
    buf_237=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value228=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2564, "buffer"))))))));
    come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value228,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2578 "libneo-c.c"
    while(_while_condtional15=1,    _while_condtional15) {
        # 2567 "libneo-c.c"
        char buf2_238[1024];
        memset(&buf2_238, 0, sizeof(char)        *(1024)        );
        # 2569 "libneo-c.c"
        size_239=fread(buf2_238,1,1024,f_236);
        # 2571 "libneo-c.c"
        buffer_append(buf_237,buf2_238,size_239);
        # 2576 "libneo-c.c"
        # 2573 "libneo-c.c"
        if(_if_conditional298=size_239<1024,        _if_conditional298) {
            # 2574 "libneo-c.c"
            break;
        }
    }
    # 2578 "libneo-c.c"
    result_240=(char*)come_increment_ref_count(((char*)(right_value229=buffer_to_string(buf_237))));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2582 "libneo-c.c"
    result2_241=fclose(f_236);
    # 2586 "libneo-c.c"
    # 2582 "libneo-c.c"
    if(_if_conditional299=result2_241<0,    _if_conditional299) {
        # 2583 "libneo-c.c"
        __result335__ = __result_obj__ = ((char*)(right_value230=__builtin_string("")));
        come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result335__;
    }
    # 2586 "libneo-c.c"
    __result336__ = __result_obj__ = result_240;
    come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result336__;
    come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
void* right_value231;
void* right_value232;
struct list$1charph* result_242;
_Bool _if_conditional300;
struct list$1charph* __result337__;
_Bool _while_condtional16;
_Bool _if_conditional301;
void* right_value233;
struct list$1charph* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&result_242, 0, sizeof(struct list$1charph*));
right_value233 = (void*)0;
    # 2591 "libneo-c.c"
    result_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2591, "list$1charph"))))))));
    come_call_finalizer3(right_value231,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2597 "libneo-c.c"
    # 2593 "libneo-c.c"
    if(_if_conditional300=f==((void*)0),    _if_conditional300) {
        # 2594 "libneo-c.c"
        __result337__ = __result_obj__ = result_242;
        come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result337__;
    }
    # 2607 "libneo-c.c"
    while(_while_condtional16=1,    _while_condtional16) {
        # 2598 "libneo-c.c"
        char buf_243[1024];
        memset(&buf_243, 0, sizeof(char)        *(1024)        );
        # 2604 "libneo-c.c"
        # 2600 "libneo-c.c"
        if(_if_conditional301=fgets(buf_243,1024,f)==((void*)0),        _if_conditional301) {
            # 2601 "libneo-c.c"
            break;
        }
        # 2604 "libneo-c.c"
        list$1charph_push_back(result_242,(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(buf_243)))));
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2607 "libneo-c.c"
    __result338__ = __result_obj__ = result_242;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result338__;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional302;
int __result339__;
struct _IO_FILE* f_244;
_Bool _if_conditional303;
_Bool _if_conditional304;
int __result340__;
int __result341__;
int __result342__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_244, 0, sizeof(struct _IO_FILE*));
    # 2615 "libneo-c.c"
    # 2612 "libneo-c.c"
    if(_if_conditional302=path==((void*)0)||mode==((void*)0),    _if_conditional302) {
        # 2613 "libneo-c.c"
        __result339__ = -1;
        return __result339__;
    }
    # 2615 "libneo-c.c"
    f_244=fopen(path,mode);
    # 2629 "libneo-c.c"
    # 2617 "libneo-c.c"
    if(f_244) {
        # 2618 "libneo-c.c"
        block(parent,f_244);
        # 2624 "libneo-c.c"
        # 2619 "libneo-c.c"
        if(_if_conditional304=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional304) {
            # 2620 "libneo-c.c"
            fclose(f_244);
            # 2621 "libneo-c.c"
            __result340__ = 0;
            return __result340__;
        }
        # 2624 "libneo-c.c"
        fclose(f_244);
        # 2626 "libneo-c.c"
        __result341__ = 0;
        return __result341__;
    }
    # 2629 "libneo-c.c"
    __result342__ = -1;
    return __result342__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional305;
void* right_value234;
char* __result343__;
void* right_value235;
char* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
    # 2640 "libneo-c.c"
    # 2637 "libneo-c.c"
    if(_if_conditional305=self==((void*)0),    _if_conditional305) {
        # 2638 "libneo-c.c"
        __result343__ = __result_obj__ = ((char*)(right_value234=__builtin_string("")));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result343__;
    }
    # 2640 "libneo-c.c"
    puts(self);
    # 2642 "libneo-c.c"
    __result344__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self)));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result344__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional306;
void* right_value236;
char* __result345__;
void* right_value237;
char* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    # 2650 "libneo-c.c"
    # 2647 "libneo-c.c"
    if(_if_conditional306=self==((void*)0),    _if_conditional306) {
        # 2648 "libneo-c.c"
        __result345__ = __result_obj__ = ((char*)(right_value236=__builtin_string("")));
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result345__;
    }
    # 2650 "libneo-c.c"
    printf("%s",self);
    # 2652 "libneo-c.c"
    __result346__ = __result_obj__ = ((char*)(right_value237=__builtin_string(self)));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result346__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional307;
void* right_value238;
char* __result347__;
char* msg2_245;
va_list args_246;
void* right_value239;
char* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&msg2_245, 0, sizeof(char*));
memset(&args_246, 0, sizeof(va_list));
right_value239 = (void*)0;
    # 2661 "libneo-c.c"
    # 2658 "libneo-c.c"
    if(_if_conditional307=self==((void*)0),    _if_conditional307) {
        # 2659 "libneo-c.c"
        __result347__ = __result_obj__ = ((char*)(right_value238=__builtin_string("")));
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result347__;
    }
    # 2661 "libneo-c.c"
    # 2663 "libneo-c.c"
    # 2664 "libneo-c.c"
    __builtin_va_start(args_246,self);
    # 2665 "libneo-c.c"
    vasprintf(&msg2_245,self,args_246);
    # 2666 "libneo-c.c"
    __builtin_va_end(args_246);
    # 2668 "libneo-c.c"
    printf("%s",msg2_245);
    # 2670 "libneo-c.c"
    free(msg2_245);
    # 2672 "libneo-c.c"
    __result348__ = __result_obj__ = ((char*)(right_value239=__builtin_string(self)));
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result348__;
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional308;
void* right_value240;
char* __result349__;
char* msg2_247;
va_list args_248;
void* right_value241;
char* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
memset(&msg2_247, 0, sizeof(char*));
memset(&args_248, 0, sizeof(va_list));
right_value241 = (void*)0;
    # 2680 "libneo-c.c"
    # 2677 "libneo-c.c"
    if(_if_conditional308=self==((void*)0),    _if_conditional308) {
        # 2678 "libneo-c.c"
        __result349__ = __result_obj__ = ((char*)(right_value240=__builtin_string("")));
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result349__;
    }
    # 2680 "libneo-c.c"
    # 2682 "libneo-c.c"
    # 2683 "libneo-c.c"
    __builtin_va_start(args_248,self);
    # 2684 "libneo-c.c"
    vasprintf(&msg2_247,self,args_248);
    # 2685 "libneo-c.c"
    __builtin_va_end(args_248);
    # 2687 "libneo-c.c"
    printf("%s",msg2_247);
    # 2689 "libneo-c.c"
    free(msg2_247);
    # 2691 "libneo-c.c"
    __result350__ = __result_obj__ = ((char*)(right_value241=__builtin_string(self)));
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result350__;
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result351__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2696 "libneo-c.c"
    printf(msg,self);
    # 2698 "libneo-c.c"
    __result351__ = self;
    return __result351__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional309;
void* right_value242;
char* __result352__;
void* right_value243;
char* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    # 2706 "libneo-c.c"
    # 2703 "libneo-c.c"
    if(_if_conditional309=self==((void*)0),    _if_conditional309) {
        # 2704 "libneo-c.c"
        __result352__ = __result_obj__ = ((char*)(right_value242=__builtin_string("")));
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result352__;
    }
    # 2706 "libneo-c.c"
    puts(self);
    # 2708 "libneo-c.c"
    __result353__ = __result_obj__ = ((char*)(right_value243=__builtin_string(self)));
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result353__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_249;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_249, 0, sizeof(int));
    # 2723 "libneo-c.c"
    for(    i_249=0;    i_249<self;    i_249++    ){
        # 2717 "libneo-c.c"
        block(parent,i_249);
        # 2722 "libneo-c.c"
        # 2719 "libneo-c.c"
        if(_if_conditional310=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional310) {
            # 2720 "libneo-c.c"
            return;
        }
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2730 "libneo-c.c"
    self->value=value;
    # 2732 "libneo-c.c"
    __result354__ = __result_obj__ = self;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    return __result354__;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
}

static void integer_finalize(struct integer* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result355__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2737 "libneo-c.c"
    __result355__ = self->value;
    return __result355__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
void* right_value244;
void* right_value245;
struct integer* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
    # 2742 "libneo-c.c"
    __result356__ = __result_obj__ = ((struct integer*)(right_value245=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value244=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2742, "integer")))),self)));
    come_call_finalizer3(right_value244,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value245,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result356__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
void* right_value246;
void* right_value247;
struct integer* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
right_value247 = (void*)0;
    # 2747 "libneo-c.c"
    __result357__ = __result_obj__ = ((struct integer*)(right_value247=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value246=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2747, "integer")))),self)));
    come_call_finalizer3(right_value246,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value247,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result357__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
void* right_value248;
void* right_value249;
struct integer* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
    # 2752 "libneo-c.c"
    __result358__ = __result_obj__ = ((struct integer*)(right_value249=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value248=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2752, "integer")))),self)));
    come_call_finalizer3(right_value248,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value249,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result358__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
void* right_value250;
void* right_value251;
struct integer* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    # 2757 "libneo-c.c"
    __result359__ = __result_obj__ = ((struct integer*)(right_value251=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value250=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2757, "integer")))),self)));
    come_call_finalizer3(right_value250,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value251,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result359__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional311;
int __result360__;
_Bool _if_conditional312;
int __result361__;
int __result362__;
int __result363__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2772 "libneo-c.c"
    # 2762 "libneo-c.c"
    if(_if_conditional311=left->value<right->value,    _if_conditional311) {
        # 2763 "libneo-c.c"
        __result360__ = -1;
        return __result360__;
    }
    else {
        # 2772 "libneo-c.c"
        # 2765 "libneo-c.c"
        if(_if_conditional312=left->value>right->value,        _if_conditional312) {
            # 2766 "libneo-c.c"
            __result361__ = 1;
            return __result361__;
        }
        else {
            # 2769 "libneo-c.c"
            __result362__ = 0;
            return __result362__;
        }
    }
    # 2772 "libneo-c.c"
    __result363__ = 0;
    return __result363__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result364__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2777 "libneo-c.c"
    __result364__ = self->value==right->value;
    return __result364__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result365__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2782 "libneo-c.c"
    __result365__ = self->value==right->value;
    return __result365__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result366__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2787 "libneo-c.c"
    __result366__ = self->value!=right->value;
    return __result366__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value252;
void* right_value253;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    # 2792 "libneo-c.c"
    __result367__ = __result_obj__ = ((struct integer*)(right_value253=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value252=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2792, "integer")))),left->value+right->value)));
    come_call_finalizer3(right_value252,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value253,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result367__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value254;
void* right_value255;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
    # 2797 "libneo-c.c"
    __result368__ = __result_obj__ = ((struct integer*)(right_value255=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value254=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2797, "integer")))),left->value-right->value)));
    come_call_finalizer3(right_value254,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value255,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result368__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value256;
void* right_value257;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
right_value257 = (void*)0;
    # 2802 "libneo-c.c"
    __result369__ = __result_obj__ = ((struct integer*)(right_value257=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value256=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2802, "integer")))),left->value*right->value)));
    come_call_finalizer3(right_value256,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value257,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result369__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value258;
void* right_value259;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
right_value259 = (void*)0;
    # 2807 "libneo-c.c"
    __result370__ = __result_obj__ = ((struct integer*)(right_value259=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value258=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2807, "integer")))),left->value/right->value)));
    come_call_finalizer3(right_value258,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value259,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result370__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value260;
void* right_value261;
struct integer* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    # 2812 "libneo-c.c"
    __result371__ = __result_obj__ = ((struct integer*)(right_value261=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value260=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2812, "integer")))),left->value%right->value)));
    come_call_finalizer3(right_value260,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result371__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value262;
void* right_value263;
struct integer* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    # 2817 "libneo-c.c"
    __result372__ = __result_obj__ = ((struct integer*)(right_value263=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value262=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2817, "integer")))),left->value<<right->value)));
    come_call_finalizer3(right_value262,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value263,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result372__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value264;
void* right_value265;
struct integer* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
    # 2822 "libneo-c.c"
    __result373__ = __result_obj__ = ((struct integer*)(right_value265=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value264=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2822, "integer")))),left->value>>right->value)));
    come_call_finalizer3(right_value264,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value265,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result373__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value266;
void* right_value267;
struct integer* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
right_value267 = (void*)0;
    # 2827 "libneo-c.c"
    __result374__ = __result_obj__ = ((struct integer*)(right_value267=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value266=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2827, "integer")))),left->value>=right->value)));
    come_call_finalizer3(right_value266,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value267,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result374__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value268;
void* right_value269;
struct integer* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
right_value269 = (void*)0;
    # 2832 "libneo-c.c"
    __result375__ = __result_obj__ = ((struct integer*)(right_value269=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value268=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2832, "integer")))),left->value<=right->value)));
    come_call_finalizer3(right_value268,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value269,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result375__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value270;
void* right_value271;
struct integer* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
right_value271 = (void*)0;
    # 2837 "libneo-c.c"
    __result376__ = __result_obj__ = ((struct integer*)(right_value271=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value270=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2837, "integer")))),left->value<right->value)));
    come_call_finalizer3(right_value270,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result376__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value272;
void* right_value273;
struct integer* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
right_value273 = (void*)0;
    # 2842 "libneo-c.c"
    __result377__ = __result_obj__ = ((struct integer*)(right_value273=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value272=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2842, "integer")))),left->value>right->value)));
    come_call_finalizer3(right_value272,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value273,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result377__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value274;
void* right_value275;
struct integer* __result378__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    # 2847 "libneo-c.c"
    __result378__ = __result_obj__ = ((struct integer*)(right_value275=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value274=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2847, "integer")))),left->value&right->value)));
    come_call_finalizer3(right_value274,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value275,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result378__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value276;
void* right_value277;
struct integer* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
    # 2852 "libneo-c.c"
    __result379__ = __result_obj__ = ((struct integer*)(right_value277=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value276=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2852, "integer")))),left->value^right->value)));
    come_call_finalizer3(right_value276,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value277,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result379__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value278;
void* right_value279;
struct integer* __result380__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 2857 "libneo-c.c"
    __result380__ = __result_obj__ = ((struct integer*)(right_value279=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value278=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2857, "integer")))),left->value|right->value)));
    come_call_finalizer3(right_value278,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value279,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result380__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value280;
void* right_value281;
struct integer* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
right_value281 = (void*)0;
    # 2862 "libneo-c.c"
    __result381__ = __result_obj__ = ((struct integer*)(right_value281=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value280=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2862, "integer")))),left->value&&right->value)));
    come_call_finalizer3(right_value280,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result381__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value282;
void* right_value283;
struct integer* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    # 2867 "libneo-c.c"
    __result382__ = __result_obj__ = ((struct integer*)(right_value283=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value282=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2867, "integer")))),left->value||right->value)));
    come_call_finalizer3(right_value282,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value283,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result382__;
}

