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
struct sStructNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
};
struct sClassNode
{
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
    int sline;
    char* sname;
    _Bool mOutput;
};
struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};
struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
void output_struct_header(struct sClass* klass, struct sInfo* info);

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
_Bool sStructNode_terminated();

char* sStructNode_kind();

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
int sStructNode_sline(struct sStructNode* self, struct sInfo* info);

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info);

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated();

char* sStructNobodyNode_kind();

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info);

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated();

char* sGenericsStructNode_kind();

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info);

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info);

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info);

_Bool sClassNode_terminated();

char* sClassNode_kind();

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
int sClassNode_sline(struct sClassNode* self, struct sInfo* info);

char* sClassNode_sname(struct sClassNode* self, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

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










char* get_none_generics_name(char* class_name){
void* __result_obj__;
char* p_47;
_Bool _while_condtional7;
_Bool _if_conditional19;
void* right_value79;
void* right_value80;
char* __result52__;
void* right_value81;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_47, 0, sizeof(char*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    # 5 "14struct.c"
    p_47=class_name;
    # 15 "14struct.c"
    while(_while_condtional7=*p_47,    _while_condtional7) {
        # 13 "14struct.c"
        # 7 "14struct.c"
        if(_if_conditional19=*p_47==36,        _if_conditional19) {
            # 8 "14struct.c"
            __result52__ = __result_obj__ = ((char*)(right_value80=string_substring(((char*)(right_value79=__builtin_string(class_name))),0,p_47-class_name)));
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result52__;
        }
        else {
            # 11 "14struct.c"
            p_47++;
        }
    }
    # 15 "14struct.c"
    __result53__ = __result_obj__ = ((char*)(right_value81=__builtin_string(class_name)));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value82;
void* right_value83;
struct buffer* buf_48;
struct sClass* klass_49;
char* class_name_50;
_Bool _if_conditional21;
int i_51;
struct sType* type_61;
void* right_value84;
char* type_name_62;
int i_63;
_Bool _if_conditional41;
void* right_value85;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&buf_48, 0, sizeof(struct buffer*));
memset(&klass_49, 0, sizeof(struct sClass*));
memset(&class_name_50, 0, sizeof(char*));
memset(&i_51, 0, sizeof(int));
memset(&type_61, 0, sizeof(struct sType*));
right_value84 = (void*)0;
memset(&type_name_62, 0, sizeof(char*));
memset(&i_63, 0, sizeof(int));
right_value85 = (void*)0;
    # 20 "14struct.c"
    buf_48=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 22 "14struct.c"
    klass_49=generics_type->mClass;
    # 24 "14struct.c"
    class_name_50=klass_49->mName;
    # 26 "14struct.c"
    buffer_append_str(buf_48,class_name_50);
    # 48 "14struct.c"
    # 28 "14struct.c"
    if(_if_conditional21=list$1sTypeph_length(generics_type->mGenericsTypes)>0,    _if_conditional21) {
        # 29 "14struct.c"
        buffer_append_char(buf_48,36);
        # 30 "14struct.c"
        buffer_append_char(buf_48,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        # 46 "14struct.c"
        for(        i_51=0;        i_51<list$1sTypeph_length(generics_type->mGenericsTypes);        i_51++        ){
            # 33 "14struct.c"
            type_61=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_51), "14struct.c", 33, 0));
            # 34 "14struct.c"
            type_name_62=(char*)come_increment_ref_count(((char*)(right_value84=create_generics_name(type_61,info))));
            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 36 "14struct.c"
            buffer_append_str(buf_48,type_name_62);
            # 42 "14struct.c"
            for(            i_63=0;            i_63<type_61->mPointerNum;            i_63++            ){
                # 39 "14struct.c"
                buffer_append_char(buf_48,112);
            }
            # 45 "14struct.c"
            # 42 "14struct.c"
            if(type_61->mHeap) {
                # 43 "14struct.c"
                buffer_append_str(buf_48,"h");
            }
            type_name_62 = come_decrement_ref_count2(type_name_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 48 "14struct.c"
    __result58__ = __result_obj__ = ((char*)(right_value85=buffer_to_string(buf_48)));
    come_call_finalizer2(buffer_finalize,buf_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result58__;
    come_call_finalizer2(buffer_finalize,buf_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional20;
int __result54__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional20=self==((void*)0),        _if_conditional20) {
            # 365 "./neo-c.h"
            __result54__ = 0;
            return __result54__;
        }
        # 367 "./neo-c.h"
        __result55__ = self->len;
        return __result55__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional22;
struct list_item$1sTypeph* it_52;
int i_53;
_Bool _while_condtional8;
_Bool _if_conditional23;
struct sType* __result56__;
struct sType* default_value_54;
struct sType* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_53, 0, sizeof(int));
memset(&default_value_54, 0, sizeof(struct sType*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional22=position<0,                _if_conditional22) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_52=self->head;
                # 687 "./neo-c.h"
                i_53=0;
                # 694 "./neo-c.h"
                while(_while_condtional8=it_52!=((void*)0),                _while_condtional8) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional23=position==i_53,                    _if_conditional23) {
                        # 690 "./neo-c.h"
                        __result56__ = __result_obj__ = it_52->item;
                        return __result56__;
                    }
                    # 692 "./neo-c.h"
                    it_52=it_52->next;
                    # 693 "./neo-c.h"
                    i_53++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_54,0,sizeof(struct sType*));
                # 698 "./neo-c.h"
                __result57__ = __result_obj__ = default_value_54;
                come_call_finalizer2(sType_finalize,default_value_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result57__;
                come_call_finalizer2(sType_finalize,default_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sType_finalize"
                    # 0 "sType_finalize"
                    if(_if_conditional24=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional24) {
                        # 0 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sType_finalize"
                    # 1 "sType_finalize"
                    if(_if_conditional26=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional26) {
                        # 1 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sType_finalize"
                    # 2 "sType_finalize"
                    if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional28) {
                        # 2 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 4 "sType_finalize"
                    # 3 "sType_finalize"
                    if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional29) {
                        # 3 "sType_finalize"
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 5 "sType_finalize"
                    # 4 "sType_finalize"
                    if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional30) {
                        # 4 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 6 "sType_finalize"
                    # 5 "sType_finalize"
                    if(_if_conditional31=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional31) {
                        # 5 "sType_finalize"
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 7 "sType_finalize"
                    # 6 "sType_finalize"
                    if(_if_conditional33=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional33) {
                        # 6 "sType_finalize"
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 8 "sType_finalize"
                    # 7 "sType_finalize"
                    if(_if_conditional34=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional34) {
                        # 7 "sType_finalize"
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 9 "sType_finalize"
                    # 8 "sType_finalize"
                    if(_if_conditional36=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional36) {
                        # 8 "sType_finalize"
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 10 "sType_finalize"
                    # 9 "sType_finalize"
                    if(_if_conditional37=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional37) {
                        # 9 "sType_finalize"
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 11 "sType_finalize"
                    # 10 "sType_finalize"
                    if(_if_conditional38=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional38) {
                        # 10 "sType_finalize"
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 12 "sType_finalize"
                    # 11 "sType_finalize"
                    if(_if_conditional39=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional39) {
                        # 11 "sType_finalize"
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 13 "sType_finalize"
                    # 12 "sType_finalize"
                    if(_if_conditional40=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional40) {
                        # 12 "sType_finalize"
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional9;
struct list_item$1sTypeph* prev_it_56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_56, 0, sizeof(struct list_item$1sTypeph*));
                            # 123 "./neo-c.h"
                            it_55=self->head;
                            # 129 "./neo-c.h"
                            while(_while_condtional9=it_55!=((void*)0),                            _while_condtional9) {
                                # 125 "./neo-c.h"
                                prev_it_56=it_55;
                                # 126 "./neo-c.h"
                                it_55=it_55->next;
                                # 127 "./neo-c.h"
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sTypephp_finalize"
                                    # 0 "list_item$1sTypephp_finalize"
                                    if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional25) {
                                        # 0 "list_item$1sTypephp_finalize"
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypephp_finalize"
                            # 0 "tuple1$1sTypephp_finalize"
                            if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional27) {
                                # 0 "tuple1$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_57;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_57, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_58, 0, sizeof(struct list_item$1sNodeph*));
                            # 123 "./neo-c.h"
                            it_57=self->head;
                            # 129 "./neo-c.h"
                            while(_while_condtional10=it_57!=((void*)0),                            _while_condtional10) {
                                # 125 "./neo-c.h"
                                prev_it_58=it_57;
                                # 126 "./neo-c.h"
                                it_57=it_57->next;
                                # 127 "./neo-c.h"
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1sNodephp_finalize"
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional32) {
                                        # 0 "list_item$1sNodephp_finalize"
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_59;
_Bool _while_condtional11;
struct list_item$1charph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1charph*));
                            # 123 "./neo-c.h"
                            it_59=self->head;
                            # 129 "./neo-c.h"
                            while(_while_condtional11=it_59!=((void*)0),                            _while_condtional11) {
                                # 125 "./neo-c.h"
                                prev_it_60=it_59;
                                # 126 "./neo-c.h"
                                it_59=it_59->next;
                                # 127 "./neo-c.h"
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "list_item$1charphp_finalize"
                                    # 0 "list_item$1charphp_finalize"
                                    if(_if_conditional35=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional35) {
                                        # 0 "list_item$1charphp_finalize"
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional42;
void* right_value86;
void* right_value87;
struct buffer* buf_64;
void* right_value88;
struct list$1tuple2$2charphsTypephph* o2_saved_65;
struct tuple2$2charphsTypeph* it_68;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_71;
struct sType* type_72;
void* right_value89;
_Bool _if_conditional50;
void* right_value90;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&buf_64, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
memset(&o2_saved_65, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_68, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_71, 0, sizeof(char*));
memset(&type_72, 0, sizeof(struct sType*));
memset(&name_71, 0, sizeof(char*));
memset(&type_72, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value90 = (void*)0;
    # 86 "14struct.c"
    # 58 "14struct.c"
    if(_if_conditional42=!klass->mOutputed,    _if_conditional42) {
        # 59 "14struct.c"
        klass->mOutputed=(_Bool)1;
        # 61 "14struct.c"
        buf_64=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value86=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 64 "14struct.c"
        buffer_append_str(buf_64,((char*)(right_value88=xsprintf("struct %s\n{\n",klass->mName))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 77 "14struct.c"
        for(        o2_saved_65=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_68=list$1tuple2$2charphsTypephph_begin((o2_saved_65));        !list$1tuple2$2charphsTypephph_end((o2_saved_65));        it_68=list$1tuple2$2charphsTypephph_next((o2_saved_65))        ){
            # 68 "14struct.c"
            multiple_assign_var1=it_68;
            name_71=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_72=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            # 70 "14struct.c"
            type_72->mStatic=(_Bool)0;
            # 72 "14struct.c"
            buffer_append_str(buf_64,"    ");
            # 73 "14struct.c"
            buffer_append_str(buf_64,((char*)(right_value89=make_define_var(type_72,name_71,(_Bool)0,info))));
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 74 "14struct.c"
            buffer_append_str(buf_64,";\n");
            name_71 = come_decrement_ref_count2(name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 77 "14struct.c"
        buffer_append_str(buf_64,"};\n");
        # 85 "14struct.c"
        # 79 "14struct.c"
        if(_if_conditional50=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional50) {
        }
        else {
            # 82 "14struct.c"
            add_come_code_at_source_head(info,"%s",((char*)(right_value90=buffer_to_string(buf_64))));
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(buffer_finalize,buf_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple2$2charphsTypeph* result_66;
struct tuple2$2charphsTypeph* __result59__;
_Bool _if_conditional44;
struct tuple2$2charphsTypeph* __result60__;
struct tuple2$2charphsTypeph* result_67;
struct tuple2$2charphsTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_67, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional43=self==((void*)0),            _if_conditional43) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_66,0,sizeof(struct tuple2$2charphsTypeph*));
                # 288 "./neo-c.h"
                __result59__ = __result_obj__ = result_66;
                return __result59__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result60__ = __result_obj__ = self->it->item;
                return __result60__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_67,0,sizeof(struct tuple2$2charphsTypeph*));
            # 298 "./neo-c.h"
            __result61__ = __result_obj__ = result_67;
            return __result61__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result62__ = self==((void*)0)||self->it==((void*)0);
            return __result62__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple2$2charphsTypeph* result_69;
struct tuple2$2charphsTypeph* __result63__;
_Bool _if_conditional46;
struct tuple2$2charphsTypeph* __result64__;
struct tuple2$2charphsTypeph* result_70;
struct tuple2$2charphsTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_70, 0, sizeof(struct tuple2$2charphsTypeph*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional45=self==((void*)0)||self->it==((void*)0),            _if_conditional45) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_69,0,sizeof(struct tuple2$2charphsTypeph*));
                # 305 "./neo-c.h"
                __result63__ = __result_obj__ = result_69;
                return __result63__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result64__ = __result_obj__ = self->it->item;
                return __result64__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_70,0,sizeof(struct tuple2$2charphsTypeph*));
            # 316 "./neo-c.h"
            __result65__ = __result_obj__ = result_70;
            return __result65__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_73;
_Bool _while_condtional12;
struct list_item$1tuple2$2charphsTypephph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            # 123 "./neo-c.h"
            it_73=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional12=it_73!=((void*)0),            _while_condtional12) {
                # 125 "./neo-c.h"
                prev_it_74=it_73;
                # 126 "./neo-c.h"
                it_73=it_73->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                    if(_if_conditional47=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional47) {
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsTypephp_finalize"
                            # 0 "tuple2$2charphsTypephp_finalize"
                            if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional48) {
                                # 0 "tuple2$2charphsTypephp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsTypephp_finalize"
                            # 1 "tuple2$2charphsTypephp_finalize"
                            if(_if_conditional49=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional49) {
                                # 1 "tuple2$2charphsTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

void output_struct_header(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value91;
void* right_value92;
struct buffer* buf_75;
_Bool _if_conditional52;
void* right_value93;
void* right_value94;
struct list$1tuple2$2charphsTypephph* o2_saved_76;
struct tuple2$2charphsTypeph* it_77;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_78;
struct sType* type_79;
void* right_value95;
_Bool _if_conditional53;
void* right_value96;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&buf_75, 0, sizeof(struct buffer*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&o2_saved_76, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_77, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_78, 0, sizeof(char*));
memset(&type_79, 0, sizeof(struct sType*));
memset(&name_78, 0, sizeof(char*));
memset(&type_79, 0, sizeof(struct sType*));
right_value95 = (void*)0;
right_value96 = (void*)0;
    # 125 "14struct.c"
    # 95 "14struct.c"
    if(_if_conditional51=!klass->mOutputed2,    _if_conditional51) {
        # 96 "14struct.c"
        klass->mOutputed2=(_Bool)1;
        # 98 "14struct.c"
        buf_75=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value92=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 107 "14struct.c"
        # 101 "14struct.c"
        if(klass->mParentClassName) {
            # 102 "14struct.c"
            buffer_append_str(buf_75,((char*)(right_value93=xsprintf("struct %s extends %s\n{\n",klass->mName,klass->mParentClassName))));
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 105 "14struct.c"
            buffer_append_str(buf_75,((char*)(right_value94=xsprintf("struct %s\n{\n",klass->mName))));
            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 116 "14struct.c"
        for(        o2_saved_76=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_77=list$1tuple2$2charphsTypephph_begin((o2_saved_76));        !list$1tuple2$2charphsTypephph_end((o2_saved_76));        it_77=list$1tuple2$2charphsTypephph_next((o2_saved_76))        ){
            # 108 "14struct.c"
            multiple_assign_var2=it_77;
            name_78=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_79=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            # 110 "14struct.c"
            type_79->mStatic=(_Bool)0;
            # 112 "14struct.c"
            buffer_append_str(buf_75,"    ");
            # 113 "14struct.c"
            buffer_append_str(buf_75,((char*)(right_value95=make_define_var_no_solved(type_79,name_78,(_Bool)0,info))));
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 114 "14struct.c"
            buffer_append_str(buf_75,";\n");
            name_78 = come_decrement_ref_count2(name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 116 "14struct.c"
        buffer_append_str(buf_75,"};\n");
        # 124 "14struct.c"
        # 118 "14struct.c"
        if(_if_conditional53=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional53) {
        }
        else {
            # 121 "14struct.c"
            add_come_code_at_come_header(info,"%s",((char*)(right_value96=buffer_to_string(buf_75))));
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(buffer_finalize,buf_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_80;
_Bool _if_conditional54;
_Bool __result66__;
struct sClass* klass_81;
_Bool _if_conditional55;
_Bool __result67__;
_Bool _if_conditional56;
_Bool __result68__;
int i_82;
_Bool result_83;
_Bool _if_conditional57;
_Bool __result69__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_80, 0, sizeof(struct sType*));
memset(&klass_81, 0, sizeof(struct sClass*));
memset(&i_82, 0, sizeof(int));
memset(&result_83, 0, sizeof(_Bool));
    # 129 "14struct.c"
    type2_80=type->mNoSolvedGenericsType->v1;
    # 135 "14struct.c"
    # 131 "14struct.c"
    if(_if_conditional54=type2_80&&is_no_contained_generics_types(type2_80,info),    _if_conditional54) {
        # 132 "14struct.c"
        __result66__ = (_Bool)0;
        return __result66__;
    }
    # 135 "14struct.c"
    klass_81=type->mClass;
    # 140 "14struct.c"
    # 137 "14struct.c"
    if(klass_81->mGenerics) {
        # 138 "14struct.c"
        __result67__ = (_Bool)0;
        return __result67__;
    }
    # 143 "14struct.c"
    # 140 "14struct.c"
    if(klass_81->mMethodGenerics) {
        # 141 "14struct.c"
        __result68__ = (_Bool)0;
        return __result68__;
    }
    # 151 "14struct.c"
    for(    i_82=0;    i_82<list$1sTypeph_length(type->mGenericsTypes);    i_82++    ){
        # 144 "14struct.c"
        result_83=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_82), "14struct.c", 144, 1)),info);
        # 149 "14struct.c"
        # 146 "14struct.c"
        if(_if_conditional57=!result_83,        _if_conditional57) {
            # 147 "14struct.c"
            __result69__ = (_Bool)0;
            return __result69__;
        }
    }
    # 151 "14struct.c"
    __result70__ = (_Bool)1;
    return __result70__;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_84;
_Bool _if_conditional58;
_Bool __result71__;
struct sClass* klass_85;
_Bool _if_conditional59;
_Bool __result72__;
int i_86;
_Bool result_87;
_Bool _if_conditional60;
_Bool __result73__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_84, 0, sizeof(struct sType*));
memset(&klass_85, 0, sizeof(struct sClass*));
memset(&i_86, 0, sizeof(int));
memset(&result_87, 0, sizeof(_Bool));
    # 156 "14struct.c"
    type2_84=type->mNoSolvedGenericsType->v1;
    # 162 "14struct.c"
    # 158 "14struct.c"
    if(_if_conditional58=type2_84&&is_contained_method_generics_types(type2_84,info),    _if_conditional58) {
        # 159 "14struct.c"
        __result71__ = (_Bool)1;
        return __result71__;
    }
    # 162 "14struct.c"
    klass_85=type->mClass;
    # 167 "14struct.c"
    # 164 "14struct.c"
    if(klass_85->mMethodGenerics) {
        # 165 "14struct.c"
        __result72__ = (_Bool)1;
        return __result72__;
    }
    # 175 "14struct.c"
    for(    i_86=0;    i_86<list$1sTypeph_length(type->mGenericsTypes);    i_86++    ){
        # 168 "14struct.c"
        result_87=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_86), "14struct.c", 168, 2)),info);
        # 173 "14struct.c"
        # 170 "14struct.c"
        if(result_87) {
            # 171 "14struct.c"
            __result73__ = (_Bool)1;
            return __result73__;
        }
    }
    # 175 "14struct.c"
    __result74__ = (_Bool)0;
    return __result74__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value97;
char* new_name_88;
_Bool _if_conditional65;
void* right_value133;
struct sType* type2_109;
struct sClass* generics_class_113;
_Bool _if_conditional148;
_Bool __result101__;
void* right_value134;
void* right_value135;
struct sClass* new_class_114;
void* right_value142;
int i_159;
struct list$1tuple2$2charphsTypephph* o2_saved_160;
struct tuple2$2charphsTypeph* it_161;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_162;
struct sType* type_163;
void* right_value143;
struct sType* new_type_164;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
void* right_value151;
struct sType* __dec_obj40;
_Bool _if_conditional200;
struct sClass* generics_class_170;
_Bool _if_conditional201;
_Bool __result129__;
void* right_value152;
void* right_value153;
struct sClass* new_class_171;
void* right_value154;
_Bool existance_method_generics_172;
int i_173;
struct list$1tuple2$2charphsTypephph* o2_saved_174;
struct tuple2$2charphsTypeph* it_175;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_176;
struct sType* type_177;
void* right_value155;
struct sType* new_type_178;
_Bool _if_conditional202;
void* right_value156;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
struct sType* __dec_obj41;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value161;
struct sType* __dec_obj42;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&new_name_88, 0, sizeof(char*));
right_value133 = (void*)0;
memset(&type2_109, 0, sizeof(struct sType*));
memset(&generics_class_113, 0, sizeof(struct sClass*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&new_class_114, 0, sizeof(struct sClass*));
right_value142 = (void*)0;
memset(&i_159, 0, sizeof(int));
memset(&o2_saved_160, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_161, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_162, 0, sizeof(char*));
memset(&type_163, 0, sizeof(struct sType*));
memset(&name_162, 0, sizeof(char*));
memset(&type_163, 0, sizeof(struct sType*));
right_value143 = (void*)0;
memset(&new_type_164, 0, sizeof(struct sType*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&generics_class_170, 0, sizeof(struct sClass*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&new_class_171, 0, sizeof(struct sClass*));
right_value154 = (void*)0;
memset(&existance_method_generics_172, 0, sizeof(_Bool));
memset(&i_173, 0, sizeof(int));
memset(&o2_saved_174, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_175, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_176, 0, sizeof(char*));
memset(&type_177, 0, sizeof(struct sType*));
memset(&name_176, 0, sizeof(char*));
memset(&type_177, 0, sizeof(struct sType*));
right_value155 = (void*)0;
memset(&new_type_178, 0, sizeof(struct sType*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    # 180 "14struct.c"
    new_name_88=(char*)come_increment_ref_count(((char*)(right_value97=create_generics_name(type,info))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 256 "14struct.c"
    # 182 "14struct.c"
    if(_if_conditional65=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_88),    _if_conditional65) {
        # 183 "14struct.c"
        type2_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 185 "14struct.c"
        generics_class_113=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        # 192 "14struct.c"
        # 187 "14struct.c"
        if(_if_conditional148=generics_class_113==((void*)0),        _if_conditional148) {
            # 188 "14struct.c"
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            # 189 "14struct.c"
            __result101__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,type2_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result101__;
        }
        # 192 "14struct.c"
        new_class_114=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value135=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value134=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 192, "sClass")))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 194 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(new_name_88)))),(struct sClass*)come_increment_ref_count(new_class_114));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 196 "14struct.c"
        i_159=0;
        # 205 "14struct.c"
        for(        o2_saved_160=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_113->mFields)),it_161=list$1tuple2$2charphsTypephph_begin((o2_saved_160));        !list$1tuple2$2charphsTypephph_end((o2_saved_160));        it_161=list$1tuple2$2charphsTypephph_next((o2_saved_160))        ){
            # 198 "14struct.c"
            multiple_assign_var3=it_161;
            name_162=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_163=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            # 200 "14struct.c"
            new_type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=solve_generics(type_163,type2_109,info))));
            come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 202 "14struct.c"
            list$1tuple2$2charphsTypephph_push_back(new_class_114->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value150=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value149=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 202, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value147=string_clone(name_162)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(new_type_164)))))))));
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            name_162 = come_decrement_ref_count2(name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,new_type_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 205 "14struct.c"
        __dec_obj40=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 206 "14struct.c"
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        # 207 "14struct.c"
        type->mClass=new_class_114;
        # 208 "14struct.c"
        list$1sTypeph_reset(type->mGenericsTypes);
        # 210 "14struct.c"
        output_struct(new_class_114,info);
        come_call_finalizer2(sType_finalize,type2_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,new_class_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 256 "14struct.c"
        # 212 "14struct.c"
        if(_if_conditional200=!map$2charphsClassph_find(info->classes,new_name_88),        _if_conditional200) {
            # 213 "14struct.c"
            generics_class_170=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            # 220 "14struct.c"
            # 215 "14struct.c"
            if(_if_conditional201=generics_class_170==((void*)0),            _if_conditional201) {
                # 216 "14struct.c"
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                # 217 "14struct.c"
                __result129__ = (_Bool)0;
                new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result129__;
            }
            # 220 "14struct.c"
            new_class_171=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value153=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value152=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 220, "sClass")))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer2(sClass_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 222 "14struct.c"
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(new_name_88)))),(struct sClass*)come_increment_ref_count(new_class_171));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 224 "14struct.c"
            existance_method_generics_172=(_Bool)0;
            # 225 "14struct.c"
            i_173=0;
            # 238 "14struct.c"
            for(            o2_saved_174=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_170->mFields)),it_175=list$1tuple2$2charphsTypephph_begin((o2_saved_174));            !list$1tuple2$2charphsTypephph_end((o2_saved_174));            it_175=list$1tuple2$2charphsTypephph_next((o2_saved_174))            ){
                # 227 "14struct.c"
                multiple_assign_var4=it_175;
                name_176=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                type_177=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                # 229 "14struct.c"
                new_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=solve_generics(type_177,generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 235 "14struct.c"
                # 231 "14struct.c"
                if(_if_conditional202=is_contained_method_generics_types(new_type_178,info),                _if_conditional202) {
                }
                # 235 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(new_class_171->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value159=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value158=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 235, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value156=string_clone(name_176)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(new_type_178)))))))));
                right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                name_176 = come_decrement_ref_count2(name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,new_type_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 238 "14struct.c"
            __dec_obj41=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(type))));
            come_call_finalizer2(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 239 "14struct.c"
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            # 240 "14struct.c"
            type->mClass=new_class_171;
            # 241 "14struct.c"
            list$1sTypeph_reset(type->mGenericsTypes);
            # 246 "14struct.c"
            # 243 "14struct.c"
            if(_if_conditional203=!existance_method_generics_172,            _if_conditional203) {
                # 244 "14struct.c"
                output_struct(new_class_171,info);
            }
            come_call_finalizer2(sClass_finalize,new_class_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 252 "14struct.c"
            # 248 "14struct.c"
            if(_if_conditional204=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional204) {
                # 249 "14struct.c"
                __dec_obj42=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(type))));
                come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 250 "14struct.c"
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            # 252 "14struct.c"
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_88);
            # 253 "14struct.c"
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    # 256 "14struct.c"
    __result130__ = (_Bool)1;
    new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
    new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
unsigned int hash_89;
int it_90;
_Bool _while_condtional13;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool __result75__;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool __result76__;
_Bool __result77__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(int));
        # 1624 "./neo-c.h"
        hash_89=string_get_hash_key(((char*)key))%self->size;
        # 1625 "./neo-c.h"
        it_90=hash_89;
        # 1649 "./neo-c.h"
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            # 1647 "./neo-c.h"
            # 1628 "./neo-c.h"
            if(_if_conditional61=self->item_existance[it_90],            _if_conditional61) {
                # 1635 "./neo-c.h"
                # 1630 "./neo-c.h"
                if(_if_conditional62=string_equals(self->keys[it_90],key),                _if_conditional62) {
                    # 1632 "./neo-c.h"
                    __result75__ = (_Bool)1;
                    return __result75__;
                }
                # 1635 "./neo-c.h"
                it_90++;
                # 1643 "./neo-c.h"
                # 1637 "./neo-c.h"
                if(_if_conditional63=it_90>=self->size,                _if_conditional63) {
                    # 1638 "./neo-c.h"
                    it_90=0;
                }
                else {
                    # 1643 "./neo-c.h"
                    # 1640 "./neo-c.h"
                    if(_if_conditional64=it_90==hash_89,                    _if_conditional64) {
                        # 1641 "./neo-c.h"
                        __result76__ = (_Bool)0;
                        return __result76__;
                    }
                }
            }
            else {
                # 1645 "./neo-c.h"
                __result77__ = (_Bool)0;
                return __result77__;
            }
        }
        # 1649 "./neo-c.h"
        __result78__ = (_Bool)0;
        return __result78__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional66;
struct sType* __result79__;
void* right_value98;
struct sType* result_91;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value105;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional72;
void* right_value108;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional76;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional77;
void* right_value110;
char* __dec_obj19;
_Bool _if_conditional78;
void* right_value111;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional79;
void* right_value119;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value120;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional94;
void* right_value127;
struct list$1charph* __dec_obj29;
_Bool _if_conditional98;
void* right_value128;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value129;
struct sNode* __dec_obj31;
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
void* right_value130;
struct sNode* __dec_obj32;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value131;
char* __dec_obj33;
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
void* right_value132;
char* __dec_obj34;
_Bool _if_conditional139;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_91, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional66=self==(void*)0,            _if_conditional66) {
                # 2 "sType_clone"
                __result79__ = __result_obj__ = (void*)0;
                return __result79__;
            }
            # 3 "sType_clone"
            result_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                # 4 "sType_clone"
                result_91->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional68=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional68) {
                # 5 "sType_clone"
                __dec_obj15=result_91->mMultipleTypes;
                result_91->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional72=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional72) {
                # 6 "sType_clone"
                __dec_obj17=result_91->mNoSolvedGenericsType;
                result_91->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional76=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional76) {
                # 7 "sType_clone"
                __dec_obj18=result_91->mOriginalLoadVarType;
                result_91->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional77=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional77) {
                # 8 "sType_clone"
                __dec_obj19=result_91->mGenericsName;
                result_91->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(self->mGenericsName))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional78=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional78) {
                # 9 "sType_clone"
                __dec_obj20=result_91->mGenericsTypes;
                result_91->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional79=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional79) {
                # 10 "sType_clone"
                __dec_obj24=result_91->mArrayNum;
                result_91->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value119=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                # 11 "sType_clone"
                result_91->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional93=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional93) {
                # 12 "sType_clone"
                __dec_obj25=result_91->mParamTypes;
                result_91->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional94=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional94) {
                # 13 "sType_clone"
                __dec_obj29=result_91->mParamNames;
                result_91->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional98=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional98) {
                # 14 "sType_clone"
                __dec_obj30=result_91->mResultType;
                result_91->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value128=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 15 "sType_clone"
                result_91->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional100=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional100) {
                # 16 "sType_clone"
                __dec_obj31=result_91->mAlignas;
                result_91->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(self->mAlignas))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 17 "sType_clone"
                result_91->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 18 "sType_clone"
                result_91->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 19 "sType_clone"
                result_91->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 20 "sType_clone"
                result_91->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 21 "sType_clone"
                result_91->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 22 "sType_clone"
                result_91->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 23 "sType_clone"
                result_91->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 24 "sType_clone"
                result_91->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 25 "sType_clone"
                result_91->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 26 "sType_clone"
                result_91->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 27 "sType_clone"
                result_91->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                # 28 "sType_clone"
                result_91->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 29 "sType_clone"
                result_91->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                # 30 "sType_clone"
                result_91->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                # 31 "sType_clone"
                result_91->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                # 32 "sType_clone"
                result_91->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                # 33 "sType_clone"
                result_91->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                # 34 "sType_clone"
                result_91->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 35 "sType_clone"
                result_91->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                # 36 "sType_clone"
                result_91->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                # 37 "sType_clone"
                result_91->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                # 38 "sType_clone"
                result_91->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                # 39 "sType_clone"
                result_91->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional124=self!=((void*)0),            _if_conditional124) {
                # 40 "sType_clone"
                result_91->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional125=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional125) {
                # 41 "sType_clone"
                __dec_obj32=result_91->mSizeNum;
                result_91->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=sNode_clone(self->mSizeNum))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                # 42 "sType_clone"
                result_91->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                # 43 "sType_clone"
                result_91->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional128=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional128) {
                # 44 "sType_clone"
                __dec_obj33=result_91->mOriginalTypeName;
                result_91->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->mOriginalTypeName))));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                # 45 "sType_clone"
                result_91->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                # 46 "sType_clone"
                result_91->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                # 47 "sType_clone"
                result_91->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                # 48 "sType_clone"
                result_91->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional133=self!=((void*)0),            _if_conditional133) {
                # 49 "sType_clone"
                result_91->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional134=self!=((void*)0),            _if_conditional134) {
                # 50 "sType_clone"
                result_91->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional135=self!=((void*)0),            _if_conditional135) {
                # 51 "sType_clone"
                result_91->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional136=self!=((void*)0),            _if_conditional136) {
                # 52 "sType_clone"
                result_91->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional137=self!=((void*)0),            _if_conditional137) {
                # 53 "sType_clone"
                result_91->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional138=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional138) {
                # 54 "sType_clone"
                __dec_obj34=result_91->mAsmName;
                result_91->mAsmName=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->mAsmName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional139=self!=((void*)0),            _if_conditional139) {
                # 55 "sType_clone"
                result_91->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result96__ = __result_obj__ = result_91;
            come_call_finalizer2(sType_finalize,result_91, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer2(sType_finalize,result_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1sTypeph* __result80__;
void* right_value99;
void* right_value100;
struct list$1sTypeph* result_92;
struct list_item$1sTypeph* it_93;
_Bool _while_condtional14;
void* right_value104;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_92, 0, sizeof(struct list$1sTypeph*));
memset(&it_93, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional69=self==((void*)0),                    _if_conditional69) {
                        # 140 "./neo-c.h"
                        __result80__ = __result_obj__ = ((void*)0);
                        return __result80__;
                    }
                    # 142 "./neo-c.h"
                    result_92=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_93=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional14=it_93!=((void*)0),                    _while_condtional14) {
                        # 146 "./neo-c.h"
                        list$1sTypeph_add(result_92,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(it_93->item)))));
                        come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_93=it_93->next;
                    }
                    # 151 "./neo-c.h"
                    __result83__ = __result_obj__ = result_92;
                    come_call_finalizer2(list$1sTypephp_finalize,result_92, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result81__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value101;
struct list_item$1sTypeph* litem_94;
struct sType* __dec_obj12;
_Bool _if_conditional71;
void* right_value102;
struct list_item$1sTypeph* litem_95;
struct sType* __dec_obj13;
void* right_value103;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj14;
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1sTypeph*));
right_value102 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sTypeph*));
right_value103 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional70=self->len==0,                            _if_conditional70) {
                                # 156 "./neo-c.h"
                                litem_94=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_94->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_94->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj12=litem_94->item;
                                litem_94->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_94;
                                # 163 "./neo-c.h"
                                self->head=litem_94;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional71=self->len==1,                                _if_conditional71) {
                                    # 166 "./neo-c.h"
                                    litem_95=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_95->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_95->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj13=litem_95->item;
                                    litem_95->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_95;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_95;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_96->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_96->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj14=litem_96->item;
                                    litem_96->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_96;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_96;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result82__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional73;
struct tuple1$1sTypeph* __result84__;
void* right_value106;
struct tuple1$1sTypeph* result_97;
_Bool _if_conditional75;
void* right_value107;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_97, 0, sizeof(struct tuple1$1sTypeph*));
right_value107 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional73=self==(void*)0,                    _if_conditional73) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result84__ = __result_obj__ = (void*)0;
                        return __result84__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_97=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional75=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional75) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj16=result_97->v1;
                        result_97->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result85__ = __result_obj__ = result_97;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_97, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional74=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional74) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional80;
struct list$1sNodeph* __result86__;
void* right_value112;
void* right_value113;
struct list$1sNodeph* result_98;
struct list_item$1sNodeph* it_99;
_Bool _while_condtional15;
void* right_value118;
struct list$1sNodeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_98, 0, sizeof(struct list$1sNodeph*));
memset(&it_99, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional80=self==((void*)0),                    _if_conditional80) {
                        # 140 "./neo-c.h"
                        __result86__ = __result_obj__ = ((void*)0);
                        return __result86__;
                    }
                    # 142 "./neo-c.h"
                    result_98=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_99=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional15=it_99!=((void*)0),                    _while_condtional15) {
                        # 146 "./neo-c.h"
                        list$1sNodeph_add(result_98,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(it_99->item)))));
                        if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 148 "./neo-c.h"
                        it_99=it_99->next;
                    }
                    # 151 "./neo-c.h"
                    __result91__ = __result_obj__ = result_98;
                    come_call_finalizer2(list$1sNodephp_finalize,result_98, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result91__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result87__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result87__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional81;
void* right_value114;
struct list_item$1sNodeph* litem_100;
struct sNode* __dec_obj21;
_Bool _if_conditional82;
void* right_value115;
struct list_item$1sNodeph* litem_101;
struct sNode* __dec_obj22;
void* right_value116;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sNodeph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional81=self->len==0,                            _if_conditional81) {
                                # 156 "./neo-c.h"
                                litem_100=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_100->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_100->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj21=litem_100->item;
                                litem_100->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                # 162 "./neo-c.h"
                                self->tail=litem_100;
                                # 163 "./neo-c.h"
                                self->head=litem_100;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional82=self->len==1,                                _if_conditional82) {
                                    # 166 "./neo-c.h"
                                    litem_101=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_101->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_101->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj22=litem_101->item;
                                    litem_101->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 172 "./neo-c.h"
                                    self->tail=litem_101;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_101;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_102->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_102->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj23=litem_102->item;
                                    litem_102->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_102;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_102;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result88__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result88__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional83;
struct sNode* __result89__;
void* right_value117;
struct sNode* result_103;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_103, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional83=self==(void*)0,                            _if_conditional83) {
                                # 2 "sNode_clone"
                                __result89__ = __result_obj__ = (void*)0;
                                return __result89__;
                            }
                            # 3 "sNode_clone"
                            result_103=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional84=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional84) {
                                # 4 "sNode_clone"
                                result_103->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                # 5 "sNode_clone"
                                result_103->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                # 6 "sNode_clone"
                                result_103->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                # 7 "sNode_clone"
                                result_103->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                # 8 "sNode_clone"
                                result_103->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional89=self!=((void*)0),                            _if_conditional89) {
                                # 9 "sNode_clone"
                                result_103->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional90=self!=((void*)0),                            _if_conditional90) {
                                # 10 "sNode_clone"
                                result_103->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional91=self!=((void*)0),                            _if_conditional91) {
                                # 11 "sNode_clone"
                                result_103->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result90__ = __result_obj__ = result_103;
                            if(result_103) { result_103 = come_decrement_ref_count2(result_103, ((struct sNode*)result_103)->finalize, ((struct sNode*)result_103)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result90__;
                            if(result_103) { result_103 = come_decrement_ref_count2(result_103, ((struct sNode*)result_103)->finalize, ((struct sNode*)result_103)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct list$1charph* __result92__;
void* right_value121;
void* right_value122;
struct list$1charph* result_104;
struct list_item$1charph* it_105;
_Bool _while_condtional16;
void* right_value126;
struct list$1charph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&result_104, 0, sizeof(struct list$1charph*));
memset(&it_105, 0, sizeof(struct list_item$1charph*));
right_value126 = (void*)0;
                    # 142 "./neo-c.h"
                    # 139 "./neo-c.h"
                    if(_if_conditional95=self==((void*)0),                    _if_conditional95) {
                        # 140 "./neo-c.h"
                        __result92__ = __result_obj__ = ((void*)0);
                        return __result92__;
                    }
                    # 142 "./neo-c.h"
                    result_104=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "./neo-c.h"
                    it_105=self->head;
                    # 151 "./neo-c.h"
                    while(_while_condtional16=it_105!=((void*)0),                    _while_condtional16) {
                        # 146 "./neo-c.h"
                        list$1charph_add(result_104,(char*)come_increment_ref_count(((char*)(right_value126=string_clone(it_105->item)))));
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 148 "./neo-c.h"
                        it_105=it_105->next;
                    }
                    # 151 "./neo-c.h"
                    __result95__ = __result_obj__ = result_104;
                    come_call_finalizer2(list$1charphp_finalize,result_104, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                    come_call_finalizer2(list$1charphp_finalize,result_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 104 "./neo-c.h"
                        self->head=((void*)0);
                        # 105 "./neo-c.h"
                        self->tail=((void*)0);
                        # 106 "./neo-c.h"
                        self->len=0;
                        # 108 "./neo-c.h"
                        __result93__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result93__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional96;
void* right_value123;
struct list_item$1charph* litem_106;
char* __dec_obj26;
_Bool _if_conditional97;
void* right_value124;
struct list_item$1charph* litem_107;
char* __dec_obj27;
void* right_value125;
struct list_item$1charph* litem_108;
char* __dec_obj28;
struct list$1charph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1charph*));
right_value124 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1charph*));
right_value125 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charph*));
                            # 186 "./neo-c.h"
                            # 155 "./neo-c.h"
                            if(_if_conditional96=self->len==0,                            _if_conditional96) {
                                # 156 "./neo-c.h"
                                litem_106=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 158 "./neo-c.h"
                                litem_106->prev=((void*)0);
                                # 159 "./neo-c.h"
                                litem_106->next=((void*)0);
                                # 160 "./neo-c.h"
                                __dec_obj26=litem_106->item;
                                litem_106->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 162 "./neo-c.h"
                                self->tail=litem_106;
                                # 163 "./neo-c.h"
                                self->head=litem_106;
                            }
                            else {
                                # 186 "./neo-c.h"
                                # 165 "./neo-c.h"
                                if(_if_conditional97=self->len==1,                                _if_conditional97) {
                                    # 166 "./neo-c.h"
                                    litem_107=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 168 "./neo-c.h"
                                    litem_107->prev=self->head;
                                    # 169 "./neo-c.h"
                                    litem_107->next=((void*)0);
                                    # 170 "./neo-c.h"
                                    __dec_obj27=litem_107->item;
                                    litem_107->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 172 "./neo-c.h"
                                    self->tail=litem_107;
                                    # 173 "./neo-c.h"
                                    self->head->next=litem_107;
                                }
                                else {
                                    # 176 "./neo-c.h"
                                    litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value125=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 178 "./neo-c.h"
                                    litem_108->prev=self->tail;
                                    # 179 "./neo-c.h"
                                    litem_108->next=((void*)0);
                                    # 180 "./neo-c.h"
                                    __dec_obj28=litem_108->item;
                                    litem_108->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 182 "./neo-c.h"
                                    self->tail->next=litem_108;
                                    # 183 "./neo-c.h"
                                    self->tail=litem_108;
                                }
                            }
                            # 186 "./neo-c.h"
                            self->len++;
                            # 188 "./neo-c.h"
                            __result94__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result94__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_110;
unsigned int hash_111;
unsigned int it_112;
_Bool _while_condtional17;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sClass* __result97__;
_Bool _if_conditional146;
_Bool _if_conditional147;
struct sClass* __result98__;
struct sClass* __result99__;
struct sClass* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_110, 0, sizeof(struct sClass*));
memset(&hash_111, 0, sizeof(unsigned int));
memset(&it_112, 0, sizeof(unsigned int));
            # 1544 "./neo-c.h"
            # 1545 "./neo-c.h"
            memset(&default_value_110,0,sizeof(struct sClass*));
            # 1547 "./neo-c.h"
            hash_111=string_get_hash_key(((char*)key))%self->size;
            # 1548 "./neo-c.h"
            it_112=hash_111;
            # 1572 "./neo-c.h"
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                # 1570 "./neo-c.h"
                # 1551 "./neo-c.h"
                if(_if_conditional140=self->item_existance[it_112],                _if_conditional140) {
                    # 1558 "./neo-c.h"
                    # 1553 "./neo-c.h"
                    if(_if_conditional141=string_equals(self->keys[it_112],key),                    _if_conditional141) {
                        # 1555 "./neo-c.h"
                        __result97__ = __result_obj__ = self->items[it_112];
                        come_call_finalizer2(sClass_finalize,default_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result97__;
                    }
                    # 1558 "./neo-c.h"
                    it_112++;
                    # 1566 "./neo-c.h"
                    # 1560 "./neo-c.h"
                    if(_if_conditional146=it_112>=self->size,                    _if_conditional146) {
                        # 1561 "./neo-c.h"
                        it_112=0;
                    }
                    else {
                        # 1566 "./neo-c.h"
                        # 1563 "./neo-c.h"
                        if(_if_conditional147=it_112==hash_111,                        _if_conditional147) {
                            # 1564 "./neo-c.h"
                            __result98__ = __result_obj__ = default_value_110;
                            come_call_finalizer2(sClass_finalize,default_value_110, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result98__;
                        }
                    }
                }
                else {
                    # 1568 "./neo-c.h"
                    __result99__ = __result_obj__ = default_value_110;
                    come_call_finalizer2(sClass_finalize,default_value_110, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result99__;
                }
            }
            # 1572 "./neo-c.h"
            __result100__ = __result_obj__ = default_value_110;
            come_call_finalizer2(sClass_finalize,default_value_110, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result100__;
            come_call_finalizer2(sClass_finalize,default_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sClass_finalize"
                            # 0 "sClass_finalize"
                            if(_if_conditional142=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional142) {
                                # 0 "sClass_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sClass_finalize"
                            # 1 "sClass_finalize"
                            if(_if_conditional143=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional143) {
                                # 1 "sClass_finalize"
                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sClass_finalize"
                            # 2 "sClass_finalize"
                            if(_if_conditional144=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional144) {
                                # 2 "sClass_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sClass_finalize"
                            # 3 "sClass_finalize"
                            if(_if_conditional145=self!=((void*)0)&&self->mParentClassName!=((void*)0),                            _if_conditional145) {
                                # 3 "sClass_finalize"
                                self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional149;
unsigned int hash_132;
unsigned int it_133;
_Bool _while_condtional20;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool same_key_exist_150;
char* it2_153;
_Bool _if_conditional192;
_Bool _if_conditional193;
struct map$2charphsClassph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_132, 0, sizeof(unsigned int));
memset(&it_133, 0, sizeof(unsigned int));
memset(&same_key_exist_150, 0, sizeof(_Bool));
memset(&it2_153, 0, sizeof(char*));
            # 1393 "./neo-c.h"
            # 1390 "./neo-c.h"
            if(_if_conditional149=self->len*10>=self->size,            _if_conditional149) {
                # 1391 "./neo-c.h"
                map$2charphsClassph_rehash(self);
            }
            # 1393 "./neo-c.h"
            hash_132=string_get_hash_key(key)%self->size;
            # 1394 "./neo-c.h"
            it_133=hash_132;
            # 1452 "./neo-c.h"
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                # 1450 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional161=self->item_existance[it_133],                _if_conditional161) {
                    # 1420 "./neo-c.h"
                    # 1399 "./neo-c.h"
                    if(_if_conditional162=string_equals(self->keys[it_133],key),                    _if_conditional162) {
                        # 1410 "./neo-c.h"
                        # 1401 "./neo-c.h"
                        if(_if_conditional163=1,                        _if_conditional163) {
                            # 1402 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_133]);
                            # 1403 "./neo-c.h"
                            self->keys[it_133] = come_decrement_ref_count2(self->keys[it_133], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            # 1404 "./neo-c.h"
                            self->keys[it_133]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            # 1407 "./neo-c.h"
                            list$1charp_remove(self->key_list,self->keys[it_133]);
                            # 1408 "./neo-c.h"
                            self->keys[it_133]=key;
                        }
                        # 1417 "./neo-c.h"
                        # 1410 "./neo-c.h"
                        if(_if_conditional183=1,                        _if_conditional183) {
                            # 1411 "./neo-c.h"
                            come_call_finalizer2(sClass_finalize,self->items[it_133], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1412 "./neo-c.h"
                            self->items[it_133]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            # 1415 "./neo-c.h"
                            self->items[it_133]=item;
                        }
                        # 1417 "./neo-c.h"
                        break;
                    }
                    # 1420 "./neo-c.h"
                    it_133++;
                    # 1430 "./neo-c.h"
                    # 1422 "./neo-c.h"
                    if(_if_conditional184=it_133>=self->size,                    _if_conditional184) {
                        # 1423 "./neo-c.h"
                        it_133=0;
                    }
                    else {
                        # 1430 "./neo-c.h"
                        # 1425 "./neo-c.h"
                        if(_if_conditional185=it_133==hash_132,                        _if_conditional185) {
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
                    self->item_existance[it_133]=(_Bool)1;
                    # 1439 "./neo-c.h"
                    # 1433 "./neo-c.h"
                    if(_if_conditional186=1,                    _if_conditional186) {
                        # 1434 "./neo-c.h"
                        self->keys[it_133]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1437 "./neo-c.h"
                        self->keys[it_133]=key;
                    }
                    # 1446 "./neo-c.h"
                    # 1439 "./neo-c.h"
                    if(_if_conditional187=1,                    _if_conditional187) {
                        # 1440 "./neo-c.h"
                        self->items[it_133]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1443 "./neo-c.h"
                        self->items[it_133]=item;
                    }
                    # 1446 "./neo-c.h"
                    self->len++;
                    # 1448 "./neo-c.h"
                    break;
                }
            }
            # 1452 "./neo-c.h"
            same_key_exist_150=(_Bool)0;
            # 1460 "./neo-c.h"
            for(            it2_153=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_153=list$1charp_next(self->key_list)            ){
                # 1458 "./neo-c.h"
                # 1455 "./neo-c.h"
                if(_if_conditional192=string_equals(it2_153,key),                _if_conditional192) {
                    # 1456 "./neo-c.h"
                    same_key_exist_150=(_Bool)1;
                }
            }
            # 1464 "./neo-c.h"
            # 1460 "./neo-c.h"
            if(_if_conditional193=!same_key_exist_150,            _if_conditional193) {
                # 1461 "./neo-c.h"
                list$1charp_push_back(self->key_list,key);
            }
            # 1464 "./neo-c.h"
            __result125__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result125__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_115;
void* right_value136;
char** keys_116;
void* right_value137;
struct sClass** items_117;
void* right_value138;
_Bool* item_existance_118;
int len_119;
char* it_122;
struct sClass* default_value_125;
struct sClass* it2_128;
unsigned int hash_129;
int n_130;
_Bool _while_condtional19;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct sClass* default_value_131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_115, 0, sizeof(int));
right_value136 = (void*)0;
memset(&keys_116, 0, sizeof(char**));
right_value137 = (void*)0;
memset(&items_117, 0, sizeof(struct sClass**));
right_value138 = (void*)0;
memset(&item_existance_118, 0, sizeof(_Bool*));
memset(&len_119, 0, sizeof(int));
memset(&it_122, 0, sizeof(char*));
memset(&default_value_125, 0, sizeof(struct sClass*));
memset(&it2_128, 0, sizeof(struct sClass*));
memset(&hash_129, 0, sizeof(unsigned int));
memset(&n_130, 0, sizeof(int));
memset(&default_value_131, 0, sizeof(struct sClass*));
                    # 1337 "./neo-c.h"
                    size_115=self->size*10;
                    # 1338 "./neo-c.h"
                    keys_116=(char**)come_increment_ref_count(((char**)(right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_115)), "./neo-c.h", 1338, "char*%"))));
                    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1339 "./neo-c.h"
                    items_117=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_115)), "./neo-c.h", 1339, "sClass*%"))));
                    come_call_finalizer2(sClass_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1340 "./neo-c.h"
                    item_existance_118=(_Bool*)come_increment_ref_count(((_Bool*)(right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_115)), "./neo-c.h", 1340, "bool"))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1342 "./neo-c.h"
                    len_119=0;
                    # 1377 "./neo-c.h"
                    for(                    it_122=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_122=map$2charphsClassph_next(self)                    ){
                        # 1345 "./neo-c.h"
                        # 1346 "./neo-c.h"
                        memset(&default_value_125,0,sizeof(struct sClass*));
                        # 1347 "./neo-c.h"
                        it2_128=map$2charphsClassph_at(self,it_122,default_value_125);
                        # 1348 "./neo-c.h"
                        hash_129=string_get_hash_key(it_122)%size_115;
                        # 1349 "./neo-c.h"
                        n_130=hash_129;
                        # 1375 "./neo-c.h"
                        while(_while_condtional19=(_Bool)1,                        _while_condtional19) {
                            # 1374 "./neo-c.h"
                            # 1352 "./neo-c.h"
                            if(_if_conditional158=item_existance_118[n_130],                            _if_conditional158) {
                                # 1354 "./neo-c.h"
                                n_130++;
                                # 1364 "./neo-c.h"
                                # 1356 "./neo-c.h"
                                if(_if_conditional159=n_130>=size_115,                                _if_conditional159) {
                                    # 1357 "./neo-c.h"
                                    n_130=0;
                                }
                                else {
                                    # 1364 "./neo-c.h"
                                    # 1359 "./neo-c.h"
                                    if(_if_conditional160=n_130==hash_129,                                    _if_conditional160) {
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
                                item_existance_118[n_130]=(_Bool)1;
                                # 1367 "./neo-c.h"
                                keys_116[n_130]=it_122;
                                # 1368 "./neo-c.h"
                                # 1369 "./neo-c.h"
                                items_117[n_130]=map$2charphsClassph_at(self,it_122,default_value_131);
                                # 1371 "./neo-c.h"
                                len_119++;
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
                    self->keys=keys_116;
                    # 1382 "./neo-c.h"
                    self->items=items_117;
                    # 1383 "./neo-c.h"
                    self->item_existance=item_existance_118;
                    # 1385 "./neo-c.h"
                    self->size=size_115;
                    # 1386 "./neo-c.h"
                    self->len=len_119;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional150;
char* result_120;
char* __result102__;
_Bool _if_conditional151;
char* __result103__;
char* result_121;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_120, 0, sizeof(char*));
memset(&result_121, 0, sizeof(char*));
                        # 1304 "./neo-c.h"
                        # 1299 "./neo-c.h"
                        if(_if_conditional150=self==((void*)0),                        _if_conditional150) {
                            # 1300 "./neo-c.h"
                            # 1301 "./neo-c.h"
                            memset(&result_120,0,sizeof(char*));
                            # 1302 "./neo-c.h"
                            __result102__ = __result_obj__ = result_120;
                            return __result102__;
                        }
                        # 1304 "./neo-c.h"
                        self->key_list->it=self->key_list->head;
                        # 1310 "./neo-c.h"
                        # 1306 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1307 "./neo-c.h"
                            __result103__ = __result_obj__ = self->key_list->it->item;
                            return __result103__;
                        }
                        # 1310 "./neo-c.h"
                        # 1311 "./neo-c.h"
                        memset(&result_121,0,sizeof(char*));
                        # 1312 "./neo-c.h"
                        __result104__ = __result_obj__ = result_121;
                        return __result104__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1333 "./neo-c.h"
                        __result105__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result105__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional152;
char* result_123;
char* __result106__;
_Bool _if_conditional153;
char* __result107__;
char* result_124;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(char*));
memset(&result_124, 0, sizeof(char*));
                        # 1321 "./neo-c.h"
                        # 1316 "./neo-c.h"
                        if(_if_conditional152=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional152) {
                            # 1317 "./neo-c.h"
                            # 1318 "./neo-c.h"
                            memset(&result_123,0,sizeof(char*));
                            # 1319 "./neo-c.h"
                            __result106__ = __result_obj__ = result_123;
                            return __result106__;
                        }
                        # 1321 "./neo-c.h"
                        self->key_list->it=self->key_list->it->next;
                        # 1327 "./neo-c.h"
                        # 1323 "./neo-c.h"
                        if(self->key_list->it) {
                            # 1324 "./neo-c.h"
                            __result107__ = __result_obj__ = self->key_list->it->item;
                            return __result107__;
                        }
                        # 1327 "./neo-c.h"
                        # 1328 "./neo-c.h"
                        memset(&result_124,0,sizeof(char*));
                        # 1329 "./neo-c.h"
                        __result108__ = __result_obj__ = result_124;
                        return __result108__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_126;
unsigned int it_127;
_Bool _while_condtional18;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sClass* __result109__;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct sClass* __result110__;
struct sClass* __result111__;
struct sClass* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_126, 0, sizeof(unsigned int));
memset(&it_127, 0, sizeof(unsigned int));
                            # 1226 "./neo-c.h"
                            hash_126=string_get_hash_key(((char*)key))%self->size;
                            # 1227 "./neo-c.h"
                            it_127=hash_126;
                            # 1251 "./neo-c.h"
                            while(_while_condtional18=(_Bool)1,                            _while_condtional18) {
                                # 1249 "./neo-c.h"
                                # 1230 "./neo-c.h"
                                if(_if_conditional154=self->item_existance[it_127],                                _if_conditional154) {
                                    # 1237 "./neo-c.h"
                                    # 1232 "./neo-c.h"
                                    if(_if_conditional155=string_equals(self->keys[it_127],key),                                    _if_conditional155) {
                                        # 1234 "./neo-c.h"
                                        __result109__ = __result_obj__ = self->items[it_127];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result109__;
                                    }
                                    # 1237 "./neo-c.h"
                                    it_127++;
                                    # 1245 "./neo-c.h"
                                    # 1239 "./neo-c.h"
                                    if(_if_conditional156=it_127>=self->size,                                    _if_conditional156) {
                                        # 1240 "./neo-c.h"
                                        it_127=0;
                                    }
                                    else {
                                        # 1245 "./neo-c.h"
                                        # 1242 "./neo-c.h"
                                        if(_if_conditional157=it_127==hash_126,                                        _if_conditional157) {
                                            # 1243 "./neo-c.h"
                                            __result110__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result110__;
                                        }
                                    }
                                }
                                else {
                                    # 1247 "./neo-c.h"
                                    __result111__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result111__;
                                }
                            }
                            # 1251 "./neo-c.h"
                            __result112__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result112__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_134;
struct list_item$1charp* it_135;
_Bool _while_condtional21;
_Bool _if_conditional164;
struct list$1charp* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_134, 0, sizeof(int));
memset(&it_135, 0, sizeof(struct list_item$1charp*));
                                # 448 "./neo-c.h"
                                it2_134=0;
                                # 449 "./neo-c.h"
                                it_135=self->head;
                                # 460 "./neo-c.h"
                                while(_while_condtional21=it_135!=((void*)0),                                _while_condtional21) {
                                    # 455 "./neo-c.h"
                                    # 451 "./neo-c.h"
                                    if(_if_conditional164=string_equals(it_135->item,item),                                    _if_conditional164) {
                                        # 452 "./neo-c.h"
                                        list$1charp_delete(self,it2_134,it2_134+1);
                                        # 453 "./neo-c.h"
                                        break;
                                    }
                                    # 455 "./neo-c.h"
                                    it2_134++;
                                    # 457 "./neo-c.h"
                                    it_135=it_135->next;
                                }
                                # 460 "./neo-c.h"
                                __result116__ = __result_obj__ = self;
                                return __result116__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
int tmp_136;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct list$1charp* __result113__;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct list_item$1charp* it_139;
int i_140;
_Bool _while_condtional23;
_Bool _if_conditional173;
struct list_item$1charp* prev_it_141;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct list_item$1charp* it_142;
int i_143;
_Bool _while_condtional24;
_Bool _if_conditional176;
_Bool _if_conditional177;
struct list_item$1charp* prev_it_144;
struct list_item$1charp* it_145;
struct list_item$1charp* head_prev_it_146;
struct list_item$1charp* tail_it_147;
int i_148;
_Bool _while_condtional25;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct list_item$1charp* prev_it_149;
_Bool _if_conditional181;
_Bool _if_conditional182;
struct list$1charp* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_136, 0, sizeof(int));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
memset(&i_140, 0, sizeof(int));
memset(&prev_it_141, 0, sizeof(struct list_item$1charp*));
memset(&it_142, 0, sizeof(struct list_item$1charp*));
memset(&i_143, 0, sizeof(int));
memset(&prev_it_144, 0, sizeof(struct list_item$1charp*));
memset(&it_145, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_146, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_147, 0, sizeof(struct list_item$1charp*));
memset(&i_148, 0, sizeof(int));
memset(&prev_it_149, 0, sizeof(struct list_item$1charp*));
                                            # 467 "./neo-c.h"
                                            # 464 "./neo-c.h"
                                            if(_if_conditional165=head<0,                                            _if_conditional165) {
                                                # 465 "./neo-c.h"
                                                head+=self->len;
                                            }
                                            # 471 "./neo-c.h"
                                            # 467 "./neo-c.h"
                                            if(_if_conditional166=tail<0,                                            _if_conditional166) {
                                                # 468 "./neo-c.h"
                                                tail+=self->len+1;
                                            }
                                            # 477 "./neo-c.h"
                                            # 471 "./neo-c.h"
                                            if(_if_conditional167=head>tail,                                            _if_conditional167) {
                                                # 472 "./neo-c.h"
                                                tmp_136=tail;
                                                # 473 "./neo-c.h"
                                                tail=head;
                                                # 474 "./neo-c.h"
                                                head=tmp_136;
                                            }
                                            # 481 "./neo-c.h"
                                            # 477 "./neo-c.h"
                                            if(_if_conditional168=head<0,                                            _if_conditional168) {
                                                # 478 "./neo-c.h"
                                                head=0;
                                            }
                                            # 485 "./neo-c.h"
                                            # 481 "./neo-c.h"
                                            if(_if_conditional169=tail>self->len,                                            _if_conditional169) {
                                                # 482 "./neo-c.h"
                                                tail=self->len;
                                            }
                                            # 489 "./neo-c.h"
                                            # 485 "./neo-c.h"
                                            if(_if_conditional170=head==tail,                                            _if_conditional170) {
                                                # 486 "./neo-c.h"
                                                __result113__ = __result_obj__ = self;
                                                return __result113__;
                                            }
                                            # 584 "./neo-c.h"
                                            # 489 "./neo-c.h"
                                            if(_if_conditional171=head==0&&tail==self->len,                                            _if_conditional171) {
                                                # 491 "./neo-c.h"
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 493 "./neo-c.h"
                                                if(_if_conditional172=head==0,                                                _if_conditional172) {
                                                    # 494 "./neo-c.h"
                                                    it_139=self->head;
                                                    # 495 "./neo-c.h"
                                                    i_140=0;
                                                    # 517 "./neo-c.h"
                                                    while(_while_condtional23=it_139!=((void*)0),                                                    _while_condtional23) {
                                                        # 516 "./neo-c.h"
                                                        # 497 "./neo-c.h"
                                                        if(_if_conditional173=i_140<tail,                                                        _if_conditional173) {
                                                            # 498 "./neo-c.h"
                                                            prev_it_141=it_139;
                                                            # 500 "./neo-c.h"
                                                            it_139=it_139->next;
                                                            # 501 "./neo-c.h"
                                                            i_140++;
                                                            # 503 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 505 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 516 "./neo-c.h"
                                                            # 507 "./neo-c.h"
                                                            if(_if_conditional174=i_140==tail,                                                            _if_conditional174) {
                                                                # 508 "./neo-c.h"
                                                                self->head=it_139;
                                                                # 509 "./neo-c.h"
                                                                self->head->prev=((void*)0);
                                                                # 510 "./neo-c.h"
                                                                break;
                                                            }
                                                            else {
                                                                # 513 "./neo-c.h"
                                                                it_139=it_139->next;
                                                                # 514 "./neo-c.h"
                                                                i_140++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 584 "./neo-c.h"
                                                    # 518 "./neo-c.h"
                                                    if(_if_conditional175=tail==self->len,                                                    _if_conditional175) {
                                                        # 519 "./neo-c.h"
                                                        it_142=self->head;
                                                        # 520 "./neo-c.h"
                                                        i_143=0;
                                                        # 542 "./neo-c.h"
                                                        while(_while_condtional24=it_142!=((void*)0),                                                        _while_condtional24) {
                                                            # 527 "./neo-c.h"
                                                            # 522 "./neo-c.h"
                                                            if(_if_conditional176=i_143==head,                                                            _if_conditional176) {
                                                                # 523 "./neo-c.h"
                                                                self->tail=it_142->prev;
                                                                # 524 "./neo-c.h"
                                                                self->tail->next=((void*)0);
                                                            }
                                                            # 541 "./neo-c.h"
                                                            # 527 "./neo-c.h"
                                                            if(_if_conditional177=i_143>=head,                                                            _if_conditional177) {
                                                                # 528 "./neo-c.h"
                                                                prev_it_144=it_142;
                                                                # 530 "./neo-c.h"
                                                                it_142=it_142->next;
                                                                # 531 "./neo-c.h"
                                                                i_143++;
                                                                # 533 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 535 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 538 "./neo-c.h"
                                                                it_142=it_142->next;
                                                                # 539 "./neo-c.h"
                                                                i_143++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        # 544 "./neo-c.h"
                                                        it_145=self->head;
                                                        # 546 "./neo-c.h"
                                                        head_prev_it_146=((void*)0);
                                                        # 547 "./neo-c.h"
                                                        tail_it_147=((void*)0);
                                                        # 550 "./neo-c.h"
                                                        i_148=0;
                                                        # 576 "./neo-c.h"
                                                        while(_while_condtional25=it_145!=((void*)0),                                                        _while_condtional25) {
                                                            # 555 "./neo-c.h"
                                                            # 552 "./neo-c.h"
                                                            if(_if_conditional178=i_148==head,                                                            _if_conditional178) {
                                                                # 553 "./neo-c.h"
                                                                head_prev_it_146=it_145->prev;
                                                            }
                                                            # 559 "./neo-c.h"
                                                            # 555 "./neo-c.h"
                                                            if(_if_conditional179=i_148==tail,                                                            _if_conditional179) {
                                                                # 556 "./neo-c.h"
                                                                tail_it_147=it_145;
                                                            }
                                                            # 574 "./neo-c.h"
                                                            # 559 "./neo-c.h"
                                                            if(_if_conditional180=i_148>=head&&i_148<tail,                                                            _if_conditional180) {
                                                                # 561 "./neo-c.h"
                                                                prev_it_149=it_145;
                                                                # 563 "./neo-c.h"
                                                                it_145=it_145->next;
                                                                # 564 "./neo-c.h"
                                                                i_148++;
                                                                # 566 "./neo-c.h"
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                # 568 "./neo-c.h"
                                                                self->len--;
                                                            }
                                                            else {
                                                                # 571 "./neo-c.h"
                                                                it_145=it_145->next;
                                                                # 572 "./neo-c.h"
                                                                i_148++;
                                                            }
                                                        }
                                                        # 579 "./neo-c.h"
                                                        # 576 "./neo-c.h"
                                                        if(_if_conditional181=head_prev_it_146!=((void*)0),                                                        _if_conditional181) {
                                                            # 577 "./neo-c.h"
                                                            head_prev_it_146->next=tail_it_147;
                                                        }
                                                        # 582 "./neo-c.h"
                                                        # 579 "./neo-c.h"
                                                        if(_if_conditional182=tail_it_147!=((void*)0),                                                        _if_conditional182) {
                                                            # 580 "./neo-c.h"
                                                            tail_it_147->prev=head_prev_it_146;
                                                        }
                                                    }
                                                }
                                            }
                                            # 584 "./neo-c.h"
                                            __result115__ = __result_obj__ = self;
                                            return __result115__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_137;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_138;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_138, 0, sizeof(struct list_item$1charp*));
                                                    # 433 "./neo-c.h"
                                                    it_137=self->head;
                                                    # 440 "./neo-c.h"
                                                    while(_while_condtional22=it_137!=((void*)0),                                                    _while_condtional22) {
                                                        # 435 "./neo-c.h"
                                                        prev_it_138=it_137;
                                                        # 436 "./neo-c.h"
                                                        it_137=it_137->next;
                                                        # 437 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 440 "./neo-c.h"
                                                    self->head=((void*)0);
                                                    # 441 "./neo-c.h"
                                                    self->tail=((void*)0);
                                                    # 443 "./neo-c.h"
                                                    self->len=0;
                                                    # 445 "./neo-c.h"
                                                    __result114__ = __result_obj__ = self;
                                                    return __result114__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional188;
char* result_151;
char* __result117__;
_Bool _if_conditional189;
char* __result118__;
char* result_152;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(char*));
memset(&result_152, 0, sizeof(char*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional188=self==((void*)0),                _if_conditional188) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_151,0,sizeof(char*));
                    # 288 "./neo-c.h"
                    __result117__ = __result_obj__ = result_151;
                    return __result117__;
                }
                # 290 "./neo-c.h"
                self->it=self->head;
                # 296 "./neo-c.h"
                # 292 "./neo-c.h"
                if(self->it) {
                    # 293 "./neo-c.h"
                    __result118__ = __result_obj__ = self->it->item;
                    return __result118__;
                }
                # 296 "./neo-c.h"
                # 297 "./neo-c.h"
                memset(&result_152,0,sizeof(char*));
                # 298 "./neo-c.h"
                __result119__ = __result_obj__ = result_152;
                return __result119__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./neo-c.h"
                __result120__ = self==((void*)0)||self->it==((void*)0);
                return __result120__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional190;
char* result_154;
char* __result121__;
_Bool _if_conditional191;
char* __result122__;
char* result_155;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result_155, 0, sizeof(char*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional190=self==((void*)0)||self->it==((void*)0),                _if_conditional190) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_154,0,sizeof(char*));
                    # 305 "./neo-c.h"
                    __result121__ = __result_obj__ = result_154;
                    return __result121__;
                }
                # 308 "./neo-c.h"
                self->it=self->it->next;
                # 314 "./neo-c.h"
                # 310 "./neo-c.h"
                if(self->it) {
                    # 311 "./neo-c.h"
                    __result122__ = __result_obj__ = self->it->item;
                    return __result122__;
                }
                # 314 "./neo-c.h"
                # 315 "./neo-c.h"
                memset(&result_155,0,sizeof(char*));
                # 316 "./neo-c.h"
                __result123__ = __result_obj__ = result_155;
                return __result123__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional194;
void* right_value139;
struct list_item$1charp* litem_156;
_Bool _if_conditional195;
void* right_value140;
struct list_item$1charp* litem_157;
void* right_value141;
struct list_item$1charp* litem_158;
struct list$1charp* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
right_value140 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
right_value141 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charp*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional194=self->len==0,                    _if_conditional194) {
                        # 226 "./neo-c.h"
                        litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_156->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_156->next=((void*)0);
                        # 230 "./neo-c.h"
                        litem_156->item=item;
                        # 232 "./neo-c.h"
                        self->tail=litem_156;
                        # 233 "./neo-c.h"
                        self->head=litem_156;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional195=self->len==1,                        _if_conditional195) {
                            # 236 "./neo-c.h"
                            litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_157->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_157->next=((void*)0);
                            # 240 "./neo-c.h"
                            litem_157->item=item;
                            # 242 "./neo-c.h"
                            self->tail=litem_157;
                            # 243 "./neo-c.h"
                            self->head->next=litem_157;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_158=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_158->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_158->next=((void*)0);
                            # 250 "./neo-c.h"
                            litem_158->item=item;
                            # 252 "./neo-c.h"
                            self->tail->next=litem_158;
                            # 253 "./neo-c.h"
                            self->tail=litem_158;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result124__ = __result_obj__ = self;
                    return __result124__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional196;
void* right_value144;
struct list_item$1tuple2$2charphsTypephph* litem_165;
struct tuple2$2charphsTypeph* __dec_obj35;
_Bool _if_conditional199;
void* right_value145;
struct list_item$1tuple2$2charphsTypephph* litem_166;
struct tuple2$2charphsTypeph* __dec_obj36;
void* right_value146;
struct list_item$1tuple2$2charphsTypephph* litem_167;
struct tuple2$2charphsTypeph* __dec_obj37;
struct list$1tuple2$2charphsTypephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value145 = (void*)0;
memset(&litem_166, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value146 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional196=self->len==0,                _if_conditional196) {
                    # 226 "./neo-c.h"
                    litem_165=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value144=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 226, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_165->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_165->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj35=litem_165->item;
                    litem_165->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./neo-c.h"
                    self->tail=litem_165;
                    # 233 "./neo-c.h"
                    self->head=litem_165;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional199=self->len==1,                    _if_conditional199) {
                        # 236 "./neo-c.h"
                        litem_166=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value145=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_166->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_166->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj36=litem_166->item;
                        litem_166->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./neo-c.h"
                        self->tail=litem_166;
                        # 243 "./neo-c.h"
                        self->head->next=litem_166;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_167=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value146=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_167->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_167->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj37=litem_167->item;
                        litem_167->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result126__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional197;
_Bool _if_conditional198;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphsTypeph_finalize"
                        # 0 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional197=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional197) {
                            # 0 "tuple2$2charphsTypeph_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2charphsTypeph_finalize"
                        # 1 "tuple2$2charphsTypeph_finalize"
                        if(_if_conditional198=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional198) {
                            # 1 "tuple2$2charphsTypeph_finalize"
                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj38;
struct sType* __dec_obj39;
struct tuple2$2charphsTypeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1767 "./neo-c.h"
                __dec_obj38=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1768 "./neo-c.h"
                __dec_obj39=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 1770 "./neo-c.h"
                __result127__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result127__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_168;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_169;
struct list$1sTypeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_168, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_169, 0, sizeof(struct list_item$1sTypeph*));
            # 433 "./neo-c.h"
            it_168=self->head;
            # 440 "./neo-c.h"
            while(_while_condtional26=it_168!=((void*)0),            _while_condtional26) {
                # 435 "./neo-c.h"
                prev_it_169=it_168;
                # 436 "./neo-c.h"
                it_168=it_168->next;
                # 437 "./neo-c.h"
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./neo-c.h"
            self->head=((void*)0);
            # 441 "./neo-c.h"
            self->tail=((void*)0);
            # 443 "./neo-c.h"
            self->len=0;
            # 445 "./neo-c.h"
            __result128__ = __result_obj__ = self;
            return __result128__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __dec_obj43;
void* right_value163;
char* __dec_obj44;
void* right_value178;
struct sClass* __dec_obj54;
struct sStructNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value178 = (void*)0;
    # 272 "14struct.c"
    self->sline=info->sline;
    # 273 "14struct.c"
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 275 "14struct.c"
    __dec_obj44=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(name))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 276 "14struct.c"
    __dec_obj54=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value178=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 278 "14struct.c"
    self->mOutput=output;
    # 280 "14struct.c"
    __result139__ = __result_obj__ = self;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result139__;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional205;
struct sClass* __result131__;
void* right_value164;
struct sClass* result_179;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value165;
char* __dec_obj45;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value175;
struct list$1tuple2$2charphsTypephph* __dec_obj51;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value176;
char* __dec_obj52;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value177;
char* __dec_obj53;
struct sClass* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&result_179, 0, sizeof(struct sClass*));
right_value165 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
        # 3 "sClass_clone"
        # 2 "sClass_clone"
        if(_if_conditional205=self==(void*)0,        _if_conditional205) {
            # 2 "sClass_clone"
            __result131__ = __result_obj__ = (void*)0;
            return __result131__;
        }
        # 3 "sClass_clone"
        result_179=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value164=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer2(sClass_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sClass_clone"
        # 4 "sClass_clone"
        if(_if_conditional206=self!=((void*)0),        _if_conditional206) {
            # 4 "sClass_clone"
            result_179->mStruct=self->mStruct;
        }
        # 6 "sClass_clone"
        # 5 "sClass_clone"
        if(_if_conditional207=self!=((void*)0),        _if_conditional207) {
            # 5 "sClass_clone"
            result_179->mFloat=self->mFloat;
        }
        # 7 "sClass_clone"
        # 6 "sClass_clone"
        if(_if_conditional208=self!=((void*)0),        _if_conditional208) {
            # 6 "sClass_clone"
            result_179->mUnion=self->mUnion;
        }
        # 8 "sClass_clone"
        # 7 "sClass_clone"
        if(_if_conditional209=self!=((void*)0),        _if_conditional209) {
            # 7 "sClass_clone"
            result_179->mGenerics=self->mGenerics;
        }
        # 9 "sClass_clone"
        # 8 "sClass_clone"
        if(_if_conditional210=self!=((void*)0),        _if_conditional210) {
            # 8 "sClass_clone"
            result_179->mMethodGenerics=self->mMethodGenerics;
        }
        # 10 "sClass_clone"
        # 9 "sClass_clone"
        if(_if_conditional211=self!=((void*)0),        _if_conditional211) {
            # 9 "sClass_clone"
            result_179->mEnum=self->mEnum;
        }
        # 11 "sClass_clone"
        # 10 "sClass_clone"
        if(_if_conditional212=self!=((void*)0),        _if_conditional212) {
            # 10 "sClass_clone"
            result_179->mProtocol=self->mProtocol;
        }
        # 12 "sClass_clone"
        # 11 "sClass_clone"
        if(_if_conditional213=self!=((void*)0),        _if_conditional213) {
            # 11 "sClass_clone"
            result_179->mNumber=self->mNumber;
        }
        # 13 "sClass_clone"
        # 12 "sClass_clone"
        if(_if_conditional214=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional214) {
            # 12 "sClass_clone"
            __dec_obj45=result_179->mName;
            result_179->mName=(char*)come_increment_ref_count(((char*)(right_value165=string_clone(self->mName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 14 "sClass_clone"
        # 13 "sClass_clone"
        if(_if_conditional215=self!=((void*)0),        _if_conditional215) {
            # 13 "sClass_clone"
            result_179->mGenericsNum=self->mGenericsNum;
        }
        # 15 "sClass_clone"
        # 14 "sClass_clone"
        if(_if_conditional216=self!=((void*)0),        _if_conditional216) {
            # 14 "sClass_clone"
            result_179->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        # 16 "sClass_clone"
        # 15 "sClass_clone"
        if(_if_conditional217=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional217) {
            # 15 "sClass_clone"
            __dec_obj51=result_179->mFields;
            result_179->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value175=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 17 "sClass_clone"
        # 16 "sClass_clone"
        if(_if_conditional224=self!=((void*)0),        _if_conditional224) {
            # 16 "sClass_clone"
            result_179->mOutputed=self->mOutputed;
        }
        # 18 "sClass_clone"
        # 17 "sClass_clone"
        if(_if_conditional225=self!=((void*)0),        _if_conditional225) {
            # 17 "sClass_clone"
            result_179->mOutputed2=self->mOutputed2;
        }
        # 19 "sClass_clone"
        # 18 "sClass_clone"
        if(_if_conditional226=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional226) {
            # 18 "sClass_clone"
            __dec_obj52=result_179->mDeclareSName;
            result_179->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value176=string_clone(self->mDeclareSName))));
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 20 "sClass_clone"
        # 19 "sClass_clone"
        if(_if_conditional227=self!=((void*)0),        _if_conditional227) {
            # 19 "sClass_clone"
            result_179->mNobodyStruct=self->mNobodyStruct;
        }
        # 21 "sClass_clone"
        # 20 "sClass_clone"
        if(_if_conditional228=self!=((void*)0)&&self->mParentClassName!=((void*)0),        _if_conditional228) {
            # 20 "sClass_clone"
            __dec_obj53=result_179->mParentClassName;
            result_179->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->mParentClassName))));
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 21 "sClass_clone"
        __result138__ = __result_obj__ = result_179;
        come_call_finalizer2(sClass_finalize,result_179, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer2(sClass_finalize,result_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional218;
struct list$1tuple2$2charphsTypephph* __result132__;
void* right_value166;
void* right_value167;
struct list$1tuple2$2charphsTypephph* result_180;
struct list_item$1tuple2$2charphsTypephph* it_181;
_Bool _while_condtional27;
void* right_value174;
struct list$1tuple2$2charphsTypephph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&result_180, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_181, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value174 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional218=self==((void*)0),                _if_conditional218) {
                    # 140 "./neo-c.h"
                    __result132__ = __result_obj__ = ((void*)0);
                    return __result132__;
                }
                # 142 "./neo-c.h"
                result_180=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value167=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value166=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 142, "list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_181=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional27=it_181!=((void*)0),                _while_condtional27) {
                    # 146 "./neo-c.h"
                    list$1tuple2$2charphsTypephph_add(result_180,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value174=tuple2$2charphsTypephp_clone(it_181->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_181=it_181->next;
                }
                # 151 "./neo-c.h"
                __result137__ = __result_obj__ = result_180;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result137__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result133__ = __result_obj__ = self;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result133__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional219;
void* right_value168;
struct list_item$1tuple2$2charphsTypephph* litem_182;
struct tuple2$2charphsTypeph* __dec_obj46;
_Bool _if_conditional220;
void* right_value169;
struct list_item$1tuple2$2charphsTypephph* litem_183;
struct tuple2$2charphsTypeph* __dec_obj47;
void* right_value170;
struct list_item$1tuple2$2charphsTypephph* litem_184;
struct tuple2$2charphsTypeph* __dec_obj48;
struct list$1tuple2$2charphsTypephph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&litem_182, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value169 = (void*)0;
memset(&litem_183, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value170 = (void*)0;
memset(&litem_184, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional219=self->len==0,                        _if_conditional219) {
                            # 156 "./neo-c.h"
                            litem_182=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value168=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 156, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_182->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_182->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj46=litem_182->item;
                            litem_182->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_182;
                            # 163 "./neo-c.h"
                            self->head=litem_182;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional220=self->len==1,                            _if_conditional220) {
                                # 166 "./neo-c.h"
                                litem_183=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value169=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 166, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_183->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_183->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj47=litem_183->item;
                                litem_183->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_183;
                                # 173 "./neo-c.h"
                                self->head->next=litem_183;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_184=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value170=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 176, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_184->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_184->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj48=litem_184->item;
                                litem_184->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_184;
                                # 183 "./neo-c.h"
                                self->tail=litem_184;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result134__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result134__;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional221;
struct tuple2$2charphsTypeph* __result135__;
void* right_value171;
struct tuple2$2charphsTypeph* result_185;
_Bool _if_conditional222;
void* right_value172;
char* __dec_obj49;
_Bool _if_conditional223;
void* right_value173;
struct sType* __dec_obj50;
struct tuple2$2charphsTypeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&result_185, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value172 = (void*)0;
right_value173 = (void*)0;
                        # 3 "tuple2$2charphsTypephp_clone"
                        # 2 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional221=self==(void*)0,                        _if_conditional221) {
                            # 2 "tuple2$2charphsTypephp_clone"
                            __result135__ = __result_obj__ = (void*)0;
                            return __result135__;
                        }
                        # 3 "tuple2$2charphsTypephp_clone"
                        result_185=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value171=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple2$2charphsTypephp_clone"
                        # 4 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional222=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional222) {
                            # 4 "tuple2$2charphsTypephp_clone"
                            __dec_obj49=result_185->v1;
                            result_185->v1=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(self->v1))));
                            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        # 5 "tuple2$2charphsTypephp_clone"
                        if(_if_conditional223=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional223) {
                            # 5 "tuple2$2charphsTypephp_clone"
                            __dec_obj50=result_185->v2;
                            result_185->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 6 "tuple2$2charphsTypephp_clone"
                        __result136__ = __result_obj__ = result_185;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_185, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result136__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    # 285 "14struct.c"
    __result140__ = (_Bool)1;
    return __result140__;
}

char* sStructNode_kind(){
void* __result_obj__;
void* right_value179;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    # 290 "14struct.c"
    __result141__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sStructNode")));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value180;
struct sClass* klass_186;
void* right_value181;
char* name_187;
_Bool _if_conditional232;
void* right_value182;
_Bool _if_conditional234;
struct sClass* klass2_188;
void* right_value183;
struct list$1tuple2$2charphsTypephph* __dec_obj55;
void* right_value184;
void* right_value185;
struct sType* type_189;
void* right_value189;
_Bool _if_conditional257;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&klass_186, 0, sizeof(struct sClass*));
right_value181 = (void*)0;
memset(&name_187, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&klass2_188, 0, sizeof(struct sClass*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&type_189, 0, sizeof(struct sType*));
right_value189 = (void*)0;
    # 295 "14struct.c"
    klass_186=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value180=sClass_clone(self->mClass))));
    come_call_finalizer2(sClass_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 296 "14struct.c"
    name_187=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(self->mName))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 306 "14struct.c"
    # 298 "14struct.c"
    if(_if_conditional232=map$2charphsClassph_at(info->classes,name_187,((void*)0))==((void*)0),    _if_conditional232) {
        # 299 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_187),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value182=sClass_clone(klass_186)))));
        come_call_finalizer2(sClass_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 306 "14struct.c"
        # 301 "14struct.c"
        if(_if_conditional234=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_187,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_186->mFields)>0,        _if_conditional234) {
            # 302 "14struct.c"
            klass2_188=map$2charphsClassph_at(info->classes,name_187,((void*)0));
            # 303 "14struct.c"
            __dec_obj55=klass2_188->mFields;
            klass2_188->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value183=list$1tuple2$2charphsTypephphp_clone(klass_186->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    # 306 "14struct.c"
    type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 306, "sType")))),name_187,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 307 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_187),(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type_189)))));
    come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 313 "14struct.c"
    # 309 "14struct.c"
    if(self->mOutput) {
        # 310 "14struct.c"
        output_struct(klass_186,info);
    }
    # 313 "14struct.c"
    __result156__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_187 = come_decrement_ref_count2(name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result156__;
    come_call_finalizer2(sClass_finalize,klass_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_187 = come_decrement_ref_count2(name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional233;
int __result142__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional233=self==((void*)0),            _if_conditional233) {
                # 365 "./neo-c.h"
                __result142__ = 0;
                return __result142__;
            }
            # 367 "./neo-c.h"
            __result143__ = self->len;
            return __result143__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional235;
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional30;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool same_key_exist_209;
char* it2_210;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct map$2charphsTypeph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
memset(&same_key_exist_209, 0, sizeof(_Bool));
memset(&it2_210, 0, sizeof(char*));
        # 1393 "./neo-c.h"
        # 1390 "./neo-c.h"
        if(_if_conditional235=self->len*10>=self->size,        _if_conditional235) {
            # 1391 "./neo-c.h"
            map$2charphsTypeph_rehash(self);
        }
        # 1393 "./neo-c.h"
        hash_207=string_get_hash_key(key)%self->size;
        # 1394 "./neo-c.h"
        it_208=hash_207;
        # 1452 "./neo-c.h"
        while(_while_condtional30=(_Bool)1,        _while_condtional30) {
            # 1450 "./neo-c.h"
            # 1397 "./neo-c.h"
            if(_if_conditional247=self->item_existance[it_208],            _if_conditional247) {
                # 1420 "./neo-c.h"
                # 1399 "./neo-c.h"
                if(_if_conditional248=string_equals(self->keys[it_208],key),                _if_conditional248) {
                    # 1410 "./neo-c.h"
                    # 1401 "./neo-c.h"
                    if(_if_conditional249=1,                    _if_conditional249) {
                        # 1402 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_208]);
                        # 1403 "./neo-c.h"
                        self->keys[it_208] = come_decrement_ref_count2(self->keys[it_208], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./neo-c.h"
                        self->keys[it_208]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_208]);
                        # 1408 "./neo-c.h"
                        self->keys[it_208]=key;
                    }
                    # 1417 "./neo-c.h"
                    # 1410 "./neo-c.h"
                    if(_if_conditional250=1,                    _if_conditional250) {
                        # 1411 "./neo-c.h"
                        come_call_finalizer2(sType_finalize,self->items[it_208], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./neo-c.h"
                        self->items[it_208]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./neo-c.h"
                        self->items[it_208]=item;
                    }
                    # 1417 "./neo-c.h"
                    break;
                }
                # 1420 "./neo-c.h"
                it_208++;
                # 1430 "./neo-c.h"
                # 1422 "./neo-c.h"
                if(_if_conditional251=it_208>=self->size,                _if_conditional251) {
                    # 1423 "./neo-c.h"
                    it_208=0;
                }
                else {
                    # 1430 "./neo-c.h"
                    # 1425 "./neo-c.h"
                    if(_if_conditional252=it_208==hash_207,                    _if_conditional252) {
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
                self->item_existance[it_208]=(_Bool)1;
                # 1439 "./neo-c.h"
                # 1433 "./neo-c.h"
                if(_if_conditional253=1,                _if_conditional253) {
                    # 1434 "./neo-c.h"
                    self->keys[it_208]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./neo-c.h"
                    self->keys[it_208]=key;
                }
                # 1446 "./neo-c.h"
                # 1439 "./neo-c.h"
                if(_if_conditional254=1,                _if_conditional254) {
                    # 1440 "./neo-c.h"
                    self->items[it_208]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./neo-c.h"
                    self->items[it_208]=item;
                }
                # 1446 "./neo-c.h"
                self->len++;
                # 1448 "./neo-c.h"
                break;
            }
        }
        # 1452 "./neo-c.h"
        same_key_exist_209=(_Bool)0;
        # 1460 "./neo-c.h"
        for(        it2_210=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_210=list$1charp_next(self->key_list)        ){
            # 1458 "./neo-c.h"
            # 1455 "./neo-c.h"
            if(_if_conditional255=string_equals(it2_210,key),            _if_conditional255) {
                # 1456 "./neo-c.h"
                same_key_exist_209=(_Bool)1;
            }
        }
        # 1464 "./neo-c.h"
        # 1460 "./neo-c.h"
        if(_if_conditional256=!same_key_exist_209,        _if_conditional256) {
            # 1461 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1464 "./neo-c.h"
        __result155__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result155__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_190;
void* right_value186;
char** keys_191;
void* right_value187;
struct sType** items_192;
void* right_value188;
_Bool* item_existance_193;
int len_194;
char* it_197;
struct sType* default_value_200;
struct sType* it2_203;
unsigned int hash_204;
int n_205;
_Bool _while_condtional29;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct sType* default_value_206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_190, 0, sizeof(int));
right_value186 = (void*)0;
memset(&keys_191, 0, sizeof(char**));
right_value187 = (void*)0;
memset(&items_192, 0, sizeof(struct sType**));
right_value188 = (void*)0;
memset(&item_existance_193, 0, sizeof(_Bool*));
memset(&len_194, 0, sizeof(int));
memset(&it_197, 0, sizeof(char*));
memset(&default_value_200, 0, sizeof(struct sType*));
memset(&it2_203, 0, sizeof(struct sType*));
memset(&hash_204, 0, sizeof(unsigned int));
memset(&n_205, 0, sizeof(int));
memset(&default_value_206, 0, sizeof(struct sType*));
                # 1337 "./neo-c.h"
                size_190=self->size*10;
                # 1338 "./neo-c.h"
                keys_191=(char**)come_increment_ref_count(((char**)(right_value186=(char**)come_calloc(1, sizeof(char*)*(1*(size_190)), "./neo-c.h", 1338, "char*%"))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./neo-c.h"
                items_192=(struct sType**)come_increment_ref_count(((struct sType**)(right_value187=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_190)), "./neo-c.h", 1339, "sType*%"))));
                come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./neo-c.h"
                item_existance_193=(_Bool*)come_increment_ref_count(((_Bool*)(right_value188=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_190)), "./neo-c.h", 1340, "bool"))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./neo-c.h"
                len_194=0;
                # 1377 "./neo-c.h"
                for(                it_197=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_197=map$2charphsTypeph_next(self)                ){
                    # 1345 "./neo-c.h"
                    # 1346 "./neo-c.h"
                    memset(&default_value_200,0,sizeof(struct sType*));
                    # 1347 "./neo-c.h"
                    it2_203=map$2charphsTypeph_at(self,it_197,default_value_200);
                    # 1348 "./neo-c.h"
                    hash_204=string_get_hash_key(it_197)%size_190;
                    # 1349 "./neo-c.h"
                    n_205=hash_204;
                    # 1375 "./neo-c.h"
                    while(_while_condtional29=(_Bool)1,                    _while_condtional29) {
                        # 1374 "./neo-c.h"
                        # 1352 "./neo-c.h"
                        if(_if_conditional244=item_existance_193[n_205],                        _if_conditional244) {
                            # 1354 "./neo-c.h"
                            n_205++;
                            # 1364 "./neo-c.h"
                            # 1356 "./neo-c.h"
                            if(_if_conditional245=n_205>=size_190,                            _if_conditional245) {
                                # 1357 "./neo-c.h"
                                n_205=0;
                            }
                            else {
                                # 1364 "./neo-c.h"
                                # 1359 "./neo-c.h"
                                if(_if_conditional246=n_205==hash_204,                                _if_conditional246) {
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
                            item_existance_193[n_205]=(_Bool)1;
                            # 1367 "./neo-c.h"
                            keys_191[n_205]=it_197;
                            # 1368 "./neo-c.h"
                            # 1369 "./neo-c.h"
                            items_192[n_205]=map$2charphsTypeph_at(self,it_197,default_value_206);
                            # 1371 "./neo-c.h"
                            len_194++;
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
                self->keys=keys_191;
                # 1382 "./neo-c.h"
                self->items=items_192;
                # 1383 "./neo-c.h"
                self->item_existance=item_existance_193;
                # 1385 "./neo-c.h"
                self->size=size_190;
                # 1386 "./neo-c.h"
                self->len=len_194;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional236;
char* result_195;
char* __result144__;
_Bool _if_conditional237;
char* __result145__;
char* result_196;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_195, 0, sizeof(char*));
memset(&result_196, 0, sizeof(char*));
                    # 1304 "./neo-c.h"
                    # 1299 "./neo-c.h"
                    if(_if_conditional236=self==((void*)0),                    _if_conditional236) {
                        # 1300 "./neo-c.h"
                        # 1301 "./neo-c.h"
                        memset(&result_195,0,sizeof(char*));
                        # 1302 "./neo-c.h"
                        __result144__ = __result_obj__ = result_195;
                        return __result144__;
                    }
                    # 1304 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./neo-c.h"
                    # 1306 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1307 "./neo-c.h"
                        __result145__ = __result_obj__ = self->key_list->it->item;
                        return __result145__;
                    }
                    # 1310 "./neo-c.h"
                    # 1311 "./neo-c.h"
                    memset(&result_196,0,sizeof(char*));
                    # 1312 "./neo-c.h"
                    __result146__ = __result_obj__ = result_196;
                    return __result146__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./neo-c.h"
                    __result147__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result147__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional238;
char* result_198;
char* __result148__;
_Bool _if_conditional239;
char* __result149__;
char* result_199;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(char*));
memset(&result_199, 0, sizeof(char*));
                    # 1321 "./neo-c.h"
                    # 1316 "./neo-c.h"
                    if(_if_conditional238=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional238) {
                        # 1317 "./neo-c.h"
                        # 1318 "./neo-c.h"
                        memset(&result_198,0,sizeof(char*));
                        # 1319 "./neo-c.h"
                        __result148__ = __result_obj__ = result_198;
                        return __result148__;
                    }
                    # 1321 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./neo-c.h"
                    # 1323 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1324 "./neo-c.h"
                        __result149__ = __result_obj__ = self->key_list->it->item;
                        return __result149__;
                    }
                    # 1327 "./neo-c.h"
                    # 1328 "./neo-c.h"
                    memset(&result_199,0,sizeof(char*));
                    # 1329 "./neo-c.h"
                    __result150__ = __result_obj__ = result_199;
                    return __result150__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_201;
unsigned int it_202;
_Bool _while_condtional28;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct sType* __result151__;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct sType* __result152__;
struct sType* __result153__;
struct sType* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_201, 0, sizeof(unsigned int));
memset(&it_202, 0, sizeof(unsigned int));
                        # 1226 "./neo-c.h"
                        hash_201=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./neo-c.h"
                        it_202=hash_201;
                        # 1251 "./neo-c.h"
                        while(_while_condtional28=(_Bool)1,                        _while_condtional28) {
                            # 1249 "./neo-c.h"
                            # 1230 "./neo-c.h"
                            if(_if_conditional240=self->item_existance[it_202],                            _if_conditional240) {
                                # 1237 "./neo-c.h"
                                # 1232 "./neo-c.h"
                                if(_if_conditional241=string_equals(self->keys[it_202],key),                                _if_conditional241) {
                                    # 1234 "./neo-c.h"
                                    __result151__ = __result_obj__ = self->items[it_202];
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result151__;
                                }
                                # 1237 "./neo-c.h"
                                it_202++;
                                # 1245 "./neo-c.h"
                                # 1239 "./neo-c.h"
                                if(_if_conditional242=it_202>=self->size,                                _if_conditional242) {
                                    # 1240 "./neo-c.h"
                                    it_202=0;
                                }
                                else {
                                    # 1245 "./neo-c.h"
                                    # 1242 "./neo-c.h"
                                    if(_if_conditional243=it_202==hash_201,                                    _if_conditional243) {
                                        # 1243 "./neo-c.h"
                                        __result152__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result152__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./neo-c.h"
                                __result153__ = __result_obj__ = default_value;
                                come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result153__;
                            }
                        }
                        # 1251 "./neo-c.h"
                        __result154__ = __result_obj__ = default_value;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result154__;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    # 318 "14struct.c"
    __result157__ = self->sline;
    return __result157__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value190;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
    # 323 "14struct.c"
    __result158__ = __result_obj__ = ((char*)(right_value190=__builtin_string(self->sname)));
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* right_value191;
char* __dec_obj56;
void* right_value192;
char* __dec_obj57;
void* right_value193;
struct sClass* __dec_obj58;
struct sStructNobodyNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
    # 337 "14struct.c"
    self->sline=info->sline;
    # 338 "14struct.c"
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 340 "14struct.c"
    __dec_obj57=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(name))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 341 "14struct.c"
    __dec_obj58=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value193=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 343 "14struct.c"
    __result159__ = __result_obj__ = self;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result159__;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    # 348 "14struct.c"
    __result160__ = (_Bool)1;
    return __result160__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
void* right_value194;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    # 353 "14struct.c"
    __result161__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sStructNobodyNode")));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result161__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value195;
char* name_211;
struct sClass* klass_212;
_Bool _if_conditional261;
void* right_value196;
void* right_value197;
void* right_value198;
struct sType* type_213;
void* right_value199;
_Bool _if_conditional262;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&name_211, 0, sizeof(char*));
memset(&klass_212, 0, sizeof(struct sClass*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&type_213, 0, sizeof(struct sType*));
right_value199 = (void*)0;
    # 358 "14struct.c"
    name_211=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(self->mName))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 359 "14struct.c"
    klass_212=self->mClass;
    # 365 "14struct.c"
    # 361 "14struct.c"
    if(_if_conditional261=map$2charphsClassph_at(info->classes,name_211,((void*)0))==((void*)0),    _if_conditional261) {
        # 362 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_211),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value196=sClass_clone(klass_212)))));
        come_call_finalizer2(sClass_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 365 "14struct.c"
    type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 365, "sType")))),name_211,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 367 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_211),(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(type_213)))));
    come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 375 "14struct.c"
    # 369 "14struct.c"
    if(_if_conditional262=info->output_header_file&&string_operator_not_equals(klass_212->mDeclareSName,info->base_sname),    _if_conditional262) {
    }
    else {
        # 372 "14struct.c"
        add_come_code_at_source_head(info,"struct %s;\n",name_211);
    }
    # 375 "14struct.c"
    __result162__ = (_Bool)1;
    name_211 = come_decrement_ref_count2(name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result162__;
    name_211 = come_decrement_ref_count2(name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    # 380 "14struct.c"
    __result163__ = self->sline;
    return __result163__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value200;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    # 385 "14struct.c"
    __result164__ = __result_obj__ = ((char*)(right_value200=__builtin_string(self->sname)));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value201;
char* __dec_obj59;
struct sGenericsStructNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    # 396 "14struct.c"
    self->sline=info->sline;
    # 397 "14struct.c"
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 399 "14struct.c"
    __result165__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result165__;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 405 "14struct.c"
    __result166__ = (_Bool)1;
    return __result166__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
void* right_value202;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    # 410 "14struct.c"
    __result167__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sGenericsStructNode")));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    # 416 "14struct.c"
    __result168__ = (_Bool)1;
    return __result168__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 421 "14struct.c"
    __result169__ = self->sline;
    return __result169__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value203;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    # 426 "14struct.c"
    __result170__ = __result_obj__ = ((char*)(right_value203=__builtin_string(self->sname)));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value204;
char* __dec_obj60;
void* right_value205;
char* __dec_obj61;
void* right_value206;
struct sClass* __dec_obj62;
struct list$1sNodeph* __dec_obj63;
struct sClassNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    # 444 "14struct.c"
    self->sline=info->sline;
    # 445 "14struct.c"
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(info->sname))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 447 "14struct.c"
    __dec_obj61=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(name))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 448 "14struct.c"
    __dec_obj62=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 450 "14struct.c"
    __dec_obj63=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 452 "14struct.c"
    self->mOutput=output;
    # 454 "14struct.c"
    __result171__ = __result_obj__ = self;
    come_call_finalizer2(sClassNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,methods, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result171__;
    come_call_finalizer2(sClassNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,methods, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sClassNode_terminated(){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 459 "14struct.c"
    __result172__ = (_Bool)1;
    return __result172__;
}

char* sClassNode_kind(){
void* __result_obj__;
void* right_value207;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    # 464 "14struct.c"
    __result173__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sClassNode")));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value208;
struct sClass* klass_214;
void* right_value209;
char* name_215;
_Bool _if_conditional268;
void* right_value210;
_Bool _if_conditional269;
struct sClass* klass2_216;
void* right_value211;
struct list$1tuple2$2charphsTypephph* __dec_obj64;
void* right_value212;
void* right_value213;
struct sType* type_217;
void* right_value214;
_Bool _if_conditional270;
struct list$1sNodeph* o2_saved_218;
struct sNode* it_221;
_Bool _if_conditional275;
_Bool __result181__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
memset(&klass_214, 0, sizeof(struct sClass*));
right_value209 = (void*)0;
memset(&name_215, 0, sizeof(char*));
right_value210 = (void*)0;
memset(&klass2_216, 0, sizeof(struct sClass*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&type_217, 0, sizeof(struct sType*));
right_value214 = (void*)0;
memset(&o2_saved_218, 0, sizeof(struct list$1sNodeph*));
memset(&it_221, 0, sizeof(struct sNode*));
    # 469 "14struct.c"
    klass_214=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=sClass_clone(self->mClass))));
    come_call_finalizer2(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 470 "14struct.c"
    name_215=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(self->mName))));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 480 "14struct.c"
    # 472 "14struct.c"
    if(_if_conditional268=map$2charphsClassph_at(info->classes,name_215,((void*)0))==((void*)0),    _if_conditional268) {
        # 473 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_215),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value210=sClass_clone(klass_214)))));
        come_call_finalizer2(sClass_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        # 480 "14struct.c"
        # 475 "14struct.c"
        if(_if_conditional269=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_215,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_214->mFields)>0,        _if_conditional269) {
            # 476 "14struct.c"
            klass2_216=map$2charphsClassph_at(info->classes,name_215,((void*)0));
            # 477 "14struct.c"
            __dec_obj64=klass2_216->mFields;
            klass2_216->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value211=list$1tuple2$2charphsTypephphp_clone(klass_214->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    # 480 "14struct.c"
    type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value212=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 480, "sType")))),name_215,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 481 "14struct.c"
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_215),(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type_217)))));
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 487 "14struct.c"
    # 483 "14struct.c"
    if(self->mOutput) {
        # 484 "14struct.c"
        output_struct(klass_214,info);
    }
    # 493 "14struct.c"
    for(    o2_saved_218=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_221=list$1sNodeph_begin((o2_saved_218));    !list$1sNodeph_end((o2_saved_218));    it_221=list$1sNodeph_next((o2_saved_218))    ){
        # 491 "14struct.c"
        # 488 "14struct.c"
        if(_if_conditional275=!node_compile(it_221,info),        _if_conditional275) {
            # 489 "14struct.c"
            __result181__ = (_Bool)0;
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,klass_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_215 = come_decrement_ref_count2(name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result181__;
        }
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 493 "14struct.c"
    __result182__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_215 = come_decrement_ref_count2(name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result182__;
    come_call_finalizer2(sClass_finalize,klass_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_215 = come_decrement_ref_count2(name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional271;
struct sNode* result_219;
struct sNode* __result174__;
_Bool _if_conditional272;
struct sNode* __result175__;
struct sNode* result_220;
struct sNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(struct sNode*));
memset(&result_220, 0, sizeof(struct sNode*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional271=self==((void*)0),        _if_conditional271) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_219,0,sizeof(struct sNode*));
            # 288 "./neo-c.h"
            __result174__ = __result_obj__ = result_219;
            return __result174__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result175__ = __result_obj__ = self->it->item;
            return __result175__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_220,0,sizeof(struct sNode*));
        # 298 "./neo-c.h"
        __result176__ = __result_obj__ = result_220;
        return __result176__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result177__ = self==((void*)0)||self->it==((void*)0);
        return __result177__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sNode* result_222;
struct sNode* __result178__;
_Bool _if_conditional274;
struct sNode* __result179__;
struct sNode* result_223;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_222, 0, sizeof(struct sNode*));
memset(&result_223, 0, sizeof(struct sNode*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional273=self==((void*)0)||self->it==((void*)0),        _if_conditional273) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_222,0,sizeof(struct sNode*));
            # 305 "./neo-c.h"
            __result178__ = __result_obj__ = result_222;
            return __result178__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result179__ = __result_obj__ = self->it->item;
            return __result179__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_223,0,sizeof(struct sNode*));
        # 316 "./neo-c.h"
        __result180__ = __result_obj__ = result_223;
        return __result180__;
}

int sClassNode_sline(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    # 498 "14struct.c"
    __result183__ = self->sline;
    return __result183__;
}

char* sClassNode_sname(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value215;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
    # 503 "14struct.c"
    __result184__ = __result_obj__ = ((char*)(right_value215=__builtin_string(self->sname)));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result184__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_224;
_Bool output_225;
_Bool _if_conditional276;
void* right_value216;
void* right_value217;
void* right_value218;
struct sClass* __dec_obj65;
void* right_value219;
void* right_value220;
struct sClass* __dec_obj66;
_Bool _if_conditional277;
struct sClass* parent_class_228;
_Bool _if_conditional278;
void* right_value221;
void* right_value222;
char* parent_class_name_229;
_Bool _if_conditional279;
struct sNode* __result186__;
_Bool _while_condtional32;
_Bool multiple_declare_230;
char* p_231;
int sline_232;
_Bool no_output_err_233;
void* right_value223;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_234;
char* name_235;
_Bool err_236;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value224;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_237;
char* name_238;
_Bool err_239;
void* right_value225;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_240;
char* name2_241;
_Bool _if_conditional286;
void* right_value226;
void* right_value227;
_Bool _while_condtional33;
void* right_value228;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_242;
char* name2_243;
_Bool _if_conditional287;
void* right_value229;
void* right_value230;
void* right_value231;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_244;
char* name_245;
_Bool err_246;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value232;
void* right_value233;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value234;
char* __dec_obj67;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value243;
struct sNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_224, 0, sizeof(struct sClass*));
memset(&output_225, 0, sizeof(_Bool));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&parent_class_228, 0, sizeof(struct sClass*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&parent_class_name_229, 0, sizeof(char*));
memset(&multiple_declare_230, 0, sizeof(_Bool));
memset(&p_231, 0, sizeof(char*));
memset(&sline_232, 0, sizeof(int));
memset(&no_output_err_233, 0, sizeof(_Bool));
right_value223 = (void*)0;
memset(&type_234, 0, sizeof(struct sType*));
memset(&name_235, 0, sizeof(char*));
memset(&err_236, 0, sizeof(_Bool));
memset(&type_234, 0, sizeof(struct sType*));
memset(&name_235, 0, sizeof(char*));
memset(&err_236, 0, sizeof(_Bool));
right_value224 = (void*)0;
memset(&base_type_237, 0, sizeof(struct sType*));
memset(&name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
memset(&base_type_237, 0, sizeof(struct sType*));
memset(&name_238, 0, sizeof(char*));
memset(&err_239, 0, sizeof(_Bool));
right_value225 = (void*)0;
memset(&type2_240, 0, sizeof(struct sType*));
memset(&name2_241, 0, sizeof(char*));
memset(&type2_240, 0, sizeof(struct sType*));
memset(&name2_241, 0, sizeof(char*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&type2_242, 0, sizeof(struct sType*));
memset(&name2_243, 0, sizeof(char*));
memset(&type2_242, 0, sizeof(struct sType*));
memset(&name2_243, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&type2_244, 0, sizeof(struct sType*));
memset(&name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
memset(&type2_244, 0, sizeof(struct sType*));
memset(&name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value243 = (void*)0;
    # 508 "14struct.c"
    # 509 "14struct.c"
    # 522 "14struct.c"
    # 510 "14struct.c"
    if(_if_conditional276=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional276) {
        # 511 "14struct.c"
        output_225=(_Bool)1;
        # 512 "14struct.c"
        __dec_obj65=klass_224;
        klass_224=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 512, "sClass")))),((char*)(right_value217=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 513 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_224));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 516 "14struct.c"
        __dec_obj66=klass_224;
        klass_224=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value220=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer2(sClass_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 520 "14struct.c"
        # 517 "14struct.c"
        if(_if_conditional277=list$1tuple2$2charphsTypephph_length(klass_224->mFields)>0,        _if_conditional277) {
            # 518 "14struct.c"
            output_225=(_Bool)0;
        }
    }
    # 522 "14struct.c"
    list$1tuple2$2charphsTypephph_reset(klass_224->mFields);
    # 524 "14struct.c"
    parent_class_228=((void*)0);
    # 538 "14struct.c"
    # 525 "14struct.c"
    if(_if_conditional278=strmemcmp(info->p,"extends"),    _if_conditional278) {
        # 526 "14struct.c"
        ((char*)(right_value221=parse_word(info)));
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 528 "14struct.c"
        parent_class_name_229=(char*)come_increment_ref_count(((char*)(right_value222=parse_word(info))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 530 "14struct.c"
        parent_class_228=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_229);
        # 536 "14struct.c"
        # 532 "14struct.c"
        if(_if_conditional279=parent_class_228==((void*)0),        _if_conditional279) {
            # 533 "14struct.c"
            err_msg(info,"invalid class name(%s)",parent_class_name_229);
            # 534 "14struct.c"
            __result186__ = __result_obj__ = ((void*)0);
            parent_class_name_229 = come_decrement_ref_count2(parent_class_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,klass_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result186__;
        }
        parent_class_name_229 = come_decrement_ref_count2(parent_class_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 538 "14struct.c"
    expected_next_character(123,info);
    # 602 "14struct.c"
    while(_while_condtional32=(_Bool)1,    _while_condtional32) {
        # 541 "14struct.c"
        multiple_declare_230=(_Bool)0;
        # 559 "14struct.c"
        {
            # 543 "14struct.c"
            p_231=info->p;
            # 544 "14struct.c"
            sline_232=info->sline;
            # 546 "14struct.c"
            no_output_err_233=info->no_output_err;
            # 547 "14struct.c"
            info->no_output_err=(_Bool)1;
            # 548 "14struct.c"
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value223=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_234=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_235=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_236=multiple_assign_var5->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 549 "14struct.c"
            info->no_output_err=no_output_err_233;
            # 555 "14struct.c"
            # 551 "14struct.c"
            if(_if_conditional282=err_236&&*info->p==44,            _if_conditional282) {
                # 552 "14struct.c"
                multiple_declare_230=(_Bool)1;
            }
            # 555 "14struct.c"
            info->p=p_231;
            # 556 "14struct.c"
            info->sline=sline_232;
            come_call_finalizer2(sType_finalize,type_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_235 = come_decrement_ref_count2(name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 591 "14struct.c"
        # 559 "14struct.c"
        if(multiple_declare_230) {
            # 560 "14struct.c"
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value224=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_237=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_238=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_239=multiple_assign_var6->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 562 "14struct.c"
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value225=parse_variable_name((struct sType*)come_increment_ref_count(base_type_237),(_Bool)1,info)));
            type2_240=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name2_241=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 568 "14struct.c"
            # 564 "14struct.c"
            if(_if_conditional286=!info->no_output_err,            _if_conditional286) {
                # 565 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(klass_224->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value227=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value226=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 565, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_241),(struct sType*)come_increment_ref_count(type2_240))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 578 "14struct.c"
            while(_while_condtional33=*info->p==44,            _while_condtional33) {
                # 569 "14struct.c"
                info->p++;
                # 570 "14struct.c"
                skip_spaces_and_lf(info);
                # 572 "14struct.c"
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(right_value228=parse_variable_name((struct sType*)come_increment_ref_count(base_type_237),(_Bool)0,info)));
                type2_242=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name2_243=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 577 "14struct.c"
                # 574 "14struct.c"
                if(_if_conditional287=!info->no_output_err,                _if_conditional287) {
                    # 575 "14struct.c"
                    list$1tuple2$2charphsTypephph_push_back(klass_224->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value230=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value229=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 575, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_243),(struct sType*)come_increment_ref_count(type2_242))))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type2_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name2_243 = come_decrement_ref_count2(name2_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,base_type_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_238 = come_decrement_ref_count2(name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name2_241 = come_decrement_ref_count2(name2_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 580 "14struct.c"
            parse_sharp_v5(info);
            # 581 "14struct.c"
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value231=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_244=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_245=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_246=multiple_assign_var9->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 587 "14struct.c"
            # 582 "14struct.c"
            if(_if_conditional288=!err_246,            _if_conditional288) {
                # 583 "14struct.c"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 584 "14struct.c"
                exit(2);
            }
            # 590 "14struct.c"
            # 587 "14struct.c"
            if(_if_conditional289=!info->no_output_err,            _if_conditional289) {
                # 588 "14struct.c"
                list$1tuple2$2charphsTypephph_push_back(klass_224->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value233=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value232=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 588, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_245),(struct sType*)come_increment_ref_count(type2_244))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type2_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_245 = come_decrement_ref_count2(name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 591 "14struct.c"
        expected_next_character(59,info);
        # 593 "14struct.c"
        parse_sharp_v5(info);
        # 600 "14struct.c"
        # 595 "14struct.c"
        if(_if_conditional290=*info->p==125,        _if_conditional290) {
            # 596 "14struct.c"
            info->p++;
            # 597 "14struct.c"
            skip_spaces_and_lf(info);
            # 598 "14struct.c"
            break;
        }
        # 600 "14struct.c"
        parse_sharp_v5(info);
    }
    # 607 "14struct.c"
    # 602 "14struct.c"
    if(parent_class_228) {
        # 603 "14struct.c"
        __dec_obj67=klass_224->mParentClassName;
        klass_224->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value234=string_clone(parent_class_228->mName))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 604 "14struct.c"
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_224->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value235=sClass_clone(klass_224)))));
        come_call_finalizer2(sClass_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 607 "14struct.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 607, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value238=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value236=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 607, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_224),output_225,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result189__ = __result_obj__ = ((struct sNode*)(right_value243=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sStructNode_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStructNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result189__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_226;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsTypephph* prev_it_227;
struct list$1tuple2$2charphsTypephph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_226, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_227, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 433 "./neo-c.h"
        it_226=self->head;
        # 440 "./neo-c.h"
        while(_while_condtional31=it_226!=((void*)0),        _while_condtional31) {
            # 435 "./neo-c.h"
            prev_it_227=it_226;
            # 436 "./neo-c.h"
            it_226=it_226->next;
            # 437 "./neo-c.h"
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 440 "./neo-c.h"
        self->head=((void*)0);
        # 441 "./neo-c.h"
        self->tail=((void*)0);
        # 443 "./neo-c.h"
        self->len=0;
        # 445 "./neo-c.h"
        __result185__ = __result_obj__ = self;
        return __result185__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional280;
_Bool _if_conditional281;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional280=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional280) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional281=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional281) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional284;
_Bool _if_conditional285;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sTypephcharphp_finalize"
                # 0 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional284=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional284) {
                    # 0 "tuple2$2sTypephcharphp_finalize"
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2sTypephcharphp_finalize"
                # 1 "tuple2$2sTypephcharphp_finalize"
                if(_if_conditional285=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional285) {
                    # 1 "tuple2$2sTypephcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional301;
char* source_head_248;
void* right_value244;
char* type_name_249;
_Bool _if_conditional302;
struct sClass* struct_class_250;
_Bool _if_conditional303;
void* right_value245;
void* right_value246;
struct sClass* __dec_obj71;
struct sClass* __dec_obj72;
char* source_tail_251;
void* right_value247;
void* right_value248;
struct buffer* header_252;
void* right_value249;
void* right_value250;
void* right_value251;
void* right_value252;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value257;
struct sNode* __result192__;
_Bool _if_conditional312;
_Bool _while_condtional35;
void* right_value258;
char* T_256;
void* right_value262;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct sClass* generics_class_260;
_Bool _if_conditional317;
void* right_value263;
void* right_value264;
struct sClass* __dec_obj79;
_Bool _if_conditional318;
_Bool _while_condtional36;
void* right_value265;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type2_261;
char* name_262;
_Bool err_263;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value266;
void* right_value267;
_Bool _while_condtional37;
void* right_value268;
char* name2_264;
void* right_value269;
struct sType* type3_265;
_Bool _if_conditional321;
_Bool no_comma_266;
void* right_value270;
struct sNode* node_267;
struct sNode* __dec_obj80;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
_Bool _if_conditional322;
char* source_tail_268;
void* right_value275;
void* right_value276;
struct buffer* header_269;
void* right_value277;
void* right_value278;
void* right_value279;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value282;
struct sNode* __result197__;
_Bool output_271;
struct sClass* struct_class_272;
_Bool _if_conditional327;
void* right_value283;
void* right_value284;
struct sClass* __dec_obj82;
void* right_value285;
struct sClass* __dec_obj83;
_Bool _if_conditional328;
struct sClass* parent_class_273;
_Bool _if_conditional329;
void* right_value286;
void* right_value287;
char* parent_class_name_274;
_Bool _if_conditional330;
struct sNode* __result198__;
_Bool _while_condtional38;
_Bool multiple_declare_275;
char* p_276;
int sline_277;
_Bool no_output_err_278;
void* right_value288;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_279;
char* name_280;
_Bool err_281;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value289;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* base_type_282;
char* name_283;
_Bool err_284;
void* right_value290;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_285;
char* name2_286;
void* right_value291;
void* right_value292;
_Bool _while_condtional39;
void* right_value293;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_287;
char* name2_288;
void* right_value294;
void* right_value295;
void* right_value296;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type2_289;
char* name_290;
_Bool err_291;
_Bool _if_conditional333;
void* right_value297;
void* right_value298;
_Bool _if_conditional334;
struct sClass* klass2_292;
_Bool _if_conditional335;
_Bool _if_conditional336;
char* source_tail_293;
void* right_value299;
void* right_value300;
struct buffer* header_294;
void* right_value301;
_Bool _if_conditional337;
void* right_value302;
char* __dec_obj84;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value312;
struct sNode* __result201__;
_Bool _if_conditional347;
char* source_head_296;
void* right_value313;
char* type_name_297;
struct sClass* parent_class_298;
_Bool _if_conditional348;
void* right_value314;
void* right_value315;
char* parent_class_name_299;
_Bool _if_conditional349;
struct sNode* __result202__;
void* right_value316;
void* right_value317;
struct list$1sClassp* parent_classes_302;
struct sClass* parent_class2_303;
_Bool output_307;
struct sClass* struct_class_308;
_Bool _if_conditional352;
void* right_value321;
void* right_value322;
struct sClass* __dec_obj88;
void* right_value323;
struct sClass* __dec_obj89;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value324;
char* __dec_obj90;
void* right_value325;
void* right_value331;
struct list$1sClassp* o2_saved_314;
struct sClass* parent_317;
struct list$1tuple2$2charphsTypephph* o2_saved_320;
struct tuple2$2charphsTypeph* it_321;
void* right_value332;
_Bool _if_conditional362;
struct sClass* klass2_322;
_Bool _if_conditional363;
void* right_value333;
char* __dec_obj91;
void* right_value334;
void* right_value335;
struct list$1sClassp* o2_saved_323;
struct sClass* parent_324;
struct list$1tuple2$2charphsTypephph* o2_saved_325;
struct tuple2$2charphsTypeph* it_326;
void* right_value336;
struct list$1tuple2$2charphsTypephph* o2_saved_327;
struct tuple2$2charphsTypeph* it_328;
void* right_value337;
char* head_329;
char* p_saved_330;
int sline_saved_331;
void* right_value338;
void* right_value339;
struct list$1sNodeph* methods_332;
_Bool _while_condtional42;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool include__337;
_Bool multiple_declare_338;
_Bool _if_conditional370;
char* p_339;
int sline_340;
_Bool _if_conditional371;
_Bool no_output_err_341;
void* right_value340;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* type_342;
char* name_343;
_Bool err_344;
_Bool _if_conditional372;
_Bool define_function_flag_345;
_Bool _if_conditional373;
char* p_346;
int sline_347;
_Bool _if_conditional374;
_Bool invalid_type_348;
_Bool _if_conditional375;
void* right_value341;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* result_type_349;
char* fun_name_350;
_Bool err_351;
char* word_352;
_Bool _if_conditional376;
void* right_value342;
char* __dec_obj92;
_Bool _if_conditional377;
void* right_value343;
char* __dec_obj93;
char* __dec_obj94;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _while_condtional44;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value344;
char* __dec_obj95;
_Bool _if_conditional384;
_Bool _if_conditional385;
char* tail_353;
int pointer_num_354;
void* right_value345;
void* right_value346;
struct sType* __dec_obj96;
void* right_value347;
struct sNode* method_355;
struct sType* __dec_obj97;
_Bool _if_conditional388;
void* right_value351;
struct tuple3$3sTypephcharphbool* multiple_assign_var18;
struct sType* base_type_359;
char* name_360;
_Bool err_361;
void* right_value352;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_362;
char* name2_363;
void* right_value353;
void* right_value354;
_Bool _while_condtional45;
void* right_value355;
struct tuple2$2sTypephcharph* multiple_assign_var20;
struct sType* type2_364;
char* name2_365;
void* right_value356;
void* right_value357;
_Bool _if_conditional389;
void* right_value358;
void* right_value359;
char* module_name_366;
void* right_value360;
void* right_value361;
struct list$1charph* params_367;
_Bool _if_conditional390;
_Bool _while_condtional46;
void* right_value362;
char* word_368;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional402;
struct sNode* __result219__;
struct sClassModule* module_372;
_Bool _if_conditional404;
void* right_value363;
void* right_value369;
int i_374;
struct list$1charph* o2_saved_375;
char* it_378;
void* right_value373;
void* right_value374;
struct tuple3$3sTypephcharphbool* multiple_assign_var21;
struct sType* type2_405;
char* name_406;
_Bool err_407;
_Bool _if_conditional433;
void* right_value375;
void* right_value376;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
void* right_value377;
void* right_value378;
void* right_value379;
void* right_value380;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* right_value386;
struct sNode* __result248__;
void* right_value387;
struct sNode* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_248, 0, sizeof(char*));
right_value244 = (void*)0;
memset(&type_name_249, 0, sizeof(char*));
memset(&struct_class_250, 0, sizeof(struct sClass*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&source_tail_251, 0, sizeof(char*));
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&header_252, 0, sizeof(struct buffer*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&T_256, 0, sizeof(char*));
right_value262 = (void*)0;
memset(&generics_class_260, 0, sizeof(struct sClass*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&type2_261, 0, sizeof(struct sType*));
memset(&name_262, 0, sizeof(char*));
memset(&err_263, 0, sizeof(_Bool));
memset(&type2_261, 0, sizeof(struct sType*));
memset(&name_262, 0, sizeof(char*));
memset(&err_263, 0, sizeof(_Bool));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&name2_264, 0, sizeof(char*));
right_value269 = (void*)0;
memset(&type3_265, 0, sizeof(struct sType*));
memset(&no_comma_266, 0, sizeof(_Bool));
right_value270 = (void*)0;
memset(&node_267, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&source_tail_268, 0, sizeof(char*));
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&header_269, 0, sizeof(struct buffer*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value282 = (void*)0;
memset(&output_271, 0, sizeof(_Bool));
memset(&struct_class_272, 0, sizeof(struct sClass*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&parent_class_273, 0, sizeof(struct sClass*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&parent_class_name_274, 0, sizeof(char*));
memset(&multiple_declare_275, 0, sizeof(_Bool));
memset(&p_276, 0, sizeof(char*));
memset(&sline_277, 0, sizeof(int));
memset(&no_output_err_278, 0, sizeof(_Bool));
right_value288 = (void*)0;
memset(&type_279, 0, sizeof(struct sType*));
memset(&name_280, 0, sizeof(char*));
memset(&err_281, 0, sizeof(_Bool));
memset(&type_279, 0, sizeof(struct sType*));
memset(&name_280, 0, sizeof(char*));
memset(&err_281, 0, sizeof(_Bool));
right_value289 = (void*)0;
memset(&base_type_282, 0, sizeof(struct sType*));
memset(&name_283, 0, sizeof(char*));
memset(&err_284, 0, sizeof(_Bool));
memset(&base_type_282, 0, sizeof(struct sType*));
memset(&name_283, 0, sizeof(char*));
memset(&err_284, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&type2_285, 0, sizeof(struct sType*));
memset(&name2_286, 0, sizeof(char*));
memset(&type2_285, 0, sizeof(struct sType*));
memset(&name2_286, 0, sizeof(char*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&type2_287, 0, sizeof(struct sType*));
memset(&name2_288, 0, sizeof(char*));
memset(&type2_287, 0, sizeof(struct sType*));
memset(&name2_288, 0, sizeof(char*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&type2_289, 0, sizeof(struct sType*));
memset(&name_290, 0, sizeof(char*));
memset(&err_291, 0, sizeof(_Bool));
memset(&type2_289, 0, sizeof(struct sType*));
memset(&name_290, 0, sizeof(char*));
memset(&err_291, 0, sizeof(_Bool));
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&klass2_292, 0, sizeof(struct sClass*));
memset(&source_tail_293, 0, sizeof(char*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&header_294, 0, sizeof(struct buffer*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value312 = (void*)0;
memset(&source_head_296, 0, sizeof(char*));
right_value313 = (void*)0;
memset(&type_name_297, 0, sizeof(char*));
memset(&parent_class_298, 0, sizeof(struct sClass*));
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&parent_class_name_299, 0, sizeof(char*));
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&parent_classes_302, 0, sizeof(struct list$1sClassp*));
memset(&parent_class2_303, 0, sizeof(struct sClass*));
memset(&output_307, 0, sizeof(_Bool));
memset(&struct_class_308, 0, sizeof(struct sClass*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value331 = (void*)0;
memset(&o2_saved_314, 0, sizeof(struct list$1sClassp*));
memset(&parent_317, 0, sizeof(struct sClass*));
memset(&o2_saved_320, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_321, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value332 = (void*)0;
memset(&klass2_322, 0, sizeof(struct sClass*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&o2_saved_323, 0, sizeof(struct list$1sClassp*));
memset(&parent_324, 0, sizeof(struct sClass*));
memset(&o2_saved_325, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_326, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value336 = (void*)0;
memset(&o2_saved_327, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_328, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value337 = (void*)0;
memset(&head_329, 0, sizeof(char*));
memset(&p_saved_330, 0, sizeof(char*));
memset(&sline_saved_331, 0, sizeof(int));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&methods_332, 0, sizeof(struct list$1sNodeph*));
memset(&include__337, 0, sizeof(_Bool));
memset(&multiple_declare_338, 0, sizeof(_Bool));
memset(&p_339, 0, sizeof(char*));
memset(&sline_340, 0, sizeof(int));
memset(&no_output_err_341, 0, sizeof(_Bool));
right_value340 = (void*)0;
memset(&type_342, 0, sizeof(struct sType*));
memset(&name_343, 0, sizeof(char*));
memset(&err_344, 0, sizeof(_Bool));
memset(&type_342, 0, sizeof(struct sType*));
memset(&name_343, 0, sizeof(char*));
memset(&err_344, 0, sizeof(_Bool));
memset(&define_function_flag_345, 0, sizeof(_Bool));
memset(&p_346, 0, sizeof(char*));
memset(&sline_347, 0, sizeof(int));
memset(&invalid_type_348, 0, sizeof(_Bool));
right_value341 = (void*)0;
memset(&result_type_349, 0, sizeof(struct sType*));
memset(&fun_name_350, 0, sizeof(char*));
memset(&err_351, 0, sizeof(_Bool));
memset(&result_type_349, 0, sizeof(struct sType*));
memset(&fun_name_350, 0, sizeof(char*));
memset(&err_351, 0, sizeof(_Bool));
memset(&word_352, 0, sizeof(char*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&tail_353, 0, sizeof(char*));
memset(&pointer_num_354, 0, sizeof(int));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&method_355, 0, sizeof(struct sNode*));
right_value351 = (void*)0;
memset(&base_type_359, 0, sizeof(struct sType*));
memset(&name_360, 0, sizeof(char*));
memset(&err_361, 0, sizeof(_Bool));
memset(&base_type_359, 0, sizeof(struct sType*));
memset(&name_360, 0, sizeof(char*));
memset(&err_361, 0, sizeof(_Bool));
right_value352 = (void*)0;
memset(&type2_362, 0, sizeof(struct sType*));
memset(&name2_363, 0, sizeof(char*));
memset(&type2_362, 0, sizeof(struct sType*));
memset(&name2_363, 0, sizeof(char*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&type2_364, 0, sizeof(struct sType*));
memset(&name2_365, 0, sizeof(char*));
memset(&type2_364, 0, sizeof(struct sType*));
memset(&name2_365, 0, sizeof(char*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
memset(&module_name_366, 0, sizeof(char*));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&params_367, 0, sizeof(struct list$1charph*));
right_value362 = (void*)0;
memset(&word_368, 0, sizeof(char*));
memset(&module_372, 0, sizeof(struct sClassModule*));
right_value363 = (void*)0;
right_value369 = (void*)0;
memset(&i_374, 0, sizeof(int));
memset(&o2_saved_375, 0, sizeof(struct list$1charph*));
memset(&it_378, 0, sizeof(char*));
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&type2_405, 0, sizeof(struct sType*));
memset(&name_406, 0, sizeof(char*));
memset(&err_407, 0, sizeof(_Bool));
memset(&type2_405, 0, sizeof(struct sType*));
memset(&name_406, 0, sizeof(char*));
memset(&err_407, 0, sizeof(_Bool));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
    # 1172 "14struct.c"
    # 612 "14struct.c"
    if(_if_conditional301=charp_operator_equals(buf,"struct"),    _if_conditional301) {
        # 613 "14struct.c"
        source_head_248=head;
        # 615 "14struct.c"
        type_name_249=(char*)come_increment_ref_count(((char*)(right_value244=parse_word(info))));
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 856 "14struct.c"
        # 617 "14struct.c"
        if(_if_conditional302=*info->p==59,        _if_conditional302) {
            # 618 "14struct.c"
            info->p++;
            # 619 "14struct.c"
            skip_spaces_and_lf(info);
            # 621 "14struct.c"
            # 631 "14struct.c"
            # 622 "14struct.c"
            if(_if_conditional303=map$2charphsClassph_at(info->classes,type_name_249,((void*)0))==((void*)0),            _if_conditional303) {
                # 623 "14struct.c"
                __dec_obj71=struct_class_250;
                struct_class_250=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value246=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value245=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 623, "sClass")))),type_name_249,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer2(sClass_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 624 "14struct.c"
                struct_class_250->mNobodyStruct=(_Bool)1;
            }
            else {
                # 627 "14struct.c"
                __dec_obj72=struct_class_250;
                struct_class_250=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_249,((void*)0)));
                come_call_finalizer2(sClass_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 628 "14struct.c"
                struct_class_250->mNobodyStruct=(_Bool)1;
            }
            # 631 "14struct.c"
            source_tail_251=info->p;
            # 633 "14struct.c"
            header_252=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value248=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value247=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 633, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 634 "14struct.c"
            buffer_append(header_252,source_head_248,source_tail_251-source_head_248);
            # 636 "14struct.c"
            add_come_code_at_come_header(info,"%s",((char*)(right_value249=buffer_to_string(header_252))));
            right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 638 "14struct.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 638, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value252=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value250=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 638, "sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(type_name_249)))),(struct sClass*)come_increment_ref_count(struct_class_250),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result192__ = __result_obj__ = ((struct sNode*)(right_value257=_inf_value2));
            come_call_finalizer2(sClass_finalize,struct_class_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_249 = come_decrement_ref_count2(type_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result192__;
            come_call_finalizer2(sClass_finalize,struct_class_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 855 "14struct.c"
            # 641 "14struct.c"
            if(_if_conditional312=*info->p==60,            _if_conditional312) {
                # 642 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 644 "14struct.c"
                info->p++;
                # 645 "14struct.c"
                skip_spaces_and_lf(info);
                # 666 "14struct.c"
                while(_while_condtional35=(_Bool)1,                _while_condtional35) {
                    # 648 "14struct.c"
                    T_256=(char*)come_increment_ref_count(((char*)(right_value258=parse_word(info))));
                    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 649 "14struct.c"
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value262=string_clone(T_256)))));
                    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 664 "14struct.c"
                    # 651 "14struct.c"
                    if(_if_conditional315=*info->p==62,                    _if_conditional315) {
                        # 652 "14struct.c"
                        info->p++;
                        # 653 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 654 "14struct.c"
                        T_256 = come_decrement_ref_count2(T_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        # 664 "14struct.c"
                        # 656 "14struct.c"
                        if(_if_conditional316=*info->p==44,                        _if_conditional316) {
                            # 657 "14struct.c"
                            info->p++;
                            # 658 "14struct.c"
                            skip_spaces_and_lf(info);
                        }
                        else {
                            # 661 "14struct.c"
                            err_msg(info,"invalid generics struct definition");
                            # 662 "14struct.c"
                            exit(2);
                        }
                    }
                    T_256 = come_decrement_ref_count2(T_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 666 "14struct.c"
                # 675 "14struct.c"
                # 667 "14struct.c"
                if(_if_conditional317=map$2charphsClassph_at(info->generics_classes,type_name_249,((void*)0))!=((void*)0),                _if_conditional317) {
                    # 668 "14struct.c"
                    err_msg(info,"redifined generics struct(%s)",type_name_249);
                    # 669 "14struct.c"
                    exit(2);
                }
                else {
                    # 672 "14struct.c"
                    __dec_obj79=generics_class_260;
                    generics_class_260=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value264=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value263=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 672, "sClass")))),type_name_249,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 679 "14struct.c"
                # 675 "14struct.c"
                if(_if_conditional318=map$2charphsClassph_at(info->generics_classes,type_name_249,((void*)0))==((void*)0),                _if_conditional318) {
                    # 676 "14struct.c"
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_249),(struct sClass*)come_increment_ref_count(generics_class_260));
                }
                # 679 "14struct.c"
                expected_next_character(123,info);
                # 733 "14struct.c"
                while(_while_condtional36=(_Bool)1,                _while_condtional36) {
                    # 682 "14struct.c"
                    parse_sharp_v5(info);
                    # 684 "14struct.c"
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value265=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_261=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_262=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_263=multiple_assign_var10->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 691 "14struct.c"
                    # 686 "14struct.c"
                    if(_if_conditional319=!err_263,                    _if_conditional319) {
                        # 687 "14struct.c"
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        # 688 "14struct.c"
                        exit(2);
                    }
                    # 721 "14struct.c"
                    # 691 "14struct.c"
                    if(_if_conditional320=*info->p==44,                    _if_conditional320) {
                        # 692 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(generics_class_260->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value267=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value266=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 692, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_262),(struct sType*)come_increment_ref_count(type2_261))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 716 "14struct.c"
                        while(_while_condtional37=*info->p==44,                        _while_condtional37) {
                            # 695 "14struct.c"
                            info->p++;
                            # 696 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 698 "14struct.c"
                            name2_264=(char*)come_increment_ref_count(((char*)(right_value268=parse_word(info))));
                            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 700 "14struct.c"
                            type3_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(type2_261))));
                            come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 714 "14struct.c"
                            # 702 "14struct.c"
                            if(_if_conditional321=*info->p==58,                            _if_conditional321) {
                                # 703 "14struct.c"
                                info->p++;
                                # 704 "14struct.c"
                                skip_spaces_and_lf(info);
                                # 706 "14struct.c"
                                no_comma_266=info->no_comma;
                                # 707 "14struct.c"
                                info->no_comma=(_Bool)1;
                                # 708 "14struct.c"
                                node_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_v13(info))));
                                if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 709 "14struct.c"
                                info->no_comma=no_comma_266;
                                # 711 "14struct.c"
                                __dec_obj80=type3_265->mSizeNum;
                                type3_265->mSizeNum=(struct sNode*)come_increment_ref_count(node_267);
                                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_267) { node_267 = come_decrement_ref_count2(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 714 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(generics_class_260->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value272=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value271=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 714, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_264),(struct sType*)come_increment_ref_count(type3_265))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            name2_264 = come_decrement_ref_count2(name2_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type3_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 718 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(generics_class_260->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value274=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value273=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 718, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_262),(struct sType*)come_increment_ref_count(type2_261))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 721 "14struct.c"
                    expected_next_character(59,info);
                    # 723 "14struct.c"
                    parse_sharp_v5(info);
                    # 730 "14struct.c"
                    # 725 "14struct.c"
                    if(_if_conditional322=*info->p==125,                    _if_conditional322) {
                        # 726 "14struct.c"
                        info->p++;
                        # 727 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 728 "14struct.c"
                        come_call_finalizer2(sType_finalize,type2_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_262 = come_decrement_ref_count2(name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    # 730 "14struct.c"
                    parse_sharp_v5(info);
                    come_call_finalizer2(sType_finalize,type2_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_262 = come_decrement_ref_count2(name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 733 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 735 "14struct.c"
                source_tail_268=info->p;
                # 737 "14struct.c"
                header_269=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value275=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 737, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 738 "14struct.c"
                buffer_append_str(header_269,"struct ");
                # 739 "14struct.c"
                buffer_append(header_269,source_head_248,source_tail_268-source_head_248);
                # 741 "14struct.c"
                add_come_code_at_come_header(info,"%s;\n",((char*)(right_value277=buffer_to_string(header_269))));
                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 743 "14struct.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 743, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value279=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value278=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 743, "sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result197__ = __result_obj__ = ((struct sNode*)(right_value282=_inf_value3));
                come_call_finalizer2(sClass_finalize,generics_class_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_249 = come_decrement_ref_count2(type_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result197__;
                come_call_finalizer2(sClass_finalize,generics_class_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 746 "14struct.c"
                output_271=(_Bool)1;
                # 748 "14struct.c"
                # 759 "14struct.c"
                # 749 "14struct.c"
                if(_if_conditional327=map$2charphsClassph_at(info->classes,type_name_249,((void*)0))==((void*)0),                _if_conditional327) {
                    # 750 "14struct.c"
                    __dec_obj82=struct_class_272;
                    struct_class_272=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value284=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value283=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 750, "sClass")))),type_name_249,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 753 "14struct.c"
                    __dec_obj83=struct_class_272;
                    struct_class_272=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value285=sClass_clone(map$2charphsClassph_at(info->classes,type_name_249,((void*)0))))));
                    come_call_finalizer2(sClass_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 757 "14struct.c"
                    # 754 "14struct.c"
                    if(_if_conditional328=list$1tuple2$2charphsTypephph_length(struct_class_272->mFields)>0,                    _if_conditional328) {
                        # 755 "14struct.c"
                        output_271=(_Bool)0;
                    }
                }
                # 759 "14struct.c"
                parent_class_273=((void*)0);
                # 773 "14struct.c"
                # 760 "14struct.c"
                if(_if_conditional329=strmemcmp(info->p,"extends"),                _if_conditional329) {
                    # 761 "14struct.c"
                    ((char*)(right_value286=parse_word(info)));
                    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 763 "14struct.c"
                    parent_class_name_274=(char*)come_increment_ref_count(((char*)(right_value287=parse_word(info))));
                    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 765 "14struct.c"
                    parent_class_273=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_274);
                    # 771 "14struct.c"
                    # 767 "14struct.c"
                    if(_if_conditional330=parent_class_273==((void*)0),                    _if_conditional330) {
                        # 768 "14struct.c"
                        err_msg(info,"invalid class name(%s)",parent_class_name_274);
                        # 769 "14struct.c"
                        __result198__ = __result_obj__ = ((void*)0);
                        parent_class_name_274 = come_decrement_ref_count2(parent_class_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sClass_finalize,struct_class_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_249 = come_decrement_ref_count2(type_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result198__;
                    }
                    parent_class_name_274 = come_decrement_ref_count2(parent_class_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 773 "14struct.c"
                expected_next_character(123,info);
                # 834 "14struct.c"
                while(_while_condtional38=(_Bool)1,                _while_condtional38) {
                    # 776 "14struct.c"
                    parse_sharp_v5(info);
                    # 778 "14struct.c"
                    multiple_declare_275=(_Bool)0;
                    # 796 "14struct.c"
                    {
                        # 780 "14struct.c"
                        p_276=info->p;
                        # 781 "14struct.c"
                        sline_277=info->sline;
                        # 783 "14struct.c"
                        no_output_err_278=info->no_output_err;
                        # 784 "14struct.c"
                        info->no_output_err=(_Bool)1;
                        # 785 "14struct.c"
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value288=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type_279=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_280=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_281=multiple_assign_var11->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 786 "14struct.c"
                        info->no_output_err=no_output_err_278;
                        # 792 "14struct.c"
                        # 788 "14struct.c"
                        if(_if_conditional331=err_281&&*info->p==44,                        _if_conditional331) {
                            # 789 "14struct.c"
                            multiple_declare_275=(_Bool)1;
                        }
                        # 792 "14struct.c"
                        info->p=p_276;
                        # 793 "14struct.c"
                        info->sline=sline_277;
                        come_call_finalizer2(sType_finalize,type_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_280 = come_decrement_ref_count2(name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 822 "14struct.c"
                    # 796 "14struct.c"
                    if(multiple_declare_275) {
                        # 797 "14struct.c"
                        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(right_value289=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_282=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name_283=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        err_284=multiple_assign_var12->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 799 "14struct.c"
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value290=parse_variable_name((struct sType*)come_increment_ref_count(base_type_282),(_Bool)1,info)));
                        type2_285=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_286=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 801 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_272->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value292=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value291=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 801, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_286),(struct sType*)come_increment_ref_count(type2_285))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 811 "14struct.c"
                        while(_while_condtional39=*info->p==44,                        _while_condtional39) {
                            # 804 "14struct.c"
                            info->p++;
                            # 805 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 807 "14struct.c"
                            multiple_assign_var14=((struct tuple2$2sTypephcharph*)(right_value293=parse_variable_name((struct sType*)come_increment_ref_count(base_type_282),(_Bool)0,info)));
                            type2_287=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                            name2_288=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 809 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(struct_class_272->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value295=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value294=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 809, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_288),(struct sType*)come_increment_ref_count(type2_287))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name2_288 = come_decrement_ref_count2(name2_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(sType_finalize,base_type_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_283 = come_decrement_ref_count2(name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type2_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name2_286 = come_decrement_ref_count2(name2_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 813 "14struct.c"
                        multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(right_value296=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_289=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                        name_290=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        err_291=multiple_assign_var15->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 819 "14struct.c"
                        # 814 "14struct.c"
                        if(_if_conditional333=!err_291,                        _if_conditional333) {
                            # 815 "14struct.c"
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            # 816 "14struct.c"
                            exit(2);
                        }
                        # 819 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_272->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value298=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value297=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 819, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_290),(struct sType*)come_increment_ref_count(type2_289))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type2_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_290 = come_decrement_ref_count2(name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 822 "14struct.c"
                    expected_next_character(59,info);
                    # 824 "14struct.c"
                    parse_sharp_v5(info);
                    # 831 "14struct.c"
                    # 826 "14struct.c"
                    if(_if_conditional334=*info->p==125,                    _if_conditional334) {
                        # 827 "14struct.c"
                        info->p++;
                        # 828 "14struct.c"
                        skip_spaces_and_lf(info);
                        # 829 "14struct.c"
                        break;
                    }
                    # 831 "14struct.c"
                    parse_sharp_v5(info);
                }
                # 834 "14struct.c"
                list$1charph_reset(info->generics_type_names);
                # 836 "14struct.c"
                klass2_292=map$2charphsClassph_at(info->classes,type_name_249,((void*)0));
                # 848 "14struct.c"
                # 838 "14struct.c"
                if(_if_conditional335=klass2_292==((void*)0)||klass2_292->mNobodyStruct,                _if_conditional335) {
                    # 839 "14struct.c"
                    # 839 "14struct.c"
                    if(klass2_292) {
                        # 839 "14struct.c"
                        klass2_292->mNobodyStruct=(_Bool)0;
                    }
                    # 840 "14struct.c"
                    source_tail_293=info->p;
                    # 842 "14struct.c"
                    header_294=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value300=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 842, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 843 "14struct.c"
                    buffer_append(header_294,source_head_248,source_tail_293-source_head_248);
                    # 845 "14struct.c"
                    add_come_code_at_come_header(info,"%s;\n",((char*)(right_value301=buffer_to_string(header_294))));
                    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,header_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 853 "14struct.c"
                # 848 "14struct.c"
                if(parent_class_273) {
                    # 849 "14struct.c"
                    __dec_obj84=struct_class_272->mParentClassName;
                    struct_class_272->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value302=string_clone(parent_class_273->mName))));
                    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 850 "14struct.c"
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_272->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value303=sClass_clone(struct_class_272)))));
                    come_call_finalizer2(sClass_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 853 "14struct.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 853, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value307=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value304=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 853, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(type_name_249)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value306=sClass_clone(struct_class_272)))),output_271,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result201__ = __result_obj__ = ((struct sNode*)(right_value312=_inf_value4));
                come_call_finalizer2(sClass_finalize,struct_class_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_249 = come_decrement_ref_count2(type_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sStructNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStructNode_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result201__;
                come_call_finalizer2(sClass_finalize,struct_class_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_249 = come_decrement_ref_count2(type_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1172 "14struct.c"
        # 857 "14struct.c"
        if(_if_conditional347=charp_operator_equals(buf,"class"),        _if_conditional347) {
            # 858 "14struct.c"
            source_head_296=head;
            # 860 "14struct.c"
            type_name_297=(char*)come_increment_ref_count(((char*)(right_value313=parse_word(info))));
            right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 862 "14struct.c"
            parent_class_298=((void*)0);
            # 877 "14struct.c"
            # 863 "14struct.c"
            if(_if_conditional348=strmemcmp(info->p,"extends"),            _if_conditional348) {
                # 864 "14struct.c"
                ((char*)(right_value314=parse_word(info)));
                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 866 "14struct.c"
                parent_class_name_299=(char*)come_increment_ref_count(((char*)(right_value315=parse_word(info))));
                right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 868 "14struct.c"
                parent_class_298=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_299);
                # 874 "14struct.c"
                # 870 "14struct.c"
                if(_if_conditional349=parent_class_298==((void*)0),                _if_conditional349) {
                    # 871 "14struct.c"
                    err_msg(info,"invalid class name(%s)",parent_class_name_299);
                    # 872 "14struct.c"
                    __result202__ = __result_obj__ = ((void*)0);
                    parent_class_name_299 = come_decrement_ref_count2(parent_class_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_297 = come_decrement_ref_count2(type_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result202__;
                }
                parent_class_name_299 = come_decrement_ref_count2(parent_class_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 877 "14struct.c"
            parent_classes_302=(struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value317=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value316=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 877, "list$1sClassp"))))))));
            come_call_finalizer2(list$1sClasspp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sClasspp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 879 "14struct.c"
            parent_class2_303=parent_class_298;
            # 885 "14struct.c"
            while(parent_class2_303) {
                # 881 "14struct.c"
                list$1sClassp_add(parent_classes_302,parent_class2_303);
                # 882 "14struct.c"
                parent_class2_303=map$2charphsClassphp_operator_load_element(info->classes,parent_class_298->mParentClassName);
            }
            # 885 "14struct.c"
            output_307=(_Bool)1;
            # 887 "14struct.c"
            # 898 "14struct.c"
            # 888 "14struct.c"
            if(_if_conditional352=map$2charphsClassph_at(info->classes,type_name_297,((void*)0))==((void*)0),            _if_conditional352) {
                # 889 "14struct.c"
                __dec_obj88=struct_class_308;
                struct_class_308=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value322=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value321=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 889, "sClass")))),type_name_297,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer2(sClass_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                # 892 "14struct.c"
                __dec_obj89=struct_class_308;
                struct_class_308=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value323=sClass_clone(map$2charphsClassph_at(info->classes,type_name_297,((void*)0))))));
                come_call_finalizer2(sClass_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 896 "14struct.c"
                # 893 "14struct.c"
                if(_if_conditional353=list$1tuple2$2charphsTypephph_length(struct_class_308->mFields)>0,                _if_conditional353) {
                    # 894 "14struct.c"
                    output_307=(_Bool)0;
                }
            }
            # 928 "14struct.c"
            # 898 "14struct.c"
            if(_if_conditional354=map$2charphsClassph_at(info->classes,type_name_297,((void*)0))==((void*)0),            _if_conditional354) {
                # 902 "14struct.c"
                # 899 "14struct.c"
                if(parent_class_298) {
                    # 900 "14struct.c"
                    __dec_obj90=struct_class_308->mParentClassName;
                    struct_class_308->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value324=string_clone(parent_class_298->mName))));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 902 "14struct.c"
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_297),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value325=sClass_clone(struct_class_308)))));
                come_call_finalizer2(sClass_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 909 "14struct.c"
                for(                o2_saved_314=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(right_value331=list$1sClassp_reverse(parent_classes_302))))),parent_317=list$1sClassp_begin((o2_saved_314)) ,                come_call_finalizer2(list$1sClasspp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                0;                !list$1sClassp_end((o2_saved_314));                parent_317=list$1sClassp_next((o2_saved_314))                ){
                    # 908 "14struct.c"
                    for(                    o2_saved_320=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_317->mFields)),it_321=list$1tuple2$2charphsTypephph_begin((o2_saved_320));                    !list$1tuple2$2charphsTypephph_end((o2_saved_320));                    it_321=list$1tuple2$2charphsTypephph_next((o2_saved_320))                    ){
                        # 906 "14struct.c"
                        list$1tuple2$2charphsTypephph_add(struct_class_308->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value332=tuple2$2charphsTypephp_clone(it_321)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sClasspp_finalize,o2_saved_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 928 "14struct.c"
                # 910 "14struct.c"
                if(_if_conditional362=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_297,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_308->mFields)>0,                _if_conditional362) {
                    # 911 "14struct.c"
                    klass2_322=map$2charphsClassph_at(info->classes,type_name_297,((void*)0));
                    # 916 "14struct.c"
                    # 913 "14struct.c"
                    if(parent_class_298) {
                        # 914 "14struct.c"
                        __dec_obj91=klass2_322->mParentClassName;
                        klass2_322->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value333=string_clone(parent_class_298->mName))));
                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 916 "14struct.c"
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_297),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value334=sClass_clone(klass2_322)))));
                    come_call_finalizer2(sClass_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 923 "14struct.c"
                    for(                    o2_saved_323=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(right_value335=list$1sClassp_reverse(parent_classes_302))))),parent_324=list$1sClassp_begin((o2_saved_323)) ,                    come_call_finalizer2(list$1sClasspp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                    0;                    !list$1sClassp_end((o2_saved_323));                    parent_324=list$1sClassp_next((o2_saved_323))                    ){
                        # 922 "14struct.c"
                        for(                        o2_saved_325=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_324->mFields)),it_326=list$1tuple2$2charphsTypephph_begin((o2_saved_325));                        !list$1tuple2$2charphsTypephph_end((o2_saved_325));                        it_326=list$1tuple2$2charphsTypephph_next((o2_saved_325))                        ){
                            # 920 "14struct.c"
                            list$1tuple2$2charphsTypephph_add(klass2_322->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value336=tuple2$2charphsTypephp_clone(it_326)))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_325, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1sClasspp_finalize,o2_saved_323, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 926 "14struct.c"
                    for(                    o2_saved_327=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_308->mFields)),it_328=list$1tuple2$2charphsTypephph_begin((o2_saved_327));                    !list$1tuple2$2charphsTypephph_end((o2_saved_327));                    it_328=list$1tuple2$2charphsTypephph_next((o2_saved_327))                    ){
                        # 924 "14struct.c"
                        list$1tuple2$2charphsTypephph_add(klass2_322->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value337=tuple2$2charphsTypephp_clone(it_328)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_327, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            # 928 "14struct.c"
            expected_next_character(123,info);
            # 930 "14struct.c"
            head_329=info->p;
            # 932 "14struct.c"
            p_saved_330=((void*)0);
            # 933 "14struct.c"
            sline_saved_331=0;
            # 935 "14struct.c"
            methods_332=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value339=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value338=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 935, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1157 "14struct.c"
            while(_while_condtional42=(_Bool)1,            _while_condtional42) {
                # 949 "14struct.c"
                # 937 "14struct.c"
                if(p_saved_330) {
                    # 947 "14struct.c"
                    # 938 "14struct.c"
                    if(_if_conditional365=*info->p==0,                    _if_conditional365) {
                        # 939 "14struct.c"
                        info->p=p_saved_330;
                        # 940 "14struct.c"
                        info->sline=sline_saved_331;
                        # 942 "14struct.c"
                        p_saved_330=((void*)0);
                        # 943 "14struct.c"
                        sline_saved_331=0;
                        # 944 "14struct.c"
                        come_call_finalizer2(map$2charphcharphp_finalize,info->module_params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 945 "14struct.c"
                        info->module_params=((void*)0);
                    }
                }
                # 949 "14struct.c"
                parse_sharp_v5(info);
                # 951 "14struct.c"
                include__337=strmemcmp(info->p,"include");
                # 953 "14struct.c"
                multiple_declare_338=(_Bool)0;
                # 973 "14struct.c"
                # 954 "14struct.c"
                if(_if_conditional370=include__337==(_Bool)0,                _if_conditional370) {
                    # 956 "14struct.c"
                    p_339=info->p;
                    # 957 "14struct.c"
                    sline_340=info->sline;
                    # 970 "14struct.c"
                    # 959 "14struct.c"
                    if(_if_conditional371=memcmp(info->p,"new(",4)!=0,                    _if_conditional371) {
                        # 960 "14struct.c"
                        no_output_err_341=info->no_output_err;
                        # 961 "14struct.c"
                        info->no_output_err=(_Bool)1;
                        # 962 "14struct.c"
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value340=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type_342=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        name_343=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_344=multiple_assign_var16->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 963 "14struct.c"
                        info->no_output_err=no_output_err_341;
                        # 968 "14struct.c"
                        # 965 "14struct.c"
                        if(_if_conditional372=err_344&&*info->p==44,                        _if_conditional372) {
                            # 966 "14struct.c"
                            multiple_declare_338=(_Bool)1;
                        }
                        come_call_finalizer2(sType_finalize,type_342, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_343 = come_decrement_ref_count2(name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 970 "14struct.c"
                    info->p=p_339;
                    # 971 "14struct.c"
                    info->sline=sline_340;
                }
                # 973 "14struct.c"
                define_function_flag_345=(_Bool)0;
                # 1037 "14struct.c"
                # 974 "14struct.c"
                if(_if_conditional373=include__337==(_Bool)0,                _if_conditional373) {
                    # 976 "14struct.c"
                    p_346=info->p;
                    # 977 "14struct.c"
                    sline_347=info->sline;
                    # 1033 "14struct.c"
                    # 979 "14struct.c"
                    if(_if_conditional374=memcmp(info->p,"new(",4)==0,                    _if_conditional374) {
                        # 980 "14struct.c"
                        define_function_flag_345=(_Bool)1;
                    }
                    else {
                        # 983 "14struct.c"
                        invalid_type_348=(_Bool)0;
                        # 984 "14struct.c"
                        info->no_output_err=(_Bool)1;
                        # 988 "14struct.c"
                        # 985 "14struct.c"
                        if(_if_conditional375=xisalpha(*info->p)||*info->p==95,                        _if_conditional375) {
                            # 986 "14struct.c"
                            multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(right_value341=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                            result_type_349=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                            fun_name_350=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            err_351=multiple_assign_var17->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,result_type_349, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_350 = come_decrement_ref_count2(fun_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 988 "14struct.c"
                        info->no_output_err=(_Bool)0;
                        # 990 "14struct.c"
                        word_352=((void*)0);
                        # 1001 "14struct.c"
                        # 991 "14struct.c"
                        if(_if_conditional376=xisalnum(*info->p)||*info->p==95,                        _if_conditional376) {
                            # 992 "14struct.c"
                            __dec_obj92=word_352;
                            word_352=(char*)come_increment_ref_count(((char*)(right_value342=parse_word(info))));
                            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 997 "14struct.c"
                            # 994 "14struct.c"
                            if(_if_conditional377=string_operator_equals(word_352,"extern"),                            _if_conditional377) {
                                # 995 "14struct.c"
                                __dec_obj93=word_352;
                                word_352=(char*)come_increment_ref_count(((char*)(right_value343=parse_word(info))));
                                __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            # 999 "14struct.c"
                            __dec_obj94=word_352;
                            word_352=((void*)0);
                            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        # 1001 "14struct.c"
                        info->no_output_err=(_Bool)0;
                        # 1031 "14struct.c"
                        # 1003 "14struct.c"
                        if(word_352) {
                            # 1027 "14struct.c"
                            # 1004 "14struct.c"
                            if(_if_conditional379=is_type_name(word_352,info),                            _if_conditional379) {
                                # 1009 "14struct.c"
                                while(_while_condtional44=*info->p==42,                                _while_condtional44) {
                                    # 1006 "14struct.c"
                                    info->p++;
                                    # 1007 "14struct.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1013 "14struct.c"
                                # 1009 "14struct.c"
                                if(_if_conditional380=*info->p==91&&*(info->p+1)==93,                                _if_conditional380) {
                                    # 1010 "14struct.c"
                                    info->p+=2;
                                    # 1011 "14struct.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1017 "14struct.c"
                                # 1013 "14struct.c"
                                if(_if_conditional381=*info->p==58,                                _if_conditional381) {
                                    # 1014 "14struct.c"
                                    info->p++;
                                    # 1015 "14struct.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1021 "14struct.c"
                                # 1017 "14struct.c"
                                if(_if_conditional382=*info->p==58,                                _if_conditional382) {
                                    # 1018 "14struct.c"
                                    info->p++;
                                    # 1019 "14struct.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1024 "14struct.c"
                                # 1021 "14struct.c"
                                if(_if_conditional383=xisalnum(*info->p)||*info->p==95,                                _if_conditional383) {
                                    # 1022 "14struct.c"
                                    __dec_obj95=word_352;
                                    word_352=(char*)come_increment_ref_count(((char*)(right_value344=parse_word(info))));
                                    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            # 1030 "14struct.c"
                            # 1027 "14struct.c"
                            if(_if_conditional384=strlen(word_352)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                            _if_conditional384) {
                                # 1028 "14struct.c"
                                define_function_flag_345=(_Bool)1;
                            }
                        }
                        word_352 = come_decrement_ref_count2(word_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 1033 "14struct.c"
                    info->p=p_346;
                    # 1034 "14struct.c"
                    info->sline=sline_347;
                }
                # 1147 "14struct.c"
                # 1037 "14struct.c"
                if(define_function_flag_345) {
                    # 1038 "14struct.c"
                    tail_353=info->p;
                    # 1040 "14struct.c"
                    pointer_num_354=1;
                    # 1042 "14struct.c"
                    __dec_obj96=info->impl_type;
                    info->impl_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value346=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value345=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1042, "sType")))),type_name_297,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1043 "14struct.c"
                    info->impl_type->mPointerNum=pointer_num_354;
                    # 1045 "14struct.c"
                    output_struct_header(struct_class_308,info);
                    # 1047 "14struct.c"
                    info->in_class=(_Bool)1;
                    # 1049 "14struct.c"
                    method_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=parse_function(info))));
                    if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1051 "14struct.c"
                    __dec_obj97=info->impl_type;
                    info->impl_type=((void*)0);
                    come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 1052 "14struct.c"
                    info->in_class=(_Bool)0;
                    # 1054 "14struct.c"
                    list$1sNodeph_push_back(methods_332,(struct sNode*)come_increment_ref_count(method_355));
                    if(method_355) { method_355 = come_decrement_ref_count2(method_355, ((struct sNode*)method_355)->finalize, ((struct sNode*)method_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1147 "14struct.c"
                    # 1056 "14struct.c"
                    if(multiple_declare_338) {
                        # 1057 "14struct.c"
                        multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(right_value351=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_359=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name_360=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        err_361=multiple_assign_var18->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1059 "14struct.c"
                        multiple_assign_var19=((struct tuple2$2sTypephcharph*)(right_value352=parse_variable_name((struct sType*)come_increment_ref_count(base_type_359),(_Bool)1,info)));
                        type2_362=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                        name2_363=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1061 "14struct.c"
                        list$1tuple2$2charphsTypephph_push_back(struct_class_308->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value354=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value353=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1061, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_363),(struct sType*)come_increment_ref_count(type2_362))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 1071 "14struct.c"
                        while(_while_condtional45=*info->p==44,                        _while_condtional45) {
                            # 1064 "14struct.c"
                            info->p++;
                            # 1065 "14struct.c"
                            skip_spaces_and_lf(info);
                            # 1067 "14struct.c"
                            multiple_assign_var20=((struct tuple2$2sTypephcharph*)(right_value355=parse_variable_name((struct sType*)come_increment_ref_count(base_type_359),(_Bool)0,info)));
                            type2_364=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                            name2_365=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1069 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(struct_class_308->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value357=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value356=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1069, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_365),(struct sType*)come_increment_ref_count(type2_364))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name2_365 = come_decrement_ref_count2(name2_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 1071 "14struct.c"
                        expected_next_character(59,info);
                        come_call_finalizer2(sType_finalize,base_type_359, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_360 = come_decrement_ref_count2(name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type2_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name2_363 = come_decrement_ref_count2(name2_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 1147 "14struct.c"
                        # 1073 "14struct.c"
                        if(_if_conditional389=strmemcmp(info->p,"include"),                        _if_conditional389) {
                            # 1074 "14struct.c"
                            ((char*)(right_value358=parse_word(info)));
                            right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1076 "14struct.c"
                            module_name_366=(char*)come_increment_ref_count(((char*)(right_value359=parse_word(info))));
                            right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1078 "14struct.c"
                            params_367=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value361=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value360=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1078, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1109 "14struct.c"
                            # 1080 "14struct.c"
                            if(_if_conditional390=*info->p==60,                            _if_conditional390) {
                                # 1081 "14struct.c"
                                info->p++;
                                # 1082 "14struct.c"
                                skip_spaces_and_lf(info);
                                # 1107 "14struct.c"
                                while(_while_condtional46=(_Bool)1,                                _while_condtional46) {
                                    # 1085 "14struct.c"
                                    word_368=(char*)come_increment_ref_count(((char*)(right_value362=parse_word(info))));
                                    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 1087 "14struct.c"
                                    list$1charph_add(params_367,(char*)come_increment_ref_count(word_368));
                                    # 1106 "14struct.c"
                                    # 1089 "14struct.c"
                                    if(_if_conditional391=*info->p==44,                                    _if_conditional391) {
                                        # 1090 "14struct.c"
                                        info->p++;
                                        # 1091 "14struct.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        # 1106 "14struct.c"
                                        # 1093 "14struct.c"
                                        if(_if_conditional392=*info->p==0,                                        _if_conditional392) {
                                            # 1094 "14struct.c"
                                            err_msg(info,"invalid source end");
                                            # 1095 "14struct.c"
                                            exit(2);
                                        }
                                        else {
                                            # 1106 "14struct.c"
                                            # 1097 "14struct.c"
                                            if(_if_conditional393=*info->p==62,                                            _if_conditional393) {
                                                # 1098 "14struct.c"
                                                info->p++;
                                                # 1099 "14struct.c"
                                                skip_spaces_and_lf(info);
                                                # 1100 "14struct.c"
                                                word_368 = come_decrement_ref_count2(word_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                # 1103 "14struct.c"
                                                err_msg(info,"invalid charactor(%c)",*info->p);
                                                # 1104 "14struct.c"
                                                exit(2);
                                            }
                                        }
                                    }
                                    word_368 = come_decrement_ref_count2(word_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            # 1111 "14struct.c"
                            # 1109 "14struct.c"
                            if(_if_conditional394=*info->p==59,                            _if_conditional394) {
                                # 1109 "14struct.c"
                                info->p++;
                                # 1109 "14struct.c"
                                skip_spaces_and_lf(info);
                            }
                            # 1116 "14struct.c"
                            # 1111 "14struct.c"
                            if(_if_conditional402=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_366)==((void*)0),                            _if_conditional402) {
                                # 1112 "14struct.c"
                                err_msg(info,"module not found");
                                # 1113 "14struct.c"
                                __result219__ = __result_obj__ = ((void*)0);
                                module_name_366 = come_decrement_ref_count2(module_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1charphp_finalize,params_367, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_297 = come_decrement_ref_count2(type_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sClasspp_finalize,parent_classes_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sClass_finalize,struct_class_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sNodephp_finalize,methods_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result219__;
                            }
                            # 1116 "14struct.c"
                            module_372=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_366), "14struct.c", 1116, 3));
                            # 1123 "14struct.c"
                            # 1118 "14struct.c"
                            if(_if_conditional404=list$1charph_length(module_372->mParams)!=list$1charph_length(params_367),                            _if_conditional404) {
                                # 1119 "14struct.c"
                                err_msg(info,"invalid parametor number");
                                # 1120 "14struct.c"
                                exit(1);
                            }
                            # 1123 "14struct.c"
                            info->module_params=(struct map$2charphcharph*)come_increment_ref_count(((struct map$2charphcharph*)(right_value369=map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count(((struct map$2charphcharph*)(right_value363=(struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1123, "map$2charphcharph"))))))));
                            come_call_finalizer2(map$2charphcharphp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(map$2charphcharphp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1125 "14struct.c"
                            i_374=0;
                            # 1130 "14struct.c"
                            for(                            o2_saved_375=(struct list$1charph*)come_increment_ref_count((module_372->mParams)),it_378=list$1charph_begin((o2_saved_375));                            !list$1charph_end((o2_saved_375));                            it_378=list$1charph_next((o2_saved_375))                            ){
                                # 1127 "14struct.c"
                                ((char*)(right_value373=map$2charphcharphp_operator_store_element(info->module_params,it_378,((char*)come_null_check(list$1charphp_operator_load_element(params_367,i_374), "14struct.c", 1127, 4)))));
                                right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            come_call_finalizer2(list$1charphp_finalize,o2_saved_375, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 1130 "14struct.c"
                            p_saved_330=info->p;
                            # 1131 "14struct.c"
                            sline_saved_331=info->sline;
                            # 1133 "14struct.c"
                            info->p=module_372->mText;
                            # 1134 "14struct.c"
                            info->sline=0;
                            module_name_366 = come_decrement_ref_count2(module_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,params_367, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1137 "14struct.c"
                            multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(right_value374=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type2_405=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                            name_406=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                            err_407=multiple_assign_var21->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1143 "14struct.c"
                            # 1138 "14struct.c"
                            if(_if_conditional433=!err_407,                            _if_conditional433) {
                                # 1139 "14struct.c"
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                # 1140 "14struct.c"
                                exit(2);
                            }
                            # 1143 "14struct.c"
                            list$1tuple2$2charphsTypephph_push_back(struct_class_308->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value376=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value375=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1143, "tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_406),(struct sType*)come_increment_ref_count(type2_405))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1144 "14struct.c"
                            expected_next_character(59,info);
                            come_call_finalizer2(sType_finalize,type2_405, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_406 = come_decrement_ref_count2(name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                # 1147 "14struct.c"
                parse_sharp_v5(info);
                # 1154 "14struct.c"
                # 1149 "14struct.c"
                if(_if_conditional434=*info->p==125,                _if_conditional434) {
                    # 1150 "14struct.c"
                    info->p++;
                    # 1151 "14struct.c"
                    skip_spaces_and_lf(info);
                    # 1152 "14struct.c"
                    break;
                }
                # 1154 "14struct.c"
                parse_sharp_v5(info);
            }
            # 1167 "14struct.c"
            # 1157 "14struct.c"
            if(p_saved_330) {
                # 1165 "14struct.c"
                # 1158 "14struct.c"
                if(_if_conditional436=info->p==0,                _if_conditional436) {
                    # 1159 "14struct.c"
                    info->p=p_saved_330;
                    # 1160 "14struct.c"
                    info->sline=sline_saved_331;
                    # 1162 "14struct.c"
                    p_saved_330=((void*)0);
                    # 1163 "14struct.c"
                    sline_saved_331=0;
                }
            }
            # 1167 "14struct.c"
            list$1charph_reset(info->generics_type_names);
            # 1169 "14struct.c"
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1169, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sClassNode*)(right_value380=sClassNode_initialize((struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value377=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1169, "sClassNode")))),(char*)come_increment_ref_count(((char*)(right_value378=__builtin_string(type_name_297)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value379=sClass_clone(struct_class_308)))),(struct list$1sNodeph*)come_increment_ref_count(methods_332),output_307,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sClassNode_finalize;
            _inf_value5->clone=(void*)sClassNode_clone;
            _inf_value5->compile=(void*)sClassNode_compile;
            _inf_value5->sline=(void*)sClassNode_sline;
            _inf_value5->sname=(void*)sClassNode_sname;
            _inf_value5->terminated=(void*)sClassNode_terminated;
            _inf_value5->kind=(void*)sClassNode_kind;
            __result248__ = __result_obj__ = ((struct sNode*)(right_value386=_inf_value5));
            type_name_297 = come_decrement_ref_count2(type_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sClasspp_finalize,parent_classes_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,struct_class_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,methods_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClassNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClassNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result248__;
            type_name_297 = come_decrement_ref_count2(type_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sClasspp_finalize,parent_classes_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,struct_class_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,methods_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 1172 "14struct.c"
    __result249__ = __result_obj__ = ((struct sNode*)(right_value387=top_level_v97(buf,head,head_sline,info)));
    if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result249__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sStructNobodyNode_finalize"
                # 0 "sStructNobodyNode_finalize"
                if(_if_conditional304=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional304) {
                    # 0 "sStructNobodyNode_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sStructNobodyNode_finalize"
                # 1 "sStructNobodyNode_finalize"
                if(_if_conditional305=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional305) {
                    # 1 "sStructNobodyNode_finalize"
                    come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sStructNobodyNode_finalize"
                # 2 "sStructNobodyNode_finalize"
                if(_if_conditional306=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional306) {
                    # 2 "sStructNobodyNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional307;
struct sStructNobodyNode* __result190__;
void* right_value253;
struct sStructNobodyNode* result_253;
_Bool _if_conditional308;
void* right_value254;
char* __dec_obj73;
_Bool _if_conditional309;
void* right_value255;
struct sClass* __dec_obj74;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value256;
char* __dec_obj75;
struct sStructNobodyNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
memset(&result_253, 0, sizeof(struct sStructNobodyNode*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
                # 3 "sStructNobodyNode_clone"
                # 2 "sStructNobodyNode_clone"
                if(_if_conditional307=self==(void*)0,                _if_conditional307) {
                    # 2 "sStructNobodyNode_clone"
                    __result190__ = __result_obj__ = (void*)0;
                    return __result190__;
                }
                # 3 "sStructNobodyNode_clone"
                result_253=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value253=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"))));
                come_call_finalizer2(sStructNobodyNode_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sStructNobodyNode_clone"
                # 4 "sStructNobodyNode_clone"
                if(_if_conditional308=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional308) {
                    # 4 "sStructNobodyNode_clone"
                    __dec_obj73=result_253->mName;
                    result_253->mName=(char*)come_increment_ref_count(((char*)(right_value254=string_clone(self->mName))));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sStructNobodyNode_clone"
                # 5 "sStructNobodyNode_clone"
                if(_if_conditional309=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional309) {
                    # 5 "sStructNobodyNode_clone"
                    __dec_obj74=result_253->mClass;
                    result_253->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value255=sClass_clone(self->mClass))));
                    come_call_finalizer2(sClass_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sStructNobodyNode_clone"
                # 6 "sStructNobodyNode_clone"
                if(_if_conditional310=self!=((void*)0),                _if_conditional310) {
                    # 6 "sStructNobodyNode_clone"
                    result_253->sline=self->sline;
                }
                # 8 "sStructNobodyNode_clone"
                # 7 "sStructNobodyNode_clone"
                if(_if_conditional311=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional311) {
                    # 7 "sStructNobodyNode_clone"
                    __dec_obj75=result_253->sname;
                    result_253->sname=(char*)come_increment_ref_count(((char*)(right_value256=string_clone(self->sname))));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sStructNobodyNode_clone"
                __result191__ = __result_obj__ = result_253;
                come_call_finalizer2(sStructNobodyNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result191__;
                come_call_finalizer2(sStructNobodyNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_254;
_Bool _while_condtional34;
struct list_item$1charph* prev_it_255;
struct list$1charph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_254, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_255, 0, sizeof(struct list_item$1charph*));
                    # 433 "./neo-c.h"
                    it_254=self->head;
                    # 440 "./neo-c.h"
                    while(_while_condtional34=it_254!=((void*)0),                    _while_condtional34) {
                        # 435 "./neo-c.h"
                        prev_it_255=it_254;
                        # 436 "./neo-c.h"
                        it_254=it_254->next;
                        # 437 "./neo-c.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 440 "./neo-c.h"
                    self->head=((void*)0);
                    # 441 "./neo-c.h"
                    self->tail=((void*)0);
                    # 443 "./neo-c.h"
                    self->len=0;
                    # 445 "./neo-c.h"
                    __result193__ = __result_obj__ = self;
                    return __result193__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional313;
void* right_value259;
struct list_item$1charph* litem_257;
char* __dec_obj76;
_Bool _if_conditional314;
void* right_value260;
struct list_item$1charph* litem_258;
char* __dec_obj77;
void* right_value261;
struct list_item$1charph* litem_259;
char* __dec_obj78;
struct list$1charph* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1charph*));
right_value260 = (void*)0;
memset(&litem_258, 0, sizeof(struct list_item$1charph*));
right_value261 = (void*)0;
memset(&litem_259, 0, sizeof(struct list_item$1charph*));
                        # 256 "./neo-c.h"
                        # 225 "./neo-c.h"
                        if(_if_conditional313=self->len==0,                        _if_conditional313) {
                            # 226 "./neo-c.h"
                            litem_257=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value259=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 226, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./neo-c.h"
                            litem_257->prev=((void*)0);
                            # 229 "./neo-c.h"
                            litem_257->next=((void*)0);
                            # 230 "./neo-c.h"
                            __dec_obj76=litem_257->item;
                            litem_257->item=(char*)come_increment_ref_count(item);
                            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 232 "./neo-c.h"
                            self->tail=litem_257;
                            # 233 "./neo-c.h"
                            self->head=litem_257;
                        }
                        else {
                            # 256 "./neo-c.h"
                            # 235 "./neo-c.h"
                            if(_if_conditional314=self->len==1,                            _if_conditional314) {
                                # 236 "./neo-c.h"
                                litem_258=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value260=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 236, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./neo-c.h"
                                litem_258->prev=self->head;
                                # 239 "./neo-c.h"
                                litem_258->next=((void*)0);
                                # 240 "./neo-c.h"
                                __dec_obj77=litem_258->item;
                                litem_258->item=(char*)come_increment_ref_count(item);
                                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 242 "./neo-c.h"
                                self->tail=litem_258;
                                # 243 "./neo-c.h"
                                self->head->next=litem_258;
                            }
                            else {
                                # 246 "./neo-c.h"
                                litem_259=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value261=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 246, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./neo-c.h"
                                litem_259->prev=self->tail;
                                # 249 "./neo-c.h"
                                litem_259->next=((void*)0);
                                # 250 "./neo-c.h"
                                __dec_obj78=litem_259->item;
                                litem_259->item=(char*)come_increment_ref_count(item);
                                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 252 "./neo-c.h"
                                self->tail->next=litem_259;
                                # 253 "./neo-c.h"
                                self->tail=litem_259;
                            }
                        }
                        # 256 "./neo-c.h"
                        self->len++;
                        # 258 "./neo-c.h"
                        __result194__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result194__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sGenericsStructNode_finalize"
                    # 0 "sGenericsStructNode_finalize"
                    if(_if_conditional323=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional323) {
                        # 0 "sGenericsStructNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sGenericsStructNode* __result195__;
void* right_value280;
struct sGenericsStructNode* result_270;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value281;
char* __dec_obj81;
struct sGenericsStructNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
memset(&result_270, 0, sizeof(struct sGenericsStructNode*));
right_value281 = (void*)0;
                    # 3 "sGenericsStructNode_clone"
                    # 2 "sGenericsStructNode_clone"
                    if(_if_conditional324=self==(void*)0,                    _if_conditional324) {
                        # 2 "sGenericsStructNode_clone"
                        __result195__ = __result_obj__ = (void*)0;
                        return __result195__;
                    }
                    # 3 "sGenericsStructNode_clone"
                    result_270=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value280=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"))));
                    come_call_finalizer2(sGenericsStructNode_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sGenericsStructNode_clone"
                    # 4 "sGenericsStructNode_clone"
                    if(_if_conditional325=self!=((void*)0),                    _if_conditional325) {
                        # 4 "sGenericsStructNode_clone"
                        result_270->sline=self->sline;
                    }
                    # 6 "sGenericsStructNode_clone"
                    # 5 "sGenericsStructNode_clone"
                    if(_if_conditional326=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional326) {
                        # 5 "sGenericsStructNode_clone"
                        __dec_obj81=result_270->sname;
                        result_270->sname=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(self->sname))));
                        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sGenericsStructNode_clone"
                    __result196__ = __result_obj__ = result_270;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result196__;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sStructNode_finalize"
                    # 0 "sStructNode_finalize"
                    if(_if_conditional338=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional338) {
                        # 0 "sStructNode_finalize"
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sStructNode_finalize"
                    # 1 "sStructNode_finalize"
                    if(_if_conditional339=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional339) {
                        # 1 "sStructNode_finalize"
                        come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 3 "sStructNode_finalize"
                    # 2 "sStructNode_finalize"
                    if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional340) {
                        # 2 "sStructNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional341;
struct sStructNode* __result199__;
void* right_value308;
struct sStructNode* result_295;
_Bool _if_conditional342;
void* right_value309;
char* __dec_obj85;
_Bool _if_conditional343;
void* right_value310;
struct sClass* __dec_obj86;
_Bool _if_conditional344;
_Bool _if_conditional345;
void* right_value311;
char* __dec_obj87;
_Bool _if_conditional346;
struct sStructNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
memset(&result_295, 0, sizeof(struct sStructNode*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
                    # 3 "sStructNode_clone"
                    # 2 "sStructNode_clone"
                    if(_if_conditional341=self==(void*)0,                    _if_conditional341) {
                        # 2 "sStructNode_clone"
                        __result199__ = __result_obj__ = (void*)0;
                        return __result199__;
                    }
                    # 3 "sStructNode_clone"
                    result_295=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value308=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"))));
                    come_call_finalizer2(sStructNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sStructNode_clone"
                    # 4 "sStructNode_clone"
                    if(_if_conditional342=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional342) {
                        # 4 "sStructNode_clone"
                        __dec_obj85=result_295->mName;
                        result_295->mName=(char*)come_increment_ref_count(((char*)(right_value309=string_clone(self->mName))));
                        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sStructNode_clone"
                    # 5 "sStructNode_clone"
                    if(_if_conditional343=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional343) {
                        # 5 "sStructNode_clone"
                        __dec_obj86=result_295->mClass;
                        result_295->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value310=sClass_clone(self->mClass))));
                        come_call_finalizer2(sClass_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sClass_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sStructNode_clone"
                    # 6 "sStructNode_clone"
                    if(_if_conditional344=self!=((void*)0),                    _if_conditional344) {
                        # 6 "sStructNode_clone"
                        result_295->sline=self->sline;
                    }
                    # 8 "sStructNode_clone"
                    # 7 "sStructNode_clone"
                    if(_if_conditional345=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional345) {
                        # 7 "sStructNode_clone"
                        __dec_obj87=result_295->sname;
                        result_295->sname=(char*)come_increment_ref_count(((char*)(right_value311=string_clone(self->sname))));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sStructNode_clone"
                    # 8 "sStructNode_clone"
                    if(_if_conditional346=self!=((void*)0),                    _if_conditional346) {
                        # 8 "sStructNode_clone"
                        result_295->mOutput=self->mOutput;
                    }
                    # 9 "sStructNode_clone"
                    __result200__ = __result_obj__ = result_295;
                    come_call_finalizer2(sStructNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result200__;
                    come_call_finalizer2(sStructNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__;
struct list$1sClassp* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
                # 104 "./neo-c.h"
                self->head=((void*)0);
                # 105 "./neo-c.h"
                self->tail=((void*)0);
                # 106 "./neo-c.h"
                self->len=0;
                # 108 "./neo-c.h"
                __result203__ = __result_obj__ = self;
                come_call_finalizer2(list$1sClasspp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result203__;
                come_call_finalizer2(list$1sClasspp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
void* __result_obj__;
struct list_item$1sClassp* it_300;
_Bool _while_condtional40;
struct list_item$1sClassp* prev_it_301;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_300, 0, sizeof(struct list_item$1sClassp*));
memset(&prev_it_301, 0, sizeof(struct list_item$1sClassp*));
                    # 123 "./neo-c.h"
                    it_300=self->head;
                    # 129 "./neo-c.h"
                    while(_while_condtional40=it_300!=((void*)0),                    _while_condtional40) {
                        # 125 "./neo-c.h"
                        prev_it_301=it_300;
                        # 126 "./neo-c.h"
                        it_300=it_300->next;
                        # 127 "./neo-c.h"
                        come_call_finalizer2(list_item$1sClasspp_finalize,prev_it_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional350;
void* right_value318;
struct list_item$1sClassp* litem_304;
_Bool _if_conditional351;
void* right_value319;
struct list_item$1sClassp* litem_305;
void* right_value320;
struct list_item$1sClassp* litem_306;
struct list$1sClassp* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value318 = (void*)0;
memset(&litem_304, 0, sizeof(struct list_item$1sClassp*));
right_value319 = (void*)0;
memset(&litem_305, 0, sizeof(struct list_item$1sClassp*));
right_value320 = (void*)0;
memset(&litem_306, 0, sizeof(struct list_item$1sClassp*));
                    # 186 "./neo-c.h"
                    # 155 "./neo-c.h"
                    if(_if_conditional350=self->len==0,                    _if_conditional350) {
                        # 156 "./neo-c.h"
                        litem_304=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value318=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 156, "list_item$1sClassp"))));
                        come_call_finalizer2(list_item$1sClasspp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 158 "./neo-c.h"
                        litem_304->prev=((void*)0);
                        # 159 "./neo-c.h"
                        litem_304->next=((void*)0);
                        # 160 "./neo-c.h"
                        litem_304->item=item;
                        # 162 "./neo-c.h"
                        self->tail=litem_304;
                        # 163 "./neo-c.h"
                        self->head=litem_304;
                    }
                    else {
                        # 186 "./neo-c.h"
                        # 165 "./neo-c.h"
                        if(_if_conditional351=self->len==1,                        _if_conditional351) {
                            # 166 "./neo-c.h"
                            litem_305=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value319=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 166, "list_item$1sClassp"))));
                            come_call_finalizer2(list_item$1sClasspp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 168 "./neo-c.h"
                            litem_305->prev=self->head;
                            # 169 "./neo-c.h"
                            litem_305->next=((void*)0);
                            # 170 "./neo-c.h"
                            litem_305->item=item;
                            # 172 "./neo-c.h"
                            self->tail=litem_305;
                            # 173 "./neo-c.h"
                            self->head->next=litem_305;
                        }
                        else {
                            # 176 "./neo-c.h"
                            litem_306=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value320=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 176, "list_item$1sClassp"))));
                            come_call_finalizer2(list_item$1sClasspp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 178 "./neo-c.h"
                            litem_306->prev=self->tail;
                            # 179 "./neo-c.h"
                            litem_306->next=((void*)0);
                            # 180 "./neo-c.h"
                            litem_306->item=item;
                            # 182 "./neo-c.h"
                            self->tail->next=litem_306;
                            # 183 "./neo-c.h"
                            self->tail=litem_306;
                        }
                    }
                    # 186 "./neo-c.h"
                    self->len++;
                    # 188 "./neo-c.h"
                    __result204__ = __result_obj__ = self;
                    return __result204__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__;
void* right_value326;
void* right_value327;
struct list$1sClassp* result_309;
struct list_item$1sClassp* it_310;
_Bool _while_condtional41;
struct list$1sClassp* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&result_309, 0, sizeof(struct list$1sClassp*));
memset(&it_310, 0, sizeof(struct list_item$1sClassp*));
                    # 960 "./neo-c.h"
                    result_309=(struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value327=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value326=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./neo-c.h", 960, "list$1sClassp"))))))));
                    come_call_finalizer2(list$1sClasspp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sClasspp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 962 "./neo-c.h"
                    it_310=self->tail;
                    # 966 "./neo-c.h"
                    while(_while_condtional41=it_310!=((void*)0),                    _while_condtional41) {
                        # 964 "./neo-c.h"
                        list$1sClassp_push_back(result_309,it_310->item);
                        # 965 "./neo-c.h"
                        it_310=it_310->prev;
                    }
                    # 968 "./neo-c.h"
                    __result206__ = __result_obj__ = result_309;
                    come_call_finalizer2(list$1sClasspp_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result206__;
                    come_call_finalizer2(list$1sClasspp_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional356;
void* right_value328;
struct list_item$1sClassp* litem_311;
_Bool _if_conditional357;
void* right_value329;
struct list_item$1sClassp* litem_312;
void* right_value330;
struct list_item$1sClassp* litem_313;
struct list$1sClassp* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
memset(&litem_311, 0, sizeof(struct list_item$1sClassp*));
right_value329 = (void*)0;
memset(&litem_312, 0, sizeof(struct list_item$1sClassp*));
right_value330 = (void*)0;
memset(&litem_313, 0, sizeof(struct list_item$1sClassp*));
                            # 256 "./neo-c.h"
                            # 225 "./neo-c.h"
                            if(_if_conditional356=self->len==0,                            _if_conditional356) {
                                # 226 "./neo-c.h"
                                litem_311=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value328=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 226, "list_item$1sClassp"))));
                                come_call_finalizer2(list_item$1sClasspp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 228 "./neo-c.h"
                                litem_311->prev=((void*)0);
                                # 229 "./neo-c.h"
                                litem_311->next=((void*)0);
                                # 230 "./neo-c.h"
                                litem_311->item=item;
                                # 232 "./neo-c.h"
                                self->tail=litem_311;
                                # 233 "./neo-c.h"
                                self->head=litem_311;
                            }
                            else {
                                # 256 "./neo-c.h"
                                # 235 "./neo-c.h"
                                if(_if_conditional357=self->len==1,                                _if_conditional357) {
                                    # 236 "./neo-c.h"
                                    litem_312=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value329=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 236, "list_item$1sClassp"))));
                                    come_call_finalizer2(list_item$1sClasspp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 238 "./neo-c.h"
                                    litem_312->prev=self->head;
                                    # 239 "./neo-c.h"
                                    litem_312->next=((void*)0);
                                    # 240 "./neo-c.h"
                                    litem_312->item=item;
                                    # 242 "./neo-c.h"
                                    self->tail=litem_312;
                                    # 243 "./neo-c.h"
                                    self->head->next=litem_312;
                                }
                                else {
                                    # 246 "./neo-c.h"
                                    litem_313=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value330=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 246, "list_item$1sClassp"))));
                                    come_call_finalizer2(list_item$1sClasspp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 248 "./neo-c.h"
                                    litem_313->prev=self->tail;
                                    # 249 "./neo-c.h"
                                    litem_313->next=((void*)0);
                                    # 250 "./neo-c.h"
                                    litem_313->item=item;
                                    # 252 "./neo-c.h"
                                    self->tail->next=litem_313;
                                    # 253 "./neo-c.h"
                                    self->tail=litem_313;
                                }
                            }
                            # 256 "./neo-c.h"
                            self->len++;
                            # 258 "./neo-c.h"
                            __result205__ = __result_obj__ = self;
                            return __result205__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional358;
struct sClass* result_315;
struct sClass* __result207__;
_Bool _if_conditional359;
struct sClass* __result208__;
struct sClass* result_316;
struct sClass* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_315, 0, sizeof(struct sClass*));
memset(&result_316, 0, sizeof(struct sClass*));
                    # 290 "./neo-c.h"
                    # 285 "./neo-c.h"
                    if(_if_conditional358=self==((void*)0),                    _if_conditional358) {
                        # 286 "./neo-c.h"
                        # 287 "./neo-c.h"
                        memset(&result_315,0,sizeof(struct sClass*));
                        # 288 "./neo-c.h"
                        __result207__ = __result_obj__ = result_315;
                        return __result207__;
                    }
                    # 290 "./neo-c.h"
                    self->it=self->head;
                    # 296 "./neo-c.h"
                    # 292 "./neo-c.h"
                    if(self->it) {
                        # 293 "./neo-c.h"
                        __result208__ = __result_obj__ = self->it->item;
                        return __result208__;
                    }
                    # 296 "./neo-c.h"
                    # 297 "./neo-c.h"
                    memset(&result_316,0,sizeof(struct sClass*));
                    # 298 "./neo-c.h"
                    __result209__ = __result_obj__ = result_316;
                    return __result209__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
void* __result_obj__;
_Bool __result210__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 320 "./neo-c.h"
                    __result210__ = self==((void*)0)||self->it==((void*)0);
                    return __result210__;
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional360;
struct sClass* result_318;
struct sClass* __result211__;
_Bool _if_conditional361;
struct sClass* __result212__;
struct sClass* result_319;
struct sClass* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_318, 0, sizeof(struct sClass*));
memset(&result_319, 0, sizeof(struct sClass*));
                    # 308 "./neo-c.h"
                    # 302 "./neo-c.h"
                    if(_if_conditional360=self==((void*)0)||self->it==((void*)0),                    _if_conditional360) {
                        # 303 "./neo-c.h"
                        # 304 "./neo-c.h"
                        memset(&result_318,0,sizeof(struct sClass*));
                        # 305 "./neo-c.h"
                        __result211__ = __result_obj__ = result_318;
                        return __result211__;
                    }
                    # 308 "./neo-c.h"
                    self->it=self->it->next;
                    # 314 "./neo-c.h"
                    # 310 "./neo-c.h"
                    if(self->it) {
                        # 311 "./neo-c.h"
                        __result212__ = __result_obj__ = self->it->item;
                        return __result212__;
                    }
                    # 314 "./neo-c.h"
                    # 315 "./neo-c.h"
                    memset(&result_319,0,sizeof(struct sClass*));
                    # 316 "./neo-c.h"
                    __result213__ = __result_obj__ = result_319;
                    return __result213__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_333;
_Bool _if_conditional366;
_Bool _if_conditional367;
int i_334;
_Bool _if_conditional368;
_Bool _if_conditional369;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_333, 0, sizeof(int));
memset(&i_334, 0, sizeof(int));
                            # 1137 "./neo-c.h"
                            for(                            i_333=0;                            i_333<self->size;                            i_333++                            ){
                                # 1136 "./neo-c.h"
                                # 1131 "./neo-c.h"
                                if(_if_conditional366=self->item_existance[i_333],                                _if_conditional366) {
                                    # 1135 "./neo-c.h"
                                    # 1132 "./neo-c.h"
                                    if(_if_conditional367=1,                                    _if_conditional367) {
                                        # 1133 "./neo-c.h"
                                        self->items[i_333] = come_decrement_ref_count2(self->items[i_333], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                            # 1137 "./neo-c.h"
                            come_free((char*)self->items);
                            # 1146 "./neo-c.h"
                            for(                            i_334=0;                            i_334<self->size;                            i_334++                            ){
                                # 1145 "./neo-c.h"
                                # 1140 "./neo-c.h"
                                if(_if_conditional368=self->item_existance[i_334],                                _if_conditional368) {
                                    # 1144 "./neo-c.h"
                                    # 1141 "./neo-c.h"
                                    if(_if_conditional369=1,                                    _if_conditional369) {
                                        # 1142 "./neo-c.h"
                                        self->keys[i_334] = come_decrement_ref_count2(self->keys[i_334], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_335;
_Bool _while_condtional43;
struct list_item$1charp* prev_it_336;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_335, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_336, 0, sizeof(struct list_item$1charp*));
                                # 123 "./neo-c.h"
                                it_335=self->head;
                                # 129 "./neo-c.h"
                                while(_while_condtional43=it_335!=((void*)0),                                _while_condtional43) {
                                    # 125 "./neo-c.h"
                                    prev_it_336=it_335;
                                    # 126 "./neo-c.h"
                                    it_335=it_335->next;
                                    # 127 "./neo-c.h"
                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_336, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional386;
void* right_value348;
struct list_item$1sNodeph* litem_356;
struct sNode* __dec_obj98;
_Bool _if_conditional387;
void* right_value349;
struct list_item$1sNodeph* litem_357;
struct sNode* __dec_obj99;
void* right_value350;
struct list_item$1sNodeph* litem_358;
struct sNode* __dec_obj100;
struct list$1sNodeph* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value348 = (void*)0;
memset(&litem_356, 0, sizeof(struct list_item$1sNodeph*));
right_value349 = (void*)0;
memset(&litem_357, 0, sizeof(struct list_item$1sNodeph*));
right_value350 = (void*)0;
memset(&litem_358, 0, sizeof(struct list_item$1sNodeph*));
                        # 256 "./neo-c.h"
                        # 225 "./neo-c.h"
                        if(_if_conditional386=self->len==0,                        _if_conditional386) {
                            # 226 "./neo-c.h"
                            litem_356=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value348=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 226, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./neo-c.h"
                            litem_356->prev=((void*)0);
                            # 229 "./neo-c.h"
                            litem_356->next=((void*)0);
                            # 230 "./neo-c.h"
                            __dec_obj98=litem_356->item;
                            litem_356->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
                            # 232 "./neo-c.h"
                            self->tail=litem_356;
                            # 233 "./neo-c.h"
                            self->head=litem_356;
                        }
                        else {
                            # 256 "./neo-c.h"
                            # 235 "./neo-c.h"
                            if(_if_conditional387=self->len==1,                            _if_conditional387) {
                                # 236 "./neo-c.h"
                                litem_357=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value349=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 236, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./neo-c.h"
                                litem_357->prev=self->head;
                                # 239 "./neo-c.h"
                                litem_357->next=((void*)0);
                                # 240 "./neo-c.h"
                                __dec_obj99=litem_357->item;
                                litem_357->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                                # 242 "./neo-c.h"
                                self->tail=litem_357;
                                # 243 "./neo-c.h"
                                self->head->next=litem_357;
                            }
                            else {
                                # 246 "./neo-c.h"
                                litem_358=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value350=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 246, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./neo-c.h"
                                litem_358->prev=self->tail;
                                # 249 "./neo-c.h"
                                litem_358->next=((void*)0);
                                # 250 "./neo-c.h"
                                __dec_obj100=litem_358->item;
                                litem_358->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
                                # 252 "./neo-c.h"
                                self->tail->next=litem_358;
                                # 253 "./neo-c.h"
                                self->tail=litem_358;
                            }
                        }
                        # 256 "./neo-c.h"
                        self->len++;
                        # 258 "./neo-c.h"
                        __result214__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result214__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__;
struct sClassModule* default_value_369;
unsigned int hash_370;
unsigned int it_371;
_Bool _while_condtional47;
_Bool _if_conditional395;
_Bool _if_conditional396;
struct sClassModule* __result215__;
_Bool _if_conditional400;
_Bool _if_conditional401;
struct sClassModule* __result216__;
struct sClassModule* __result217__;
struct sClassModule* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_369, 0, sizeof(struct sClassModule*));
memset(&hash_370, 0, sizeof(unsigned int));
memset(&it_371, 0, sizeof(unsigned int));
                                # 1544 "./neo-c.h"
                                # 1545 "./neo-c.h"
                                memset(&default_value_369,0,sizeof(struct sClassModule*));
                                # 1547 "./neo-c.h"
                                hash_370=string_get_hash_key(((char*)key))%self->size;
                                # 1548 "./neo-c.h"
                                it_371=hash_370;
                                # 1572 "./neo-c.h"
                                while(_while_condtional47=(_Bool)1,                                _while_condtional47) {
                                    # 1570 "./neo-c.h"
                                    # 1551 "./neo-c.h"
                                    if(_if_conditional395=self->item_existance[it_371],                                    _if_conditional395) {
                                        # 1558 "./neo-c.h"
                                        # 1553 "./neo-c.h"
                                        if(_if_conditional396=string_equals(self->keys[it_371],key),                                        _if_conditional396) {
                                            # 1555 "./neo-c.h"
                                            __result215__ = __result_obj__ = self->items[it_371];
                                            come_call_finalizer2(sClassModule_finalize,default_value_369, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result215__;
                                        }
                                        # 1558 "./neo-c.h"
                                        it_371++;
                                        # 1566 "./neo-c.h"
                                        # 1560 "./neo-c.h"
                                        if(_if_conditional400=it_371>=self->size,                                        _if_conditional400) {
                                            # 1561 "./neo-c.h"
                                            it_371=0;
                                        }
                                        else {
                                            # 1566 "./neo-c.h"
                                            # 1563 "./neo-c.h"
                                            if(_if_conditional401=it_371==hash_370,                                            _if_conditional401) {
                                                # 1564 "./neo-c.h"
                                                __result216__ = __result_obj__ = default_value_369;
                                                come_call_finalizer2(sClassModule_finalize,default_value_369, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result216__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1568 "./neo-c.h"
                                        __result217__ = __result_obj__ = default_value_369;
                                        come_call_finalizer2(sClassModule_finalize,default_value_369, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result217__;
                                    }
                                }
                                # 1572 "./neo-c.h"
                                __result218__ = __result_obj__ = default_value_369;
                                come_call_finalizer2(sClassModule_finalize,default_value_369, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result218__;
                                come_call_finalizer2(sClassModule_finalize,default_value_369, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sClassModule_finalize"
                                                # 0 "sClassModule_finalize"
                                                if(_if_conditional397=self!=((void*)0)&&self->mName!=((void*)0),                                                _if_conditional397) {
                                                    # 0 "sClassModule_finalize"
                                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sClassModule_finalize"
                                                # 1 "sClassModule_finalize"
                                                if(_if_conditional398=self!=((void*)0)&&self->mText!=((void*)0),                                                _if_conditional398) {
                                                    # 1 "sClassModule_finalize"
                                                    self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 3 "sClassModule_finalize"
                                                # 2 "sClassModule_finalize"
                                                if(_if_conditional399=self!=((void*)0)&&self->mParams!=((void*)0),                                                _if_conditional399) {
                                                    # 2 "sClassModule_finalize"
                                                    come_call_finalizer2(list$1charphp_finalize,self->mParams, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional403;
int __result220__;
int __result221__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 367 "./neo-c.h"
                                # 364 "./neo-c.h"
                                if(_if_conditional403=self==((void*)0),                                _if_conditional403) {
                                    # 365 "./neo-c.h"
                                    __result220__ = 0;
                                    return __result220__;
                                }
                                # 367 "./neo-c.h"
                                __result221__ = self->len;
                                return __result221__;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__;
void* right_value364;
void* right_value365;
void* right_value366;
int i_373;
void* right_value367;
void* right_value368;
struct list$1charp* __dec_obj101;
struct map$2charphcharph* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&i_373, 0, sizeof(int));
right_value367 = (void*)0;
right_value368 = (void*)0;
                                # 1087 "./neo-c.h"
                                self->keys=(char**)come_increment_ref_count(((char**)(right_value364=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1087, "char*%"))));
                                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1088 "./neo-c.h"
                                self->items=(char**)come_increment_ref_count(((char**)(right_value365=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./neo-c.h", 1088, "char*%"))));
                                right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1089 "./neo-c.h"
                                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value366=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./neo-c.h", 1089, "bool"))));
                                right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1096 "./neo-c.h"
                                for(                                i_373=0;                                i_373<1024;                                i_373++                                ){
                                    # 1093 "./neo-c.h"
                                    self->item_existance[i_373]=(_Bool)0;
                                }
                                # 1096 "./neo-c.h"
                                self->size=1024;
                                # 1097 "./neo-c.h"
                                self->len=0;
                                # 1099 "./neo-c.h"
                                __dec_obj101=self->key_list;
                                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value368=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value367=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1099, "list$1charp"))))))));
                                come_call_finalizer2(list$1charp_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1charpp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1charpp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 1101 "./neo-c.h"
                                self->it=0;
                                # 1103 "./neo-c.h"
                                __result223__ = __result_obj__ = self;
                                come_call_finalizer2(map$2charphcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result223__;
                                come_call_finalizer2(map$2charphcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 104 "./neo-c.h"
                                    self->head=((void*)0);
                                    # 105 "./neo-c.h"
                                    self->tail=((void*)0);
                                    # 106 "./neo-c.h"
                                    self->len=0;
                                    # 108 "./neo-c.h"
                                    __result222__ = __result_obj__ = self;
                                    come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result222__;
                                    come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional405;
char* result_376;
char* __result224__;
_Bool _if_conditional406;
char* __result225__;
char* result_377;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_376, 0, sizeof(char*));
memset(&result_377, 0, sizeof(char*));
                                # 290 "./neo-c.h"
                                # 285 "./neo-c.h"
                                if(_if_conditional405=self==((void*)0),                                _if_conditional405) {
                                    # 286 "./neo-c.h"
                                    # 287 "./neo-c.h"
                                    memset(&result_376,0,sizeof(char*));
                                    # 288 "./neo-c.h"
                                    __result224__ = __result_obj__ = result_376;
                                    return __result224__;
                                }
                                # 290 "./neo-c.h"
                                self->it=self->head;
                                # 296 "./neo-c.h"
                                # 292 "./neo-c.h"
                                if(self->it) {
                                    # 293 "./neo-c.h"
                                    __result225__ = __result_obj__ = self->it->item;
                                    return __result225__;
                                }
                                # 296 "./neo-c.h"
                                # 297 "./neo-c.h"
                                memset(&result_377,0,sizeof(char*));
                                # 298 "./neo-c.h"
                                __result226__ = __result_obj__ = result_377;
                                return __result226__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result227__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 320 "./neo-c.h"
                                __result227__ = self==((void*)0)||self->it==((void*)0);
                                return __result227__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional407;
char* result_379;
char* __result228__;
_Bool _if_conditional408;
char* __result229__;
char* result_380;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_379, 0, sizeof(char*));
memset(&result_380, 0, sizeof(char*));
                                # 308 "./neo-c.h"
                                # 302 "./neo-c.h"
                                if(_if_conditional407=self==((void*)0)||self->it==((void*)0),                                _if_conditional407) {
                                    # 303 "./neo-c.h"
                                    # 304 "./neo-c.h"
                                    memset(&result_379,0,sizeof(char*));
                                    # 305 "./neo-c.h"
                                    __result228__ = __result_obj__ = result_379;
                                    return __result228__;
                                }
                                # 308 "./neo-c.h"
                                self->it=self->it->next;
                                # 314 "./neo-c.h"
                                # 310 "./neo-c.h"
                                if(self->it) {
                                    # 311 "./neo-c.h"
                                    __result229__ = __result_obj__ = self->it->item;
                                    return __result229__;
                                }
                                # 314 "./neo-c.h"
                                # 315 "./neo-c.h"
                                memset(&result_380,0,sizeof(char*));
                                # 316 "./neo-c.h"
                                __result230__ = __result_obj__ = result_380;
                                return __result230__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional409;
struct list_item$1charph* it_381;
int i_382;
_Bool _while_condtional48;
_Bool _if_conditional410;
char* __result231__;
char* default_value_383;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_381, 0, sizeof(struct list_item$1charph*));
memset(&i_382, 0, sizeof(int));
memset(&default_value_383, 0, sizeof(char*));
                                    # 686 "./neo-c.h"
                                    # 682 "./neo-c.h"
                                    if(_if_conditional409=position<0,                                    _if_conditional409) {
                                        # 683 "./neo-c.h"
                                        position+=self->len;
                                    }
                                    # 686 "./neo-c.h"
                                    it_381=self->head;
                                    # 687 "./neo-c.h"
                                    i_382=0;
                                    # 694 "./neo-c.h"
                                    while(_while_condtional48=it_381!=((void*)0),                                    _while_condtional48) {
                                        # 692 "./neo-c.h"
                                        # 689 "./neo-c.h"
                                        if(_if_conditional410=position==i_382,                                        _if_conditional410) {
                                            # 690 "./neo-c.h"
                                            __result231__ = __result_obj__ = it_381->item;
                                            return __result231__;
                                        }
                                        # 692 "./neo-c.h"
                                        it_381=it_381->next;
                                        # 693 "./neo-c.h"
                                        i_382++;
                                    }
                                    # 696 "./neo-c.h"
                                    # 697 "./neo-c.h"
                                    memset(&default_value_383,0,sizeof(char*));
                                    # 698 "./neo-c.h"
                                    __result232__ = __result_obj__ = default_value_383;
                                    default_value_383 = come_decrement_ref_count2(default_value_383, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result232__;
                                    default_value_383 = come_decrement_ref_count2(default_value_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
char* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1576 "./neo-c.h"
                                    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
                                    # 1578 "./neo-c.h"
                                    __result245__ = __result_obj__ = item;
                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result245__;
                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
_Bool _if_conditional411;
unsigned int hash_401;
unsigned int it_402;
_Bool _while_condtional51;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool same_key_exist_403;
char* it2_404;
_Bool _if_conditional431;
_Bool _if_conditional432;
struct map$2charphcharph* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_401, 0, sizeof(unsigned int));
memset(&it_402, 0, sizeof(unsigned int));
memset(&same_key_exist_403, 0, sizeof(_Bool));
memset(&it2_404, 0, sizeof(char*));
                                        # 1393 "./neo-c.h"
                                        # 1390 "./neo-c.h"
                                        if(_if_conditional411=self->len*10>=self->size,                                        _if_conditional411) {
                                            # 1391 "./neo-c.h"
                                            map$2charphcharph_rehash(self);
                                        }
                                        # 1393 "./neo-c.h"
                                        hash_401=string_get_hash_key(key)%self->size;
                                        # 1394 "./neo-c.h"
                                        it_402=hash_401;
                                        # 1452 "./neo-c.h"
                                        while(_while_condtional51=(_Bool)1,                                        _while_condtional51) {
                                            # 1450 "./neo-c.h"
                                            # 1397 "./neo-c.h"
                                            if(_if_conditional423=self->item_existance[it_402],                                            _if_conditional423) {
                                                # 1420 "./neo-c.h"
                                                # 1399 "./neo-c.h"
                                                if(_if_conditional424=string_equals(self->keys[it_402],key),                                                _if_conditional424) {
                                                    # 1410 "./neo-c.h"
                                                    # 1401 "./neo-c.h"
                                                    if(_if_conditional425=1,                                                    _if_conditional425) {
                                                        # 1402 "./neo-c.h"
                                                        list$1charp_remove(self->key_list,self->keys[it_402]);
                                                        # 1403 "./neo-c.h"
                                                        self->keys[it_402] = come_decrement_ref_count2(self->keys[it_402], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        # 1404 "./neo-c.h"
                                                        self->keys[it_402]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        # 1407 "./neo-c.h"
                                                        list$1charp_remove(self->key_list,self->keys[it_402]);
                                                        # 1408 "./neo-c.h"
                                                        self->keys[it_402]=key;
                                                    }
                                                    # 1417 "./neo-c.h"
                                                    # 1410 "./neo-c.h"
                                                    if(_if_conditional426=1,                                                    _if_conditional426) {
                                                        # 1411 "./neo-c.h"
                                                        self->items[it_402] = come_decrement_ref_count2(self->items[it_402], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        # 1412 "./neo-c.h"
                                                        self->items[it_402]=(char*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        # 1415 "./neo-c.h"
                                                        self->items[it_402]=item;
                                                    }
                                                    # 1417 "./neo-c.h"
                                                    break;
                                                }
                                                # 1420 "./neo-c.h"
                                                it_402++;
                                                # 1430 "./neo-c.h"
                                                # 1422 "./neo-c.h"
                                                if(_if_conditional427=it_402>=self->size,                                                _if_conditional427) {
                                                    # 1423 "./neo-c.h"
                                                    it_402=0;
                                                }
                                                else {
                                                    # 1430 "./neo-c.h"
                                                    # 1425 "./neo-c.h"
                                                    if(_if_conditional428=it_402==hash_401,                                                    _if_conditional428) {
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
                                                self->item_existance[it_402]=(_Bool)1;
                                                # 1439 "./neo-c.h"
                                                # 1433 "./neo-c.h"
                                                if(_if_conditional429=1,                                                _if_conditional429) {
                                                    # 1434 "./neo-c.h"
                                                    self->keys[it_402]=(char*)come_increment_ref_count(key);
                                                }
                                                else {
                                                    # 1437 "./neo-c.h"
                                                    self->keys[it_402]=key;
                                                }
                                                # 1446 "./neo-c.h"
                                                # 1439 "./neo-c.h"
                                                if(_if_conditional430=1,                                                _if_conditional430) {
                                                    # 1440 "./neo-c.h"
                                                    self->items[it_402]=(char*)come_increment_ref_count(item);
                                                }
                                                else {
                                                    # 1443 "./neo-c.h"
                                                    self->items[it_402]=item;
                                                }
                                                # 1446 "./neo-c.h"
                                                self->len++;
                                                # 1448 "./neo-c.h"
                                                break;
                                            }
                                        }
                                        # 1452 "./neo-c.h"
                                        same_key_exist_403=(_Bool)0;
                                        # 1460 "./neo-c.h"
                                        for(                                        it2_404=list$1charp_begin(self->key_list);                                        !list$1charp_end(self->key_list);                                        it2_404=list$1charp_next(self->key_list)                                        ){
                                            # 1458 "./neo-c.h"
                                            # 1455 "./neo-c.h"
                                            if(_if_conditional431=string_equals(it2_404,key),                                            _if_conditional431) {
                                                # 1456 "./neo-c.h"
                                                same_key_exist_403=(_Bool)1;
                                            }
                                        }
                                        # 1464 "./neo-c.h"
                                        # 1460 "./neo-c.h"
                                        if(_if_conditional432=!same_key_exist_403,                                        _if_conditional432) {
                                            # 1461 "./neo-c.h"
                                            list$1charp_push_back(self->key_list,key);
                                        }
                                        # 1464 "./neo-c.h"
                                        __result244__ = __result_obj__ = self;
                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        return __result244__;
                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
void* __result_obj__;
int size_384;
void* right_value370;
char** keys_385;
void* right_value371;
char** items_386;
void* right_value372;
_Bool* item_existance_387;
int len_388;
char* it_391;
char* default_value_394;
char* it2_397;
unsigned int hash_398;
int n_399;
_Bool _while_condtional50;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
char* default_value_400;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_384, 0, sizeof(int));
right_value370 = (void*)0;
memset(&keys_385, 0, sizeof(char**));
right_value371 = (void*)0;
memset(&items_386, 0, sizeof(char**));
right_value372 = (void*)0;
memset(&item_existance_387, 0, sizeof(_Bool*));
memset(&len_388, 0, sizeof(int));
memset(&it_391, 0, sizeof(char*));
memset(&default_value_394, 0, sizeof(char*));
memset(&it2_397, 0, sizeof(char*));
memset(&hash_398, 0, sizeof(unsigned int));
memset(&n_399, 0, sizeof(int));
memset(&default_value_400, 0, sizeof(char*));
                                                # 1337 "./neo-c.h"
                                                size_384=self->size*10;
                                                # 1338 "./neo-c.h"
                                                keys_385=(char**)come_increment_ref_count(((char**)(right_value370=(char**)come_calloc(1, sizeof(char*)*(1*(size_384)), "./neo-c.h", 1338, "char*%"))));
                                                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 1339 "./neo-c.h"
                                                items_386=(char**)come_increment_ref_count(((char**)(right_value371=(char**)come_calloc(1, sizeof(char*)*(1*(size_384)), "./neo-c.h", 1339, "char*%"))));
                                                right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 1340 "./neo-c.h"
                                                item_existance_387=(_Bool*)come_increment_ref_count(((_Bool*)(right_value372=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_384)), "./neo-c.h", 1340, "bool"))));
                                                right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 1342 "./neo-c.h"
                                                len_388=0;
                                                # 1377 "./neo-c.h"
                                                for(                                                it_391=map$2charphcharph_begin(self);                                                !map$2charphcharph_end(self);                                                it_391=map$2charphcharph_next(self)                                                ){
                                                    # 1345 "./neo-c.h"
                                                    # 1346 "./neo-c.h"
                                                    memset(&default_value_394,0,sizeof(char*));
                                                    # 1347 "./neo-c.h"
                                                    it2_397=map$2charphcharph_at(self,it_391,default_value_394);
                                                    # 1348 "./neo-c.h"
                                                    hash_398=string_get_hash_key(it_391)%size_384;
                                                    # 1349 "./neo-c.h"
                                                    n_399=hash_398;
                                                    # 1375 "./neo-c.h"
                                                    while(_while_condtional50=(_Bool)1,                                                    _while_condtional50) {
                                                        # 1374 "./neo-c.h"
                                                        # 1352 "./neo-c.h"
                                                        if(_if_conditional420=item_existance_387[n_399],                                                        _if_conditional420) {
                                                            # 1354 "./neo-c.h"
                                                            n_399++;
                                                            # 1364 "./neo-c.h"
                                                            # 1356 "./neo-c.h"
                                                            if(_if_conditional421=n_399>=size_384,                                                            _if_conditional421) {
                                                                # 1357 "./neo-c.h"
                                                                n_399=0;
                                                            }
                                                            else {
                                                                # 1364 "./neo-c.h"
                                                                # 1359 "./neo-c.h"
                                                                if(_if_conditional422=n_399==hash_398,                                                                _if_conditional422) {
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
                                                            item_existance_387[n_399]=(_Bool)1;
                                                            # 1367 "./neo-c.h"
                                                            keys_385[n_399]=it_391;
                                                            # 1368 "./neo-c.h"
                                                            # 1369 "./neo-c.h"
                                                            items_386[n_399]=map$2charphcharph_at(self,it_391,default_value_400);
                                                            # 1371 "./neo-c.h"
                                                            len_388++;
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
                                                self->keys=keys_385;
                                                # 1382 "./neo-c.h"
                                                self->items=items_386;
                                                # 1383 "./neo-c.h"
                                                self->item_existance=item_existance_387;
                                                # 1385 "./neo-c.h"
                                                self->size=size_384;
                                                # 1386 "./neo-c.h"
                                                self->len=len_388;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__;
_Bool _if_conditional412;
char* result_389;
char* __result233__;
_Bool _if_conditional413;
char* __result234__;
char* result_390;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_389, 0, sizeof(char*));
memset(&result_390, 0, sizeof(char*));
                                                    # 1304 "./neo-c.h"
                                                    # 1299 "./neo-c.h"
                                                    if(_if_conditional412=self==((void*)0),                                                    _if_conditional412) {
                                                        # 1300 "./neo-c.h"
                                                        # 1301 "./neo-c.h"
                                                        memset(&result_389,0,sizeof(char*));
                                                        # 1302 "./neo-c.h"
                                                        __result233__ = __result_obj__ = result_389;
                                                        return __result233__;
                                                    }
                                                    # 1304 "./neo-c.h"
                                                    self->key_list->it=self->key_list->head;
                                                    # 1310 "./neo-c.h"
                                                    # 1306 "./neo-c.h"
                                                    if(self->key_list->it) {
                                                        # 1307 "./neo-c.h"
                                                        __result234__ = __result_obj__ = self->key_list->it->item;
                                                        return __result234__;
                                                    }
                                                    # 1310 "./neo-c.h"
                                                    # 1311 "./neo-c.h"
                                                    memset(&result_390,0,sizeof(char*));
                                                    # 1312 "./neo-c.h"
                                                    __result235__ = __result_obj__ = result_390;
                                                    return __result235__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
void* __result_obj__;
_Bool __result236__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1333 "./neo-c.h"
                                                    __result236__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                    return __result236__;
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__;
_Bool _if_conditional414;
char* result_392;
char* __result237__;
_Bool _if_conditional415;
char* __result238__;
char* result_393;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_392, 0, sizeof(char*));
memset(&result_393, 0, sizeof(char*));
                                                    # 1321 "./neo-c.h"
                                                    # 1316 "./neo-c.h"
                                                    if(_if_conditional414=self==((void*)0)||self->key_list->it==((void*)0),                                                    _if_conditional414) {
                                                        # 1317 "./neo-c.h"
                                                        # 1318 "./neo-c.h"
                                                        memset(&result_392,0,sizeof(char*));
                                                        # 1319 "./neo-c.h"
                                                        __result237__ = __result_obj__ = result_392;
                                                        return __result237__;
                                                    }
                                                    # 1321 "./neo-c.h"
                                                    self->key_list->it=self->key_list->it->next;
                                                    # 1327 "./neo-c.h"
                                                    # 1323 "./neo-c.h"
                                                    if(self->key_list->it) {
                                                        # 1324 "./neo-c.h"
                                                        __result238__ = __result_obj__ = self->key_list->it->item;
                                                        return __result238__;
                                                    }
                                                    # 1327 "./neo-c.h"
                                                    # 1328 "./neo-c.h"
                                                    memset(&result_393,0,sizeof(char*));
                                                    # 1329 "./neo-c.h"
                                                    __result239__ = __result_obj__ = result_393;
                                                    return __result239__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__;
unsigned int hash_395;
unsigned int it_396;
_Bool _while_condtional49;
_Bool _if_conditional416;
_Bool _if_conditional417;
char* __result240__;
_Bool _if_conditional418;
_Bool _if_conditional419;
char* __result241__;
char* __result242__;
char* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_395, 0, sizeof(unsigned int));
memset(&it_396, 0, sizeof(unsigned int));
                                                        # 1226 "./neo-c.h"
                                                        hash_395=string_get_hash_key(((char*)key))%self->size;
                                                        # 1227 "./neo-c.h"
                                                        it_396=hash_395;
                                                        # 1251 "./neo-c.h"
                                                        while(_while_condtional49=(_Bool)1,                                                        _while_condtional49) {
                                                            # 1249 "./neo-c.h"
                                                            # 1230 "./neo-c.h"
                                                            if(_if_conditional416=self->item_existance[it_396],                                                            _if_conditional416) {
                                                                # 1237 "./neo-c.h"
                                                                # 1232 "./neo-c.h"
                                                                if(_if_conditional417=string_equals(self->keys[it_396],key),                                                                _if_conditional417) {
                                                                    # 1234 "./neo-c.h"
                                                                    __result240__ = __result_obj__ = self->items[it_396];
                                                                    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                    return __result240__;
                                                                }
                                                                # 1237 "./neo-c.h"
                                                                it_396++;
                                                                # 1245 "./neo-c.h"
                                                                # 1239 "./neo-c.h"
                                                                if(_if_conditional418=it_396>=self->size,                                                                _if_conditional418) {
                                                                    # 1240 "./neo-c.h"
                                                                    it_396=0;
                                                                }
                                                                else {
                                                                    # 1245 "./neo-c.h"
                                                                    # 1242 "./neo-c.h"
                                                                    if(_if_conditional419=it_396==hash_395,                                                                    _if_conditional419) {
                                                                        # 1243 "./neo-c.h"
                                                                        __result241__ = __result_obj__ = default_value;
                                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        return __result241__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                # 1247 "./neo-c.h"
                                                                __result242__ = __result_obj__ = default_value;
                                                                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                return __result242__;
                                                            }
                                                        }
                                                        # 1251 "./neo-c.h"
                                                        __result243__ = __result_obj__ = default_value;
                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                        return __result243__;
                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sClassNode_finalize(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sClassNode_finalize"
                # 0 "sClassNode_finalize"
                if(_if_conditional437=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional437) {
                    # 0 "sClassNode_finalize"
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sClassNode_finalize"
                # 1 "sClassNode_finalize"
                if(_if_conditional438=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional438) {
                    # 1 "sClassNode_finalize"
                    come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sClassNode_finalize"
                # 2 "sClassNode_finalize"
                if(_if_conditional439=self!=((void*)0)&&self->mMethods!=((void*)0),                _if_conditional439) {
                    # 2 "sClassNode_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mMethods, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sClassNode_finalize"
                # 3 "sClassNode_finalize"
                if(_if_conditional440=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional440) {
                    # 3 "sClassNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional441;
struct sClassNode* __result246__;
void* right_value381;
struct sClassNode* result_408;
_Bool _if_conditional442;
void* right_value382;
char* __dec_obj102;
_Bool _if_conditional443;
void* right_value383;
struct sClass* __dec_obj103;
_Bool _if_conditional444;
void* right_value384;
struct list$1sNodeph* __dec_obj104;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value385;
char* __dec_obj105;
_Bool _if_conditional447;
struct sClassNode* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_408, 0, sizeof(struct sClassNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
                # 3 "sClassNode_clone"
                # 2 "sClassNode_clone"
                if(_if_conditional441=self==(void*)0,                _if_conditional441) {
                    # 2 "sClassNode_clone"
                    __result246__ = __result_obj__ = (void*)0;
                    return __result246__;
                }
                # 3 "sClassNode_clone"
                result_408=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value381=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"))));
                come_call_finalizer2(sClassNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sClassNode_clone"
                # 4 "sClassNode_clone"
                if(_if_conditional442=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional442) {
                    # 4 "sClassNode_clone"
                    __dec_obj102=result_408->mName;
                    result_408->mName=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->mName))));
                    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sClassNode_clone"
                # 5 "sClassNode_clone"
                if(_if_conditional443=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional443) {
                    # 5 "sClassNode_clone"
                    __dec_obj103=result_408->mClass;
                    result_408->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value383=sClass_clone(self->mClass))));
                    come_call_finalizer2(sClass_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sClassNode_clone"
                # 6 "sClassNode_clone"
                if(_if_conditional444=self!=((void*)0)&&self->mMethods!=((void*)0),                _if_conditional444) {
                    # 6 "sClassNode_clone"
                    __dec_obj104=result_408->mMethods;
                    result_408->mMethods=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value384=list$1sNodephp_clone(self->mMethods))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sClassNode_clone"
                # 7 "sClassNode_clone"
                if(_if_conditional445=self!=((void*)0),                _if_conditional445) {
                    # 7 "sClassNode_clone"
                    result_408->sline=self->sline;
                }
                # 9 "sClassNode_clone"
                # 8 "sClassNode_clone"
                if(_if_conditional446=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional446) {
                    # 8 "sClassNode_clone"
                    __dec_obj105=result_408->sname;
                    result_408->sname=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->sname))));
                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sClassNode_clone"
                # 9 "sClassNode_clone"
                if(_if_conditional447=self!=((void*)0),                _if_conditional447) {
                    # 9 "sClassNode_clone"
                    result_408->mOutput=self->mOutput;
                }
                # 10 "sClassNode_clone"
                __result247__ = __result_obj__ = result_408;
                come_call_finalizer2(sClassNode_finalize,result_408, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result247__;
                come_call_finalizer2(sClassNode_finalize,result_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_409;
char* p_410;
int sline_411;
_Bool _if_conditional448;
void* right_value388;
char* type_name_412;
_Bool _if_conditional449;
void* right_value389;
void* right_value390;
_Bool _if_conditional450;
void* right_value391;
_Bool _if_conditional451;
_Bool _if_conditional452;
void* right_value392;
char* type_name_413;
void* right_value393;
struct sNode* __result250__;
void* right_value394;
struct sNode* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_409, 0, sizeof(_Bool));
memset(&p_410, 0, sizeof(char*));
memset(&sline_411, 0, sizeof(int));
right_value388 = (void*)0;
memset(&type_name_412, 0, sizeof(char*));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&type_name_413, 0, sizeof(char*));
right_value393 = (void*)0;
right_value394 = (void*)0;
    # 1177 "14struct.c"
    define_struct_409=(_Bool)0;
    # 1203 "14struct.c"
    {
        # 1179 "14struct.c"
        p_410=info->p;
        # 1180 "14struct.c"
        sline_411=info->sline;
        # 1199 "14struct.c"
        # 1182 "14struct.c"
        if(_if_conditional448=charp_operator_equals(buf,"struct"),        _if_conditional448) {
            # 1183 "14struct.c"
            type_name_412=(char*)come_increment_ref_count(((char*)(right_value388=parse_word(info))));
            right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1190 "14struct.c"
            # 1185 "14struct.c"
            if(_if_conditional449=strmemcmp(info->p,"extends"),            _if_conditional449) {
                # 1186 "14struct.c"
                ((char*)(right_value389=parse_word(info)));
                right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1187 "14struct.c"
                ((char*)(right_value390=parse_word(info)));
                right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 1197 "14struct.c"
            # 1190 "14struct.c"
            if(_if_conditional450=*info->p==123,            _if_conditional450) {
                # 1191 "14struct.c"
                ((char*)(right_value391=skip_block(info)));
                right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1196 "14struct.c"
                # 1193 "14struct.c"
                if(_if_conditional451=*info->p==59,                _if_conditional451) {
                    # 1194 "14struct.c"
                    define_struct_409=(_Bool)1;
                }
            }
            type_name_412 = come_decrement_ref_count2(type_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1199 "14struct.c"
        info->p=p_410;
        # 1200 "14struct.c"
        info->sline=sline_411;
    }
    # 1209 "14struct.c"
    # 1203 "14struct.c"
    if(define_struct_409) {
        # 1204 "14struct.c"
        type_name_413=(char*)come_increment_ref_count(((char*)(right_value392=parse_word(info))));
        right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1206 "14struct.c"
        __result250__ = __result_obj__ = ((struct sNode*)(right_value393=parse_struct((char*)come_increment_ref_count(type_name_413),info)));
        type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result250__;
        type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1209 "14struct.c"
    __result251__ = __result_obj__ = ((struct sNode*)(right_value394=string_node_v13(buf,head,head_sline,info)));
    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result251__;
}

