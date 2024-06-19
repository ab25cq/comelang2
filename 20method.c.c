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
struct sCurrentNode
{
    int sline;
    char* sname;
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
struct sMethodCallNode
{
    int sline;
    char* sname;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
};
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated(struct sCurrentNode* self);

char* sCurrentNode_kind(struct sCurrentNode* self);

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
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
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind(struct sMethodCallNode* self);

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sCurrentNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 7 "20method.c"
    self->sline=info->sline;
    # 8 "20method.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 11 "20method.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 13 "20method.c"
    __result53__ = self->sline;
    return __result53__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 18 "20method.c"
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string(self->sname)));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sCurrentNode_terminated(struct sCurrentNode* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 23 "20method.c"
    __result55__ = (_Bool)0;
    return __result55__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__;
void* right_value81;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 28 "20method.c"
    __result56__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sCurrentNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* class_name_47;
void* right_value83;
void* right_value84;
struct sClass* current_stack_48;
void* right_value85;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
struct tuple2$2charphsTypeph* result_kind_57;
void* right_value131;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
struct tuple2$2charphsTypeph* return_value_86;
void* right_value137;
struct sVarTable* vtable_87;
struct map$2charphsVarph* o2_saved_88;
char* it_91;
char* key_94;
struct sVar* value_98;
void* right_value138;
struct sType* type2_99;
void* right_value139;
void* right_value140;
void* right_value141;
struct tuple2$2charphsTypeph* item_100;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional149;
void* right_value142;
struct sType* type3_101;
void* right_value143;
void* right_value144;
void* right_value145;
struct tuple2$2charphsTypeph* item2_104;
void* right_value146;
void* right_value147;
static int num_current_stack_153=0;
struct map$2charphsVarph* o2_saved_154;
char* it_155;
char* key_156;
struct sVar* value_157;
void* right_value154;
struct sType* type2_158;
void* right_value155;
void* right_value156;
struct tuple2$2charphsTypeph* item_159;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value157;
struct CVALUE* come_value_160;
void* right_value158;
char* __dec_obj43;
void* right_value159;
void* right_value160;
struct sType* __dec_obj44;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&class_name_47, 0, sizeof(char*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&current_stack_48, 0, sizeof(struct sClass*));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_kind_57, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&return_value_86, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value137 = (void*)0;
memset(&vtable_87, 0, sizeof(struct sVarTable*));
memset(&o2_saved_88, 0, sizeof(struct map$2charphsVarph*));
memset(&it_91, 0, sizeof(char*));
memset(&key_94, 0, sizeof(char*));
memset(&value_98, 0, sizeof(struct sVar*));
right_value138 = (void*)0;
memset(&type2_99, 0, sizeof(struct sType*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&item_100, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value142 = (void*)0;
memset(&type3_101, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&item2_104, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&o2_saved_154, 0, sizeof(struct map$2charphsVarph*));
memset(&it_155, 0, sizeof(char*));
memset(&key_156, 0, sizeof(char*));
memset(&value_157, 0, sizeof(struct sVar*));
right_value154 = (void*)0;
memset(&type2_158, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&item_159, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value157 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
    # 33 "20method.c"
    info->current_stack_num++;
    # 34 "20method.c"
    class_name_47=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 35 "20method.c"
    current_stack_48=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value84=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value83=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 35, "sClass")))),class_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer3(right_value83,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 37 "20method.c"
    result_kind_57=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value89=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value88=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 37, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 37, "sType")))),"int",(_Bool)0,info))))))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value89,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 38 "20method.c"
    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value131=tuple2$2charphsTypephp_clone(result_kind_57)))));
    come_call_finalizer3(right_value131,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 40 "20method.c"
    return_value_86=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value136=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value135=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 40, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 40, "sType")))),"void*",(_Bool)0,info))))))));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value135,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value136,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 41 "20method.c"
    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value137=tuple2$2charphsTypephp_clone(return_value_86)))));
    come_call_finalizer3(right_value137,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 43 "20method.c"
    vtable_87=info->lv_table;
    # 85 "20method.c"
    while(vtable_87) {
        # 82 "20method.c"
        for(        o2_saved_88=(struct map$2charphsVarph*)come_increment_ref_count((vtable_87->mVars)),it_91=map$2charphsVarph_begin((o2_saved_88));        !map$2charphsVarph_end((o2_saved_88));        it_91=map$2charphsVarph_next((o2_saved_88))        ){
            # 47 "20method.c"
            key_94=it_91;
            # 48 "20method.c"
            value_98=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_87->mVars,key_94), "20method.c", 48, 0));
            # 50 "20method.c"
            type2_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(value_98->mType))));
            come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 52 "20method.c"
            type2_99->mPointerNum++;
            # 54 "20method.c"
            item_100=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value141=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value140=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 54, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(value_98->mCValueName)))),(struct sType*)come_increment_ref_count(type2_99)))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value140,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value141,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 80 "20method.c"
            # 56 "20method.c"
            if(_if_conditional143=value_98->mCValueName!=((void*)0),            _if_conditional143) {
                # 79 "20method.c"
                # 57 "20method.c"
                if(_if_conditional144=strcmp(value_98->mCValueName,"__list_values")==0,                _if_conditional144) {
                }
                else {
                    # 79 "20method.c"
                    # 60 "20method.c"
                    if(_if_conditional145=strcmp(value_98->mCValueName,"__map_keys")==0,                    _if_conditional145) {
                    }
                    else {
                        # 79 "20method.c"
                        # 63 "20method.c"
                        if(_if_conditional146=strcmp(value_98->mCValueName,"__map_element")==0,                        _if_conditional146) {
                        }
                        else {
                            # 79 "20method.c"
                            # 66 "20method.c"
                            if(_if_conditional147=string_operator_equals(value_98->mType->mClass->mName,"va_list")||string_operator_equals(value_98->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional147) {
                            }
                            else {
                                # 79 "20method.c"
                                # 69 "20method.c"
                                if(_if_conditional149=list$1sNodeph_length(type2_99->mArrayNum)==1,                                _if_conditional149) {
                                    # 70 "20method.c"
                                    type3_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(type2_99))));
                                    come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 71 "20method.c"
                                    list$1sNodeph_reset(type3_101->mArrayNum);
                                    # 72 "20method.c"
                                    type3_101->mPointerNum++;
                                    # 73 "20method.c"
                                    item2_104=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value145=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value144=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 73, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(value_98->mCValueName)))),(struct sType*)come_increment_ref_count(type3_101)))));
                                    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value144,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value145,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 74 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value146=tuple2$2charphsTypephp_clone(item2_104)))));
                                    come_call_finalizer3(right_value146,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(type3_101,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(item2_104,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    # 77 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value147=tuple2$2charphsTypephp_clone(item_100)))));
                                    come_call_finalizer3(right_value147,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_99,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_100,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_88,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        # 82 "20method.c"
        vtable_87=vtable_87->mParent;
    }
    # 85 "20method.c"
    output_struct(current_stack_48,info);
    # 87 "20method.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_47),(struct sClass*)come_increment_ref_count(current_stack_48));
    # 89 "20method.c"
    # 90 "20method.c"
    num_current_stack_153++;
    # 91 "20method.c"
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_47,num_current_stack_153);
    # 92 "20method.c"
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_153,class_name_47);
    # 94 "20method.c"
    vtable_87=info->lv_table;
    # 132 "20method.c"
    while(vtable_87) {
        # 129 "20method.c"
        for(        o2_saved_154=(struct map$2charphsVarph*)come_increment_ref_count((vtable_87->mVars)),it_155=map$2charphsVarph_begin((o2_saved_154));        !map$2charphsVarph_end((o2_saved_154));        it_155=map$2charphsVarph_next((o2_saved_154))        ){
            # 98 "20method.c"
            key_156=it_155;
            # 99 "20method.c"
            value_157=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_87->mVars,key_156), "20method.c", 99, 1));
            # 101 "20method.c"
            type2_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(value_157->mType))));
            come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 103 "20method.c"
            item_159=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value156=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value155=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 103, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_157->mCValueName),(struct sType*)come_increment_ref_count(type2_158)))));
            come_call_finalizer3(right_value155,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value156,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 127 "20method.c"
            # 105 "20method.c"
            if(_if_conditional201=value_157->mCValueName!=((void*)0),            _if_conditional201) {
                # 126 "20method.c"
                # 106 "20method.c"
                if(_if_conditional202=strcmp(value_157->mCValueName,"__list_values")==0,                _if_conditional202) {
                }
                else {
                    # 126 "20method.c"
                    # 109 "20method.c"
                    if(_if_conditional203=strcmp(value_157->mCValueName,"__map_keys")==0,                    _if_conditional203) {
                    }
                    else {
                        # 126 "20method.c"
                        # 112 "20method.c"
                        if(_if_conditional204=strcmp(value_157->mCValueName,"__map_element")==0,                        _if_conditional204) {
                        }
                        else {
                            # 126 "20method.c"
                            # 115 "20method.c"
                            if(_if_conditional205=string_operator_equals(value_157->mType->mClass->mName,"va_list")||string_operator_equals(value_157->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional205) {
                            }
                            else {
                                # 125 "20method.c"
                                # 119 "20method.c"
                                if(_if_conditional206=string_operator_equals(type2_158->mClass->mName,"lambda"),                                _if_conditional206) {
                                    # 120 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_153,value_157->mCValueName,value_157->mCValueName);
                                }
                                else {
                                    # 123 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_153,value_157->mCValueName,value_157->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_158,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_159,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_154,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        # 129 "20method.c"
        vtable_87=vtable_87->mParent;
    }
    # 132 "20method.c"
    come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 132, "CVALUE"))));
    come_call_finalizer3(right_value157,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 134 "20method.c"
    __dec_obj43=come_value_160->c_value;
    come_value_160->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("&__current_stack%d__",num_current_stack_153))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 135 "20method.c"
    __dec_obj44=come_value_160->type;
    come_value_160->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 135, "sType")))),class_name_47,(_Bool)0,info))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 136 "20method.c"
    come_value_160->var=((void*)0);
    # 138 "20method.c"
    add_come_last_code(info,"%s;\n",come_value_160->c_value);
    # 140 "20method.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
    # 142 "20method.c"
    info->num_current_stack=num_current_stack_153;
    # 144 "20method.c"
    __result118__ = (_Bool)1;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_kind_57,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(return_value_86,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result118__;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_kind_57,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(return_value_86,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sClass_finalize"
        # 0 "sClass_finalize"
        if(_if_conditional20=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional20) {
            # 0 "sClass_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sClass_finalize"
        # 1 "sClass_finalize"
        if(_if_conditional21=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional21) {
            # 1 "sClass_finalize"
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sClass_finalize"
        # 2 "sClass_finalize"
        if(_if_conditional42=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional42) {
            # 2 "sClass_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 4 "sClass_finalize"
        # 3 "sClass_finalize"
        if(_if_conditional43=self!=((void*)0)&&self->mParentClassName!=((void*)0),        _if_conditional43) {
            # 3 "sClass_finalize"
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_49;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 124 "./neo-c.h"
                it_49=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    # 126 "./neo-c.h"
                    prev_it_50=it_49;
                    # 127 "./neo-c.h"
                    it_49=it_49->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_50,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional22) {
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional25=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional25) {
                                            # 0 "sType_finalize"
                                            come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional27) {
                                            # 1 "sType_finalize"
                                            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional29=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional29) {
                                            # 2 "sType_finalize"
                                            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional30=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional30) {
                                            # 3 "sType_finalize"
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional31=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional31) {
                                            # 4 "sType_finalize"
                                            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional32=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional32) {
                                            # 5 "sType_finalize"
                                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional34=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional34) {
                                            # 6 "sType_finalize"
                                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional35=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional35) {
                                            # 7 "sType_finalize"
                                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional37=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional37) {
                                            # 8 "sType_finalize"
                                            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional38=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional38) {
                                            # 9 "sType_finalize"
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional39=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional39) {
                                            # 10 "sType_finalize"
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional40=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional40) {
                                            # 11 "sType_finalize"
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 13 "sType_finalize"
                                        # 12 "sType_finalize"
                                        if(_if_conditional41=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional41) {
                                            # 12 "sType_finalize"
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_51;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sTypeph*));
                                                # 124 "./neo-c.h"
                                                it_51=self->head;
                                                # 130 "./neo-c.h"
                                                while(_while_condtional8=it_51!=((void*)0),                                                _while_condtional8) {
                                                    # 126 "./neo-c.h"
                                                    prev_it_52=it_51;
                                                    # 127 "./neo-c.h"
                                                    it_51=it_51->next;
                                                    # 128 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_52,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional26) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional28=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional28) {
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_53;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1sNodeph*));
                                                # 124 "./neo-c.h"
                                                it_53=self->head;
                                                # 130 "./neo-c.h"
                                                while(_while_condtional9=it_53!=((void*)0),                                                _while_condtional9) {
                                                    # 126 "./neo-c.h"
                                                    prev_it_54=it_53;
                                                    # 127 "./neo-c.h"
                                                    it_53=it_53->next;
                                                    # 128 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_54,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sNodephp_finalize"
                                                        # 0 "list_item$1sNodephp_finalize"
                                                        if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional33) {
                                                            # 0 "list_item$1sNodephp_finalize"
                                                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_55;
_Bool _while_condtional10;
struct list_item$1charph* prev_it_56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_55, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_56, 0, sizeof(struct list_item$1charph*));
                                                # 124 "./neo-c.h"
                                                it_55=self->head;
                                                # 130 "./neo-c.h"
                                                while(_while_condtional10=it_55!=((void*)0),                                                _while_condtional10) {
                                                    # 126 "./neo-c.h"
                                                    prev_it_56=it_55;
                                                    # 127 "./neo-c.h"
                                                    it_55=it_55->next;
                                                    # 128 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_56,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional36=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional36) {
                                                            # 0 "list_item$1charphp_finalize"
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj13;
struct sType* __dec_obj14;
struct tuple2$2charphsTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1768 "./neo-c.h"
        __dec_obj13=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1769 "./neo-c.h"
        __dec_obj14=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1771 "./neo-c.h"
        __result57__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result57__;
        come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value90;
struct list_item$1tuple2$2charphsTypephph* litem_58;
struct tuple2$2charphsTypeph* __dec_obj15;
_Bool _if_conditional47;
void* right_value91;
struct list_item$1tuple2$2charphsTypephph* litem_59;
struct tuple2$2charphsTypeph* __dec_obj16;
void* right_value92;
struct list_item$1tuple2$2charphsTypephph* litem_60;
struct tuple2$2charphsTypeph* __dec_obj17;
struct list$1tuple2$2charphsTypephph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value91 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value92 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        # 257 "./neo-c.h"
        # 226 "./neo-c.h"
        if(_if_conditional44=self->len==0,        _if_conditional44) {
            # 227 "./neo-c.h"
            litem_58=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value90=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer3(right_value90,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 229 "./neo-c.h"
            litem_58->prev=((void*)0);
            # 230 "./neo-c.h"
            litem_58->next=((void*)0);
            # 231 "./neo-c.h"
            __dec_obj15=litem_58->item;
            litem_58->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj15,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            # 233 "./neo-c.h"
            self->tail=litem_58;
            # 234 "./neo-c.h"
            self->head=litem_58;
        }
        else {
            # 257 "./neo-c.h"
            # 236 "./neo-c.h"
            if(_if_conditional47=self->len==1,            _if_conditional47) {
                # 237 "./neo-c.h"
                litem_59=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value91=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value91,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_59->prev=self->head;
                # 240 "./neo-c.h"
                litem_59->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj16=litem_59->item;
                litem_59->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj16,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail=litem_59;
                # 244 "./neo-c.h"
                self->head->next=litem_59;
            }
            else {
                # 247 "./neo-c.h"
                litem_60=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value92=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 247, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value92,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 249 "./neo-c.h"
                litem_60->prev=self->tail;
                # 250 "./neo-c.h"
                litem_60->next=((void*)0);
                # 251 "./neo-c.h"
                __dec_obj17=litem_60->item;
                litem_60->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj17,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                # 253 "./neo-c.h"
                self->tail->next=litem_60;
                # 254 "./neo-c.h"
                self->tail=litem_60;
            }
        }
        # 257 "./neo-c.h"
        self->len++;
        # 259 "./neo-c.h"
        __result58__ = __result_obj__ = self;
        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result58__;
        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsTypephp_finalize"
                    # 0 "tuple2$2charphsTypephp_finalize"
                    if(_if_conditional50=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional50) {
                        # 0 "tuple2$2charphsTypephp_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsTypephp_finalize"
                    # 1 "tuple2$2charphsTypephp_finalize"
                    if(_if_conditional51=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional51) {
                        # 1 "tuple2$2charphsTypephp_finalize"
                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct tuple2$2charphsTypeph* __result59__;
void* right_value93;
struct tuple2$2charphsTypeph* result_61;
_Bool _if_conditional55;
void* right_value94;
char* __dec_obj18;
_Bool _if_conditional56;
void* right_value130;
struct sType* __dec_obj42;
struct tuple2$2charphsTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value94 = (void*)0;
right_value130 = (void*)0;
        # 3 "tuple2$2charphsTypephp_clone"
        # 2 "tuple2$2charphsTypephp_clone"
        if(_if_conditional52=self==(void*)0,        _if_conditional52) {
            # 2 "tuple2$2charphsTypephp_clone"
            __result59__ = __result_obj__ = (void*)0;
            return __result59__;
        }
        # 3 "tuple2$2charphsTypephp_clone"
        result_61=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value93=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
        come_call_finalizer3(right_value93,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "tuple2$2charphsTypephp_clone"
        # 4 "tuple2$2charphsTypephp_clone"
        if(_if_conditional55=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional55) {
            # 4 "tuple2$2charphsTypephp_clone"
            __dec_obj18=result_61->v1;
            result_61->v1=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(self->v1))));
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "tuple2$2charphsTypephp_clone"
        # 5 "tuple2$2charphsTypephp_clone"
        if(_if_conditional56=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional56) {
            # 5 "tuple2$2charphsTypephp_clone"
            __dec_obj42=result_61->v2;
            result_61->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(self->v2))));
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "tuple2$2charphsTypephp_clone"
        __result78__ = __result_obj__ = result_61;
        come_call_finalizer3(result_61,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        return __result78__;
        come_call_finalizer3(result_61,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional53;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2charphsTypeph_finalize"
            # 0 "tuple2$2charphsTypeph_finalize"
            if(_if_conditional53=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional53) {
                # 0 "tuple2$2charphsTypeph_finalize"
                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2charphsTypeph_finalize"
            # 1 "tuple2$2charphsTypeph_finalize"
            if(_if_conditional54=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional54) {
                # 1 "tuple2$2charphsTypeph_finalize"
                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional57;
struct sType* __result60__;
void* right_value95;
struct sType* result_62;
_Bool _if_conditional58;
_Bool _if_conditional59;
void* right_value102;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional63;
void* right_value105;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional67;
void* right_value106;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional68;
void* right_value107;
char* __dec_obj26;
_Bool _if_conditional69;
void* right_value108;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional70;
void* right_value116;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional83;
_Bool _if_conditional84;
void* right_value117;
struct list$1sTypeph* __dec_obj32;
_Bool _if_conditional85;
void* right_value124;
struct list$1charph* __dec_obj36;
_Bool _if_conditional89;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj37;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value126;
struct sNode* __dec_obj38;
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
_Bool _if_conditional116;
void* right_value127;
struct sNode* __dec_obj39;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value128;
char* __dec_obj40;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value129;
char* __dec_obj41;
_Bool _if_conditional130;
struct sType* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct sType*));
right_value102 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional57=self==(void*)0,                _if_conditional57) {
                    # 2 "sType_clone"
                    __result60__ = __result_obj__ = (void*)0;
                    return __result60__;
                }
                # 3 "sType_clone"
                result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer3(right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional58=self!=((void*)0),                _if_conditional58) {
                    # 4 "sType_clone"
                    result_62->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional59=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional59) {
                    # 5 "sType_clone"
                    __dec_obj22=result_62->mMultipleTypes;
                    result_62->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional63=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional63) {
                    # 6 "sType_clone"
                    __dec_obj24=result_62->mNoSolvedGenericsType;
                    result_62->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value105=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer3(__dec_obj24,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value105,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional67=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional67) {
                    # 7 "sType_clone"
                    __dec_obj25=result_62->mOriginalLoadVarType;
                    result_62->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer3(__dec_obj25,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value106,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional68=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional68) {
                    # 8 "sType_clone"
                    __dec_obj26=result_62->mGenericsName;
                    result_62->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value107=string_clone(self->mGenericsName))));
                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional69=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional69) {
                    # 9 "sType_clone"
                    __dec_obj27=result_62->mGenericsTypes;
                    result_62->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value108,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional70=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional70) {
                    # 10 "sType_clone"
                    __dec_obj31=result_62->mArrayNum;
                    result_62->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value116=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj31,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value116,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    # 11 "sType_clone"
                    result_62->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional84=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional84) {
                    # 12 "sType_clone"
                    __dec_obj32=result_62->mParamTypes;
                    result_62->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value117=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer3(__dec_obj32,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value117,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional85=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional85) {
                    # 13 "sType_clone"
                    __dec_obj36=result_62->mParamNames;
                    result_62->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer3(__dec_obj36,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value124,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional89=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional89) {
                    # 14 "sType_clone"
                    __dec_obj37=result_62->mResultType;
                    result_62->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer3(__dec_obj37,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value125,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    # 15 "sType_clone"
                    result_62->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional91=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional91) {
                    # 16 "sType_clone"
                    __dec_obj38=result_62->mAlignas;
                    result_62->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->mAlignas))));
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    # 17 "sType_clone"
                    result_62->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    # 18 "sType_clone"
                    result_62->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    # 19 "sType_clone"
                    result_62->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    # 20 "sType_clone"
                    result_62->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    # 21 "sType_clone"
                    result_62->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    # 22 "sType_clone"
                    result_62->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 23 "sType_clone"
                    result_62->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 24 "sType_clone"
                    result_62->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 25 "sType_clone"
                    result_62->mRecord=self->mRecord;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 26 "sType_clone"
                    result_62->mExtern=self->mExtern;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 27 "sType_clone"
                    result_62->mRestrict=self->mRestrict;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    # 28 "sType_clone"
                    result_62->mImmutable=self->mImmutable;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    # 29 "sType_clone"
                    result_62->mHeap=self->mHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    # 30 "sType_clone"
                    result_62->mDummyHeap=self->mDummyHeap;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    # 31 "sType_clone"
                    result_62->mDelegate=self->mDelegate;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    # 32 "sType_clone"
                    result_62->mShare=self->mShare;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    # 33 "sType_clone"
                    result_62->mClone=self->mClone;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    # 34 "sType_clone"
                    result_62->mNoHeap=self->mNoHeap;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    # 35 "sType_clone"
                    result_62->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    # 36 "sType_clone"
                    result_62->mRefference=self->mRefference;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    # 37 "sType_clone"
                    result_62->mException=self->mException;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    # 38 "sType_clone"
                    result_62->mPointerNum=self->mPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    # 39 "sType_clone"
                    result_62->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    # 40 "sType_clone"
                    result_62->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional116=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional116) {
                    # 41 "sType_clone"
                    __dec_obj39=result_62->mSizeNum;
                    result_62->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(self->mSizeNum))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    # 42 "sType_clone"
                    result_62->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    # 43 "sType_clone"
                    result_62->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional119=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional119) {
                    # 44 "sType_clone"
                    __dec_obj40=result_62->mOriginalTypeName;
                    result_62->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(self->mOriginalTypeName))));
                    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    # 45 "sType_clone"
                    result_62->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    # 46 "sType_clone"
                    result_62->mFunctionParam=self->mFunctionParam;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional122=self!=((void*)0),                _if_conditional122) {
                    # 47 "sType_clone"
                    result_62->mAllocaValue=self->mAllocaValue;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional123=self!=((void*)0),                _if_conditional123) {
                    # 48 "sType_clone"
                    result_62->mGenericsStruct=self->mGenericsStruct;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional124=self!=((void*)0),                _if_conditional124) {
                    # 49 "sType_clone"
                    result_62->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    # 50 "sType_clone"
                    result_62->mComeMemCore=self->mComeMemCore;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional126=self!=((void*)0),                _if_conditional126) {
                    # 51 "sType_clone"
                    result_62->mInline=self->mInline;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    # 52 "sType_clone"
                    result_62->mNullValue=self->mNullValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional128=self!=((void*)0),                _if_conditional128) {
                    # 53 "sType_clone"
                    result_62->mGuardValue=self->mGuardValue;
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional129=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional129) {
                    # 54 "sType_clone"
                    __dec_obj41=result_62->mAsmName;
                    result_62->mAsmName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mAsmName))));
                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 56 "sType_clone"
                # 55 "sType_clone"
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    # 55 "sType_clone"
                    result_62->mArrayPointerType=self->mArrayPointerType;
                }
                # 56 "sType_clone"
                __result77__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer3(result_62,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct list$1sTypeph* __result61__;
void* right_value96;
void* right_value97;
struct list$1sTypeph* result_63;
struct list_item$1sTypeph* it_64;
_Bool _while_condtional11;
void* right_value101;
struct list$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sTypeph*));
memset(&it_64, 0, sizeof(struct list_item$1sTypeph*));
right_value101 = (void*)0;
                        # 143 "./neo-c.h"
                        # 140 "./neo-c.h"
                        if(_if_conditional60=self==((void*)0),                        _if_conditional60) {
                            # 141 "./neo-c.h"
                            __result61__ = __result_obj__ = ((void*)0);
                            return __result61__;
                        }
                        # 143 "./neo-c.h"
                        result_63=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 143, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value96,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value97,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 145 "./neo-c.h"
                        it_64=self->head;
                        # 152 "./neo-c.h"
                        while(_while_condtional11=it_64!=((void*)0),                        _while_condtional11) {
                            # 147 "./neo-c.h"
                            list$1sTypeph_add(result_63,(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(it_64->item)))));
                            come_call_finalizer3(right_value101,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            it_64=it_64->next;
                        }
                        # 152 "./neo-c.h"
                        __result64__ = __result_obj__ = result_63;
                        come_call_finalizer3(result_63,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result64__;
                        come_call_finalizer3(result_63,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 105 "./neo-c.h"
                            self->head=((void*)0);
                            # 106 "./neo-c.h"
                            self->tail=((void*)0);
                            # 107 "./neo-c.h"
                            self->len=0;
                            # 109 "./neo-c.h"
                            __result62__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result62__;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value98;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj19;
_Bool _if_conditional62;
void* right_value99;
struct list_item$1sTypeph* litem_66;
struct sType* __dec_obj20;
void* right_value100;
struct list_item$1sTypeph* litem_67;
struct sType* __dec_obj21;
struct list$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sTypeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sTypeph*));
right_value100 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sTypeph*));
                                # 187 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional61=self->len==0,                                _if_conditional61) {
                                    # 157 "./neo-c.h"
                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value98=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value98,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_65->prev=((void*)0);
                                    # 160 "./neo-c.h"
                                    litem_65->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj19=litem_65->item;
                                    litem_65->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_65;
                                    # 164 "./neo-c.h"
                                    self->head=litem_65;
                                }
                                else {
                                    # 187 "./neo-c.h"
                                    # 166 "./neo-c.h"
                                    if(_if_conditional62=self->len==1,                                    _if_conditional62) {
                                        # 167 "./neo-c.h"
                                        litem_66=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value99=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value99,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 169 "./neo-c.h"
                                        litem_66->prev=self->head;
                                        # 170 "./neo-c.h"
                                        litem_66->next=((void*)0);
                                        # 171 "./neo-c.h"
                                        __dec_obj20=litem_66->item;
                                        litem_66->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        # 173 "./neo-c.h"
                                        self->tail=litem_66;
                                        # 174 "./neo-c.h"
                                        self->head->next=litem_66;
                                    }
                                    else {
                                        # 177 "./neo-c.h"
                                        litem_67=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value100=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 177, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value100,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 179 "./neo-c.h"
                                        litem_67->prev=self->tail;
                                        # 180 "./neo-c.h"
                                        litem_67->next=((void*)0);
                                        # 181 "./neo-c.h"
                                        __dec_obj21=litem_67->item;
                                        litem_67->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        # 183 "./neo-c.h"
                                        self->tail->next=litem_67;
                                        # 184 "./neo-c.h"
                                        self->tail=litem_67;
                                    }
                                }
                                # 187 "./neo-c.h"
                                self->len++;
                                # 189 "./neo-c.h"
                                __result63__ = __result_obj__ = self;
                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result63__;
                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional12;
struct list_item$1sTypeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sTypeph*));
                        # 124 "./neo-c.h"
                        it_68=self->head;
                        # 130 "./neo-c.h"
                        while(_while_condtional12=it_68!=((void*)0),                        _while_condtional12) {
                            # 126 "./neo-c.h"
                            prev_it_69=it_68;
                            # 127 "./neo-c.h"
                            it_68=it_68->next;
                            # 128 "./neo-c.h"
                            come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
struct tuple1$1sTypeph* __result65__;
void* right_value103;
struct tuple1$1sTypeph* result_70;
_Bool _if_conditional66;
void* right_value104;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&result_70, 0, sizeof(struct tuple1$1sTypeph*));
right_value104 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional64=self==(void*)0,                        _if_conditional64) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result65__ = __result_obj__ = (void*)0;
                            return __result65__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_70=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value103=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer3(right_value103,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional66=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional66) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj23=result_70->v1;
                            result_70->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(self->v1))));
                            come_call_finalizer3(__dec_obj23,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result66__ = __result_obj__ = result_70;
                        come_call_finalizer3(result_70,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                        come_call_finalizer3(result_70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional65=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional65) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional71;
struct list$1sNodeph* __result67__;
void* right_value109;
void* right_value110;
struct list$1sNodeph* result_71;
struct list_item$1sNodeph* it_72;
_Bool _while_condtional13;
void* right_value115;
struct list$1sNodeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1sNodeph*));
memset(&it_72, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
                        # 143 "./neo-c.h"
                        # 140 "./neo-c.h"
                        if(_if_conditional71=self==((void*)0),                        _if_conditional71) {
                            # 141 "./neo-c.h"
                            __result67__ = __result_obj__ = ((void*)0);
                            return __result67__;
                        }
                        # 143 "./neo-c.h"
                        result_71=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value110=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value109=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 143, "list$1sNodeph"))))))));
                        come_call_finalizer3(right_value109,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value110,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 145 "./neo-c.h"
                        it_72=self->head;
                        # 152 "./neo-c.h"
                        while(_while_condtional13=it_72!=((void*)0),                        _while_condtional13) {
                            # 147 "./neo-c.h"
                            list$1sNodeph_add(result_71,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(it_72->item)))));
                            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 149 "./neo-c.h"
                            it_72=it_72->next;
                        }
                        # 152 "./neo-c.h"
                        __result72__ = __result_obj__ = result_71;
                        come_call_finalizer3(result_71,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer3(result_71,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 105 "./neo-c.h"
                            self->head=((void*)0);
                            # 106 "./neo-c.h"
                            self->tail=((void*)0);
                            # 107 "./neo-c.h"
                            self->len=0;
                            # 109 "./neo-c.h"
                            __result68__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result68__;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional72;
void* right_value111;
struct list_item$1sNodeph* litem_73;
struct sNode* __dec_obj28;
_Bool _if_conditional73;
void* right_value112;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj29;
void* right_value113;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj30;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sNodeph*));
right_value112 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
right_value113 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
                                # 187 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional72=self->len==0,                                _if_conditional72) {
                                    # 157 "./neo-c.h"
                                    litem_73=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value111=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value111,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_73->prev=((void*)0);
                                    # 160 "./neo-c.h"
                                    litem_73->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj28=litem_73->item;
                                    litem_73->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 163 "./neo-c.h"
                                    self->tail=litem_73;
                                    # 164 "./neo-c.h"
                                    self->head=litem_73;
                                }
                                else {
                                    # 187 "./neo-c.h"
                                    # 166 "./neo-c.h"
                                    if(_if_conditional73=self->len==1,                                    _if_conditional73) {
                                        # 167 "./neo-c.h"
                                        litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value112=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value112,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 169 "./neo-c.h"
                                        litem_74->prev=self->head;
                                        # 170 "./neo-c.h"
                                        litem_74->next=((void*)0);
                                        # 171 "./neo-c.h"
                                        __dec_obj29=litem_74->item;
                                        litem_74->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 173 "./neo-c.h"
                                        self->tail=litem_74;
                                        # 174 "./neo-c.h"
                                        self->head->next=litem_74;
                                    }
                                    else {
                                        # 177 "./neo-c.h"
                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value113=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 177, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value113,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 179 "./neo-c.h"
                                        litem_75->prev=self->tail;
                                        # 180 "./neo-c.h"
                                        litem_75->next=((void*)0);
                                        # 181 "./neo-c.h"
                                        __dec_obj30=litem_75->item;
                                        litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 183 "./neo-c.h"
                                        self->tail->next=litem_75;
                                        # 184 "./neo-c.h"
                                        self->tail=litem_75;
                                    }
                                }
                                # 187 "./neo-c.h"
                                self->len++;
                                # 189 "./neo-c.h"
                                __result69__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result69__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional74;
struct sNode* __result70__;
void* right_value114;
struct sNode* result_76;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
struct sNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&result_76, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional74=self==(void*)0,                                _if_conditional74) {
                                    # 2 "sNode_clone"
                                    __result70__ = __result_obj__ = (void*)0;
                                    return __result70__;
                                }
                                # 3 "sNode_clone"
                                result_76=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional75=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional75) {
                                    # 4 "sNode_clone"
                                    result_76->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    # 5 "sNode_clone"
                                    result_76->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional77=self!=((void*)0),                                _if_conditional77) {
                                    # 6 "sNode_clone"
                                    result_76->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional78=self!=((void*)0),                                _if_conditional78) {
                                    # 7 "sNode_clone"
                                    result_76->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional79=self!=((void*)0),                                _if_conditional79) {
                                    # 8 "sNode_clone"
                                    result_76->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional80=self!=((void*)0),                                _if_conditional80) {
                                    # 9 "sNode_clone"
                                    result_76->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional81=self!=((void*)0),                                _if_conditional81) {
                                    # 10 "sNode_clone"
                                    result_76->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional82=self!=((void*)0),                                _if_conditional82) {
                                    # 11 "sNode_clone"
                                    result_76->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result71__ = __result_obj__ = result_76;
                                if(result_76) { result_76 = come_decrement_ref_count2(result_76, ((struct sNode*)result_76)->finalize, ((struct sNode*)result_76)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result71__;
                                if(result_76) { result_76 = come_decrement_ref_count2(result_76, ((struct sNode*)result_76)->finalize, ((struct sNode*)result_76)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_77;
_Bool _while_condtional14;
struct list_item$1sNodeph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1sNodeph*));
                        # 124 "./neo-c.h"
                        it_77=self->head;
                        # 130 "./neo-c.h"
                        while(_while_condtional14=it_77!=((void*)0),                        _while_condtional14) {
                            # 126 "./neo-c.h"
                            prev_it_78=it_77;
                            # 127 "./neo-c.h"
                            it_77=it_77->next;
                            # 128 "./neo-c.h"
                            come_call_finalizer3(prev_it_78,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional86;
struct list$1charph* __result73__;
void* right_value118;
void* right_value119;
struct list$1charph* result_79;
struct list_item$1charph* it_80;
_Bool _while_condtional15;
void* right_value123;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1charph*));
memset(&it_80, 0, sizeof(struct list_item$1charph*));
right_value123 = (void*)0;
                        # 143 "./neo-c.h"
                        # 140 "./neo-c.h"
                        if(_if_conditional86=self==((void*)0),                        _if_conditional86) {
                            # 141 "./neo-c.h"
                            __result73__ = __result_obj__ = ((void*)0);
                            return __result73__;
                        }
                        # 143 "./neo-c.h"
                        result_79=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value119=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value118=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 143, "list$1charph"))))))));
                        come_call_finalizer3(right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 145 "./neo-c.h"
                        it_80=self->head;
                        # 152 "./neo-c.h"
                        while(_while_condtional15=it_80!=((void*)0),                        _while_condtional15) {
                            # 147 "./neo-c.h"
                            list$1charph_add(result_79,(char*)come_increment_ref_count(((char*)(right_value123=string_clone(it_80->item)))));
                            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            it_80=it_80->next;
                        }
                        # 152 "./neo-c.h"
                        __result76__ = __result_obj__ = result_79;
                        come_call_finalizer3(result_79,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result76__;
                        come_call_finalizer3(result_79,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 105 "./neo-c.h"
                            self->head=((void*)0);
                            # 106 "./neo-c.h"
                            self->tail=((void*)0);
                            # 107 "./neo-c.h"
                            self->len=0;
                            # 109 "./neo-c.h"
                            __result74__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result74__;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional87;
void* right_value120;
struct list_item$1charph* litem_81;
char* __dec_obj33;
_Bool _if_conditional88;
void* right_value121;
struct list_item$1charph* litem_82;
char* __dec_obj34;
void* right_value122;
struct list_item$1charph* litem_83;
char* __dec_obj35;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
right_value121 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
right_value122 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1charph*));
                                # 187 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional87=self->len==0,                                _if_conditional87) {
                                    # 157 "./neo-c.h"
                                    litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value120,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_81->prev=((void*)0);
                                    # 160 "./neo-c.h"
                                    litem_81->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj33=litem_81->item;
                                    litem_81->item=(char*)come_increment_ref_count(item);
                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_81;
                                    # 164 "./neo-c.h"
                                    self->head=litem_81;
                                }
                                else {
                                    # 187 "./neo-c.h"
                                    # 166 "./neo-c.h"
                                    if(_if_conditional88=self->len==1,                                    _if_conditional88) {
                                        # 167 "./neo-c.h"
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value121=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                        come_call_finalizer3(right_value121,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 169 "./neo-c.h"
                                        litem_82->prev=self->head;
                                        # 170 "./neo-c.h"
                                        litem_82->next=((void*)0);
                                        # 171 "./neo-c.h"
                                        __dec_obj34=litem_82->item;
                                        litem_82->item=(char*)come_increment_ref_count(item);
                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 173 "./neo-c.h"
                                        self->tail=litem_82;
                                        # 174 "./neo-c.h"
                                        self->head->next=litem_82;
                                    }
                                    else {
                                        # 177 "./neo-c.h"
                                        litem_83=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 177, "list_item$1charph"))));
                                        come_call_finalizer3(right_value122,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 179 "./neo-c.h"
                                        litem_83->prev=self->tail;
                                        # 180 "./neo-c.h"
                                        litem_83->next=((void*)0);
                                        # 181 "./neo-c.h"
                                        __dec_obj35=litem_83->item;
                                        litem_83->item=(char*)come_increment_ref_count(item);
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 183 "./neo-c.h"
                                        self->tail->next=litem_83;
                                        # 184 "./neo-c.h"
                                        self->tail=litem_83;
                                    }
                                }
                                # 187 "./neo-c.h"
                                self->len++;
                                # 189 "./neo-c.h"
                                __result75__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result75__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_84;
_Bool _while_condtional16;
struct list_item$1charph* prev_it_85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_84, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_85, 0, sizeof(struct list_item$1charph*));
                        # 124 "./neo-c.h"
                        it_84=self->head;
                        # 130 "./neo-c.h"
                        while(_while_condtional16=it_84!=((void*)0),                        _while_condtional16) {
                            # 126 "./neo-c.h"
                            prev_it_85=it_84;
                            # 127 "./neo-c.h"
                            it_84=it_84->next;
                            # 128 "./neo-c.h"
                            come_call_finalizer3(prev_it_85,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional131;
char* result_89;
char* __result79__;
_Bool _if_conditional132;
char* __result80__;
char* result_90;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_89, 0, sizeof(char*));
memset(&result_90, 0, sizeof(char*));
            # 1305 "./neo-c.h"
            # 1300 "./neo-c.h"
            if(_if_conditional131=self==((void*)0),            _if_conditional131) {
                # 1301 "./neo-c.h"
                # 1302 "./neo-c.h"
                memset(&result_89,0,sizeof(char*));
                # 1303 "./neo-c.h"
                __result79__ = __result_obj__ = result_89;
                return __result79__;
            }
            # 1305 "./neo-c.h"
            self->key_list->it=self->key_list->head;
            # 1311 "./neo-c.h"
            # 1307 "./neo-c.h"
            if(self->key_list->it) {
                # 1308 "./neo-c.h"
                __result80__ = __result_obj__ = self->key_list->it->item;
                return __result80__;
            }
            # 1311 "./neo-c.h"
            # 1312 "./neo-c.h"
            memset(&result_90,0,sizeof(char*));
            # 1313 "./neo-c.h"
            __result81__ = __result_obj__ = result_90;
            return __result81__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1334 "./neo-c.h"
            __result82__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result82__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional133;
char* result_92;
char* __result83__;
_Bool _if_conditional134;
char* __result84__;
char* result_93;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(char*));
memset(&result_93, 0, sizeof(char*));
            # 1322 "./neo-c.h"
            # 1317 "./neo-c.h"
            if(_if_conditional133=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional133) {
                # 1318 "./neo-c.h"
                # 1319 "./neo-c.h"
                memset(&result_92,0,sizeof(char*));
                # 1320 "./neo-c.h"
                __result83__ = __result_obj__ = result_92;
                return __result83__;
            }
            # 1322 "./neo-c.h"
            self->key_list->it=self->key_list->it->next;
            # 1328 "./neo-c.h"
            # 1324 "./neo-c.h"
            if(self->key_list->it) {
                # 1325 "./neo-c.h"
                __result84__ = __result_obj__ = self->key_list->it->item;
                return __result84__;
            }
            # 1328 "./neo-c.h"
            # 1329 "./neo-c.h"
            memset(&result_93,0,sizeof(char*));
            # 1330 "./neo-c.h"
            __result85__ = __result_obj__ = result_93;
            return __result85__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_95;
unsigned int hash_96;
unsigned int it_97;
_Bool _while_condtional17;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct sVar* __result86__;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sVar* __result87__;
struct sVar* __result88__;
struct sVar* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_95, 0, sizeof(struct sVar*));
memset(&hash_96, 0, sizeof(unsigned int));
memset(&it_97, 0, sizeof(unsigned int));
                # 1545 "./neo-c.h"
                # 1546 "./neo-c.h"
                memset(&default_value_95,0,sizeof(struct sVar*));
                # 1548 "./neo-c.h"
                hash_96=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./neo-c.h"
                it_97=hash_96;
                # 1573 "./neo-c.h"
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    # 1571 "./neo-c.h"
                    # 1552 "./neo-c.h"
                    if(_if_conditional135=self->item_existance[it_97],                    _if_conditional135) {
                        # 1559 "./neo-c.h"
                        # 1554 "./neo-c.h"
                        if(_if_conditional136=string_equals(self->keys[it_97],key),                        _if_conditional136) {
                            # 1556 "./neo-c.h"
                            __result86__ = __result_obj__ = self->items[it_97];
                            come_call_finalizer3(default_value_95,sVar_finalize, 0, 0, 0, 0, (void*)0);
                            return __result86__;
                        }
                        # 1559 "./neo-c.h"
                        it_97++;
                        # 1567 "./neo-c.h"
                        # 1561 "./neo-c.h"
                        if(_if_conditional141=it_97>=self->size,                        _if_conditional141) {
                            # 1562 "./neo-c.h"
                            it_97=0;
                        }
                        else {
                            # 1567 "./neo-c.h"
                            # 1564 "./neo-c.h"
                            if(_if_conditional142=it_97==hash_96,                            _if_conditional142) {
                                # 1565 "./neo-c.h"
                                __result87__ = __result_obj__ = default_value_95;
                                come_call_finalizer3(default_value_95,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result87__;
                            }
                        }
                    }
                    else {
                        # 1569 "./neo-c.h"
                        __result88__ = __result_obj__ = default_value_95;
                        come_call_finalizer3(default_value_95,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result88__;
                    }
                }
                # 1573 "./neo-c.h"
                __result89__ = __result_obj__ = default_value_95;
                come_call_finalizer3(default_value_95,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result89__;
                come_call_finalizer3(default_value_95,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional137=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional137) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional138=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional138) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional139=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional139) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional140=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional140) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional148;
int __result90__;
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 368 "./neo-c.h"
                                    # 365 "./neo-c.h"
                                    if(_if_conditional148=self==((void*)0),                                    _if_conditional148) {
                                        # 366 "./neo-c.h"
                                        __result90__ = 0;
                                        return __result90__;
                                    }
                                    # 368 "./neo-c.h"
                                    __result91__ = self->len;
                                    return __result91__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_102;
_Bool _while_condtional18;
struct list_item$1sNodeph* prev_it_103;
struct list$1sNodeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_102, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_103, 0, sizeof(struct list_item$1sNodeph*));
                                        # 434 "./neo-c.h"
                                        it_102=self->head;
                                        # 441 "./neo-c.h"
                                        while(_while_condtional18=it_102!=((void*)0),                                        _while_condtional18) {
                                            # 436 "./neo-c.h"
                                            prev_it_103=it_102;
                                            # 437 "./neo-c.h"
                                            it_102=it_102->next;
                                            # 438 "./neo-c.h"
                                            come_call_finalizer3(prev_it_103,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 441 "./neo-c.h"
                                        self->head=((void*)0);
                                        # 442 "./neo-c.h"
                                        self->tail=((void*)0);
                                        # 444 "./neo-c.h"
                                        self->len=0;
                                        # 446 "./neo-c.h"
                                        __result92__ = __result_obj__ = self;
                                        return __result92__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_105;
_Bool _if_conditional150;
_Bool _if_conditional151;
int i_106;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_105, 0, sizeof(int));
memset(&i_106, 0, sizeof(int));
            # 1138 "./neo-c.h"
            for(            i_105=0;            i_105<self->size;            i_105++            ){
                # 1137 "./neo-c.h"
                # 1132 "./neo-c.h"
                if(_if_conditional150=self->item_existance[i_105],                _if_conditional150) {
                    # 1136 "./neo-c.h"
                    # 1133 "./neo-c.h"
                    if(_if_conditional151=1,                    _if_conditional151) {
                        # 1134 "./neo-c.h"
                        come_call_finalizer3(self->items[i_105],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1138 "./neo-c.h"
            come_free((char*)self->items);
            # 1147 "./neo-c.h"
            for(            i_106=0;            i_106<self->size;            i_106++            ){
                # 1146 "./neo-c.h"
                # 1141 "./neo-c.h"
                if(_if_conditional152=self->item_existance[i_106],                _if_conditional152) {
                    # 1145 "./neo-c.h"
                    # 1142 "./neo-c.h"
                    if(_if_conditional153=1,                    _if_conditional153) {
                        # 1143 "./neo-c.h"
                        self->keys[i_106] = come_decrement_ref_count2(self->keys[i_106], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1147 "./neo-c.h"
            come_free((char*)self->keys);
            # 1149 "./neo-c.h"
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            # 1151 "./neo-c.h"
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_107;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_108;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                # 124 "./neo-c.h"
                it_107=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional19=it_107!=((void*)0),                _while_condtional19) {
                    # 126 "./neo-c.h"
                    prev_it_108=it_107;
                    # 127 "./neo-c.h"
                    it_107=it_107->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_108,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional154;
unsigned int hash_126;
unsigned int it_127;
_Bool _while_condtional22;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool same_key_exist_144;
char* it2_147;
_Bool _if_conditional197;
_Bool _if_conditional198;
struct map$2charphsClassph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_126, 0, sizeof(unsigned int));
memset(&it_127, 0, sizeof(unsigned int));
memset(&same_key_exist_144, 0, sizeof(_Bool));
memset(&it2_147, 0, sizeof(char*));
        # 1394 "./neo-c.h"
        # 1391 "./neo-c.h"
        if(_if_conditional154=self->len*10>=self->size,        _if_conditional154) {
            # 1392 "./neo-c.h"
            map$2charphsClassph_rehash(self);
        }
        # 1394 "./neo-c.h"
        hash_126=string_get_hash_key(key)%self->size;
        # 1395 "./neo-c.h"
        it_127=hash_126;
        # 1453 "./neo-c.h"
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            # 1451 "./neo-c.h"
            # 1398 "./neo-c.h"
            if(_if_conditional166=self->item_existance[it_127],            _if_conditional166) {
                # 1421 "./neo-c.h"
                # 1400 "./neo-c.h"
                if(_if_conditional167=string_equals(self->keys[it_127],key),                _if_conditional167) {
                    # 1411 "./neo-c.h"
                    # 1402 "./neo-c.h"
                    if(_if_conditional168=1,                    _if_conditional168) {
                        # 1403 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_127]);
                        # 1404 "./neo-c.h"
                        self->keys[it_127] = come_decrement_ref_count2(self->keys[it_127], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1405 "./neo-c.h"
                        self->keys[it_127]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1408 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_127]);
                        # 1409 "./neo-c.h"
                        self->keys[it_127]=key;
                    }
                    # 1418 "./neo-c.h"
                    # 1411 "./neo-c.h"
                    if(_if_conditional188=1,                    _if_conditional188) {
                        # 1412 "./neo-c.h"
                        come_call_finalizer3(self->items[it_127],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        # 1413 "./neo-c.h"
                        self->items[it_127]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1416 "./neo-c.h"
                        self->items[it_127]=item;
                    }
                    # 1418 "./neo-c.h"
                    break;
                }
                # 1421 "./neo-c.h"
                it_127++;
                # 1431 "./neo-c.h"
                # 1423 "./neo-c.h"
                if(_if_conditional189=it_127>=self->size,                _if_conditional189) {
                    # 1424 "./neo-c.h"
                    it_127=0;
                }
                else {
                    # 1431 "./neo-c.h"
                    # 1426 "./neo-c.h"
                    if(_if_conditional190=it_127==hash_126,                    _if_conditional190) {
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
                self->item_existance[it_127]=(_Bool)1;
                # 1440 "./neo-c.h"
                # 1434 "./neo-c.h"
                if(_if_conditional191=1,                _if_conditional191) {
                    # 1435 "./neo-c.h"
                    self->keys[it_127]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1438 "./neo-c.h"
                    self->keys[it_127]=key;
                }
                # 1447 "./neo-c.h"
                # 1440 "./neo-c.h"
                if(_if_conditional192=1,                _if_conditional192) {
                    # 1441 "./neo-c.h"
                    self->items[it_127]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1444 "./neo-c.h"
                    self->items[it_127]=item;
                }
                # 1447 "./neo-c.h"
                self->len++;
                # 1449 "./neo-c.h"
                break;
            }
        }
        # 1453 "./neo-c.h"
        same_key_exist_144=(_Bool)0;
        # 1461 "./neo-c.h"
        for(        it2_147=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_147=list$1charp_next(self->key_list)        ){
            # 1459 "./neo-c.h"
            # 1456 "./neo-c.h"
            if(_if_conditional197=string_equals(it2_147,key),            _if_conditional197) {
                # 1457 "./neo-c.h"
                same_key_exist_144=(_Bool)1;
            }
        }
        # 1465 "./neo-c.h"
        # 1461 "./neo-c.h"
        if(_if_conditional198=!same_key_exist_144,        _if_conditional198) {
            # 1462 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1465 "./neo-c.h"
        __result116__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result116__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_109;
void* right_value148;
char** keys_110;
void* right_value149;
struct sClass** items_111;
void* right_value150;
_Bool* item_existance_112;
int len_113;
char* it_116;
struct sClass* default_value_119;
struct sClass* it2_122;
unsigned int hash_123;
int n_124;
_Bool _while_condtional21;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sClass* default_value_125;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_109, 0, sizeof(int));
right_value148 = (void*)0;
memset(&keys_110, 0, sizeof(char**));
right_value149 = (void*)0;
memset(&items_111, 0, sizeof(struct sClass**));
right_value150 = (void*)0;
memset(&item_existance_112, 0, sizeof(_Bool*));
memset(&len_113, 0, sizeof(int));
memset(&it_116, 0, sizeof(char*));
memset(&default_value_119, 0, sizeof(struct sClass*));
memset(&it2_122, 0, sizeof(struct sClass*));
memset(&hash_123, 0, sizeof(unsigned int));
memset(&n_124, 0, sizeof(int));
memset(&default_value_125, 0, sizeof(struct sClass*));
                # 1338 "./neo-c.h"
                size_109=self->size*10;
                # 1339 "./neo-c.h"
                keys_110=(char**)come_increment_ref_count(((char**)(right_value148=(char**)come_calloc(1, sizeof(char*)*(1*(size_109)), "./neo-c.h", 1339, "char*%"))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1340 "./neo-c.h"
                items_111=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value149=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_109)), "./neo-c.h", 1340, "sClass*%"))));
                come_call_finalizer3(right_value149,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                # 1341 "./neo-c.h"
                item_existance_112=(_Bool*)come_increment_ref_count(((_Bool*)(right_value150=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_109)), "./neo-c.h", 1341, "bool"))));
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1343 "./neo-c.h"
                len_113=0;
                # 1378 "./neo-c.h"
                for(                it_116=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_116=map$2charphsClassph_next(self)                ){
                    # 1346 "./neo-c.h"
                    # 1347 "./neo-c.h"
                    memset(&default_value_119,0,sizeof(struct sClass*));
                    # 1348 "./neo-c.h"
                    it2_122=map$2charphsClassph_at(self,it_116,default_value_119);
                    # 1349 "./neo-c.h"
                    hash_123=string_get_hash_key(it_116)%size_109;
                    # 1350 "./neo-c.h"
                    n_124=hash_123;
                    # 1376 "./neo-c.h"
                    while(_while_condtional21=(_Bool)1,                    _while_condtional21) {
                        # 1375 "./neo-c.h"
                        # 1353 "./neo-c.h"
                        if(_if_conditional163=item_existance_112[n_124],                        _if_conditional163) {
                            # 1355 "./neo-c.h"
                            n_124++;
                            # 1365 "./neo-c.h"
                            # 1357 "./neo-c.h"
                            if(_if_conditional164=n_124>=size_109,                            _if_conditional164) {
                                # 1358 "./neo-c.h"
                                n_124=0;
                            }
                            else {
                                # 1365 "./neo-c.h"
                                # 1360 "./neo-c.h"
                                if(_if_conditional165=n_124==hash_123,                                _if_conditional165) {
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
                            item_existance_112[n_124]=(_Bool)1;
                            # 1368 "./neo-c.h"
                            keys_110[n_124]=it_116;
                            # 1369 "./neo-c.h"
                            # 1370 "./neo-c.h"
                            items_111[n_124]=map$2charphsClassph_at(self,it_116,default_value_125);
                            # 1372 "./neo-c.h"
                            len_113++;
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
                self->keys=keys_110;
                # 1383 "./neo-c.h"
                self->items=items_111;
                # 1384 "./neo-c.h"
                self->item_existance=item_existance_112;
                # 1386 "./neo-c.h"
                self->size=size_109;
                # 1387 "./neo-c.h"
                self->len=len_113;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional155;
char* result_114;
char* __result93__;
_Bool _if_conditional156;
char* __result94__;
char* result_115;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_114, 0, sizeof(char*));
memset(&result_115, 0, sizeof(char*));
                    # 1305 "./neo-c.h"
                    # 1300 "./neo-c.h"
                    if(_if_conditional155=self==((void*)0),                    _if_conditional155) {
                        # 1301 "./neo-c.h"
                        # 1302 "./neo-c.h"
                        memset(&result_114,0,sizeof(char*));
                        # 1303 "./neo-c.h"
                        __result93__ = __result_obj__ = result_114;
                        return __result93__;
                    }
                    # 1305 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1311 "./neo-c.h"
                    # 1307 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1308 "./neo-c.h"
                        __result94__ = __result_obj__ = self->key_list->it->item;
                        return __result94__;
                    }
                    # 1311 "./neo-c.h"
                    # 1312 "./neo-c.h"
                    memset(&result_115,0,sizeof(char*));
                    # 1313 "./neo-c.h"
                    __result95__ = __result_obj__ = result_115;
                    return __result95__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1334 "./neo-c.h"
                    __result96__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result96__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional157;
char* result_117;
char* __result97__;
_Bool _if_conditional158;
char* __result98__;
char* result_118;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(char*));
memset(&result_118, 0, sizeof(char*));
                    # 1322 "./neo-c.h"
                    # 1317 "./neo-c.h"
                    if(_if_conditional157=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional157) {
                        # 1318 "./neo-c.h"
                        # 1319 "./neo-c.h"
                        memset(&result_117,0,sizeof(char*));
                        # 1320 "./neo-c.h"
                        __result97__ = __result_obj__ = result_117;
                        return __result97__;
                    }
                    # 1322 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1328 "./neo-c.h"
                    # 1324 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1325 "./neo-c.h"
                        __result98__ = __result_obj__ = self->key_list->it->item;
                        return __result98__;
                    }
                    # 1328 "./neo-c.h"
                    # 1329 "./neo-c.h"
                    memset(&result_118,0,sizeof(char*));
                    # 1330 "./neo-c.h"
                    __result99__ = __result_obj__ = result_118;
                    return __result99__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_120;
unsigned int it_121;
_Bool _while_condtional20;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct sClass* __result100__;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct sClass* __result101__;
struct sClass* __result102__;
struct sClass* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_120, 0, sizeof(unsigned int));
memset(&it_121, 0, sizeof(unsigned int));
                        # 1227 "./neo-c.h"
                        hash_120=string_get_hash_key(((char*)key))%self->size;
                        # 1228 "./neo-c.h"
                        it_121=hash_120;
                        # 1252 "./neo-c.h"
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            # 1250 "./neo-c.h"
                            # 1231 "./neo-c.h"
                            if(_if_conditional159=self->item_existance[it_121],                            _if_conditional159) {
                                # 1238 "./neo-c.h"
                                # 1233 "./neo-c.h"
                                if(_if_conditional160=string_equals(self->keys[it_121],key),                                _if_conditional160) {
                                    # 1235 "./neo-c.h"
                                    __result100__ = __result_obj__ = self->items[it_121];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result100__;
                                }
                                # 1238 "./neo-c.h"
                                it_121++;
                                # 1246 "./neo-c.h"
                                # 1240 "./neo-c.h"
                                if(_if_conditional161=it_121>=self->size,                                _if_conditional161) {
                                    # 1241 "./neo-c.h"
                                    it_121=0;
                                }
                                else {
                                    # 1246 "./neo-c.h"
                                    # 1243 "./neo-c.h"
                                    if(_if_conditional162=it_121==hash_120,                                    _if_conditional162) {
                                        # 1244 "./neo-c.h"
                                        __result101__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result101__;
                                    }
                                }
                            }
                            else {
                                # 1248 "./neo-c.h"
                                __result102__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result102__;
                            }
                        }
                        # 1252 "./neo-c.h"
                        __result103__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result103__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_128;
struct list_item$1charp* it_129;
_Bool _while_condtional23;
_Bool _if_conditional169;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_128, 0, sizeof(int));
memset(&it_129, 0, sizeof(struct list_item$1charp*));
                            # 449 "./neo-c.h"
                            it2_128=0;
                            # 450 "./neo-c.h"
                            it_129=self->head;
                            # 461 "./neo-c.h"
                            while(_while_condtional23=it_129!=((void*)0),                            _while_condtional23) {
                                # 456 "./neo-c.h"
                                # 452 "./neo-c.h"
                                if(_if_conditional169=string_equals(it_129->item,item),                                _if_conditional169) {
                                    # 453 "./neo-c.h"
                                    list$1charp_delete(self,it2_128,it2_128+1);
                                    # 454 "./neo-c.h"
                                    break;
                                }
                                # 456 "./neo-c.h"
                                it2_128++;
                                # 458 "./neo-c.h"
                                it_129=it_129->next;
                            }
                            # 461 "./neo-c.h"
                            __result107__ = __result_obj__ = self;
                            return __result107__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
int tmp_130;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct list$1charp* __result104__;
_Bool _if_conditional176;
_Bool _if_conditional177;
struct list_item$1charp* it_133;
int i_134;
_Bool _while_condtional25;
_Bool _if_conditional178;
struct list_item$1charp* prev_it_135;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct list_item$1charp* it_136;
int i_137;
_Bool _while_condtional26;
_Bool _if_conditional181;
_Bool _if_conditional182;
struct list_item$1charp* prev_it_138;
struct list_item$1charp* it_139;
struct list_item$1charp* head_prev_it_140;
struct list_item$1charp* tail_it_141;
int i_142;
_Bool _while_condtional27;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
struct list_item$1charp* prev_it_143;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_130, 0, sizeof(int));
memset(&it_133, 0, sizeof(struct list_item$1charp*));
memset(&i_134, 0, sizeof(int));
memset(&prev_it_135, 0, sizeof(struct list_item$1charp*));
memset(&it_136, 0, sizeof(struct list_item$1charp*));
memset(&i_137, 0, sizeof(int));
memset(&prev_it_138, 0, sizeof(struct list_item$1charp*));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_140, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_141, 0, sizeof(struct list_item$1charp*));
memset(&i_142, 0, sizeof(int));
memset(&prev_it_143, 0, sizeof(struct list_item$1charp*));
                                        # 468 "./neo-c.h"
                                        # 465 "./neo-c.h"
                                        if(_if_conditional170=head<0,                                        _if_conditional170) {
                                            # 466 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 472 "./neo-c.h"
                                        # 468 "./neo-c.h"
                                        if(_if_conditional171=tail<0,                                        _if_conditional171) {
                                            # 469 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 478 "./neo-c.h"
                                        # 472 "./neo-c.h"
                                        if(_if_conditional172=head>tail,                                        _if_conditional172) {
                                            # 473 "./neo-c.h"
                                            tmp_130=tail;
                                            # 474 "./neo-c.h"
                                            tail=head;
                                            # 475 "./neo-c.h"
                                            head=tmp_130;
                                        }
                                        # 482 "./neo-c.h"
                                        # 478 "./neo-c.h"
                                        if(_if_conditional173=head<0,                                        _if_conditional173) {
                                            # 479 "./neo-c.h"
                                            head=0;
                                        }
                                        # 486 "./neo-c.h"
                                        # 482 "./neo-c.h"
                                        if(_if_conditional174=tail>self->len,                                        _if_conditional174) {
                                            # 483 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 490 "./neo-c.h"
                                        # 486 "./neo-c.h"
                                        if(_if_conditional175=head==tail,                                        _if_conditional175) {
                                            # 487 "./neo-c.h"
                                            __result104__ = __result_obj__ = self;
                                            return __result104__;
                                        }
                                        # 585 "./neo-c.h"
                                        # 490 "./neo-c.h"
                                        if(_if_conditional176=head==0&&tail==self->len,                                        _if_conditional176) {
                                            # 492 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 585 "./neo-c.h"
                                            # 494 "./neo-c.h"
                                            if(_if_conditional177=head==0,                                            _if_conditional177) {
                                                # 495 "./neo-c.h"
                                                it_133=self->head;
                                                # 496 "./neo-c.h"
                                                i_134=0;
                                                # 518 "./neo-c.h"
                                                while(_while_condtional25=it_133!=((void*)0),                                                _while_condtional25) {
                                                    # 517 "./neo-c.h"
                                                    # 498 "./neo-c.h"
                                                    if(_if_conditional178=i_134<tail,                                                    _if_conditional178) {
                                                        # 499 "./neo-c.h"
                                                        prev_it_135=it_133;
                                                        # 501 "./neo-c.h"
                                                        it_133=it_133->next;
                                                        # 502 "./neo-c.h"
                                                        i_134++;
                                                        # 504 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_135,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 506 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 517 "./neo-c.h"
                                                        # 508 "./neo-c.h"
                                                        if(_if_conditional179=i_134==tail,                                                        _if_conditional179) {
                                                            # 509 "./neo-c.h"
                                                            self->head=it_133;
                                                            # 510 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 511 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 514 "./neo-c.h"
                                                            it_133=it_133->next;
                                                            # 515 "./neo-c.h"
                                                            i_134++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 585 "./neo-c.h"
                                                # 519 "./neo-c.h"
                                                if(_if_conditional180=tail==self->len,                                                _if_conditional180) {
                                                    # 520 "./neo-c.h"
                                                    it_136=self->head;
                                                    # 521 "./neo-c.h"
                                                    i_137=0;
                                                    # 543 "./neo-c.h"
                                                    while(_while_condtional26=it_136!=((void*)0),                                                    _while_condtional26) {
                                                        # 528 "./neo-c.h"
                                                        # 523 "./neo-c.h"
                                                        if(_if_conditional181=i_137==head,                                                        _if_conditional181) {
                                                            # 524 "./neo-c.h"
                                                            self->tail=it_136->prev;
                                                            # 525 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 542 "./neo-c.h"
                                                        # 528 "./neo-c.h"
                                                        if(_if_conditional182=i_137>=head,                                                        _if_conditional182) {
                                                            # 529 "./neo-c.h"
                                                            prev_it_138=it_136;
                                                            # 531 "./neo-c.h"
                                                            it_136=it_136->next;
                                                            # 532 "./neo-c.h"
                                                            i_137++;
                                                            # 534 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_138,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 536 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 539 "./neo-c.h"
                                                            it_136=it_136->next;
                                                            # 540 "./neo-c.h"
                                                            i_137++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 545 "./neo-c.h"
                                                    it_139=self->head;
                                                    # 547 "./neo-c.h"
                                                    head_prev_it_140=((void*)0);
                                                    # 548 "./neo-c.h"
                                                    tail_it_141=((void*)0);
                                                    # 551 "./neo-c.h"
                                                    i_142=0;
                                                    # 577 "./neo-c.h"
                                                    while(_while_condtional27=it_139!=((void*)0),                                                    _while_condtional27) {
                                                        # 556 "./neo-c.h"
                                                        # 553 "./neo-c.h"
                                                        if(_if_conditional183=i_142==head,                                                        _if_conditional183) {
                                                            # 554 "./neo-c.h"
                                                            head_prev_it_140=it_139->prev;
                                                        }
                                                        # 560 "./neo-c.h"
                                                        # 556 "./neo-c.h"
                                                        if(_if_conditional184=i_142==tail,                                                        _if_conditional184) {
                                                            # 557 "./neo-c.h"
                                                            tail_it_141=it_139;
                                                        }
                                                        # 575 "./neo-c.h"
                                                        # 560 "./neo-c.h"
                                                        if(_if_conditional185=i_142>=head&&i_142<tail,                                                        _if_conditional185) {
                                                            # 562 "./neo-c.h"
                                                            prev_it_143=it_139;
                                                            # 564 "./neo-c.h"
                                                            it_139=it_139->next;
                                                            # 565 "./neo-c.h"
                                                            i_142++;
                                                            # 567 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_143,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 569 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 572 "./neo-c.h"
                                                            it_139=it_139->next;
                                                            # 573 "./neo-c.h"
                                                            i_142++;
                                                        }
                                                    }
                                                    # 580 "./neo-c.h"
                                                    # 577 "./neo-c.h"
                                                    if(_if_conditional186=head_prev_it_140!=((void*)0),                                                    _if_conditional186) {
                                                        # 578 "./neo-c.h"
                                                        head_prev_it_140->next=tail_it_141;
                                                    }
                                                    # 583 "./neo-c.h"
                                                    # 580 "./neo-c.h"
                                                    if(_if_conditional187=tail_it_141!=((void*)0),                                                    _if_conditional187) {
                                                        # 581 "./neo-c.h"
                                                        tail_it_141->prev=head_prev_it_140;
                                                    }
                                                }
                                            }
                                        }
                                        # 585 "./neo-c.h"
                                        __result106__ = __result_obj__ = self;
                                        return __result106__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_131;
_Bool _while_condtional24;
struct list_item$1charp* prev_it_132;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_132, 0, sizeof(struct list_item$1charp*));
                                                # 434 "./neo-c.h"
                                                it_131=self->head;
                                                # 441 "./neo-c.h"
                                                while(_while_condtional24=it_131!=((void*)0),                                                _while_condtional24) {
                                                    # 436 "./neo-c.h"
                                                    prev_it_132=it_131;
                                                    # 437 "./neo-c.h"
                                                    it_131=it_131->next;
                                                    # 438 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_132,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 441 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 442 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 444 "./neo-c.h"
                                                self->len=0;
                                                # 446 "./neo-c.h"
                                                __result105__ = __result_obj__ = self;
                                                return __result105__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional193;
char* result_145;
char* __result108__;
_Bool _if_conditional194;
char* __result109__;
char* result_146;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_145, 0, sizeof(char*));
memset(&result_146, 0, sizeof(char*));
            # 291 "./neo-c.h"
            # 286 "./neo-c.h"
            if(_if_conditional193=self==((void*)0),            _if_conditional193) {
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_145,0,sizeof(char*));
                # 289 "./neo-c.h"
                __result108__ = __result_obj__ = result_145;
                return __result108__;
            }
            # 291 "./neo-c.h"
            self->it=self->head;
            # 297 "./neo-c.h"
            # 293 "./neo-c.h"
            if(self->it) {
                # 294 "./neo-c.h"
                __result109__ = __result_obj__ = self->it->item;
                return __result109__;
            }
            # 297 "./neo-c.h"
            # 298 "./neo-c.h"
            memset(&result_146,0,sizeof(char*));
            # 299 "./neo-c.h"
            __result110__ = __result_obj__ = result_146;
            return __result110__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
            # 321 "./neo-c.h"
            __result111__ = self==((void*)0)||self->it==((void*)0);
            return __result111__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional195;
char* result_148;
char* __result112__;
_Bool _if_conditional196;
char* __result113__;
char* result_149;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_148, 0, sizeof(char*));
memset(&result_149, 0, sizeof(char*));
            # 309 "./neo-c.h"
            # 303 "./neo-c.h"
            if(_if_conditional195=self==((void*)0)||self->it==((void*)0),            _if_conditional195) {
                # 304 "./neo-c.h"
                # 305 "./neo-c.h"
                memset(&result_148,0,sizeof(char*));
                # 306 "./neo-c.h"
                __result112__ = __result_obj__ = result_148;
                return __result112__;
            }
            # 309 "./neo-c.h"
            self->it=self->it->next;
            # 315 "./neo-c.h"
            # 311 "./neo-c.h"
            if(self->it) {
                # 312 "./neo-c.h"
                __result113__ = __result_obj__ = self->it->item;
                return __result113__;
            }
            # 315 "./neo-c.h"
            # 316 "./neo-c.h"
            memset(&result_149,0,sizeof(char*));
            # 317 "./neo-c.h"
            __result114__ = __result_obj__ = result_149;
            return __result114__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value151;
struct list_item$1charp* litem_150;
_Bool _if_conditional200;
void* right_value152;
struct list_item$1charp* litem_151;
void* right_value153;
struct list_item$1charp* litem_152;
struct list$1charp* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charp*));
right_value152 = (void*)0;
memset(&litem_151, 0, sizeof(struct list_item$1charp*));
right_value153 = (void*)0;
memset(&litem_152, 0, sizeof(struct list_item$1charp*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional199=self->len==0,                _if_conditional199) {
                    # 227 "./neo-c.h"
                    litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value151=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                    come_call_finalizer3(right_value151,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_150->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_150->next=((void*)0);
                    # 231 "./neo-c.h"
                    litem_150->item=item;
                    # 233 "./neo-c.h"
                    self->tail=litem_150;
                    # 234 "./neo-c.h"
                    self->head=litem_150;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional200=self->len==1,                    _if_conditional200) {
                        # 237 "./neo-c.h"
                        litem_151=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value152=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value152,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_151->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_151->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_151->item=item;
                        # 243 "./neo-c.h"
                        self->tail=litem_151;
                        # 244 "./neo-c.h"
                        self->head->next=litem_151;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_152=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value153=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 247, "list_item$1charp"))));
                        come_call_finalizer3(right_value153,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_152->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_152->next=((void*)0);
                        # 251 "./neo-c.h"
                        litem_152->item=item;
                        # 253 "./neo-c.h"
                        self->tail->next=litem_152;
                        # 254 "./neo-c.h"
                        self->tail=litem_152;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result115__ = __result_obj__ = self;
                return __result115__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional207;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional207=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional207) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional208=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional208) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional209;
void* right_value161;
struct list_item$1CVALUEph* litem_161;
struct CVALUE* __dec_obj45;
_Bool _if_conditional211;
void* right_value162;
struct list_item$1CVALUEph* litem_162;
struct CVALUE* __dec_obj46;
void* right_value163;
struct list_item$1CVALUEph* litem_163;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1CVALUEph*));
right_value162 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1CVALUEph*));
right_value163 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1CVALUEph*));
        # 257 "./neo-c.h"
        # 226 "./neo-c.h"
        if(_if_conditional209=self->len==0,        _if_conditional209) {
            # 227 "./neo-c.h"
            litem_161=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value161=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value161,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 229 "./neo-c.h"
            litem_161->prev=((void*)0);
            # 230 "./neo-c.h"
            litem_161->next=((void*)0);
            # 231 "./neo-c.h"
            __dec_obj45=litem_161->item;
            litem_161->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 233 "./neo-c.h"
            self->tail=litem_161;
            # 234 "./neo-c.h"
            self->head=litem_161;
        }
        else {
            # 257 "./neo-c.h"
            # 236 "./neo-c.h"
            if(_if_conditional211=self->len==1,            _if_conditional211) {
                # 237 "./neo-c.h"
                litem_162=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value162,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_162->prev=self->head;
                # 240 "./neo-c.h"
                litem_162->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj46=litem_162->item;
                litem_162->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail=litem_162;
                # 244 "./neo-c.h"
                self->head->next=litem_162;
            }
            else {
                # 247 "./neo-c.h"
                litem_163=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 247, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value163,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 249 "./neo-c.h"
                litem_163->prev=self->tail;
                # 250 "./neo-c.h"
                litem_163->next=((void*)0);
                # 251 "./neo-c.h"
                __dec_obj47=litem_163->item;
                litem_163->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 253 "./neo-c.h"
                self->tail->next=litem_163;
                # 254 "./neo-c.h"
                self->tail=litem_163;
            }
        }
        # 257 "./neo-c.h"
        self->len++;
        # 259 "./neo-c.h"
        __result117__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result117__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional210=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional210) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value164;
char* none_generics_name_164;
void* right_value165;
char* fun_name2_165;
void* right_value166;
char* fun_name3_166;
struct sGenericsFun* generics_fun_169;
_Bool _if_conditional226;
void* right_value167;
_Bool _if_conditional227;
void* right_value168;
char* __result123__;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&none_generics_name_164, 0, sizeof(char*));
right_value165 = (void*)0;
memset(&fun_name2_165, 0, sizeof(char*));
right_value166 = (void*)0;
memset(&fun_name3_166, 0, sizeof(char*));
memset(&generics_fun_169, 0, sizeof(struct sGenericsFun*));
right_value167 = (void*)0;
right_value168 = (void*)0;
    # 154 "20method.c"
    none_generics_name_164=(char*)come_increment_ref_count(((char*)(right_value164=get_none_generics_name(type->mClass->mName))));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 155 "20method.c"
    fun_name2_165=(char*)come_increment_ref_count(((char*)(right_value165=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 156 "20method.c"
    fun_name3_166=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("%s_%s",none_generics_name_164,fun_name))));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 158 "20method.c"
    generics_fun_169=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_166,((void*)0));
    # 167 "20method.c"
    # 160 "20method.c"
    if(generics_fun_169) {
        # 165 "20method.c"
        # 161 "20method.c"
        if(_if_conditional227=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(fun_name2_165)))),generics_fun_169,type,info),        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional227) {
            # 162 "20method.c"
            err_msg(info,"%s not found",fun_name3_166);
            # 163 "20method.c"
            __result123__ = __result_obj__ = ((char*)(right_value168=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_164 = come_decrement_ref_count2(none_generics_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_165 = come_decrement_ref_count2(fun_name2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_166 = come_decrement_ref_count2(fun_name3_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result123__;
        }
    }
    # 167 "20method.c"
    __result124__ = __result_obj__ = fun_name2_165;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_164 = come_decrement_ref_count2(none_generics_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_165 = come_decrement_ref_count2(fun_name2_165, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_166 = come_decrement_ref_count2(fun_name3_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result124__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_164 = come_decrement_ref_count2(none_generics_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_165 = come_decrement_ref_count2(fun_name2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_166 = come_decrement_ref_count2(fun_name3_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_167;
unsigned int it_168;
_Bool _while_condtional28;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sGenericsFun* __result119__;
_Bool _if_conditional224;
_Bool _if_conditional225;
struct sGenericsFun* __result120__;
struct sGenericsFun* __result121__;
struct sGenericsFun* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_167, 0, sizeof(unsigned int));
memset(&it_168, 0, sizeof(unsigned int));
        # 1227 "./neo-c.h"
        hash_167=string_get_hash_key(((char*)key))%self->size;
        # 1228 "./neo-c.h"
        it_168=hash_167;
        # 1252 "./neo-c.h"
        while(_while_condtional28=(_Bool)1,        _while_condtional28) {
            # 1250 "./neo-c.h"
            # 1231 "./neo-c.h"
            if(_if_conditional212=self->item_existance[it_168],            _if_conditional212) {
                # 1238 "./neo-c.h"
                # 1233 "./neo-c.h"
                if(_if_conditional213=string_equals(self->keys[it_168],key),                _if_conditional213) {
                    # 1235 "./neo-c.h"
                    __result119__ = __result_obj__ = self->items[it_168];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result119__;
                }
                # 1238 "./neo-c.h"
                it_168++;
                # 1246 "./neo-c.h"
                # 1240 "./neo-c.h"
                if(_if_conditional224=it_168>=self->size,                _if_conditional224) {
                    # 1241 "./neo-c.h"
                    it_168=0;
                }
                else {
                    # 1246 "./neo-c.h"
                    # 1243 "./neo-c.h"
                    if(_if_conditional225=it_168==hash_167,                    _if_conditional225) {
                        # 1244 "./neo-c.h"
                        __result120__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result120__;
                    }
                }
            }
            else {
                # 1248 "./neo-c.h"
                __result121__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result121__;
            }
        }
        # 1252 "./neo-c.h"
        __result122__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result122__;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sGenericsFun_finalize"
                        # 0 "sGenericsFun_finalize"
                        if(_if_conditional214=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional214) {
                            # 0 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sGenericsFun_finalize"
                        # 1 "sGenericsFun_finalize"
                        if(_if_conditional215=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional215) {
                            # 1 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sGenericsFun_finalize"
                        # 2 "sGenericsFun_finalize"
                        if(_if_conditional216=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional216) {
                            # 2 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sGenericsFun_finalize"
                        # 3 "sGenericsFun_finalize"
                        if(_if_conditional217=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional217) {
                            # 3 "sGenericsFun_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 5 "sGenericsFun_finalize"
                        # 4 "sGenericsFun_finalize"
                        if(_if_conditional218=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional218) {
                            # 4 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 6 "sGenericsFun_finalize"
                        # 5 "sGenericsFun_finalize"
                        if(_if_conditional219=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional219) {
                            # 5 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 7 "sGenericsFun_finalize"
                        # 6 "sGenericsFun_finalize"
                        if(_if_conditional220=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional220) {
                            # 6 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 8 "sGenericsFun_finalize"
                        # 7 "sGenericsFun_finalize"
                        if(_if_conditional221=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional221) {
                            # 7 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 9 "sGenericsFun_finalize"
                        # 8 "sGenericsFun_finalize"
                        if(_if_conditional222=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional222) {
                            # 8 "sGenericsFun_finalize"
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 10 "sGenericsFun_finalize"
                        # 9 "sGenericsFun_finalize"
                        if(_if_conditional223=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional223) {
                            # 9 "sGenericsFun_finalize"
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value169;
struct sNode* __dec_obj48;
void* right_value170;
char* __dec_obj49;
void* right_value180;
struct list$1tuple2$2charphsNodephph* __dec_obj55;
void* right_value181;
struct buffer* __dec_obj56;
void* right_value182;
char* __dec_obj57;
void* right_value183;
struct list$1sTypeph* __dec_obj58;
struct sMethodCallNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
    # 181 "20method.c"
    __dec_obj48=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(obj))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 182 "20method.c"
    __dec_obj49=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(fun_name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 183 "20method.c"
    __dec_obj55=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value180=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj55,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 184 "20method.c"
    __dec_obj56=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_clone(method_block))));
    come_call_finalizer3(__dec_obj56,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 185 "20method.c"
    self->sline=info->sline;
    # 186 "20method.c"
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 187 "20method.c"
    self->method_block_sline=method_block_sline;
    # 188 "20method.c"
    __dec_obj58=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer3(__dec_obj58,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value183,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 191 "20method.c"
    __result131__ = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result131__;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool __result132__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 199 "20method.c"
    # 193 "20method.c"
    if(self->method_block) {
        # 194 "20method.c"
        __result132__ = (_Bool)1;
        return __result132__;
    }
    else {
        # 197 "20method.c"
        __result133__ = (_Bool)0;
        return __result133__;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__;
void* right_value184;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
    # 203 "20method.c"
    __result134__ = __result_obj__ = ((char*)(right_value184=__builtin_string("sMethodCallNode")));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_180;
struct list$1tuple2$2charphsNodephph* params_181;
struct sNode* obj_182;
struct buffer* method_block_183;
int method_block_sline_184;
struct list$1sTypeph* method_generics_types_185;
void* right_value185;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional252;
_Bool __result135__;
void* right_value186;
struct CVALUE* obj_value_186;
_Bool _if_conditional253;
void* right_value187;
void* right_value188;
char* __dec_obj60;
void* right_value189;
struct sType* obj_type_187;
struct sClass* klass_188;
_Bool calling_dynamic_method_189;
struct sType* lambda_type_190;
struct list$1tuple2$2charphsTypephph* o2_saved_191;
struct tuple2$2charphsTypeph* it_194;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_197;
struct sType* field_type_198;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value190;
struct sType* result_type_199;
void* right_value191;
void* right_value192;
struct list$1CVALUEph* come_params_202;
int i_203;
struct list$1tuple2$2charphsNodephph* o2_saved_204;
struct tuple2$2charphsNodeph* it_207;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_210;
struct sNode* node_211;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool __result151__;
void* right_value193;
struct CVALUE* come_value_212;
void* right_value194;
void* right_value195;
void* right_value196;
_Bool _if_conditional268;
void* right_value197;
void* right_value198;
struct buffer* buf_216;
void* right_value199;
int j_217;
struct list$1CVALUEph* o2_saved_218;
struct CVALUE* it_221;
_Bool _if_conditional273;
void* right_value200;
char* __dec_obj61;
_Bool _if_conditional275;
void* right_value201;
struct CVALUE* come_value2_224;
void* right_value202;
char* __dec_obj62;
void* right_value203;
struct sType* result_type2_225;
_Bool _if_conditional276;
void* right_value204;
void* right_value205;
char* __dec_obj63;
void* right_value206;
struct sType* __dec_obj64;
void* right_value207;
void* right_value208;
void* right_value209;
char* generics_fun_name_226;
struct sFun* fun_227;
int i_228;
void* right_value210;
char* new_fun_name_229;
_Bool _if_conditional296;
void* right_value211;
char* __dec_obj65;
_Bool _if_conditional297;
struct sType* obj_array_type_233;
_Bool _if_conditional298;
void* right_value212;
char* array_method_name_234;
_Bool _if_conditional303;
void* right_value213;
char* __dec_obj66;
_Bool _if_conditional304;
void* right_value214;
void* right_value215;
char* __dec_obj67;
_Bool _if_conditional305;
_Bool __result171__;
_Bool _if_conditional306;
void* right_value216;
void* right_value217;
char* __dec_obj68;
_Bool _if_conditional307;
struct sClass* klass_237;
_Bool _while_condtional37;
void* right_value218;
char* __dec_obj69;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool __result176__;
_Bool _if_conditional314;
_Bool __result177__;
_Bool _if_conditional316;
_Bool __result180__;
void* right_value219;
struct sType* result_type_241;
void* right_value220;
struct sType* result_type2_242;
void* right_value221;
void* right_value222;
struct list$1sTypeph* param_types_243;
struct list$1sTypeph* o2_saved_244;
struct sType* it_247;
_Bool _if_conditional321;
void* right_value226;
struct sType* it2_253;
void* right_value227;
void* right_value228;
void* right_value229;
struct list$1CVALUEph* come_params_254;
int i_255;
_Bool first_param_259;
struct list$1tuple2$2charphsNodephph* o2_saved_260;
struct tuple2$2charphsNodeph* it_261;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_262;
struct sNode* node_263;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool __result190__;
void* right_value233;
struct CVALUE* come_value_264;
int n_265;
struct list$1charph* o2_saved_266;
char* it_269;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value234;
void* right_value235;
void* right_value236;
_Bool _if_conditional335;
int i_274;
struct list$1tuple2$2charphsNodephph* o2_saved_275;
struct tuple2$2charphsNodeph* it_276;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_277;
struct sNode* node_278;
_Bool _if_conditional339;
void* right_value237;
void* right_value238;
void* right_value239;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool __result202__;
void* right_value240;
struct CVALUE* come_value_282;
_Bool _while_condtional40;
_Bool _if_conditional348;
_Bool _if_conditional349;
void* right_value241;
void* right_value242;
void* right_value243;
_Bool _if_conditional350;
_Bool _while_condtional42;
_Bool _if_conditional351;
struct sType* obj_array_type_286;
_Bool _if_conditional352;
void* right_value244;
char* array_method_name_287;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value245;
void* right_value246;
struct buffer* buf_288;
int i_289;
struct list$1sNodeph* o2_saved_290;
struct sNode* it_293;
_Bool _if_conditional359;
void* right_value247;
struct CVALUE* come_value_296;
void* right_value248;
_Bool _if_conditional360;
void* right_value249;
struct CVALUE* come_value_297;
void* right_value250;
char* __dec_obj77;
void* right_value251;
void* right_value252;
struct sType* __dec_obj78;
void* right_value256;
void* right_value257;
void* right_value258;
_Bool _if_conditional364;
void* right_value259;
void* right_value260;
struct buffer* buf_301;
int i_302;
struct list$1sNodeph* o2_saved_303;
struct sNode* it_304;
_Bool _if_conditional365;
void* right_value261;
struct CVALUE* come_value_305;
void* right_value262;
_Bool _if_conditional366;
void* right_value263;
struct CVALUE* come_value_306;
void* right_value264;
char* __dec_obj83;
void* right_value265;
void* right_value266;
struct sType* __dec_obj84;
void* right_value267;
void* right_value268;
void* right_value269;
_Bool _if_conditional367;
void* right_value270;
void* right_value271;
struct buffer* buf_307;
int i_308;
struct list$1sNodeph* o2_saved_309;
struct sNode* it_310;
_Bool _if_conditional368;
void* right_value272;
struct CVALUE* come_value_311;
void* right_value273;
_Bool _if_conditional369;
void* right_value274;
struct CVALUE* come_value_312;
void* right_value275;
char* __dec_obj85;
void* right_value276;
void* right_value277;
struct sType* __dec_obj86;
void* right_value278;
void* right_value279;
void* right_value280;
_Bool _if_conditional370;
void* right_value281;
void* right_value282;
struct buffer* buf_313;
int i_314;
struct list$1sNodeph* o2_saved_315;
struct sNode* it_316;
_Bool _if_conditional371;
void* right_value283;
struct CVALUE* come_value_317;
void* right_value284;
_Bool _if_conditional372;
void* right_value285;
struct CVALUE* come_value_318;
void* right_value286;
char* __dec_obj87;
void* right_value287;
void* right_value288;
struct sType* __dec_obj88;
void* right_value289;
void* right_value290;
void* right_value291;
_Bool _if_conditional374;
void* right_value292;
char* default_param_319;
char* param_name_320;
_Bool _if_conditional375;
struct buffer* source_321;
char* p_322;
char* head_323;
int sline_324;
void* right_value293;
struct buffer* __dec_obj89;
void* right_value294;
struct sNode* node_325;
_Bool _if_conditional376;
_Bool __result216__;
struct buffer* __dec_obj90;
void* right_value295;
struct CVALUE* come_value_326;
_Bool _if_conditional377;
void* right_value296;
void* right_value297;
void* right_value298;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool __result217__;
_Bool _if_conditional380;
void* right_value299;
void* right_value300;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value303;
struct sNode* current_stack_frame_node_328;
_Bool _if_conditional385;
_Bool __result220__;
void* right_value304;
struct CVALUE* come_value_329;
void* right_value305;
void* right_value306;
struct buffer* method_block2_330;
void* right_value307;
struct sType* method_block_type_331;
void* right_value308;
char* class_name_332;
struct sClass* current_stack_frame_struct_333;
_Bool _if_conditional386;
_Bool __result221__;
void* right_value309;
struct sType* result_type_334;
struct list$1sTypeph* param_types_335;
struct list$1charph* param_names_336;
void* right_value310;
void* right_value311;
struct buffer* all_alhabet_sname_337;
char* p_338;
_Bool _while_condtional43;
_Bool _if_conditional387;
void* right_value312;
void* right_value313;
void* right_value314;
int i_339;
struct list$1sTypeph* o2_saved_340;
struct sType* it_341;
struct sType* param_type_342;
_Bool _if_conditional388;
void* right_value315;
char* param_name_343;
void* right_value316;
void* right_value317;
_Bool _if_conditional389;
void* right_value318;
char* param_name_344;
void* right_value319;
void* right_value320;
void* right_value321;
char* param_name_345;
void* right_value322;
void* right_value323;
_Bool _if_conditional390;
void* right_value324;
struct buffer* source3_346;
char* p_347;
char* head_348;
int sline_349;
struct buffer* __dec_obj92;
void* right_value325;
struct sNode* node_350;
_Bool _if_conditional391;
_Bool __result222__;
void* right_value326;
void* right_value327;
char* method_block_name_351;
void* right_value328;
struct CVALUE* come_value2_352;
struct sFun* fun2_353;
_Bool _if_conditional392;
_Bool __result223__;
struct sType* method_block_type2_354;
void* right_value329;
char* __dec_obj93;
void* right_value330;
struct sType* __dec_obj94;
struct buffer* __dec_obj95;
void* right_value331;
void* right_value332;
struct buffer* buf_355;
int j_356;
struct list$1CVALUEph* o2_saved_357;
struct CVALUE* it_358;
_Bool _if_conditional393;
void* right_value333;
struct CVALUE* come_value2_359;
void* right_value334;
char* __dec_obj96;
void* right_value335;
struct sType* __dec_obj97;
_Bool _if_conditional394;
void* right_value336;
char* __dec_obj98;
void* right_value337;
char* __dec_obj99;
_Bool _if_conditional395;
void* right_value338;
char* var_name_360;
void* right_value339;
struct sType* result_type_361;
void* right_value340;
struct sType* result_type2_362;
struct sType* result_type3_363;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value341;
void* right_value342;
void* right_value343;
void* right_value344;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
_Bool _if_conditional399;
void* right_value352;
void* right_value353;
void* right_value354;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
struct list$1sTypeph* __dec_obj100;
_Bool __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_180, 0, sizeof(char*));
memset(&params_181, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_182, 0, sizeof(struct sNode*));
memset(&method_block_183, 0, sizeof(struct buffer*));
memset(&method_block_sline_184, 0, sizeof(int));
memset(&method_generics_types_185, 0, sizeof(struct list$1sTypeph*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&obj_value_186, 0, sizeof(struct CVALUE*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&obj_type_187, 0, sizeof(struct sType*));
memset(&klass_188, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_189, 0, sizeof(_Bool));
memset(&lambda_type_190, 0, sizeof(struct sType*));
memset(&o2_saved_191, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_194, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_197, 0, sizeof(char*));
memset(&field_type_198, 0, sizeof(struct sType*));
memset(&field_name_197, 0, sizeof(char*));
memset(&field_type_198, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&result_type_199, 0, sizeof(struct sType*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&come_params_202, 0, sizeof(struct list$1CVALUEph*));
memset(&i_203, 0, sizeof(int));
memset(&o2_saved_204, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_207, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_210, 0, sizeof(char*));
memset(&node_211, 0, sizeof(struct sNode*));
memset(&label_210, 0, sizeof(char*));
memset(&node_211, 0, sizeof(struct sNode*));
right_value193 = (void*)0;
memset(&come_value_212, 0, sizeof(struct CVALUE*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&buf_216, 0, sizeof(struct buffer*));
right_value199 = (void*)0;
memset(&j_217, 0, sizeof(int));
memset(&o2_saved_218, 0, sizeof(struct list$1CVALUEph*));
memset(&it_221, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&come_value2_224, 0, sizeof(struct CVALUE*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&result_type2_225, 0, sizeof(struct sType*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&generics_fun_name_226, 0, sizeof(char*));
memset(&fun_227, 0, sizeof(struct sFun*));
memset(&i_228, 0, sizeof(int));
right_value210 = (void*)0;
memset(&new_fun_name_229, 0, sizeof(char*));
right_value211 = (void*)0;
memset(&obj_array_type_233, 0, sizeof(struct sType*));
right_value212 = (void*)0;
memset(&array_method_name_234, 0, sizeof(char*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&klass_237, 0, sizeof(struct sClass*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&result_type_241, 0, sizeof(struct sType*));
right_value220 = (void*)0;
memset(&result_type2_242, 0, sizeof(struct sType*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&param_types_243, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_244, 0, sizeof(struct list$1sTypeph*));
memset(&it_247, 0, sizeof(struct sType*));
right_value226 = (void*)0;
memset(&it2_253, 0, sizeof(struct sType*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&come_params_254, 0, sizeof(struct list$1CVALUEph*));
memset(&i_255, 0, sizeof(int));
memset(&first_param_259, 0, sizeof(_Bool));
memset(&o2_saved_260, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_261, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_262, 0, sizeof(char*));
memset(&node_263, 0, sizeof(struct sNode*));
memset(&label_262, 0, sizeof(char*));
memset(&node_263, 0, sizeof(struct sNode*));
right_value233 = (void*)0;
memset(&come_value_264, 0, sizeof(struct CVALUE*));
memset(&n_265, 0, sizeof(int));
memset(&o2_saved_266, 0, sizeof(struct list$1charph*));
memset(&it_269, 0, sizeof(char*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&i_274, 0, sizeof(int));
memset(&o2_saved_275, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_276, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_277, 0, sizeof(char*));
memset(&node_278, 0, sizeof(struct sNode*));
memset(&label_277, 0, sizeof(char*));
memset(&node_278, 0, sizeof(struct sNode*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&come_value_282, 0, sizeof(struct CVALUE*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&obj_array_type_286, 0, sizeof(struct sType*));
right_value244 = (void*)0;
memset(&array_method_name_287, 0, sizeof(char*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&buf_288, 0, sizeof(struct buffer*));
memset(&i_289, 0, sizeof(int));
memset(&o2_saved_290, 0, sizeof(struct list$1sNodeph*));
memset(&it_293, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&come_value_296, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&come_value_297, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&buf_301, 0, sizeof(struct buffer*));
memset(&i_302, 0, sizeof(int));
memset(&o2_saved_303, 0, sizeof(struct list$1sNodeph*));
memset(&it_304, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
memset(&come_value_305, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&come_value_306, 0, sizeof(struct CVALUE*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&buf_307, 0, sizeof(struct buffer*));
memset(&i_308, 0, sizeof(int));
memset(&o2_saved_309, 0, sizeof(struct list$1sNodeph*));
memset(&it_310, 0, sizeof(struct sNode*));
right_value272 = (void*)0;
memset(&come_value_311, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&come_value_312, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&buf_313, 0, sizeof(struct buffer*));
memset(&i_314, 0, sizeof(int));
memset(&o2_saved_315, 0, sizeof(struct list$1sNodeph*));
memset(&it_316, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
memset(&come_value_317, 0, sizeof(struct CVALUE*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&come_value_318, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&default_param_319, 0, sizeof(char*));
memset(&param_name_320, 0, sizeof(char*));
memset(&source_321, 0, sizeof(struct buffer*));
memset(&p_322, 0, sizeof(char*));
memset(&head_323, 0, sizeof(char*));
memset(&sline_324, 0, sizeof(int));
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&node_325, 0, sizeof(struct sNode*));
right_value295 = (void*)0;
memset(&come_value_326, 0, sizeof(struct CVALUE*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value303 = (void*)0;
memset(&current_stack_frame_node_328, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
memset(&come_value_329, 0, sizeof(struct CVALUE*));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&method_block2_330, 0, sizeof(struct buffer*));
right_value307 = (void*)0;
memset(&method_block_type_331, 0, sizeof(struct sType*));
right_value308 = (void*)0;
memset(&class_name_332, 0, sizeof(char*));
memset(&current_stack_frame_struct_333, 0, sizeof(struct sClass*));
right_value309 = (void*)0;
memset(&result_type_334, 0, sizeof(struct sType*));
memset(&param_types_335, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_336, 0, sizeof(struct list$1charph*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&all_alhabet_sname_337, 0, sizeof(struct buffer*));
memset(&p_338, 0, sizeof(char*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&i_339, 0, sizeof(int));
memset(&o2_saved_340, 0, sizeof(struct list$1sTypeph*));
memset(&it_341, 0, sizeof(struct sType*));
memset(&param_type_342, 0, sizeof(struct sType*));
right_value315 = (void*)0;
memset(&param_name_343, 0, sizeof(char*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&param_name_344, 0, sizeof(char*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&param_name_345, 0, sizeof(char*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&source3_346, 0, sizeof(struct buffer*));
memset(&p_347, 0, sizeof(char*));
memset(&head_348, 0, sizeof(char*));
memset(&sline_349, 0, sizeof(int));
right_value325 = (void*)0;
memset(&node_350, 0, sizeof(struct sNode*));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&method_block_name_351, 0, sizeof(char*));
right_value328 = (void*)0;
memset(&come_value2_352, 0, sizeof(struct CVALUE*));
memset(&fun2_353, 0, sizeof(struct sFun*));
memset(&method_block_type2_354, 0, sizeof(struct sType*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&buf_355, 0, sizeof(struct buffer*));
memset(&j_356, 0, sizeof(int));
memset(&o2_saved_357, 0, sizeof(struct list$1CVALUEph*));
memset(&it_358, 0, sizeof(struct CVALUE*));
right_value333 = (void*)0;
memset(&come_value2_359, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&var_name_360, 0, sizeof(char*));
right_value339 = (void*)0;
memset(&result_type_361, 0, sizeof(struct sType*));
right_value340 = (void*)0;
memset(&result_type2_362, 0, sizeof(struct sType*));
memset(&result_type3_363, 0, sizeof(struct sType*));
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
    # 208 "20method.c"
    fun_name_180=self->fun_name;
    # 209 "20method.c"
    params_181=self->params;
    # 210 "20method.c"
    obj_182=self->obj;
    # 211 "20method.c"
    method_block_183=self->method_block;
    # 212 "20method.c"
    method_block_sline_184=self->method_block_sline;
    # 215 "20method.c"
    method_generics_types_185=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    # 216 "20method.c"
    __dec_obj59=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value185=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer3(__dec_obj59,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value185,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 222 "20method.c"
    # 218 "20method.c"
    if(_if_conditional252=!node_compile(obj_182,info),    _if_conditional252) {
        # 219 "20method.c"
        __result135__ = (_Bool)0;
        come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result135__;
    }
    # 222 "20method.c"
    obj_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 223 "20method.c"
    dec_stack_ptr(1,info);
    # 232 "20method.c"
    # 225 "20method.c"
    if(_if_conditional253=gComeDebug&&obj_value_186->type->mPointerNum>0,    _if_conditional253) {
        # 226 "20method.c"
        __dec_obj60=obj_value_186->c_value;
        obj_value_186->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value187=make_type_name_string(obj_value_186->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),obj_value_186->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 232 "20method.c"
    obj_type_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(obj_value_186->type))));
    come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 234 "20method.c"
    klass_188=obj_type_187->mClass;
    # 236 "20method.c"
    calling_dynamic_method_189=(_Bool)0;
    # 237 "20method.c"
    lambda_type_190=((void*)0);
    # 248 "20method.c"
    for(    o2_saved_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_188->mFields)),it_194=list$1tuple2$2charphsTypephph_begin((o2_saved_191));    !list$1tuple2$2charphsTypephph_end((o2_saved_191));    it_194=list$1tuple2$2charphsTypephph_next((o2_saved_191))    ){
        # 239 "20method.c"
        multiple_assign_var1=it_194;
        field_name_197=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_198=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 246 "20method.c"
        # 241 "20method.c"
        if(_if_conditional258=string_operator_equals(field_name_197,fun_name_180)&&string_operator_equals(field_type_198->mClass->mName,"lambda"),        _if_conditional258) {
            # 242 "20method.c"
            calling_dynamic_method_189=(_Bool)1;
            # 243 "20method.c"
            lambda_type_190=field_type_198;
            # 244 "20method.c"
            field_name_197 = come_decrement_ref_count2(field_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_198,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_197 = come_decrement_ref_count2(field_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_198,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    # 908 "20method.c"
    # 248 "20method.c"
    if(calling_dynamic_method_189) {
        # 249 "20method.c"
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(lambda_type_190->mResultType->v1))));
        come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 250 "20method.c"
        result_type_199->mStatic=(_Bool)0;
        # 252 "20method.c"
        come_params_202=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value192=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value191=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 252, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value191,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value192,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 254 "20method.c"
        i_203=0;
        # 282 "20method.c"
        for(        o2_saved_204=(params_181),it_207=list$1tuple2$2charphsNodephph_begin((o2_saved_204));        !list$1tuple2$2charphsNodephph_end((o2_saved_204));        it_207=list$1tuple2$2charphsNodephph_next((o2_saved_204))        ){
            # 256 "20method.c"
            multiple_assign_var2=it_207;
            label_210=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_211=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            # 280 "20method.c"
            # 258 "20method.c"
            if(_if_conditional264=i_203==0,            _if_conditional264) {
                # 259 "20method.c"
                list$1CVALUEph_push_back(come_params_202,(struct CVALUE*)come_increment_ref_count(obj_value_186));
                # 260 "20method.c"
                i_203++;
            }
            else {
                # 267 "20method.c"
                # 263 "20method.c"
                if(_if_conditional265=!node_compile(node_211,info),                _if_conditional265) {
                    # 264 "20method.c"
                    __result151__ = (_Bool)0;
                    label_210 = come_decrement_ref_count2(label_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_211) { node_211 = come_decrement_ref_count2(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(result_type_199,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result151__;
                }
                # 267 "20method.c"
                come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value193,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 269 "20method.c"
                check_assign_type(((char*)(right_value196=xsprintf("\%s param num \%s is assinged to",((char*)(right_value194=charp_to_string(fun_name_180))),((char*)(right_value195=int_to_string(i_203)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_190->mParamTypes,i_203-1), "20method.c", 269, 2)),come_value_212->type,come_value_212,(_Bool)0,(_Bool)1,info);
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 275 "20method.c"
                # 270 "20method.c"
                if(_if_conditional268=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_190->mParamTypes,i_203-1), "20method.c", 270, 3))->mHeap&&come_value_212->type->mHeap,                _if_conditional268) {
                    # 272 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_190->mParamTypes,i_203-1), "20method.c", 272, 4)),come_value_212->type,come_value_212,info);
                }
                # 275 "20method.c"
                list$1CVALUEph_push_back(come_params_202,(struct CVALUE*)come_increment_ref_count(come_value_212));
                # 277 "20method.c"
                i_203++;
                # 278 "20method.c"
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_210 = come_decrement_ref_count2(label_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_211) { node_211 = come_decrement_ref_count2(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 282 "20method.c"
        buf_216=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 282, "buffer"))))))));
        come_call_finalizer3(right_value197,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value198,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 284 "20method.c"
        buffer_append_str(buf_216,((char*)(right_value199=xsprintf("%s->%s",obj_value_186->c_value,fun_name_180))));
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 285 "20method.c"
        buffer_append_str(buf_216,"(");
        # 287 "20method.c"
        j_217=0;
        # 300 "20method.c"
        for(        o2_saved_218=(struct list$1CVALUEph*)come_increment_ref_count((come_params_202)),it_221=list$1CVALUEph_begin((o2_saved_218));        !list$1CVALUEph_end((o2_saved_218));        it_221=list$1CVALUEph_next((o2_saved_218))        ){
            # 292 "20method.c"
            # 289 "20method.c"
            if(_if_conditional273=j_217==0,            _if_conditional273) {
                # 290 "20method.c"
                __dec_obj61=it_221->c_value;
                it_221->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("%s->_protocol_obj",it_221->c_value))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 292 "20method.c"
            buffer_append_str(buf_216,it_221->c_value);
            # 298 "20method.c"
            # 294 "20method.c"
            if(_if_conditional275=j_217!=list$1CVALUEph_length(come_params_202)-1,            _if_conditional275) {
                # 295 "20method.c"
                buffer_append_str(buf_216,",");
            }
            # 298 "20method.c"
            j_217++;
        }
        come_call_finalizer3(o2_saved_218,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 300 "20method.c"
        buffer_append_str(buf_216,")");
        # 302 "20method.c"
        come_value2_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 302, "CVALUE"))));
        come_call_finalizer3(right_value201,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 304 "20method.c"
        __dec_obj62=come_value2_224->c_value;
        come_value2_224->c_value=(char*)come_increment_ref_count(((char*)(right_value202=buffer_to_string(buf_216))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 306 "20method.c"
        result_type2_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=solve_generics(result_type_199,info->generics_type,info))));
        come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 312 "20method.c"
        # 308 "20method.c"
        if(result_type2_225->mHeap) {
            # 309 "20method.c"
            __dec_obj63=come_value2_224->c_value;
            come_value2_224->c_value=(char*)come_increment_ref_count(((char*)(right_value205=append_object_to_right_values(((char*)(right_value204=buffer_to_string(buf_216))),(struct sType*)come_increment_ref_count(result_type2_225),info))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 312 "20method.c"
        __dec_obj64=come_value2_224->type;
        come_value2_224->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(result_type2_225))));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 313 "20method.c"
        come_value2_224->type->mStatic=(_Bool)0;
        # 314 "20method.c"
        come_value2_224->var=((void*)0);
        # 316 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_224->c_value);
        # 318 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_224));
        come_call_finalizer3(result_type_199,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_216,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 321 "20method.c"
        generics_fun_name_226=(char*)come_increment_ref_count(((char*)(right_value209=string_to_string(((char*)(right_value208=make_generics_function(obj_type_187,(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(fun_name_180)))),info,(_Bool)1)))))));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 323 "20method.c"
        fun_227=((void*)0);
        # 336 "20method.c"
        for(        i_228=128;        i_228>=1;        i_228--        ){
            # 326 "20method.c"
            new_fun_name_229=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s_v%d",generics_fun_name_226,i_228))));
            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 328 "20method.c"
            fun_227=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_229);
            # 334 "20method.c"
            # 330 "20method.c"
            if(_if_conditional296=fun_227!=((void*)0),            _if_conditional296) {
                # 331 "20method.c"
                __dec_obj65=generics_fun_name_226;
                generics_fun_name_226=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(new_fun_name_229))));
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 332 "20method.c"
                new_fun_name_229 = come_decrement_ref_count2(new_fun_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_229 = come_decrement_ref_count2(new_fun_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 389 "20method.c"
        # 336 "20method.c"
        if(_if_conditional297=fun_227==((void*)0),        _if_conditional297) {
            # 337 "20method.c"
            obj_array_type_233=obj_type_187->mOriginalLoadVarType->v1;
            # 388 "20method.c"
            # 339 "20method.c"
            if(_if_conditional298=obj_array_type_233&&list$1sNodeph_length(obj_array_type_233->mArrayNum)>0,            _if_conditional298) {
                # 340 "20method.c"
                array_method_name_234=(char*)come_increment_ref_count(((char*)(right_value212=create_method_name(obj_array_type_233,(_Bool)0,fun_name_180,info,(_Bool)0))));
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 342 "20method.c"
                fun_227=map$2charphsFunph_at(info->funcs,array_method_name_234,((void*)0));
                # 359 "20method.c"
                # 344 "20method.c"
                if(fun_227) {
                    # 345 "20method.c"
                    __dec_obj66=generics_fun_name_226;
                    generics_fun_name_226=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(array_method_name_234))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 348 "20method.c"
                    fun_227=map$2charphsFunph_at(info->funcs,generics_fun_name_226,((void*)0));
                    # 358 "20method.c"
                    # 350 "20method.c"
                    if(_if_conditional304=fun_227==((void*)0),                    _if_conditional304) {
                        # 351 "20method.c"
                        __dec_obj67=generics_fun_name_226;
                        generics_fun_name_226=(char*)come_increment_ref_count(((char*)(right_value215=create_method_name(obj_type_187,(_Bool)0,((char*)(right_value214=__builtin_string(fun_name_180))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 352 "20method.c"
                        fun_227=map$2charphsFunph_at(info->funcs,generics_fun_name_226,((void*)0));
                        # 357 "20method.c"
                        # 353 "20method.c"
                        if(_if_conditional305=fun_227==((void*)0),                        _if_conditional305) {
                            # 354 "20method.c"
                            err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_226,info->come_fun->mName);
                            # 355 "20method.c"
                            __result171__ = (_Bool)1;
                            array_method_name_234 = come_decrement_ref_count2(array_method_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result171__;
                        }
                    }
                }
                array_method_name_234 = come_decrement_ref_count2(array_method_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 361 "20method.c"
                fun_227=map$2charphsFunph_at(info->funcs,generics_fun_name_226,((void*)0));
                # 387 "20method.c"
                # 363 "20method.c"
                if(_if_conditional306=fun_227==((void*)0),                _if_conditional306) {
                    # 364 "20method.c"
                    __dec_obj68=generics_fun_name_226;
                    generics_fun_name_226=(char*)come_increment_ref_count(((char*)(right_value217=create_method_name(obj_type_187,(_Bool)0,((char*)(right_value216=__builtin_string(fun_name_180))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 366 "20method.c"
                    fun_227=map$2charphsFunph_at(info->funcs,generics_fun_name_226,((void*)0));
                    # 382 "20method.c"
                    # 368 "20method.c"
                    if(_if_conditional307=fun_227==((void*)0),                    _if_conditional307) {
                        # 369 "20method.c"
                        klass_237=obj_type_187->mClass;
                        # 380 "20method.c"
                        while(_while_condtional37=map$2charphsClassphp_operator_load_element(info->classes,klass_237->mParentClassName),                        _while_condtional37) {
                            # 371 "20method.c"
                            klass_237=map$2charphsClassphp_operator_load_element(info->classes,klass_237->mParentClassName);
                            # 372 "20method.c"
                            __dec_obj69=generics_fun_name_226;
                            generics_fun_name_226=(char*)come_increment_ref_count(((char*)(right_value218=create_method_name_using_class(klass_237,(_Bool)0,fun_name_180,info,(_Bool)1))));
                            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 374 "20method.c"
                            fun_227=map$2charphsFunph_at(info->funcs,generics_fun_name_226,((void*)0));
                            # 379 "20method.c"
                            # 376 "20method.c"
                            if(fun_227) {
                                # 377 "20method.c"
                                break;
                            }
                        }
                    }
                    # 386 "20method.c"
                    # 382 "20method.c"
                    if(_if_conditional313=fun_227==((void*)0),                    _if_conditional313) {
                        # 383 "20method.c"
                        err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_226,info->come_fun->mName);
                        # 384 "20method.c"
                        __result176__ = (_Bool)1;
                        generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result176__;
                    }
                }
            }
        }
        # 394 "20method.c"
        # 389 "20method.c"
        if(_if_conditional314=fun_227==((void*)0),        _if_conditional314) {
            # 390 "20method.c"
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_226,info->come_fun->mName);
            # 391 "20method.c"
            __result177__ = (_Bool)1;
            generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result177__;
        }
        # 399 "20method.c"
        # 394 "20method.c"
        if(_if_conditional316=list$1sTypeph_length(fun_227->mParamTypes)==0,        _if_conditional316) {
            # 395 "20method.c"
            err_msg(info,"Method require function parametor");
            # 396 "20method.c"
            __result180__ = (_Bool)1;
            generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result180__;
        }
        # 399 "20method.c"
        result_type_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(fun_227->mResultType))));
        come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 400 "20method.c"
        result_type_241->mStatic=(_Bool)0;
        # 402 "20method.c"
        result_type2_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=solve_generics(result_type_241,info->generics_type,info))));
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 404 "20method.c"
        param_types_243=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value222=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value221=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 404, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value221,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value222,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 416 "20method.c"
        for(        o2_saved_244=(struct list$1sTypeph*)come_increment_ref_count((fun_227->mParamTypes)),it_247=list$1sTypeph_begin((o2_saved_244));        !list$1sTypeph_end((o2_saved_244));        it_247=list$1sTypeph_next((o2_saved_244))        ){
            # 414 "20method.c"
            # 406 "20method.c"
            if(_if_conditional321=it_247==((void*)0),            _if_conditional321) {
                # 407 "20method.c"
                list$1sTypeph_push_back(param_types_243,it_247);
            }
            else {
                # 410 "20method.c"
                it2_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=solve_generics(it_247,info->generics_type,info))));
                come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 412 "20method.c"
                list$1sTypeph_push_back(param_types_243,(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_clone(it2_253)))));
                come_call_finalizer3(right_value227,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(it2_253,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_244,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        # 416 "20method.c"
        come_params_254=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value229=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value228=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 416, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value228,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value229,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 422 "20method.c"
        for(        i_255=0;        i_255<list$1sTypeph_length(fun_227->mParamTypes)-(method_block_183?2:0);        i_255++        ){
            # 419 "20method.c"
            list$1CVALUEph_add(come_params_254,((void*)0));
        }
        # 422 "20method.c"
        first_param_259=(_Bool)1;
        # 457 "20method.c"
        for(        o2_saved_260=(params_181),it_261=list$1tuple2$2charphsNodephph_begin((o2_saved_260));        !list$1tuple2$2charphsNodephph_end((o2_saved_260));        it_261=list$1tuple2$2charphsNodephph_next((o2_saved_260))        ){
            # 424 "20method.c"
            multiple_assign_var3=it_261;
            label_262=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_263=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            # 455 "20method.c"
            # 426 "20method.c"
            if(first_param_259) {
                # 427 "20method.c"
                first_param_259=(_Bool)0;
            }
            else {
                # 455 "20method.c"
                # 429 "20method.c"
                if(label_262) {
                    # 434 "20method.c"
                    # 430 "20method.c"
                    if(_if_conditional328=!node_compile(node_263,info),                    _if_conditional328) {
                        # 431 "20method.c"
                        __result190__ = (_Bool)0;
                        label_262 = come_decrement_ref_count2(label_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result190__;
                    }
                    # 434 "20method.c"
                    come_value_264=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value233,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 435 "20method.c"
                    dec_stack_ptr(1,info);
                    # 437 "20method.c"
                    n_265=0;
                    # 446 "20method.c"
                    for(                    o2_saved_266=(struct list$1charph*)come_increment_ref_count((fun_227->mParamNames)),it_269=list$1charph_begin((o2_saved_266));                    !list$1charph_end((o2_saved_266));                    it_269=list$1charph_next((o2_saved_266))                    ){
                        # 443 "20method.c"
                        # 439 "20method.c"
                        if(_if_conditional333=string_operator_equals(label_262,it_269),                        _if_conditional333) {
                            # 440 "20method.c"
                            break;
                        }
                        # 443 "20method.c"
                        n_265++;
                    }
                    come_call_finalizer3(o2_saved_266,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    # 449 "20method.c"
                    # 446 "20method.c"
                    if(_if_conditional334=list$1sTypephp_operator_load_element(param_types_243,n_265),                    _if_conditional334) {
                        # 447 "20method.c"
                        check_assign_type(((char*)(right_value236=xsprintf("\%s param num \%s is assinged to",((char*)(right_value234=charp_to_string(fun_name_180))),((char*)(right_value235=int_to_string(n_265)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,n_265), "20method.c", 447, 5)),come_value_264->type,come_value_264,(_Bool)0,(_Bool)1,info);
                        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 453 "20method.c"
                    # 449 "20method.c"
                    if(_if_conditional335=list$1sTypephp_operator_load_element(param_types_243,n_265)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,n_265), "20method.c", 449, 6))->mHeap&&come_value_264->type->mHeap,                    _if_conditional335) {
                        # 450 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,n_265), "20method.c", 450, 7)),come_value_264->type,come_value_264,info);
                    }
                    # 453 "20method.c"
                    list$1CVALUEph_replace(come_params_254,n_265,(struct CVALUE*)come_increment_ref_count(come_value_264));
                    come_call_finalizer3(come_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_262 = come_decrement_ref_count2(label_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 457 "20method.c"
        i_274=0;
        # 505 "20method.c"
        for(        o2_saved_275=(params_181),it_276=list$1tuple2$2charphsNodephph_begin((o2_saved_275));        !list$1tuple2$2charphsNodephph_end((o2_saved_275));        it_276=list$1tuple2$2charphsNodephph_next((o2_saved_275))        ){
            # 459 "20method.c"
            multiple_assign_var4=it_276;
            label_277=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_278=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            # 503 "20method.c"
            # 461 "20method.c"
            if(_if_conditional339=i_274==0,            _if_conditional339) {
                # 462 "20method.c"
                check_assign_type(((char*)(right_value239=xsprintf("\%s param num \%s is assinged to",((char*)(right_value237=charp_to_string(fun_name_180))),((char*)(right_value238=int_to_string(i_274)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 462, 8)),obj_value_186->type,obj_value_186,(_Bool)0,(_Bool)1,info);
                right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 470 "20method.c"
                # 463 "20method.c"
                if(_if_conditional340=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 463, 9))->mHeap&&obj_value_186->type->mHeap,                _if_conditional340) {
                    # 464 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 464, 10)),obj_value_186->type,obj_value_186,info);
                }
                else {
                    # 470 "20method.c"
                    # 466 "20method.c"
                    if(_if_conditional341=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 466, 11))->mHeap&&!obj_value_186->type->mHeap&&!gComeGC,                    _if_conditional341) {
                        # 467 "20method.c"
                        err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_227->mParamNames,i_274), "20method.c", 467, 12)));
                        # 468 "20method.c"
                        exit(2);
                    }
                }
                # 470 "20method.c"
                list$1CVALUEph_replace(come_params_254,i_274,(struct CVALUE*)come_increment_ref_count(obj_value_186));
                # 472 "20method.c"
                i_274++;
            }
            else {
                # 503 "20method.c"
                # 474 "20method.c"
                if(label_277) {
                }
                else {
                    # 481 "20method.c"
                    # 477 "20method.c"
                    if(_if_conditional345=!node_compile(node_278,info),                    _if_conditional345) {
                        # 478 "20method.c"
                        __result202__ = (_Bool)0;
                        label_277 = come_decrement_ref_count2(label_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_278) { node_278 = come_decrement_ref_count2(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result202__;
                    }
                    # 481 "20method.c"
                    come_value_282=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 482 "20method.c"
                    dec_stack_ptr(1,info);
                    # 493 "20method.c"
                    while(_while_condtional40=(_Bool)1,                    _while_condtional40) {
                        # 491 "20method.c"
                        # 485 "20method.c"
                        if(_if_conditional348=list$1CVALUEphp_operator_load_element(come_params_254,i_274)==((void*)0),                        _if_conditional348) {
                            # 486 "20method.c"
                            break;
                        }
                        else {
                            # 489 "20method.c"
                            i_274++;
                        }
                    }
                    # 496 "20method.c"
                    # 493 "20method.c"
                    if(_if_conditional349=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 493, 13)),                    _if_conditional349) {
                        # 494 "20method.c"
                        check_assign_type(((char*)(right_value243=xsprintf("\%s param num \%s is assinged to",((char*)(right_value241=charp_to_string(fun_name_180))),((char*)(right_value242=int_to_string(i_274)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 494, 14)),come_value_282->type,come_value_282,(_Bool)0,(_Bool)1,info);
                        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 500 "20method.c"
                    # 496 "20method.c"
                    if(_if_conditional350=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 496, 15))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 496, 16))->mHeap&&come_value_282->type->mHeap,                    _if_conditional350) {
                        # 497 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 497, 17)),come_value_282->type,come_value_282,info);
                    }
                    # 500 "20method.c"
                    list$1CVALUEph_replace(come_params_254,i_274,(struct CVALUE*)come_increment_ref_count(come_value_282));
                    # 501 "20method.c"
                    i_274++;
                    come_call_finalizer3(come_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_277 = come_decrement_ref_count2(label_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_278) { node_278 = come_decrement_ref_count2(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 514 "20method.c"
        while(_while_condtional42=(_Bool)1,        _while_condtional42) {
            # 512 "20method.c"
            # 506 "20method.c"
            if(_if_conditional351=list$1CVALUEphp_operator_load_element(come_params_254,i_274)==((void*)0),            _if_conditional351) {
                # 507 "20method.c"
                break;
            }
            else {
                # 510 "20method.c"
                i_274++;
            }
        }
        # 514 "20method.c"
        obj_array_type_286=obj_type_187->mOriginalLoadVarType->v1;
        # 637 "20method.c"
        # 515 "20method.c"
        if(_if_conditional352=obj_array_type_286&&list$1sNodeph_length(obj_array_type_286->mArrayNum)>0,        _if_conditional352) {
            # 516 "20method.c"
            array_method_name_287=(char*)come_increment_ref_count(((char*)(right_value244=create_method_name(obj_array_type_286,(_Bool)0,fun_name_180,info,(_Bool)0))));
            right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 635 "20method.c"
            # 517 "20method.c"
            if(_if_conditional353=string_operator_equals(generics_fun_name_226,array_method_name_287),            _if_conditional353) {
                # 634 "20method.c"
                # 518 "20method.c"
                if(_if_conditional354=charp_operator_equals(fun_name_180,"to_pointer"),                _if_conditional354) {
                    # 519 "20method.c"
                    buf_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value246=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 519, "buffer"))))))));
                    come_call_finalizer3(right_value245,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value246,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    # 521 "20method.c"
                    i_289=0;
                    # 538 "20method.c"
                    for(                    o2_saved_290=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_286->mArrayNum)),it_293=list$1sNodeph_begin((o2_saved_290));                    !list$1sNodeph_end((o2_saved_290));                    it_293=list$1sNodeph_next((o2_saved_290))                    ){
                        # 528 "20method.c"
                        # 523 "20method.c"
                        if(_if_conditional359=!node_compile(it_293,info),                        _if_conditional359) {
                            # 524 "20method.c"
                            err_msg(info,"invalid array num");
                            # 525 "20method.c"
                            exit(1);
                        }
                        # 528 "20method.c"
                        come_value_296=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
                        come_call_finalizer3(right_value247,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 529 "20method.c"
                        dec_stack_ptr(1,info);
                        # 531 "20method.c"
                        buffer_append_str(buf_288,((char*)(right_value248=xsprintf("%s",come_value_296->c_value))));
                        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 535 "20method.c"
                        # 532 "20method.c"
                        if(_if_conditional360=i_289!=list$1sNodeph_length(obj_array_type_286->mArrayNum)-1,                        _if_conditional360) {
                            # 533 "20method.c"
                            buffer_append_str(buf_288,"*");
                        }
                        # 535 "20method.c"
                        i_289++;
                        come_call_finalizer3(come_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_290,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 538 "20method.c"
                    come_value_297=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 538, "CVALUE"))));
                    come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 540 "20method.c"
                    __dec_obj77=come_value_297->c_value;
                    come_value_297->c_value=(char*)come_increment_ref_count(((char*)(right_value250=buffer_to_string(buf_288))));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 541 "20method.c"
                    come_value_297->var=((void*)0);
                    # 542 "20method.c"
                    __dec_obj78=come_value_297->type;
                    come_value_297->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 542, "sType")))),"long",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 544 "20method.c"
                    list$1CVALUEph_replace(come_params_254,1,(struct CVALUE*)come_increment_ref_count(come_value_297));
                    # 545 "20method.c"
                    list$1tuple2$2charphsNodephph_push_back(params_181,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value258=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value257=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 545, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("len")))),((void*)0))))));
                    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value258,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(buf_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_297,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 634 "20method.c"
                    # 547 "20method.c"
                    if(_if_conditional364=charp_operator_equals(fun_name_180,"length"),                    _if_conditional364) {
                        # 548 "20method.c"
                        buf_301=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value260=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value259=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 548, "buffer"))))))));
                        come_call_finalizer3(right_value259,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value260,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        # 550 "20method.c"
                        i_302=0;
                        # 567 "20method.c"
                        for(                        o2_saved_303=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_286->mArrayNum)),it_304=list$1sNodeph_begin((o2_saved_303));                        !list$1sNodeph_end((o2_saved_303));                        it_304=list$1sNodeph_next((o2_saved_303))                        ){
                            # 557 "20method.c"
                            # 552 "20method.c"
                            if(_if_conditional365=!node_compile(it_304,info),                            _if_conditional365) {
                                # 553 "20method.c"
                                err_msg(info,"invalid array num");
                                # 554 "20method.c"
                                exit(1);
                            }
                            # 557 "20method.c"
                            come_value_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
                            come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            # 558 "20method.c"
                            dec_stack_ptr(1,info);
                            # 560 "20method.c"
                            buffer_append_str(buf_301,((char*)(right_value262=xsprintf("%s",come_value_305->c_value))));
                            right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 564 "20method.c"
                            # 561 "20method.c"
                            if(_if_conditional366=i_302!=list$1sNodeph_length(obj_array_type_286->mArrayNum)-1,                            _if_conditional366) {
                                # 562 "20method.c"
                                buffer_append_str(buf_301,"*");
                            }
                            # 564 "20method.c"
                            i_302++;
                            come_call_finalizer3(come_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 567 "20method.c"
                        come_value_306=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 567, "CVALUE"))));
                        come_call_finalizer3(right_value263,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 569 "20method.c"
                        __dec_obj83=come_value_306->c_value;
                        come_value_306->c_value=(char*)come_increment_ref_count(((char*)(right_value264=buffer_to_string(buf_301))));
                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 570 "20method.c"
                        come_value_306->var=((void*)0);
                        # 571 "20method.c"
                        __dec_obj84=come_value_306->type;
                        come_value_306->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 571, "sType")))),"long",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 573 "20method.c"
                        list$1CVALUEph_replace(come_params_254,1,(struct CVALUE*)come_increment_ref_count(come_value_306));
                        # 574 "20method.c"
                        list$1tuple2$2charphsNodephph_push_back(params_181,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value269=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value268=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 574, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value267=xsprintf("len")))),((void*)0))))));
                        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value269,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(buf_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 634 "20method.c"
                        # 576 "20method.c"
                        if(_if_conditional367=charp_operator_equals(fun_name_180,"to_buffer"),                        _if_conditional367) {
                            # 577 "20method.c"
                            buf_307=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 577, "buffer"))))))));
                            come_call_finalizer3(right_value270,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 579 "20method.c"
                            i_308=0;
                            # 596 "20method.c"
                            for(                            o2_saved_309=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_286->mArrayNum)),it_310=list$1sNodeph_begin((o2_saved_309));                            !list$1sNodeph_end((o2_saved_309));                            it_310=list$1sNodeph_next((o2_saved_309))                            ){
                                # 586 "20method.c"
                                # 581 "20method.c"
                                if(_if_conditional368=!node_compile(it_310,info),                                _if_conditional368) {
                                    # 582 "20method.c"
                                    err_msg(info,"invalid array num");
                                    # 583 "20method.c"
                                    exit(1);
                                }
                                # 586 "20method.c"
                                come_value_311=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value272,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 587 "20method.c"
                                dec_stack_ptr(1,info);
                                # 589 "20method.c"
                                buffer_append_str(buf_307,((char*)(right_value273=xsprintf("%s",come_value_311->c_value))));
                                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 593 "20method.c"
                                # 590 "20method.c"
                                if(_if_conditional369=i_308!=list$1sNodeph_length(obj_array_type_286->mArrayNum)-1,                                _if_conditional369) {
                                    # 591 "20method.c"
                                    buffer_append_str(buf_307,"*");
                                }
                                # 593 "20method.c"
                                i_308++;
                                come_call_finalizer3(come_value_311,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_309,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 596 "20method.c"
                            come_value_312=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 596, "CVALUE"))));
                            come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            # 598 "20method.c"
                            __dec_obj85=come_value_312->c_value;
                            come_value_312->c_value=(char*)come_increment_ref_count(((char*)(right_value275=buffer_to_string(buf_307))));
                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 599 "20method.c"
                            come_value_312->var=((void*)0);
                            # 600 "20method.c"
                            __dec_obj86=come_value_312->type;
                            come_value_312->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 600, "sType")))),"long",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value277,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 602 "20method.c"
                            list$1CVALUEph_replace(come_params_254,1,(struct CVALUE*)come_increment_ref_count(come_value_312));
                            # 603 "20method.c"
                            list$1tuple2$2charphsNodephph_push_back(params_181,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value280=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value279=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 603, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value278=xsprintf("len")))),((void*)0))))));
                            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value280,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(buf_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_value_312,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 634 "20method.c"
                            # 605 "20method.c"
                            if(_if_conditional370=charp_operator_equals(fun_name_180,"to_list"),                            _if_conditional370) {
                                # 606 "20method.c"
                                buf_313=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value282=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value281=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 606, "buffer"))))))));
                                come_call_finalizer3(right_value281,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value282,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                # 608 "20method.c"
                                i_314=0;
                                # 625 "20method.c"
                                for(                                o2_saved_315=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_286->mArrayNum)),it_316=list$1sNodeph_begin((o2_saved_315));                                !list$1sNodeph_end((o2_saved_315));                                it_316=list$1sNodeph_next((o2_saved_315))                                ){
                                    # 615 "20method.c"
                                    # 610 "20method.c"
                                    if(_if_conditional371=!node_compile(it_316,info),                                    _if_conditional371) {
                                        # 611 "20method.c"
                                        err_msg(info,"invalid array num");
                                        # 612 "20method.c"
                                        exit(1);
                                    }
                                    # 615 "20method.c"
                                    come_value_317=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value283=get_value_from_stack(-1,info))));
                                    come_call_finalizer3(right_value283,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 616 "20method.c"
                                    dec_stack_ptr(1,info);
                                    # 618 "20method.c"
                                    buffer_append_str(buf_313,((char*)(right_value284=xsprintf("%s",come_value_317->c_value))));
                                    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 622 "20method.c"
                                    # 619 "20method.c"
                                    if(_if_conditional372=i_314!=list$1sNodeph_length(obj_array_type_286->mArrayNum)-1,                                    _if_conditional372) {
                                        # 620 "20method.c"
                                        buffer_append_str(buf_313,"*");
                                    }
                                    # 622 "20method.c"
                                    i_314++;
                                    come_call_finalizer3(come_value_317,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 625 "20method.c"
                                come_value_318=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 625, "CVALUE"))));
                                come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 627 "20method.c"
                                __dec_obj87=come_value_318->c_value;
                                come_value_318->c_value=(char*)come_increment_ref_count(((char*)(right_value286=buffer_to_string(buf_313))));
                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 628 "20method.c"
                                come_value_318->var=((void*)0);
                                # 629 "20method.c"
                                __dec_obj88=come_value_318->type;
                                come_value_318->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value287=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 629, "sType")))),"long",(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value287,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 631 "20method.c"
                                list$1CVALUEph_replace(come_params_254,1,(struct CVALUE*)come_increment_ref_count(come_value_318));
                                # 632 "20method.c"
                                list$1tuple2$2charphsNodephph_push_back(params_181,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value291=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value290=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 632, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value289=xsprintf("len")))),((void*)0))))));
                                right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value291,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(buf_313,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_value_318,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            array_method_name_287 = come_decrement_ref_count2(array_method_name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 683 "20method.c"
        # 637 "20method.c"
        if(_if_conditional374=list$1tuple2$2charphsNodephph_length(params_181)<list$1sTypeph_length(fun_227->mParamTypes)+(method_block_183?-2:0),        _if_conditional374) {
            # 681 "20method.c"
            for(            ;            i_274<list$1sTypeph_length(fun_227->mParamTypes)+(method_block_183?-2:0);            i_274++            ){
                # 640 "20method.c"
                default_param_319=(char*)come_increment_ref_count(((char*)(right_value292=string_clone(list$1charphp_operator_load_element(fun_227->mParamDefaultParametors,i_274)))));
                right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 641 "20method.c"
                param_name_320=((char*)come_null_check(list$1charphp_operator_load_element(fun_227->mParamNames,i_274), "20method.c", 641, 18));
                # 680 "20method.c"
                # 643 "20method.c"
                if(_if_conditional375=default_param_319&&string_operator_not_equals(default_param_319,"")&&list$1CVALUEphp_operator_load_element(come_params_254,i_274)==((void*)0),                _if_conditional375) {
                    # 644 "20method.c"
                    source_321=(struct buffer*)come_increment_ref_count(info->source);
                    # 645 "20method.c"
                    p_322=info->p;
                    # 646 "20method.c"
                    head_323=info->head;
                    # 647 "20method.c"
                    sline_324=info->sline;
                    # 649 "20method.c"
                    __dec_obj89=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=string_to_buffer(default_param_319))));
                    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value293,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    # 650 "20method.c"
                    info->p=info->source->buf;
                    # 651 "20method.c"
                    info->head=info->source->buf;
                    # 653 "20method.c"
                    node_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=expression_v13(info))));
                    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 659 "20method.c"
                    # 655 "20method.c"
                    if(_if_conditional376=!node_compile(node_325,info),                    _if_conditional376) {
                        # 656 "20method.c"
                        __result216__ = (_Bool)0;
                        come_call_finalizer3(source_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_319 = come_decrement_ref_count2(default_param_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result216__;
                    }
                    # 659 "20method.c"
                    __dec_obj90=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_321);
                    come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    # 660 "20method.c"
                    info->p=p_322;
                    # 661 "20method.c"
                    info->head=head_323;
                    # 662 "20method.c"
                    info->sline=sline_324;
                    # 664 "20method.c"
                    come_value_326=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value295,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 668 "20method.c"
                    # 665 "20method.c"
                    if(_if_conditional377=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 665, 19)),                    _if_conditional377) {
                        # 666 "20method.c"
                        check_assign_type(((char*)(right_value298=xsprintf("\%s param num \%s is assinged to",((char*)(right_value296=charp_to_string(fun_name_180))),((char*)(right_value297=int_to_string(i_274)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 666, 20)),come_value_326->type,come_value_326,(_Bool)0,(_Bool)1,info);
                        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 671 "20method.c"
                    # 668 "20method.c"
                    if(_if_conditional378=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 668, 21))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 668, 22))->mHeap&&come_value_326->type->mHeap,                    _if_conditional378) {
                        # 669 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_243,i_274), "20method.c", 669, 23)),come_value_326->type,come_value_326,info);
                    }
                    # 671 "20method.c"
                    list$1CVALUEph_replace(come_params_254,i_274,(struct CVALUE*)come_increment_ref_count(come_value_326));
                    # 672 "20method.c"
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_326,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 679 "20method.c"
                    # 675 "20method.c"
                    if(_if_conditional379=list$1CVALUEphp_operator_load_element(come_params_254,i_274)==((void*)0),                    _if_conditional379) {
                        # 676 "20method.c"
                        err_msg(info,"require parametor(%s) %d",fun_227->mName,i_274);
                        # 677 "20method.c"
                        __result217__ = (_Bool)0;
                        default_param_319 = come_decrement_ref_count2(default_param_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result217__;
                    }
                }
                default_param_319 = come_decrement_ref_count2(default_param_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 804 "20method.c"
        # 683 "20method.c"
        if(method_block_183) {
            # 684 "20method.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 684, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value300=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value299=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 684, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=_inf_value1)));
            come_call_finalizer3(right_value299,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value300,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 690 "20method.c"
            # 686 "20method.c"
            if(_if_conditional385=!node_compile(current_stack_frame_node_328,info),            _if_conditional385) {
                # 687 "20method.c"
                __result220__ = (_Bool)0;
                if(current_stack_frame_node_328) { current_stack_frame_node_328 = come_decrement_ref_count2(current_stack_frame_node_328, ((struct sNode*)current_stack_frame_node_328)->finalize, ((struct sNode*)current_stack_frame_node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result220__;
            }
            # 690 "20method.c"
            come_value_329=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value304,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 691 "20method.c"
            list$1CVALUEph_push_back(come_params_254,(struct CVALUE*)come_increment_ref_count(come_value_329));
            # 692 "20method.c"
            dec_stack_ptr(1,info);
            # 694 "20method.c"
            method_block2_330=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value306=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value305=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 694, "buffer"))))))));
            come_call_finalizer3(right_value305,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value306,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 695 "20method.c"
            method_block_type_331=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_227->mParamTypes,-1), "20method.c", 695, 24))))));
            come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 697 "20method.c"
            class_name_332=(char*)come_increment_ref_count(((char*)(right_value308=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 699 "20method.c"
            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_331->mParamTypes,0), "20method.c", 699, 25))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_332);
            # 700 "20method.c"
            current_stack_frame_struct_333=info->current_stack_frame_struct;
            # 701 "20method.c"
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_332);
            # 703 "20method.c"
            info->num_method_block++;
            # 710 "20method.c"
            # 705 "20method.c"
            if(_if_conditional386=string_operator_not_equals(method_block_type_331->mClass->mName,"lambda"),            _if_conditional386) {
                # 706 "20method.c"
                err_msg(info,"This function does not have method block(%s)",fun_name_180);
                # 707 "20method.c"
                __result221__ = (_Bool)0;
                if(current_stack_frame_node_328) { current_stack_frame_node_328 = come_decrement_ref_count2(current_stack_frame_node_328, ((struct sNode*)current_stack_frame_node_328)->finalize, ((struct sNode*)current_stack_frame_node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_330,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_332 = come_decrement_ref_count2(class_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result221__;
            }
            # 710 "20method.c"
            result_type_334=(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=sType_clone(method_block_type_331->mResultType->v1))));
            come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 711 "20method.c"
            result_type_334->mStatic=(_Bool)0;
            # 712 "20method.c"
            param_types_335=method_block_type_331->mParamTypes;
            # 713 "20method.c"
            param_names_336=method_block_type_331->mParamNames;
            # 715 "20method.c"
            all_alhabet_sname_337=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value311=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value310=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 715, "buffer"))))))));
            come_call_finalizer3(right_value310,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value311,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 728 "20method.c"
            {
                # 717 "20method.c"
                p_338=info->sname;
                # 726 "20method.c"
                while(_while_condtional43=*p_338,                _while_condtional43) {
                    # 725 "20method.c"
                    # 719 "20method.c"
                    if(_if_conditional387=xisalnum(*p_338),                    _if_conditional387) {
                        # 720 "20method.c"
                        buffer_append_char(all_alhabet_sname_337,*p_338++);
                    }
                    else {
                        # 723 "20method.c"
                        p_338++;
                    }
                }
            }
            # 728 "20method.c"
            buffer_append_str(method_block2_330,((char*)(right_value314=xsprintf("%s method_block%d_%s(",((char*)(right_value312=make_type_name_string(result_type_334,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value313=buffer_to_string(all_alhabet_sname_337)))))));
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 730 "20method.c"
            i_339=0;
            # 755 "20method.c"
            for(            o2_saved_340=(param_types_335),it_341=list$1sTypeph_begin((o2_saved_340));            !list$1sTypeph_end((o2_saved_340));            it_341=list$1sTypeph_next((o2_saved_340))            ){
                # 732 "20method.c"
                param_type_342=it_341;
                # 749 "20method.c"
                # 733 "20method.c"
                if(_if_conditional388=i_339==0,                _if_conditional388) {
                    # 734 "20method.c"
                    param_name_343=(char*)come_increment_ref_count(((char*)(right_value315=xsprintf("parent"))));
                    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 736 "20method.c"
                    buffer_append_str(method_block2_330,((char*)(right_value317=xsprintf("%s",((char*)(right_value316=make_define_var(param_type_342,param_name_343,(_Bool)0,info)))))));
                    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_343 = come_decrement_ref_count2(param_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 749 "20method.c"
                    # 738 "20method.c"
                    if(_if_conditional389=i_339==1,                    _if_conditional389) {
                        # 739 "20method.c"
                        param_name_344=(char*)come_increment_ref_count(((char*)(right_value318=xsprintf("it"))));
                        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 741 "20method.c"
                        buffer_append_str(method_block2_330,((char*)(right_value320=xsprintf("%s",((char*)(right_value319=make_define_var(param_type_342,param_name_344,(_Bool)0,info)))))));
                        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_344 = come_decrement_ref_count2(param_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 744 "20method.c"
                        param_name_345=(char*)come_increment_ref_count(((char*)(right_value321=xsprintf("it%d",i_339))));
                        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 746 "20method.c"
                        buffer_append_str(method_block2_330,((char*)(right_value323=xsprintf("%s",((char*)(right_value322=make_define_var(param_type_342,param_name_345,(_Bool)0,info)))))));
                        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_345 = come_decrement_ref_count2(param_name_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                # 753 "20method.c"
                # 749 "20method.c"
                if(_if_conditional390=i_339!=list$1sTypeph_length(param_types_335)-1,                _if_conditional390) {
                    # 750 "20method.c"
                    buffer_append_str(method_block2_330,",");
                }
                # 753 "20method.c"
                i_339++;
            }
            # 755 "20method.c"
            buffer_append_str(method_block2_330,")\n");
            # 757 "20method.c"
            buffer_append_str(method_block2_330,((char*)(right_value324=buffer_to_string(method_block_183))));
            right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 759 "20method.c"
            source3_346=(struct buffer*)come_increment_ref_count(info->source);
            # 760 "20method.c"
            p_347=info->p;
            # 761 "20method.c"
            head_348=info->head;
            # 762 "20method.c"
            sline_349=info->sline;
            # 765 "20method.c"
            __dec_obj92=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_330);
            come_call_finalizer3(__dec_obj92,buffer_finalize, 0, 0, 0, 0, (void*)0);
            # 766 "20method.c"
            info->p=info->source->buf;
            # 767 "20method.c"
            info->head=info->source->buf;
            # 768 "20method.c"
            info->sline=method_block_sline_184;
            # 771 "20method.c"
            node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=parse_function(info))));
            if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 777 "20method.c"
            # 773 "20method.c"
            if(_if_conditional391=!node_compile(node_350,info),            _if_conditional391) {
                # 774 "20method.c"
                __result222__ = (_Bool)0;
                if(current_stack_frame_node_328) { current_stack_frame_node_328 = come_decrement_ref_count2(current_stack_frame_node_328, ((struct sNode*)current_stack_frame_node_328)->finalize, ((struct sNode*)current_stack_frame_node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_330,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_332 = come_decrement_ref_count2(class_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_337,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_346,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result222__;
            }
            # 777 "20method.c"
            method_block_name_351=(char*)come_increment_ref_count(((char*)(right_value327=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value326=buffer_to_string(all_alhabet_sname_337)))))));
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 779 "20method.c"
            come_value2_352=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 779, "CVALUE"))));
            come_call_finalizer3(right_value328,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 781 "20method.c"
            fun2_353=map$2charphsFunph_at(info->funcs,method_block_name_351,((void*)0));
            # 788 "20method.c"
            # 783 "20method.c"
            if(_if_conditional392=fun2_353==((void*)0),            _if_conditional392) {
                # 784 "20method.c"
                err_msg(info,"method block function not found(%s)",method_block_name_351);
                # 785 "20method.c"
                __result223__ = (_Bool)1;
                if(current_stack_frame_node_328) { current_stack_frame_node_328 = come_decrement_ref_count2(current_stack_frame_node_328, ((struct sNode*)current_stack_frame_node_328)->finalize, ((struct sNode*)current_stack_frame_node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_330,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_332 = come_decrement_ref_count2(class_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_337,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_346,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_351 = come_decrement_ref_count2(method_block_name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value2_352,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result223__;
            }
            # 788 "20method.c"
            method_block_type2_354=fun2_353->mLambdaType;
            # 790 "20method.c"
            __dec_obj93=come_value2_352->c_value;
            come_value2_352->c_value=(char*)come_increment_ref_count(((char*)(right_value329=xsprintf("(void*)%s",method_block_name_351))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 791 "20method.c"
            __dec_obj94=come_value2_352->type;
            come_value2_352->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(method_block_type2_354))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 792 "20method.c"
            come_value2_352->var=((void*)0);
            # 794 "20method.c"
            list$1CVALUEph_push_back(come_params_254,(struct CVALUE*)come_increment_ref_count(come_value2_352));
            # 796 "20method.c"
            __dec_obj95=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_346);
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 0, 0, (void*)0);
            # 797 "20method.c"
            info->p=p_347;
            # 798 "20method.c"
            info->head=head_348;
            # 799 "20method.c"
            info->sline=sline_349;
            # 801 "20method.c"
            info->current_stack_frame_struct=current_stack_frame_struct_333;
            if(current_stack_frame_node_328) { current_stack_frame_node_328 = come_decrement_ref_count2(current_stack_frame_node_328, ((struct sNode*)current_stack_frame_node_328)->finalize, ((struct sNode*)current_stack_frame_node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_329,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_330,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_332 = come_decrement_ref_count2(class_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_334,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_337,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_346,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_351 = come_decrement_ref_count2(method_block_name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_352,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 804 "20method.c"
        buf_355=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value332=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value331=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 804, "buffer"))))))));
        come_call_finalizer3(right_value331,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value332,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 806 "20method.c"
        buffer_append_str(buf_355,generics_fun_name_226);
        # 807 "20method.c"
        buffer_append_str(buf_355,"(");
        # 810 "20method.c"
        j_356=0;
        # 820 "20method.c"
        for(        o2_saved_357=(struct list$1CVALUEph*)come_increment_ref_count((come_params_254)),it_358=list$1CVALUEph_begin((o2_saved_357));        !list$1CVALUEph_end((o2_saved_357));        it_358=list$1CVALUEph_next((o2_saved_357))        ){
            # 812 "20method.c"
            buffer_append_str(buf_355,it_358->c_value);
            # 818 "20method.c"
            # 814 "20method.c"
            if(_if_conditional393=j_356!=list$1CVALUEph_length(come_params_254)-1,            _if_conditional393) {
                # 815 "20method.c"
                buffer_append_str(buf_355,",");
            }
            # 818 "20method.c"
            j_356++;
        }
        come_call_finalizer3(o2_saved_357,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 820 "20method.c"
        buffer_append_str(buf_355,")");
        # 823 "20method.c"
        come_value2_359=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 823, "CVALUE"))));
        come_call_finalizer3(right_value333,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 825 "20method.c"
        __dec_obj96=come_value2_359->c_value;
        come_value2_359->c_value=(char*)come_increment_ref_count(((char*)(right_value334=buffer_to_string(buf_355))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 826 "20method.c"
        __dec_obj97=come_value2_359->type;
        come_value2_359->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(result_type2_242))));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value335,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 827 "20method.c"
        come_value2_359->type->mStatic=(_Bool)0;
        # 828 "20method.c"
        come_value2_359->var=((void*)0);
        # 834 "20method.c"
        # 830 "20method.c"
        if(result_type2_242->mHeap) {
            # 831 "20method.c"
            __dec_obj98=come_value2_359->c_value;
            come_value2_359->c_value=(char*)come_increment_ref_count(((char*)(right_value336=append_object_to_right_values(come_value2_359->c_value,(struct sType*)come_increment_ref_count(result_type2_242),info))));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 834 "20method.c"
        __dec_obj99=come_value2_359->c_value;
        come_value2_359->c_value=(char*)come_increment_ref_count(((char*)(right_value337=append_stackframe(come_value2_359->c_value,come_value2_359->type,info))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 836 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_359->c_value);
        # 838 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_359));
        # 906 "20method.c"
        # 840 "20method.c"
        if(method_block_183) {
            # 841 "20method.c"
            var_name_360=(char*)come_increment_ref_count(((char*)(right_value338=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 843 "20method.c"
            result_type_361=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 845 "20method.c"
            result_type2_362=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=solve_generics(result_type_361,info->generics_type,info))));
            come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 847 "20method.c"
            result_type3_363=result_type2_362->mNoSolvedGenericsType->v1;
            # 855 "20method.c"
            # 848 "20method.c"
            if(result_type2_362->mNoSolvedGenericsType->v1) {
                # 849 "20method.c"
                result_type3_363=result_type2_362->mNoSolvedGenericsType->v1;
            }
            else {
                # 852 "20method.c"
                result_type3_363=result_type2_362;
            }
            # 905 "20method.c"
            # 855 "20method.c"
            if(info->in_loop) {
                # 888 "20method.c"
                # 856 "20method.c"
                if(_if_conditional398=string_operator_equals(result_type3_363->mClass->mName,"void")&&result_type3_363->mPointerNum==0,                _if_conditional398) {
                    # 870 "20method.c"
                    add_come_last_code3(info,((char*)(right_value344=xsprintf("                            if(\%s.__method_block_result_kind__ == 1)\n                            {\n                                break;\n                            }\n                            else if(\%s.__method_block_result_kind__ == 2)\n                            {\n                                continue;\n                            }\n                            else if(\%s.__method_block_result_kind__ == 4)\n                            {\n                                return;\n                            }\n",((char*)(right_value341=string_to_string(var_name_360))),((char*)(right_value342=string_to_string(var_name_360))),((char*)(right_value343=string_to_string(var_name_360)))))));
                    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 886 "20method.c"
                    add_come_last_code3(info,((char*)(right_value351=xsprintf("                            if(\%s.__method_block_result_kind__ == 1)\n                            {\n                                break;\n                            }\n                            else if(\%s.__method_block_result_kind__ == 2)\n                            {\n                                continue;\n                            }\n                            else if(\%s.__method_block_result_kind__ == 3)\n                            {\n                                return (\%s)\%s.__method_block_return_value__;\n                            }\n",((char*)(right_value345=string_to_string(var_name_360))),((char*)(right_value346=string_to_string(var_name_360))),((char*)(right_value347=string_to_string(var_name_360))),((char*)(right_value349=string_to_string(((char*)(right_value348=make_type_name_string(result_type2_362,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value350=string_to_string(var_name_360)))))));
                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 905 "20method.c"
                # 889 "20method.c"
                if(_if_conditional399=string_operator_equals(result_type3_363->mClass->mName,"void")&&result_type3_363->mPointerNum==0,                _if_conditional399) {
                    # 895 "20method.c"
                    add_come_last_code3(info,((char*)(right_value353=xsprintf("                        if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value352=string_to_string(var_name_360)))))));
                    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 903 "20method.c"
                    add_come_last_code3(info,((char*)(right_value358=xsprintf("                        if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value354=string_to_string(var_name_360))),((char*)(right_value356=string_to_string(((char*)(right_value355=make_type_name_string(result_type2_362,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value357=string_to_string(var_name_360)))))));
                    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            var_name_360 = come_decrement_ref_count2(var_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_362,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_226 = come_decrement_ref_count2(generics_fun_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_254,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_355,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_359,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 908 "20method.c"
    come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 909 "20method.c"
    __dec_obj100=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_185);
    come_call_finalizer3(__dec_obj100,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 911 "20method.c"
    __result224__ = (_Bool)1;
    come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result224__;
    come_call_finalizer3(method_generics_types_185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct list$1tuple2$2charphsNodephph* __result125__;
void* right_value171;
void* right_value172;
struct list$1tuple2$2charphsNodephph* result_172;
struct list_item$1tuple2$2charphsNodephph* it_173;
_Bool _while_condtional30;
void* right_value179;
struct list$1tuple2$2charphsNodephph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&result_172, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_173, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value179 = (void*)0;
        # 143 "./neo-c.h"
        # 140 "./neo-c.h"
        if(_if_conditional228=self==((void*)0),        _if_conditional228) {
            # 141 "./neo-c.h"
            __result125__ = __result_obj__ = ((void*)0);
            return __result125__;
        }
        # 143 "./neo-c.h"
        result_172=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value172=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value171=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 143, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value171,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value172,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 145 "./neo-c.h"
        it_173=self->head;
        # 152 "./neo-c.h"
        while(_while_condtional30=it_173!=((void*)0),        _while_condtional30) {
            # 147 "./neo-c.h"
            list$1tuple2$2charphsNodephph_add(result_172,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value179=tuple2$2charphsNodephp_clone(it_173->item)))));
            come_call_finalizer3(right_value179,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 149 "./neo-c.h"
            it_173=it_173->next;
        }
        # 152 "./neo-c.h"
        __result130__ = __result_obj__ = result_172;
        come_call_finalizer3(result_172,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result130__;
        come_call_finalizer3(result_172,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
            # 105 "./neo-c.h"
            self->head=((void*)0);
            # 106 "./neo-c.h"
            self->tail=((void*)0);
            # 107 "./neo-c.h"
            self->len=0;
            # 109 "./neo-c.h"
            __result126__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_170;
_Bool _while_condtional29;
struct list_item$1tuple2$2charphsNodephph* prev_it_171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_170, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_171, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 124 "./neo-c.h"
                it_170=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional29=it_170!=((void*)0),                _while_condtional29) {
                    # 126 "./neo-c.h"
                    prev_it_171=it_170;
                    # 127 "./neo-c.h"
                    it_170=it_170->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_171,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional229=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional229) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional232;
void* right_value173;
struct list_item$1tuple2$2charphsNodephph* litem_174;
struct tuple2$2charphsNodeph* __dec_obj50;
_Bool _if_conditional235;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_175;
struct tuple2$2charphsNodeph* __dec_obj51;
void* right_value175;
struct list_item$1tuple2$2charphsNodephph* litem_176;
struct tuple2$2charphsNodeph* __dec_obj52;
struct list$1tuple2$2charphsNodephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&litem_174, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value174 = (void*)0;
memset(&litem_175, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value175 = (void*)0;
memset(&litem_176, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 187 "./neo-c.h"
                # 156 "./neo-c.h"
                if(_if_conditional232=self->len==0,                _if_conditional232) {
                    # 157 "./neo-c.h"
                    litem_174=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value173=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value173,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 159 "./neo-c.h"
                    litem_174->prev=((void*)0);
                    # 160 "./neo-c.h"
                    litem_174->next=((void*)0);
                    # 161 "./neo-c.h"
                    __dec_obj50=litem_174->item;
                    litem_174->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj50,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 163 "./neo-c.h"
                    self->tail=litem_174;
                    # 164 "./neo-c.h"
                    self->head=litem_174;
                }
                else {
                    # 187 "./neo-c.h"
                    # 166 "./neo-c.h"
                    if(_if_conditional235=self->len==1,                    _if_conditional235) {
                        # 167 "./neo-c.h"
                        litem_175=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value174,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_175->prev=self->head;
                        # 170 "./neo-c.h"
                        litem_175->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj51=litem_175->item;
                        litem_175->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj51,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail=litem_175;
                        # 174 "./neo-c.h"
                        self->head->next=litem_175;
                    }
                    else {
                        # 177 "./neo-c.h"
                        litem_176=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 177, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value175,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 179 "./neo-c.h"
                        litem_176->prev=self->tail;
                        # 180 "./neo-c.h"
                        litem_176->next=((void*)0);
                        # 181 "./neo-c.h"
                        __dec_obj52=litem_176->item;
                        litem_176->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj52,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 183 "./neo-c.h"
                        self->tail->next=litem_176;
                        # 184 "./neo-c.h"
                        self->tail=litem_176;
                    }
                }
                # 187 "./neo-c.h"
                self->len++;
                # 189 "./neo-c.h"
                __result127__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result127__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional238;
_Bool _if_conditional239;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsNodephp_finalize"
                            # 0 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional238=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional238) {
                                # 0 "tuple2$2charphsNodephp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsNodephp_finalize"
                            # 1 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional239=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional239) {
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional240;
struct tuple2$2charphsNodeph* __result128__;
void* right_value176;
struct tuple2$2charphsNodeph* result_177;
_Bool _if_conditional243;
void* right_value177;
char* __dec_obj53;
_Bool _if_conditional244;
void* right_value178;
struct sNode* __dec_obj54;
struct tuple2$2charphsNodeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
memset(&result_177, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value177 = (void*)0;
right_value178 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional240=self==(void*)0,                _if_conditional240) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result128__ = __result_obj__ = (void*)0;
                    return __result128__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_177=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value176=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value176,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional243=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional243) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj53=result_177->v1;
                    result_177->v1=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->v1))));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional244=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional244) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj54=result_177->v2;
                    result_177->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(self->v2))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result129__ = __result_obj__ = result_177;
                come_call_finalizer3(result_177,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result129__;
                come_call_finalizer3(result_177,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional241;
_Bool _if_conditional242;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsNodeph_finalize"
                    # 0 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional241=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional241) {
                        # 0 "tuple2$2charphsNodeph_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsNodeph_finalize"
                    # 1 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional242=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional242) {
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_178;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsNodephph* prev_it_179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_178, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_179, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        # 124 "./neo-c.h"
        it_178=self->head;
        # 130 "./neo-c.h"
        while(_while_condtional31=it_178!=((void*)0),        _while_condtional31) {
            # 126 "./neo-c.h"
            prev_it_179=it_178;
            # 127 "./neo-c.h"
            it_178=it_178->next;
            # 128 "./neo-c.h"
            come_call_finalizer3(prev_it_179,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional254;
struct tuple2$2charphsTypeph* result_192;
struct tuple2$2charphsTypeph* __result136__;
_Bool _if_conditional255;
struct tuple2$2charphsTypeph* __result137__;
struct tuple2$2charphsTypeph* result_193;
struct tuple2$2charphsTypeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_192, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_193, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 291 "./neo-c.h"
        # 286 "./neo-c.h"
        if(_if_conditional254=self==((void*)0),        _if_conditional254) {
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_192,0,sizeof(struct tuple2$2charphsTypeph*));
            # 289 "./neo-c.h"
            __result136__ = __result_obj__ = result_192;
            return __result136__;
        }
        # 291 "./neo-c.h"
        self->it=self->head;
        # 297 "./neo-c.h"
        # 293 "./neo-c.h"
        if(self->it) {
            # 294 "./neo-c.h"
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        # 297 "./neo-c.h"
        # 298 "./neo-c.h"
        memset(&result_193,0,sizeof(struct tuple2$2charphsTypeph*));
        # 299 "./neo-c.h"
        __result138__ = __result_obj__ = result_193;
        return __result138__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
        # 321 "./neo-c.h"
        __result139__ = self==((void*)0)||self->it==((void*)0);
        return __result139__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional256;
struct tuple2$2charphsTypeph* result_195;
struct tuple2$2charphsTypeph* __result140__;
_Bool _if_conditional257;
struct tuple2$2charphsTypeph* __result141__;
struct tuple2$2charphsTypeph* result_196;
struct tuple2$2charphsTypeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_195, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_196, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 309 "./neo-c.h"
        # 303 "./neo-c.h"
        if(_if_conditional256=self==((void*)0)||self->it==((void*)0),        _if_conditional256) {
            # 304 "./neo-c.h"
            # 305 "./neo-c.h"
            memset(&result_195,0,sizeof(struct tuple2$2charphsTypeph*));
            # 306 "./neo-c.h"
            __result140__ = __result_obj__ = result_195;
            return __result140__;
        }
        # 309 "./neo-c.h"
        self->it=self->it->next;
        # 315 "./neo-c.h"
        # 311 "./neo-c.h"
        if(self->it) {
            # 312 "./neo-c.h"
            __result141__ = __result_obj__ = self->it->item;
            return __result141__;
        }
        # 315 "./neo-c.h"
        # 316 "./neo-c.h"
        memset(&result_196,0,sizeof(struct tuple2$2charphsTypeph*));
        # 317 "./neo-c.h"
        __result142__ = __result_obj__ = result_196;
        return __result142__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            # 105 "./neo-c.h"
            self->head=((void*)0);
            # 106 "./neo-c.h"
            self->tail=((void*)0);
            # 107 "./neo-c.h"
            self->len=0;
            # 109 "./neo-c.h"
            __result143__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result143__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_200;
_Bool _while_condtional32;
struct list_item$1CVALUEph* prev_it_201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_200, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_201, 0, sizeof(struct list_item$1CVALUEph*));
                # 124 "./neo-c.h"
                it_200=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional32=it_200!=((void*)0),                _while_condtional32) {
                    # 126 "./neo-c.h"
                    prev_it_201=it_200;
                    # 127 "./neo-c.h"
                    it_200=it_200->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_201,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional260;
struct tuple2$2charphsNodeph* result_205;
struct tuple2$2charphsNodeph* __result144__;
_Bool _if_conditional261;
struct tuple2$2charphsNodeph* __result145__;
struct tuple2$2charphsNodeph* result_206;
struct tuple2$2charphsNodeph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_206, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 291 "./neo-c.h"
            # 286 "./neo-c.h"
            if(_if_conditional260=self==((void*)0),            _if_conditional260) {
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_205,0,sizeof(struct tuple2$2charphsNodeph*));
                # 289 "./neo-c.h"
                __result144__ = __result_obj__ = result_205;
                return __result144__;
            }
            # 291 "./neo-c.h"
            self->it=self->head;
            # 297 "./neo-c.h"
            # 293 "./neo-c.h"
            if(self->it) {
                # 294 "./neo-c.h"
                __result145__ = __result_obj__ = self->it->item;
                return __result145__;
            }
            # 297 "./neo-c.h"
            # 298 "./neo-c.h"
            memset(&result_206,0,sizeof(struct tuple2$2charphsNodeph*));
            # 299 "./neo-c.h"
            __result146__ = __result_obj__ = result_206;
            return __result146__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
            # 321 "./neo-c.h"
            __result147__ = self==((void*)0)||self->it==((void*)0);
            return __result147__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional262;
struct tuple2$2charphsNodeph* result_208;
struct tuple2$2charphsNodeph* __result148__;
_Bool _if_conditional263;
struct tuple2$2charphsNodeph* __result149__;
struct tuple2$2charphsNodeph* result_209;
struct tuple2$2charphsNodeph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_208, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_209, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 309 "./neo-c.h"
            # 303 "./neo-c.h"
            if(_if_conditional262=self==((void*)0)||self->it==((void*)0),            _if_conditional262) {
                # 304 "./neo-c.h"
                # 305 "./neo-c.h"
                memset(&result_208,0,sizeof(struct tuple2$2charphsNodeph*));
                # 306 "./neo-c.h"
                __result148__ = __result_obj__ = result_208;
                return __result148__;
            }
            # 309 "./neo-c.h"
            self->it=self->it->next;
            # 315 "./neo-c.h"
            # 311 "./neo-c.h"
            if(self->it) {
                # 312 "./neo-c.h"
                __result149__ = __result_obj__ = self->it->item;
                return __result149__;
            }
            # 315 "./neo-c.h"
            # 316 "./neo-c.h"
            memset(&result_209,0,sizeof(struct tuple2$2charphsNodeph*));
            # 317 "./neo-c.h"
            __result150__ = __result_obj__ = result_209;
            return __result150__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional266;
struct list_item$1sTypeph* it_213;
int i_214;
_Bool _while_condtional33;
_Bool _if_conditional267;
struct sType* __result152__;
struct sType* default_value_215;
struct sType* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_213, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_214, 0, sizeof(int));
memset(&default_value_215, 0, sizeof(struct sType*));
                    # 687 "./neo-c.h"
                    # 683 "./neo-c.h"
                    if(_if_conditional266=position<0,                    _if_conditional266) {
                        # 684 "./neo-c.h"
                        position+=self->len;
                    }
                    # 687 "./neo-c.h"
                    it_213=self->head;
                    # 688 "./neo-c.h"
                    i_214=0;
                    # 695 "./neo-c.h"
                    while(_while_condtional33=it_213!=((void*)0),                    _while_condtional33) {
                        # 693 "./neo-c.h"
                        # 690 "./neo-c.h"
                        if(_if_conditional267=position==i_214,                        _if_conditional267) {
                            # 691 "./neo-c.h"
                            __result152__ = __result_obj__ = it_213->item;
                            return __result152__;
                        }
                        # 693 "./neo-c.h"
                        it_213=it_213->next;
                        # 694 "./neo-c.h"
                        i_214++;
                    }
                    # 697 "./neo-c.h"
                    # 698 "./neo-c.h"
                    memset(&default_value_215,0,sizeof(struct sType*));
                    # 699 "./neo-c.h"
                    __result153__ = __result_obj__ = default_value_215;
                    come_call_finalizer3(default_value_215,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result153__;
                    come_call_finalizer3(default_value_215,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional269;
struct CVALUE* result_219;
struct CVALUE* __result154__;
_Bool _if_conditional270;
struct CVALUE* __result155__;
struct CVALUE* result_220;
struct CVALUE* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(struct CVALUE*));
memset(&result_220, 0, sizeof(struct CVALUE*));
            # 291 "./neo-c.h"
            # 286 "./neo-c.h"
            if(_if_conditional269=self==((void*)0),            _if_conditional269) {
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_219,0,sizeof(struct CVALUE*));
                # 289 "./neo-c.h"
                __result154__ = __result_obj__ = result_219;
                return __result154__;
            }
            # 291 "./neo-c.h"
            self->it=self->head;
            # 297 "./neo-c.h"
            # 293 "./neo-c.h"
            if(self->it) {
                # 294 "./neo-c.h"
                __result155__ = __result_obj__ = self->it->item;
                return __result155__;
            }
            # 297 "./neo-c.h"
            # 298 "./neo-c.h"
            memset(&result_220,0,sizeof(struct CVALUE*));
            # 299 "./neo-c.h"
            __result156__ = __result_obj__ = result_220;
            return __result156__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
            # 321 "./neo-c.h"
            __result157__ = self==((void*)0)||self->it==((void*)0);
            return __result157__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional271;
struct CVALUE* result_222;
struct CVALUE* __result158__;
_Bool _if_conditional272;
struct CVALUE* __result159__;
struct CVALUE* result_223;
struct CVALUE* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_222, 0, sizeof(struct CVALUE*));
memset(&result_223, 0, sizeof(struct CVALUE*));
            # 309 "./neo-c.h"
            # 303 "./neo-c.h"
            if(_if_conditional271=self==((void*)0)||self->it==((void*)0),            _if_conditional271) {
                # 304 "./neo-c.h"
                # 305 "./neo-c.h"
                memset(&result_222,0,sizeof(struct CVALUE*));
                # 306 "./neo-c.h"
                __result158__ = __result_obj__ = result_222;
                return __result158__;
            }
            # 309 "./neo-c.h"
            self->it=self->it->next;
            # 315 "./neo-c.h"
            # 311 "./neo-c.h"
            if(self->it) {
                # 312 "./neo-c.h"
                __result159__ = __result_obj__ = self->it->item;
                return __result159__;
            }
            # 315 "./neo-c.h"
            # 316 "./neo-c.h"
            memset(&result_223,0,sizeof(struct CVALUE*));
            # 317 "./neo-c.h"
            __result160__ = __result_obj__ = result_223;
            return __result160__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional274;
int __result161__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                # 368 "./neo-c.h"
                # 365 "./neo-c.h"
                if(_if_conditional274=self==((void*)0),                _if_conditional274) {
                    # 366 "./neo-c.h"
                    __result161__ = 0;
                    return __result161__;
                }
                # 368 "./neo-c.h"
                __result162__ = self->len;
                return __result162__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_230;
unsigned int hash_231;
unsigned int it_232;
_Bool _while_condtional34;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct sFun* __result163__;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct sFun* __result164__;
struct sFun* __result165__;
struct sFun* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_230, 0, sizeof(struct sFun*));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&it_232, 0, sizeof(unsigned int));
                # 1545 "./neo-c.h"
                # 1546 "./neo-c.h"
                memset(&default_value_230,0,sizeof(struct sFun*));
                # 1548 "./neo-c.h"
                hash_231=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./neo-c.h"
                it_232=hash_231;
                # 1573 "./neo-c.h"
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    # 1571 "./neo-c.h"
                    # 1552 "./neo-c.h"
                    if(_if_conditional277=self->item_existance[it_232],                    _if_conditional277) {
                        # 1559 "./neo-c.h"
                        # 1554 "./neo-c.h"
                        if(_if_conditional278=string_equals(self->keys[it_232],key),                        _if_conditional278) {
                            # 1556 "./neo-c.h"
                            __result163__ = __result_obj__ = self->items[it_232];
                            come_call_finalizer3(default_value_230,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result163__;
                        }
                        # 1559 "./neo-c.h"
                        it_232++;
                        # 1567 "./neo-c.h"
                        # 1561 "./neo-c.h"
                        if(_if_conditional294=it_232>=self->size,                        _if_conditional294) {
                            # 1562 "./neo-c.h"
                            it_232=0;
                        }
                        else {
                            # 1567 "./neo-c.h"
                            # 1564 "./neo-c.h"
                            if(_if_conditional295=it_232==hash_231,                            _if_conditional295) {
                                # 1565 "./neo-c.h"
                                __result164__ = __result_obj__ = default_value_230;
                                come_call_finalizer3(default_value_230,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                            }
                        }
                    }
                    else {
                        # 1569 "./neo-c.h"
                        __result165__ = __result_obj__ = default_value_230;
                        come_call_finalizer3(default_value_230,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                    }
                }
                # 1573 "./neo-c.h"
                __result166__ = __result_obj__ = default_value_230;
                come_call_finalizer3(default_value_230,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result166__;
                come_call_finalizer3(default_value_230,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional279=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional279) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional280=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional280) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional281=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional281) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional282=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional282) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional283=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional283) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional284=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional284) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional285=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional285) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional288=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional288) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional289=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional289) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional290=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional290) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional291=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional291) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional292=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional292) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional293=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional293) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional286=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional286) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional287=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional287) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_235;
unsigned int it_236;
_Bool _while_condtional35;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct sFun* __result167__;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct sFun* __result168__;
struct sFun* __result169__;
struct sFun* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_235, 0, sizeof(unsigned int));
memset(&it_236, 0, sizeof(unsigned int));
                    # 1227 "./neo-c.h"
                    hash_235=string_get_hash_key(((char*)key))%self->size;
                    # 1228 "./neo-c.h"
                    it_236=hash_235;
                    # 1252 "./neo-c.h"
                    while(_while_condtional35=(_Bool)1,                    _while_condtional35) {
                        # 1250 "./neo-c.h"
                        # 1231 "./neo-c.h"
                        if(_if_conditional299=self->item_existance[it_236],                        _if_conditional299) {
                            # 1238 "./neo-c.h"
                            # 1233 "./neo-c.h"
                            if(_if_conditional300=string_equals(self->keys[it_236],key),                            _if_conditional300) {
                                # 1235 "./neo-c.h"
                                __result167__ = __result_obj__ = self->items[it_236];
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result167__;
                            }
                            # 1238 "./neo-c.h"
                            it_236++;
                            # 1246 "./neo-c.h"
                            # 1240 "./neo-c.h"
                            if(_if_conditional301=it_236>=self->size,                            _if_conditional301) {
                                # 1241 "./neo-c.h"
                                it_236=0;
                            }
                            else {
                                # 1246 "./neo-c.h"
                                # 1243 "./neo-c.h"
                                if(_if_conditional302=it_236==hash_235,                                _if_conditional302) {
                                    # 1244 "./neo-c.h"
                                    __result168__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result168__;
                                }
                            }
                        }
                        else {
                            # 1248 "./neo-c.h"
                            __result169__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result169__;
                        }
                    }
                    # 1252 "./neo-c.h"
                    __result170__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result170__;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_238;
unsigned int hash_239;
unsigned int it_240;
_Bool _while_condtional36;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct sClass* __result172__;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct sClass* __result173__;
struct sClass* __result174__;
struct sClass* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_238, 0, sizeof(struct sClass*));
memset(&hash_239, 0, sizeof(unsigned int));
memset(&it_240, 0, sizeof(unsigned int));
                            # 1545 "./neo-c.h"
                            # 1546 "./neo-c.h"
                            memset(&default_value_238,0,sizeof(struct sClass*));
                            # 1548 "./neo-c.h"
                            hash_239=string_get_hash_key(((char*)key))%self->size;
                            # 1549 "./neo-c.h"
                            it_240=hash_239;
                            # 1573 "./neo-c.h"
                            while(_while_condtional36=(_Bool)1,                            _while_condtional36) {
                                # 1571 "./neo-c.h"
                                # 1552 "./neo-c.h"
                                if(_if_conditional308=self->item_existance[it_240],                                _if_conditional308) {
                                    # 1559 "./neo-c.h"
                                    # 1554 "./neo-c.h"
                                    if(_if_conditional309=string_equals(self->keys[it_240],key),                                    _if_conditional309) {
                                        # 1556 "./neo-c.h"
                                        __result172__ = __result_obj__ = self->items[it_240];
                                        come_call_finalizer3(default_value_238,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result172__;
                                    }
                                    # 1559 "./neo-c.h"
                                    it_240++;
                                    # 1567 "./neo-c.h"
                                    # 1561 "./neo-c.h"
                                    if(_if_conditional310=it_240>=self->size,                                    _if_conditional310) {
                                        # 1562 "./neo-c.h"
                                        it_240=0;
                                    }
                                    else {
                                        # 1567 "./neo-c.h"
                                        # 1564 "./neo-c.h"
                                        if(_if_conditional311=it_240==hash_239,                                        _if_conditional311) {
                                            # 1565 "./neo-c.h"
                                            __result173__ = __result_obj__ = default_value_238;
                                            come_call_finalizer3(default_value_238,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result173__;
                                        }
                                    }
                                }
                                else {
                                    # 1569 "./neo-c.h"
                                    __result174__ = __result_obj__ = default_value_238;
                                    come_call_finalizer3(default_value_238,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result174__;
                                }
                            }
                            # 1573 "./neo-c.h"
                            __result175__ = __result_obj__ = default_value_238;
                            come_call_finalizer3(default_value_238,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result175__;
                            come_call_finalizer3(default_value_238,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional315;
int __result178__;
int __result179__;
memset(&__result_obj__, 0, sizeof(void*));
            # 368 "./neo-c.h"
            # 365 "./neo-c.h"
            if(_if_conditional315=self==((void*)0),            _if_conditional315) {
                # 366 "./neo-c.h"
                __result178__ = 0;
                return __result178__;
            }
            # 368 "./neo-c.h"
            __result179__ = self->len;
            return __result179__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional317;
struct sType* result_245;
struct sType* __result181__;
_Bool _if_conditional318;
struct sType* __result182__;
struct sType* result_246;
struct sType* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_245, 0, sizeof(struct sType*));
memset(&result_246, 0, sizeof(struct sType*));
            # 291 "./neo-c.h"
            # 286 "./neo-c.h"
            if(_if_conditional317=self==((void*)0),            _if_conditional317) {
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_245,0,sizeof(struct sType*));
                # 289 "./neo-c.h"
                __result181__ = __result_obj__ = result_245;
                return __result181__;
            }
            # 291 "./neo-c.h"
            self->it=self->head;
            # 297 "./neo-c.h"
            # 293 "./neo-c.h"
            if(self->it) {
                # 294 "./neo-c.h"
                __result182__ = __result_obj__ = self->it->item;
                return __result182__;
            }
            # 297 "./neo-c.h"
            # 298 "./neo-c.h"
            memset(&result_246,0,sizeof(struct sType*));
            # 299 "./neo-c.h"
            __result183__ = __result_obj__ = result_246;
            return __result183__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
            # 321 "./neo-c.h"
            __result184__ = self==((void*)0)||self->it==((void*)0);
            return __result184__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional319;
struct sType* result_248;
struct sType* __result185__;
_Bool _if_conditional320;
struct sType* __result186__;
struct sType* result_249;
struct sType* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sType*));
memset(&result_249, 0, sizeof(struct sType*));
            # 309 "./neo-c.h"
            # 303 "./neo-c.h"
            if(_if_conditional319=self==((void*)0)||self->it==((void*)0),            _if_conditional319) {
                # 304 "./neo-c.h"
                # 305 "./neo-c.h"
                memset(&result_248,0,sizeof(struct sType*));
                # 306 "./neo-c.h"
                __result185__ = __result_obj__ = result_248;
                return __result185__;
            }
            # 309 "./neo-c.h"
            self->it=self->it->next;
            # 315 "./neo-c.h"
            # 311 "./neo-c.h"
            if(self->it) {
                # 312 "./neo-c.h"
                __result186__ = __result_obj__ = self->it->item;
                return __result186__;
            }
            # 315 "./neo-c.h"
            # 316 "./neo-c.h"
            memset(&result_249,0,sizeof(struct sType*));
            # 317 "./neo-c.h"
            __result187__ = __result_obj__ = result_249;
            return __result187__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional322;
void* right_value223;
struct list_item$1sTypeph* litem_250;
struct sType* __dec_obj70;
_Bool _if_conditional323;
void* right_value224;
struct list_item$1sTypeph* litem_251;
struct sType* __dec_obj71;
void* right_value225;
struct list_item$1sTypeph* litem_252;
struct sType* __dec_obj72;
struct list$1sTypeph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
memset(&litem_250, 0, sizeof(struct list_item$1sTypeph*));
right_value224 = (void*)0;
memset(&litem_251, 0, sizeof(struct list_item$1sTypeph*));
right_value225 = (void*)0;
memset(&litem_252, 0, sizeof(struct list_item$1sTypeph*));
                    # 257 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional322=self->len==0,                    _if_conditional322) {
                        # 227 "./neo-c.h"
                        litem_250=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value223=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value223,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_250->prev=((void*)0);
                        # 230 "./neo-c.h"
                        litem_250->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj70=litem_250->item;
                        litem_250->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_250;
                        # 234 "./neo-c.h"
                        self->head=litem_250;
                    }
                    else {
                        # 257 "./neo-c.h"
                        # 236 "./neo-c.h"
                        if(_if_conditional323=self->len==1,                        _if_conditional323) {
                            # 237 "./neo-c.h"
                            litem_251=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value224=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value224,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_251->prev=self->head;
                            # 240 "./neo-c.h"
                            litem_251->next=((void*)0);
                            # 241 "./neo-c.h"
                            __dec_obj71=litem_251->item;
                            litem_251->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 243 "./neo-c.h"
                            self->tail=litem_251;
                            # 244 "./neo-c.h"
                            self->head->next=litem_251;
                        }
                        else {
                            # 247 "./neo-c.h"
                            litem_252=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value225=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 247, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value225,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 249 "./neo-c.h"
                            litem_252->prev=self->tail;
                            # 250 "./neo-c.h"
                            litem_252->next=((void*)0);
                            # 251 "./neo-c.h"
                            __dec_obj72=litem_252->item;
                            litem_252->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 253 "./neo-c.h"
                            self->tail->next=litem_252;
                            # 254 "./neo-c.h"
                            self->tail=litem_252;
                        }
                    }
                    # 257 "./neo-c.h"
                    self->len++;
                    # 259 "./neo-c.h"
                    __result188__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result188__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional324;
void* right_value230;
struct list_item$1CVALUEph* litem_256;
struct CVALUE* __dec_obj73;
_Bool _if_conditional325;
void* right_value231;
struct list_item$1CVALUEph* litem_257;
struct CVALUE* __dec_obj74;
void* right_value232;
struct list_item$1CVALUEph* litem_258;
struct CVALUE* __dec_obj75;
struct list$1CVALUEph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1CVALUEph*));
right_value231 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1CVALUEph*));
right_value232 = (void*)0;
memset(&litem_258, 0, sizeof(struct list_item$1CVALUEph*));
                # 187 "./neo-c.h"
                # 156 "./neo-c.h"
                if(_if_conditional324=self->len==0,                _if_conditional324) {
                    # 157 "./neo-c.h"
                    litem_256=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value230=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 157, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value230,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 159 "./neo-c.h"
                    litem_256->prev=((void*)0);
                    # 160 "./neo-c.h"
                    litem_256->next=((void*)0);
                    # 161 "./neo-c.h"
                    __dec_obj73=litem_256->item;
                    litem_256->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 163 "./neo-c.h"
                    self->tail=litem_256;
                    # 164 "./neo-c.h"
                    self->head=litem_256;
                }
                else {
                    # 187 "./neo-c.h"
                    # 166 "./neo-c.h"
                    if(_if_conditional325=self->len==1,                    _if_conditional325) {
                        # 167 "./neo-c.h"
                        litem_257=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value231=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 167, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value231,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_257->prev=self->head;
                        # 170 "./neo-c.h"
                        litem_257->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj74=litem_257->item;
                        litem_257->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj74,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail=litem_257;
                        # 174 "./neo-c.h"
                        self->head->next=litem_257;
                    }
                    else {
                        # 177 "./neo-c.h"
                        litem_258=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 177, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value232,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 179 "./neo-c.h"
                        litem_258->prev=self->tail;
                        # 180 "./neo-c.h"
                        litem_258->next=((void*)0);
                        # 181 "./neo-c.h"
                        __dec_obj75=litem_258->item;
                        litem_258->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj75,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 183 "./neo-c.h"
                        self->tail->next=litem_258;
                        # 184 "./neo-c.h"
                        self->tail=litem_258;
                    }
                }
                # 187 "./neo-c.h"
                self->len++;
                # 189 "./neo-c.h"
                __result189__ = __result_obj__ = self;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result189__;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional329;
char* result_267;
char* __result191__;
_Bool _if_conditional330;
char* __result192__;
char* result_268;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_267, 0, sizeof(char*));
memset(&result_268, 0, sizeof(char*));
                        # 291 "./neo-c.h"
                        # 286 "./neo-c.h"
                        if(_if_conditional329=self==((void*)0),                        _if_conditional329) {
                            # 287 "./neo-c.h"
                            # 288 "./neo-c.h"
                            memset(&result_267,0,sizeof(char*));
                            # 289 "./neo-c.h"
                            __result191__ = __result_obj__ = result_267;
                            return __result191__;
                        }
                        # 291 "./neo-c.h"
                        self->it=self->head;
                        # 297 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(self->it) {
                            # 294 "./neo-c.h"
                            __result192__ = __result_obj__ = self->it->item;
                            return __result192__;
                        }
                        # 297 "./neo-c.h"
                        # 298 "./neo-c.h"
                        memset(&result_268,0,sizeof(char*));
                        # 299 "./neo-c.h"
                        __result193__ = __result_obj__ = result_268;
                        return __result193__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 321 "./neo-c.h"
                        __result194__ = self==((void*)0)||self->it==((void*)0);
                        return __result194__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional331;
char* result_270;
char* __result195__;
_Bool _if_conditional332;
char* __result196__;
char* result_271;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_270, 0, sizeof(char*));
memset(&result_271, 0, sizeof(char*));
                        # 309 "./neo-c.h"
                        # 303 "./neo-c.h"
                        if(_if_conditional331=self==((void*)0)||self->it==((void*)0),                        _if_conditional331) {
                            # 304 "./neo-c.h"
                            # 305 "./neo-c.h"
                            memset(&result_270,0,sizeof(char*));
                            # 306 "./neo-c.h"
                            __result195__ = __result_obj__ = result_270;
                            return __result195__;
                        }
                        # 309 "./neo-c.h"
                        self->it=self->it->next;
                        # 315 "./neo-c.h"
                        # 311 "./neo-c.h"
                        if(self->it) {
                            # 312 "./neo-c.h"
                            __result196__ = __result_obj__ = self->it->item;
                            return __result196__;
                        }
                        # 315 "./neo-c.h"
                        # 316 "./neo-c.h"
                        memset(&result_271,0,sizeof(char*));
                        # 317 "./neo-c.h"
                        __result197__ = __result_obj__ = result_271;
                        return __result197__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct list$1CVALUEph* __result198__;
struct list_item$1CVALUEph* it_272;
int i_273;
_Bool _while_condtional38;
_Bool _if_conditional338;
struct CVALUE* __dec_obj76;
struct list$1CVALUEph* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_272, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_273, 0, sizeof(int));
                        # 593 "./neo-c.h"
                        # 589 "./neo-c.h"
                        if(_if_conditional336=position<0,                        _if_conditional336) {
                            # 590 "./neo-c.h"
                            position+=self->len;
                        }
                        # 598 "./neo-c.h"
                        # 593 "./neo-c.h"
                        if(_if_conditional337=position>=self->len,                        _if_conditional337) {
                            # 594 "./neo-c.h"
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            # 595 "./neo-c.h"
                            __result198__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result198__;
                        }
                        # 598 "./neo-c.h"
                        it_272=self->head;
                        # 599 "./neo-c.h"
                        i_273=0;
                        # 609 "./neo-c.h"
                        while(_while_condtional38=it_272!=((void*)0),                        _while_condtional38) {
                            # 605 "./neo-c.h"
                            # 601 "./neo-c.h"
                            if(_if_conditional338=position==i_273,                            _if_conditional338) {
                                # 602 "./neo-c.h"
                                __dec_obj76=it_272->item;
                                it_272->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj76,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                # 603 "./neo-c.h"
                                break;
                            }
                            # 605 "./neo-c.h"
                            it_272=it_272->next;
                            # 606 "./neo-c.h"
                            i_273++;
                        }
                        # 609 "./neo-c.h"
                        __result199__ = __result_obj__ = self;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result199__;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional342;
struct list_item$1charph* it_279;
int i_280;
_Bool _while_condtional39;
_Bool _if_conditional343;
char* __result200__;
char* default_value_281;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_279, 0, sizeof(struct list_item$1charph*));
memset(&i_280, 0, sizeof(int));
memset(&default_value_281, 0, sizeof(char*));
                            # 687 "./neo-c.h"
                            # 683 "./neo-c.h"
                            if(_if_conditional342=position<0,                            _if_conditional342) {
                                # 684 "./neo-c.h"
                                position+=self->len;
                            }
                            # 687 "./neo-c.h"
                            it_279=self->head;
                            # 688 "./neo-c.h"
                            i_280=0;
                            # 695 "./neo-c.h"
                            while(_while_condtional39=it_279!=((void*)0),                            _while_condtional39) {
                                # 693 "./neo-c.h"
                                # 690 "./neo-c.h"
                                if(_if_conditional343=position==i_280,                                _if_conditional343) {
                                    # 691 "./neo-c.h"
                                    __result200__ = __result_obj__ = it_279->item;
                                    return __result200__;
                                }
                                # 693 "./neo-c.h"
                                it_279=it_279->next;
                                # 694 "./neo-c.h"
                                i_280++;
                            }
                            # 697 "./neo-c.h"
                            # 698 "./neo-c.h"
                            memset(&default_value_281,0,sizeof(char*));
                            # 699 "./neo-c.h"
                            __result201__ = __result_obj__ = default_value_281;
                            default_value_281 = come_decrement_ref_count2(default_value_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result201__;
                            default_value_281 = come_decrement_ref_count2(default_value_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional346;
struct list_item$1CVALUEph* it_283;
int i_284;
_Bool _while_condtional41;
_Bool _if_conditional347;
struct CVALUE* __result203__;
struct CVALUE* default_value_285;
struct CVALUE* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_283, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_284, 0, sizeof(int));
memset(&default_value_285, 0, sizeof(struct CVALUE*));
                            # 687 "./neo-c.h"
                            # 683 "./neo-c.h"
                            if(_if_conditional346=position<0,                            _if_conditional346) {
                                # 684 "./neo-c.h"
                                position+=self->len;
                            }
                            # 687 "./neo-c.h"
                            it_283=self->head;
                            # 688 "./neo-c.h"
                            i_284=0;
                            # 695 "./neo-c.h"
                            while(_while_condtional41=it_283!=((void*)0),                            _while_condtional41) {
                                # 693 "./neo-c.h"
                                # 690 "./neo-c.h"
                                if(_if_conditional347=position==i_284,                                _if_conditional347) {
                                    # 691 "./neo-c.h"
                                    __result203__ = __result_obj__ = it_283->item;
                                    return __result203__;
                                }
                                # 693 "./neo-c.h"
                                it_283=it_283->next;
                                # 694 "./neo-c.h"
                                i_284++;
                            }
                            # 697 "./neo-c.h"
                            # 698 "./neo-c.h"
                            memset(&default_value_285,0,sizeof(struct CVALUE*));
                            # 699 "./neo-c.h"
                            __result204__ = __result_obj__ = default_value_285;
                            come_call_finalizer3(default_value_285,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result204__;
                            come_call_finalizer3(default_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional355;
struct sNode* result_291;
struct sNode* __result205__;
_Bool _if_conditional356;
struct sNode* __result206__;
struct sNode* result_292;
struct sNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_291, 0, sizeof(struct sNode*));
memset(&result_292, 0, sizeof(struct sNode*));
                        # 291 "./neo-c.h"
                        # 286 "./neo-c.h"
                        if(_if_conditional355=self==((void*)0),                        _if_conditional355) {
                            # 287 "./neo-c.h"
                            # 288 "./neo-c.h"
                            memset(&result_291,0,sizeof(struct sNode*));
                            # 289 "./neo-c.h"
                            __result205__ = __result_obj__ = result_291;
                            return __result205__;
                        }
                        # 291 "./neo-c.h"
                        self->it=self->head;
                        # 297 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(self->it) {
                            # 294 "./neo-c.h"
                            __result206__ = __result_obj__ = self->it->item;
                            return __result206__;
                        }
                        # 297 "./neo-c.h"
                        # 298 "./neo-c.h"
                        memset(&result_292,0,sizeof(struct sNode*));
                        # 299 "./neo-c.h"
                        __result207__ = __result_obj__ = result_292;
                        return __result207__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 321 "./neo-c.h"
                        __result208__ = self==((void*)0)||self->it==((void*)0);
                        return __result208__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional357;
struct sNode* result_294;
struct sNode* __result209__;
_Bool _if_conditional358;
struct sNode* __result210__;
struct sNode* result_295;
struct sNode* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_294, 0, sizeof(struct sNode*));
memset(&result_295, 0, sizeof(struct sNode*));
                        # 309 "./neo-c.h"
                        # 303 "./neo-c.h"
                        if(_if_conditional357=self==((void*)0)||self->it==((void*)0),                        _if_conditional357) {
                            # 304 "./neo-c.h"
                            # 305 "./neo-c.h"
                            memset(&result_294,0,sizeof(struct sNode*));
                            # 306 "./neo-c.h"
                            __result209__ = __result_obj__ = result_294;
                            return __result209__;
                        }
                        # 309 "./neo-c.h"
                        self->it=self->it->next;
                        # 315 "./neo-c.h"
                        # 311 "./neo-c.h"
                        if(self->it) {
                            # 312 "./neo-c.h"
                            __result210__ = __result_obj__ = self->it->item;
                            return __result210__;
                        }
                        # 315 "./neo-c.h"
                        # 316 "./neo-c.h"
                        memset(&result_295,0,sizeof(struct sNode*));
                        # 317 "./neo-c.h"
                        __result211__ = __result_obj__ = result_295;
                        return __result211__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional361;
void* right_value253;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj79;
_Bool _if_conditional362;
void* right_value254;
struct list_item$1tuple2$2charphsNodephph* litem_299;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value255;
struct list_item$1tuple2$2charphsNodephph* litem_300;
struct tuple2$2charphsNodeph* __dec_obj81;
struct list$1tuple2$2charphsNodephph* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value254 = (void*)0;
memset(&litem_299, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value255 = (void*)0;
memset(&litem_300, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                        # 257 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional361=self->len==0,                        _if_conditional361) {
                            # 227 "./neo-c.h"
                            litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value253=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value253,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_298->prev=((void*)0);
                            # 230 "./neo-c.h"
                            litem_298->next=((void*)0);
                            # 231 "./neo-c.h"
                            __dec_obj79=litem_298->item;
                            litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj79,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            # 233 "./neo-c.h"
                            self->tail=litem_298;
                            # 234 "./neo-c.h"
                            self->head=litem_298;
                        }
                        else {
                            # 257 "./neo-c.h"
                            # 236 "./neo-c.h"
                            if(_if_conditional362=self->len==1,                            _if_conditional362) {
                                # 237 "./neo-c.h"
                                litem_299=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value254=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value254,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 239 "./neo-c.h"
                                litem_299->prev=self->head;
                                # 240 "./neo-c.h"
                                litem_299->next=((void*)0);
                                # 241 "./neo-c.h"
                                __dec_obj80=litem_299->item;
                                litem_299->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj80,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                # 243 "./neo-c.h"
                                self->tail=litem_299;
                                # 244 "./neo-c.h"
                                self->head->next=litem_299;
                            }
                            else {
                                # 247 "./neo-c.h"
                                litem_300=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value255=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 247, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value255,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 249 "./neo-c.h"
                                litem_300->prev=self->tail;
                                # 250 "./neo-c.h"
                                litem_300->next=((void*)0);
                                # 251 "./neo-c.h"
                                __dec_obj81=litem_300->item;
                                litem_300->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj81,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                # 253 "./neo-c.h"
                                self->tail->next=litem_300;
                                # 254 "./neo-c.h"
                                self->tail=litem_300;
                            }
                        }
                        # 257 "./neo-c.h"
                        self->len++;
                        # 259 "./neo-c.h"
                        __result212__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result212__;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj82;
struct tuple2$2charphvoidp* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1768 "./neo-c.h"
                        __dec_obj82=self->v1;
                        self->v1=(char*)come_increment_ref_count(v1);
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 1769 "./neo-c.h"
                        self->v2=v2;
                        # 1771 "./neo-c.h"
                        __result213__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result213__;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphvoidpp_finalize"
                            # 0 "tuple2$2charphvoidpp_finalize"
                            if(_if_conditional363=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional363) {
                                # 0 "tuple2$2charphvoidpp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional373;
int __result214__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
            # 368 "./neo-c.h"
            # 365 "./neo-c.h"
            if(_if_conditional373=self==((void*)0),            _if_conditional373) {
                # 366 "./neo-c.h"
                __result214__ = 0;
                return __result214__;
            }
            # 368 "./neo-c.h"
            __result215__ = self->len;
            return __result215__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value359;
void* right_value360;
struct list$1tuple2$2charphsNodephph* params_364;
void* right_value361;
void* right_value362;
void* right_value363;
_Bool _if_conditional400;
_Bool parse_method_generics_type_365;
char* p_366;
int sline_367;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value364;
char* word_368;
_Bool _if_conditional403;
void* right_value365;
void* right_value366;
struct list$1sTypeph* method_generics_types_369;
_Bool _if_conditional404;
_Bool _while_condtional44;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value367;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_370;
char* name_371;
_Bool err_372;
_Bool _if_conditional410;
void* right_value368;
_Bool _if_conditional411;
_Bool _while_condtional45;
_Bool _if_conditional412;
char* p_373;
int sline_374;
_Bool err_flag_375;
void* right_value369;
char* label_376;
_Bool _if_conditional413;
void* right_value370;
char* __dec_obj103;
_Bool _if_conditional414;
char* __dec_obj104;
_Bool no_comma_377;
void* right_value371;
struct sNode* node_378;
void* right_value372;
struct sNode* __dec_obj105;
void* right_value373;
void* right_value374;
_Bool _if_conditional415;
_Bool _if_conditional416;
struct buffer* method_block_379;
int method_block_sline_380;
_Bool _if_conditional417;
char* head_381;
void* right_value375;
char* tail_382;
void* right_value376;
void* right_value377;
struct buffer* __dec_obj106;
int len_383;
void* right_value378;
char* mem_384;
_Bool _if_conditional418;
void* right_value379;
void* right_value380;
void* right_value381;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value389;
struct sNode* node_386;
struct sNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&params_364, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&parse_method_generics_type_365, 0, sizeof(_Bool));
memset(&p_366, 0, sizeof(char*));
memset(&sline_367, 0, sizeof(int));
right_value364 = (void*)0;
memset(&word_368, 0, sizeof(char*));
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&method_generics_types_369, 0, sizeof(struct list$1sTypeph*));
right_value367 = (void*)0;
memset(&type_370, 0, sizeof(struct sType*));
memset(&name_371, 0, sizeof(char*));
memset(&err_372, 0, sizeof(_Bool));
memset(&type_370, 0, sizeof(struct sType*));
memset(&name_371, 0, sizeof(char*));
memset(&err_372, 0, sizeof(_Bool));
right_value368 = (void*)0;
memset(&p_373, 0, sizeof(char*));
memset(&sline_374, 0, sizeof(int));
memset(&err_flag_375, 0, sizeof(_Bool));
right_value369 = (void*)0;
memset(&label_376, 0, sizeof(char*));
right_value370 = (void*)0;
memset(&no_comma_377, 0, sizeof(_Bool));
right_value371 = (void*)0;
memset(&node_378, 0, sizeof(struct sNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&method_block_379, 0, sizeof(struct buffer*));
memset(&method_block_sline_380, 0, sizeof(int));
memset(&head_381, 0, sizeof(char*));
right_value375 = (void*)0;
memset(&tail_382, 0, sizeof(char*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&len_383, 0, sizeof(int));
right_value378 = (void*)0;
memset(&mem_384, 0, sizeof(char*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value389 = (void*)0;
memset(&node_386, 0, sizeof(struct sNode*));
    # 917 "20method.c"
    params_364=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value360=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value359=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 917, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value359,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value360,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 918 "20method.c"
    list$1tuple2$2charphsNodephph_push_back(params_364,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value363=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value361=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 918, "tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=sNode_clone(obj)))))))));
    come_call_finalizer3(right_value361,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value363,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 925 "20method.c"
    # 920 "20method.c"
    if(_if_conditional400=*info->p==45&&*(info->p+1)==62,    _if_conditional400) {
        # 921 "20method.c"
        info->p+=2;
        # 922 "20method.c"
        skip_spaces_and_lf(info);
    }
    # 925 "20method.c"
    parse_method_generics_type_365=(_Bool)0;
    # 947 "20method.c"
    {
        # 927 "20method.c"
        p_366=info->p;
        # 928 "20method.c"
        sline_367=info->sline;
        # 943 "20method.c"
        # 930 "20method.c"
        if(_if_conditional401=*info->p==60,        _if_conditional401) {
            # 931 "20method.c"
            info->p++;
            # 932 "20method.c"
            skip_spaces_and_lf(info);
            # 941 "20method.c"
            # 934 "20method.c"
            if(_if_conditional402=xisalpha(*info->p)||*info->p==95,            _if_conditional402) {
                # 935 "20method.c"
                word_368=(char*)come_increment_ref_count(((char*)(right_value364=parse_word(info))));
                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 940 "20method.c"
                # 937 "20method.c"
                if(_if_conditional403=is_type_name(word_368,info),                _if_conditional403) {
                    # 938 "20method.c"
                    parse_method_generics_type_365=(_Bool)1;
                }
                word_368 = come_decrement_ref_count2(word_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 943 "20method.c"
        info->p=p_366;
        # 944 "20method.c"
        info->sline=sline_367;
    }
    # 947 "20method.c"
    method_generics_types_369=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value366=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value365=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 947, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value365,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value366,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 979 "20method.c"
    # 948 "20method.c"
    if(_if_conditional404=parse_method_generics_type_365&&*info->p==60,    _if_conditional404) {
        # 949 "20method.c"
        info->p++;
        # 950 "20method.c"
        skip_spaces_and_lf(info);
        # 977 "20method.c"
        while(_while_condtional44=(_Bool)1,        _while_condtional44) {
            # 976 "20method.c"
            # 953 "20method.c"
            if(_if_conditional405=*info->p==0,            _if_conditional405) {
                # 954 "20method.c"
                err_msg(info,"unexpected source end");
                # 955 "20method.c"
                exit(2);
            }
            else {
                # 976 "20method.c"
                # 957 "20method.c"
                if(_if_conditional406=*info->p==62,                _if_conditional406) {
                    # 958 "20method.c"
                    info->p++;
                    # 959 "20method.c"
                    skip_spaces_and_lf(info);
                    # 960 "20method.c"
                    break;
                }
                else {
                    # 976 "20method.c"
                    # 962 "20method.c"
                    if(_if_conditional407=*info->p==44,                    _if_conditional407) {
                        # 963 "20method.c"
                        info->p++;
                        # 964 "20method.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 967 "20method.c"
                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value367=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_370=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_371=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_372=multiple_assign_var5->v3;
                        come_call_finalizer3(right_value367,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 974 "20method.c"
                        # 969 "20method.c"
                        if(_if_conditional410=!err_372,                        _if_conditional410) {
                            # 970 "20method.c"
                            err_msg(info,"invalid method generics paramtor type");
                            # 971 "20method.c"
                            exit(2);
                        }
                        # 974 "20method.c"
                        list$1sTypeph_push_back(method_generics_types_369,(struct sType*)come_increment_ref_count(((struct sType*)(right_value368=sType_clone(type_370)))));
                        come_call_finalizer3(right_value368,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_370,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_371 = come_decrement_ref_count2(name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 1033 "20method.c"
    # 979 "20method.c"
    if(_if_conditional411=*info->p!=123,    _if_conditional411) {
        # 980 "20method.c"
        expected_next_character(40,info);
        # 1031 "20method.c"
        while(_while_condtional45=(_Bool)1,        _while_condtional45) {
            # 989 "20method.c"
            # 983 "20method.c"
            if(_if_conditional412=*info->p==41,            _if_conditional412) {
                # 984 "20method.c"
                info->p++;
                # 985 "20method.c"
                skip_spaces_and_lf(info);
                # 986 "20method.c"
                break;
            }
            # 989 "20method.c"
            p_373=info->p;
            # 990 "20method.c"
            sline_374=info->sline;
            # 992 "20method.c"
            err_flag_375=(_Bool)0;
            # 993 "20method.c"
            label_376=(char*)come_increment_ref_count(((char*)(right_value369=__builtin_string(""))));
            right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 997 "20method.c"
            # 994 "20method.c"
            if(_if_conditional413=xisalpha(*info->p)||*info->p==95,            _if_conditional413) {
                # 995 "20method.c"
                __dec_obj103=label_376;
                label_376=(char*)come_increment_ref_count(((char*)(right_value370=parse_word(info))));
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 996 "20method.c"
                err_flag_375=(_Bool)1;
            }
            # 1010 "20method.c"
            # 999 "20method.c"
            if(_if_conditional414=err_flag_375==(_Bool)1&&*info->p==58,            _if_conditional414) {
                # 1000 "20method.c"
                info->p++;
                # 1001 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 1004 "20method.c"
                __dec_obj104=label_376;
                label_376=((void*)0);
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1006 "20method.c"
                info->p=p_373;
                # 1007 "20method.c"
                info->sline=sline_374;
            }
            # 1010 "20method.c"
            no_comma_377=info->no_comma;
            # 1011 "20method.c"
            info->no_comma=(_Bool)1;
            # 1013 "20method.c"
            node_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=expression_v13(info))));
            if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1015 "20method.c"
            __dec_obj105=node_378;
            node_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_378),info))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1017 "20method.c"
            info->no_comma=no_comma_377;
            # 1019 "20method.c"
            list$1tuple2$2charphsNodephph_push_back(params_364,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value374=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value373=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1019, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_376),(struct sNode*)come_increment_ref_count(node_378))))));
            come_call_finalizer3(right_value373,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value374,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1030 "20method.c"
            # 1021 "20method.c"
            if(_if_conditional415=*info->p==44,            _if_conditional415) {
                # 1022 "20method.c"
                info->p++;
                # 1023 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 1030 "20method.c"
                # 1025 "20method.c"
                if(_if_conditional416=*info->p==41,                _if_conditional416) {
                    # 1026 "20method.c"
                    info->p++;
                    # 1027 "20method.c"
                    skip_spaces_and_lf(info);
                    # 1028 "20method.c"
                    label_376 = come_decrement_ref_count2(label_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_376 = come_decrement_ref_count2(label_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    # 1033 "20method.c"
    method_block_379=((void*)0);
    # 1034 "20method.c"
    method_block_sline_380=0;
    # 1054 "20method.c"
    # 1035 "20method.c"
    if(_if_conditional417=*info->p==123,    _if_conditional417) {
        # 1036 "20method.c"
        head_381=info->p;
        # 1037 "20method.c"
        method_block_sline_380=info->sline;
        # 1039 "20method.c"
        ((char*)(right_value375=skip_block(info)));
        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1041 "20method.c"
        tail_382=info->p;
        # 1043 "20method.c"
        __dec_obj106=method_block_379;
        method_block_379=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value377=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value376=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1043, "buffer"))))))));
        come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value376,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value377,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 1045 "20method.c"
        len_383=tail_382-head_381;
        # 1046 "20method.c"
        mem_384=(char*)come_increment_ref_count(((char*)(right_value378=(char*)come_calloc(1, sizeof(char)*(1*(len_383+1)), "20method.c", 1046, "char"))));
        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1047 "20method.c"
        memcpy(mem_384,head_381,len_383);
        # 1048 "20method.c"
        mem_384[len_383]=0;
        # 1050 "20method.c"
        buffer_append_str(method_block_379,mem_384);
        # 1051 "20method.c"
        buffer_append_str(method_block_379,"\n");
        mem_384 = come_decrement_ref_count2(mem_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1054 "20method.c"
    parse_sharp_v5(info);
    # 1059 "20method.c"
    # 1056 "20method.c"
    if(_if_conditional418=*info->p==60,    _if_conditional418) {
    }
    # 1059 "20method.c"
    parse_sharp_v5(info);
    # 1061 "20method.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1061, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value381=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value379=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1061, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_364),method_block_379,method_block_sline_380,method_generics_types_369,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_386=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=_inf_value2)));
    come_call_finalizer3(right_value379,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value381,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value389) { right_value389 = come_decrement_ref_count2(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1063 "20method.c"
    __result228__ = __result_obj__ = node_386;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_364,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_369,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_379,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result228__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_364,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_369,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_379,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj101;
struct sNode* __dec_obj102;
struct tuple2$2charphsNodeph* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1768 "./neo-c.h"
        __dec_obj101=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1769 "./neo-c.h"
        __dec_obj102=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
        # 1771 "./neo-c.h"
        __result225__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result225__;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional408=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional408) {
                                # 0 "tuple3$3sTypephcharphboolp_finalize"
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple3$3sTypephcharphboolp_finalize"
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional409=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional409) {
                                # 1 "tuple3$3sTypephcharphboolp_finalize"
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sMethodCallNode_finalize"
        # 0 "sMethodCallNode_finalize"
        if(_if_conditional419=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional419) {
            # 0 "sMethodCallNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sMethodCallNode_finalize"
        # 1 "sMethodCallNode_finalize"
        if(_if_conditional420=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional420) {
            # 1 "sMethodCallNode_finalize"
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 3 "sMethodCallNode_finalize"
        # 2 "sMethodCallNode_finalize"
        if(_if_conditional421=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional421) {
            # 2 "sMethodCallNode_finalize"
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 4 "sMethodCallNode_finalize"
        # 3 "sMethodCallNode_finalize"
        if(_if_conditional422=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional422) {
            # 3 "sMethodCallNode_finalize"
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sMethodCallNode_finalize"
        # 4 "sMethodCallNode_finalize"
        if(_if_conditional423=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional423) {
            # 4 "sMethodCallNode_finalize"
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sMethodCallNode_finalize"
        # 5 "sMethodCallNode_finalize"
        if(_if_conditional424=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional424) {
            # 5 "sMethodCallNode_finalize"
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional425;
struct sMethodCallNode* __result226__;
void* right_value382;
struct sMethodCallNode* result_385;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value383;
char* __dec_obj107;
_Bool _if_conditional428;
void* right_value384;
struct sNode* __dec_obj108;
_Bool _if_conditional429;
void* right_value385;
char* __dec_obj109;
_Bool _if_conditional430;
void* right_value386;
struct list$1tuple2$2charphsNodephph* __dec_obj110;
_Bool _if_conditional431;
void* right_value387;
struct buffer* __dec_obj111;
_Bool _if_conditional432;
_Bool _if_conditional433;
void* right_value388;
struct list$1sTypeph* __dec_obj112;
struct sMethodCallNode* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&result_385, 0, sizeof(struct sMethodCallNode*));
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
        # 3 "sMethodCallNode_clone"
        # 2 "sMethodCallNode_clone"
        if(_if_conditional425=self==(void*)0,        _if_conditional425) {
            # 2 "sMethodCallNode_clone"
            __result226__ = __result_obj__ = (void*)0;
            return __result226__;
        }
        # 3 "sMethodCallNode_clone"
        result_385=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value382=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer3(right_value382,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sMethodCallNode_clone"
        # 4 "sMethodCallNode_clone"
        if(_if_conditional426=self!=((void*)0),        _if_conditional426) {
            # 4 "sMethodCallNode_clone"
            result_385->sline=self->sline;
        }
        # 6 "sMethodCallNode_clone"
        # 5 "sMethodCallNode_clone"
        if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional427) {
            # 5 "sMethodCallNode_clone"
            __dec_obj107=result_385->sname;
            result_385->sname=(char*)come_increment_ref_count(((char*)(right_value383=string_clone(self->sname))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sMethodCallNode_clone"
        # 6 "sMethodCallNode_clone"
        if(_if_conditional428=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional428) {
            # 6 "sMethodCallNode_clone"
            __dec_obj108=result_385->obj;
            result_385->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(self->obj))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 8 "sMethodCallNode_clone"
        # 7 "sMethodCallNode_clone"
        if(_if_conditional429=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional429) {
            # 7 "sMethodCallNode_clone"
            __dec_obj109=result_385->fun_name;
            result_385->fun_name=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->fun_name))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 9 "sMethodCallNode_clone"
        # 8 "sMethodCallNode_clone"
        if(_if_conditional430=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional430) {
            # 8 "sMethodCallNode_clone"
            __dec_obj110=result_385->params;
            result_385->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value386=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj110,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value386,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 10 "sMethodCallNode_clone"
        # 9 "sMethodCallNode_clone"
        if(_if_conditional431=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional431) {
            # 9 "sMethodCallNode_clone"
            __dec_obj111=result_385->method_block;
            result_385->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value387=buffer_clone(self->method_block))));
            come_call_finalizer3(__dec_obj111,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value387,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sMethodCallNode_clone"
        # 10 "sMethodCallNode_clone"
        if(_if_conditional432=self!=((void*)0),        _if_conditional432) {
            # 10 "sMethodCallNode_clone"
            result_385->method_block_sline=self->method_block_sline;
        }
        # 12 "sMethodCallNode_clone"
        # 11 "sMethodCallNode_clone"
        if(_if_conditional433=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional433) {
            # 11 "sMethodCallNode_clone"
            __dec_obj112=result_385->method_generics_types;
            result_385->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value388=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj112,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value388,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sMethodCallNode_clone"
        __result227__ = __result_obj__ = result_385;
        come_call_finalizer3(result_385,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result227__;
        come_call_finalizer3(result_385,sMethodCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional434;
void* right_value390;
void* right_value391;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value394;
struct sNode* __result231__;
void* right_value395;
struct sNode* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
    # 1072 "20method.c"
    # 1068 "20method.c"
    if(_if_conditional434=charp_operator_equals(buf,"__current__"),    _if_conditional434) {
        # 1069 "20method.c"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1069, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value391=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value390=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1069, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result231__ = __result_obj__ = ((struct sNode*)(right_value394=_inf_value3));
        come_call_finalizer3(right_value390,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value391,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result231__;
    }
    # 1072 "20method.c"
    __result232__ = __result_obj__ = ((struct sNode*)(right_value395=string_node_v15(buf,head,head_sline,info)));
    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result232__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sCurrentNode_finalize"
            # 0 "sCurrentNode_finalize"
            if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional435) {
                # 0 "sCurrentNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional436;
struct sCurrentNode* __result229__;
void* right_value392;
struct sCurrentNode* result_387;
_Bool _if_conditional437;
_Bool _if_conditional438;
void* right_value393;
char* __dec_obj113;
struct sCurrentNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
memset(&result_387, 0, sizeof(struct sCurrentNode*));
right_value393 = (void*)0;
            # 3 "sCurrentNode_clone"
            # 2 "sCurrentNode_clone"
            if(_if_conditional436=self==(void*)0,            _if_conditional436) {
                # 2 "sCurrentNode_clone"
                __result229__ = __result_obj__ = (void*)0;
                return __result229__;
            }
            # 3 "sCurrentNode_clone"
            result_387=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value392=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer3(right_value392,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sCurrentNode_clone"
            # 4 "sCurrentNode_clone"
            if(_if_conditional437=self!=((void*)0),            _if_conditional437) {
                # 4 "sCurrentNode_clone"
                result_387->sline=self->sline;
            }
            # 6 "sCurrentNode_clone"
            # 5 "sCurrentNode_clone"
            if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional438) {
                # 5 "sCurrentNode_clone"
                __dec_obj113=result_387->sname;
                result_387->sname=(char*)come_increment_ref_count(((char*)(right_value393=string_clone(self->sname))));
                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sCurrentNode_clone"
            __result230__ = __result_obj__ = result_387;
            come_call_finalizer3(result_387,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result230__;
            come_call_finalizer3(result_387,sCurrentNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value396;
struct sNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value396 = (void*)0;
    # 1079 "20method.c"
    __result233__ = __result_obj__ = ((struct sNode*)(right_value396=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result233__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

