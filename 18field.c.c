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
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sNullableNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sRangeCheckNode
{
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    _Bool mBreakGuard;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);

_Bool sNullableNode_terminated();

char* sNullableNode_kind();

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
int sNullableNode_sline(struct sNullableNode* self, struct sInfo* info);

char* sNullableNode_sname(struct sNullableNode* self, struct sInfo* info);

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated();

char* sRangeCheckNode_kind();

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info);

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_71;
_Bool _if_conditional110;
struct sType* __dec_obj35;
struct sClass* klass_72;
char* class_name_73;
char* fun_name2_74;
struct sFun* operator_fun_75;
_Bool _if_conditional111;
_Bool _if_conditional113;
void* right_value115;
char* none_generics_name_76;
void* right_value116;
struct sType* obj_type_77;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_78;
struct sGenericsFun* generics_fun_81;
_Bool _if_conditional128;
void* right_value119;
_Bool _if_conditional129;
_Bool __result76__;
void* right_value120;
char* __dec_obj37;
int i_85;
void* right_value121;
char* new_fun_name_86;
_Bool _if_conditional149;
void* right_value122;
char* __dec_obj38;
_Bool _if_conditional150;
_Bool result_87;
_Bool _if_conditional151;
void* right_value123;
struct CVALUE* come_value_88;
char* left_value2_89;
void* right_value124;
void* right_value125;
_Bool _if_conditional156;
void* right_value126;
char* __dec_obj39;
void* right_value127;
char* __dec_obj40;
char* middle_value2_93;
void* right_value128;
void* right_value129;
_Bool _if_conditional157;
void* right_value130;
char* __dec_obj41;
void* right_value131;
char* __dec_obj42;
char* right_value2_94;
void* right_value132;
void* right_value133;
_Bool _if_conditional158;
void* right_value134;
char* __dec_obj43;
void* right_value135;
char* __dec_obj44;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
char* __dec_obj45;
void* right_value141;
struct sType* result_type1_95;
void* right_value142;
struct sType* result_type2_96;
void* right_value143;
struct sType* __dec_obj46;
_Bool _if_conditional159;
void* right_value144;
char* __dec_obj47;
_Bool _if_conditional160;
void* right_value145;
void* right_value146;
char* __dec_obj48;
void* right_value147;
char* __dec_obj49;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&generics_type_71, 0, sizeof(struct sType*));
memset(&klass_72, 0, sizeof(struct sClass*));
memset(&class_name_73, 0, sizeof(char*));
memset(&fun_name2_74, 0, sizeof(char*));
memset(&operator_fun_75, 0, sizeof(struct sFun*));
right_value115 = (void*)0;
memset(&none_generics_name_76, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&obj_type_77, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&fun_name3_78, 0, sizeof(char*));
memset(&generics_fun_81, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&i_85, 0, sizeof(int));
right_value121 = (void*)0;
memset(&new_fun_name_86, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&result_87, 0, sizeof(_Bool));
right_value123 = (void*)0;
memset(&come_value_88, 0, sizeof(struct CVALUE*));
memset(&left_value2_89, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&middle_value2_93, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&right_value2_94, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_type1_95, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&result_type2_96, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    # 5 "18field.c"
    generics_type_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 11 "18field.c"
    # 7 "18field.c"
    if(generics_type_71->mNoSolvedGenericsType->v1) {
        # 8 "18field.c"
        __dec_obj35=generics_type_71;
        generics_type_71=(struct sType*)come_increment_ref_count(generics_type_71->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 11 "18field.c"
    klass_72=type->mClass;
    # 12 "18field.c"
    class_name_73=klass_72->mName;
    # 14 "18field.c"
    # 15 "18field.c"
    operator_fun_75=((void*)0);
    # 21 "18field.c"
    # 17 "18field.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 18 "18field.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 58 "18field.c"
    # 21 "18field.c"
    if(_if_conditional113=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional113) {
        # 22 "18field.c"
        none_generics_name_76=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 24 "18field.c"
        obj_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 26 "18field.c"
        __dec_obj36=fun_name2_74;
        fun_name2_74=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_77,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 27 "18field.c"
        fun_name3_78=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_76,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 29 "18field.c"
        generics_fun_81=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_78,((void*)0));
        # 37 "18field.c"
        # 31 "18field.c"
        if(generics_fun_81) {
            # 35 "18field.c"
            # 32 "18field.c"
            if(_if_conditional129=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_74)))),generics_fun_81,obj_type_77,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional129) {
                # 33 "18field.c"
                __result76__ = (_Bool)0;
                none_generics_name_76 = come_decrement_ref_count2(none_generics_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_78 = come_decrement_ref_count2(fun_name3_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_74 = come_decrement_ref_count2(fun_name2_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
        }
        # 37 "18field.c"
        operator_fun_75=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_74);
        none_generics_name_76 = come_decrement_ref_count2(none_generics_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_78 = come_decrement_ref_count2(fun_name3_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 40 "18field.c"
        __dec_obj37=fun_name2_74;
        fun_name2_74=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 42 "18field.c"
        # 53 "18field.c"
        for(        i_85=128-1;        i_85>=1;        i_85--        ){
            # 44 "18field.c"
            new_fun_name_86=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s_v%d",fun_name2_74,i_85))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 45 "18field.c"
            operator_fun_75=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_86);
            # 51 "18field.c"
            # 47 "18field.c"
            if(operator_fun_75) {
                # 48 "18field.c"
                __dec_obj38=fun_name2_74;
                fun_name2_74=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(new_fun_name_86))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 49 "18field.c"
                new_fun_name_86 = come_decrement_ref_count2(new_fun_name_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_86 = come_decrement_ref_count2(new_fun_name_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 56 "18field.c"
        # 53 "18field.c"
        if(_if_conditional150=operator_fun_75==((void*)0),        _if_conditional150) {
            # 54 "18field.c"
            operator_fun_75=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_74);
        }
    }
    # 58 "18field.c"
    result_87=(_Bool)0;
    # 116 "18field.c"
    # 60 "18field.c"
    if(operator_fun_75) {
        # 61 "18field.c"
        come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 62 "18field.c"
        # 63 "18field.c"
        check_assign_type(((char*)(right_value125=xsprintf("\%s is assigned to",((char*)(right_value124=string_to_string(fun_name2_74)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 71 "18field.c"
        # 64 "18field.c"
        if(_if_conditional156=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap,        _if_conditional156) {
            # 65 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info);
            # 66 "18field.c"
            __dec_obj39=left_value2_89;
            left_value2_89=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 69 "18field.c"
            __dec_obj40=left_value2_89;
            left_value2_89=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 71 "18field.c"
        # 72 "18field.c"
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_74)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 80 "18field.c"
        # 73 "18field.c"
        if(_if_conditional157=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap,        _if_conditional157) {
            # 74 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info);
            # 75 "18field.c"
            __dec_obj41=middle_value2_93;
            middle_value2_93=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 78 "18field.c"
            __dec_obj42=middle_value2_93;
            middle_value2_93=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 80 "18field.c"
        # 81 "18field.c"
        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_74)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 90 "18field.c"
        # 82 "18field.c"
        if(_if_conditional158=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap,        _if_conditional158) {
            # 83 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_75->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info);
            # 84 "18field.c"
            __dec_obj43=right_value2_94;
            right_value2_94=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 87 "18field.c"
            __dec_obj44=right_value2_94;
            right_value2_94=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 90 "18field.c"
        __dec_obj45=come_value_88->c_value;
        come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_74))),((char*)(right_value137=string_to_string(left_value2_89))),((char*)(right_value138=string_to_string(middle_value2_93))),((char*)(right_value139=string_to_string(right_value2_94)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 92 "18field.c"
        result_type1_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(operator_fun_75->mResultType))));
        come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 94 "18field.c"
        result_type2_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=solve_generics(result_type1_95,generics_type_71,info))));
        come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 96 "18field.c"
        __dec_obj46=come_value_88->type;
        come_value_88->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(result_type2_96))));
        come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 97 "18field.c"
        come_value_88->var=((void*)0);
        # 103 "18field.c"
        # 99 "18field.c"
        if(result_type2_96->mHeap) {
            # 100 "18field.c"
            __dec_obj47=come_value_88->c_value;
            come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value144=append_object_to_right_values(come_value_88->c_value,(struct sType*)come_increment_ref_count(result_type2_96),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        # 103 "18field.c"
        if(_if_conditional160=result_type2_96->mGuardValue&&result_type2_96->mPointerNum>0,        _if_conditional160) {
            # 104 "18field.c"
            __dec_obj48=come_value_88->c_value;
            come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value145=make_type_name_string(result_type2_96,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_88->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        __dec_obj49=come_value_88->c_value;
        come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value147=append_stackframe(come_value_88->c_value,come_value_88->type,info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 109 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_88->c_value);
        # 111 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_88));
        # 113 "18field.c"
        result_87=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_89 = come_decrement_ref_count2(left_value2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_93 = come_decrement_ref_count2(middle_value2_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_94 = come_decrement_ref_count2(right_value2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type1_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 116 "18field.c"
    __result84__ = result_87;
    come_call_finalizer2(sType_finalize,generics_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_74 = come_decrement_ref_count2(fun_name2_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer2(sType_finalize,generics_type_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_74 = come_decrement_ref_count2(fun_name2_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sType* __result52__;
void* right_value79;
struct sType* result_47;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value86;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional42;
void* right_value89;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional46;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value91;
char* __dec_obj19;
_Bool _if_conditional48;
void* right_value92;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional49;
void* right_value100;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value101;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional64;
void* right_value108;
struct list$1charph* __dec_obj29;
_Bool _if_conditional68;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value110;
struct sNode* __dec_obj31;
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
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value112;
char* __dec_obj33;
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
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional109;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            # 2 "sType_clone"
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
            __dec_obj15=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            # 6 "sType_clone"
            __dec_obj17=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            # 7 "sType_clone"
            __dec_obj18=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional47) {
            # 8 "sType_clone"
            __dec_obj19=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional48) {
            # 9 "sType_clone"
            __dec_obj20=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            # 10 "sType_clone"
            __dec_obj24=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
            __dec_obj25=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            # 13 "sType_clone"
            __dec_obj29=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            # 14 "sType_clone"
            __dec_obj30=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
            __dec_obj31=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            __dec_obj32=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            __dec_obj33=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
            __dec_obj34=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value80;
void* right_value81;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value85;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    # 140 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 142 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_55=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 146 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_55->item)))));
                    come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
void* right_value82;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj12;
_Bool _if_conditional41;
void* right_value83;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj13;
void* right_value84;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value83 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            # 156 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj12=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj13=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_57;
                                # 173 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value87;
struct tuple1$1sTypeph* result_59;
_Bool _if_conditional45;
void* right_value88;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_59, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_59=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj16=result_59->v1;
                    result_59->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
void* right_value93;
void* right_value94;
struct list$1sNodeph* result_60;
struct list_item$1sNodeph* it_61;
_Bool _while_condtional11;
void* right_value99;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_60, 0, sizeof(struct list$1sNodeph*));
memset(&it_61, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    # 140 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 142 "./neo-c.h"
                result_60=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_61=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional11=it_61!=((void*)0),                _while_condtional11) {
                    # 146 "./neo-c.h"
                    list$1sNodeph_add(result_60,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_61->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* right_value95;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj21;
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj22;
void* right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            # 156 "./neo-c.h"
                            litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_62->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_62->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj21=litem_62->item;
                            litem_62->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
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
                                litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_63->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_63->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj22=litem_63->item;
                                litem_63->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./neo-c.h"
                                self->tail=litem_63;
                                # 173 "./neo-c.h"
                                self->head->next=litem_63;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_64->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_64->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj23=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
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
void* right_value98;
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
right_value98 = (void*)0;
memset(&result_65, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            # 2 "sNode_clone"
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        # 3 "sNode_clone"
                        result_65=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* right_value102;
void* right_value103;
struct list$1charph* result_66;
struct list_item$1charph* it_67;
_Bool _while_condtional12;
void* right_value107;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&it_67, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    # 140 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 142 "./neo-c.h"
                result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_67=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional12=it_67!=((void*)0),                _while_condtional12) {
                    # 146 "./neo-c.h"
                    list$1charph_add(result_66,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_67->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value104;
struct list_item$1charph* litem_68;
char* __dec_obj26;
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_69;
char* __dec_obj27;
void* right_value106;
struct list_item$1charph* litem_70;
char* __dec_obj28;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1charph*));
right_value105 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            # 156 "./neo-c.h"
                            litem_68=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_68->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_68->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj26=litem_68->item;
                            litem_68->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                                litem_69=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_69->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_69->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj27=litem_69->item;
                                litem_69->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_69;
                                # 173 "./neo-c.h"
                                self->head->next=litem_69;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_70=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_70->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_70->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj28=litem_70->item;
                                litem_70->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional112;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional112=self==((void*)0),        _if_conditional112) {
            # 365 "./neo-c.h"
            __result70__ = 0;
            return __result70__;
        }
        # 367 "./neo-c.h"
        __result71__ = self->len;
        return __result71__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_79;
unsigned int it_80;
_Bool _while_condtional13;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sGenericsFun* __result72__;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_79, 0, sizeof(unsigned int));
memset(&it_80, 0, sizeof(unsigned int));
            # 1226 "./neo-c.h"
            hash_79=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./neo-c.h"
            it_80=hash_79;
            # 1251 "./neo-c.h"
            while(_while_condtional13=(_Bool)1,            _while_condtional13) {
                # 1249 "./neo-c.h"
                # 1230 "./neo-c.h"
                if(_if_conditional114=self->item_existance[it_80],                _if_conditional114) {
                    # 1237 "./neo-c.h"
                    # 1232 "./neo-c.h"
                    if(_if_conditional115=string_equals(self->keys[it_80],key),                    _if_conditional115) {
                        # 1234 "./neo-c.h"
                        __result72__ = __result_obj__ = self->items[it_80];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    # 1237 "./neo-c.h"
                    it_80++;
                    # 1245 "./neo-c.h"
                    # 1239 "./neo-c.h"
                    if(_if_conditional126=it_80>=self->size,                    _if_conditional126) {
                        # 1240 "./neo-c.h"
                        it_80=0;
                    }
                    else {
                        # 1245 "./neo-c.h"
                        # 1242 "./neo-c.h"
                        if(_if_conditional127=it_80==hash_79,                        _if_conditional127) {
                            # 1243 "./neo-c.h"
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    # 1247 "./neo-c.h"
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            # 1251 "./neo-c.h"
            __result75__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sGenericsFun_finalize"
                            # 0 "sGenericsFun_finalize"
                            if(_if_conditional116=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional116) {
                                # 0 "sGenericsFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sGenericsFun_finalize"
                            # 1 "sGenericsFun_finalize"
                            if(_if_conditional117=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional117) {
                                # 1 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sGenericsFun_finalize"
                            # 2 "sGenericsFun_finalize"
                            if(_if_conditional118=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional118) {
                                # 2 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sGenericsFun_finalize"
                            # 3 "sGenericsFun_finalize"
                            if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional119) {
                                # 3 "sGenericsFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sGenericsFun_finalize"
                            # 4 "sGenericsFun_finalize"
                            if(_if_conditional120=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional120) {
                                # 4 "sGenericsFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sGenericsFun_finalize"
                            # 5 "sGenericsFun_finalize"
                            if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional121) {
                                # 5 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sGenericsFun_finalize"
                            # 6 "sGenericsFun_finalize"
                            if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional122) {
                                # 6 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sGenericsFun_finalize"
                            # 7 "sGenericsFun_finalize"
                            if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional123) {
                                # 7 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sGenericsFun_finalize"
                            # 8 "sGenericsFun_finalize"
                            if(_if_conditional124=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional124) {
                                # 8 "sGenericsFun_finalize"
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sGenericsFun_finalize"
                            # 9 "sGenericsFun_finalize"
                            if(_if_conditional125=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional125) {
                                # 9 "sGenericsFun_finalize"
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_82;
unsigned int hash_83;
unsigned int it_84;
_Bool _while_condtional14;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sFun* __result77__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sFun* __result78__;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_82, 0, sizeof(struct sFun*));
memset(&hash_83, 0, sizeof(unsigned int));
memset(&it_84, 0, sizeof(unsigned int));
            # 1544 "./neo-c.h"
            # 1545 "./neo-c.h"
            memset(&default_value_82,0,sizeof(struct sFun*));
            # 1547 "./neo-c.h"
            hash_83=string_get_hash_key(((char*)key))%self->size;
            # 1548 "./neo-c.h"
            it_84=hash_83;
            # 1572 "./neo-c.h"
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                # 1570 "./neo-c.h"
                # 1551 "./neo-c.h"
                if(_if_conditional130=self->item_existance[it_84],                _if_conditional130) {
                    # 1558 "./neo-c.h"
                    # 1553 "./neo-c.h"
                    if(_if_conditional131=string_equals(self->keys[it_84],key),                    _if_conditional131) {
                        # 1555 "./neo-c.h"
                        __result77__ = __result_obj__ = self->items[it_84];
                        come_call_finalizer2(sFun_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result77__;
                    }
                    # 1558 "./neo-c.h"
                    it_84++;
                    # 1566 "./neo-c.h"
                    # 1560 "./neo-c.h"
                    if(_if_conditional147=it_84>=self->size,                    _if_conditional147) {
                        # 1561 "./neo-c.h"
                        it_84=0;
                    }
                    else {
                        # 1566 "./neo-c.h"
                        # 1563 "./neo-c.h"
                        if(_if_conditional148=it_84==hash_83,                        _if_conditional148) {
                            # 1564 "./neo-c.h"
                            __result78__ = __result_obj__ = default_value_82;
                            come_call_finalizer2(sFun_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result78__;
                        }
                    }
                }
                else {
                    # 1568 "./neo-c.h"
                    __result79__ = __result_obj__ = default_value_82;
                    come_call_finalizer2(sFun_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
            }
            # 1572 "./neo-c.h"
            __result80__ = __result_obj__ = default_value_82;
            come_call_finalizer2(sFun_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer2(sFun_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sFun_finalize"
                            # 0 "sFun_finalize"
                            if(_if_conditional132=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional132) {
                                # 0 "sFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sFun_finalize"
                            # 1 "sFun_finalize"
                            if(_if_conditional133=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional133) {
                                # 1 "sFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sFun_finalize"
                            # 2 "sFun_finalize"
                            if(_if_conditional134=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional134) {
                                # 2 "sFun_finalize"
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sFun_finalize"
                            # 3 "sFun_finalize"
                            if(_if_conditional135=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional135) {
                                # 3 "sFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sFun_finalize"
                            # 4 "sFun_finalize"
                            if(_if_conditional136=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional136) {
                                # 4 "sFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sFun_finalize"
                            # 5 "sFun_finalize"
                            if(_if_conditional137=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional137) {
                                # 5 "sFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sFun_finalize"
                            # 6 "sFun_finalize"
                            if(_if_conditional138=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional138) {
                                # 6 "sFun_finalize"
                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sFun_finalize"
                            # 7 "sFun_finalize"
                            if(_if_conditional141=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional141) {
                                # 7 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sFun_finalize"
                            # 8 "sFun_finalize"
                            if(_if_conditional142=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional142) {
                                # 8 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sFun_finalize"
                            # 9 "sFun_finalize"
                            if(_if_conditional143=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional143) {
                                # 9 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 11 "sFun_finalize"
                            # 10 "sFun_finalize"
                            if(_if_conditional144=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional144) {
                                # 10 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 12 "sFun_finalize"
                            # 11 "sFun_finalize"
                            if(_if_conditional145=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional145) {
                                # 11 "sFun_finalize"
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 13 "sFun_finalize"
                            # 12 "sFun_finalize"
                            if(_if_conditional146=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional146) {
                                # 12 "sFun_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sBlock_finalize"
                                    # 0 "sBlock_finalize"
                                    if(_if_conditional139=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional139) {
                                        # 0 "sBlock_finalize"
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sBlock_finalize"
                                    # 1 "sBlock_finalize"
                                    if(_if_conditional140=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional140) {
                                        # 1 "sBlock_finalize"
                                        come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional152=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional152) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional153=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional153) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional154;
struct list_item$1sTypeph* it_90;
int i_91;
_Bool _while_condtional15;
_Bool _if_conditional155;
struct sType* __result81__;
struct sType* default_value_92;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sType*));
            # 686 "./neo-c.h"
            # 682 "./neo-c.h"
            if(_if_conditional154=position<0,            _if_conditional154) {
                # 683 "./neo-c.h"
                position+=self->len;
            }
            # 686 "./neo-c.h"
            it_90=self->head;
            # 687 "./neo-c.h"
            i_91=0;
            # 694 "./neo-c.h"
            while(_while_condtional15=it_90!=((void*)0),            _while_condtional15) {
                # 692 "./neo-c.h"
                # 689 "./neo-c.h"
                if(_if_conditional155=position==i_91,                _if_conditional155) {
                    # 690 "./neo-c.h"
                    __result81__ = __result_obj__ = it_90->item;
                    return __result81__;
                }
                # 692 "./neo-c.h"
                it_90=it_90->next;
                # 693 "./neo-c.h"
                i_91++;
            }
            # 696 "./neo-c.h"
            # 697 "./neo-c.h"
            memset(&default_value_92,0,sizeof(struct sType*));
            # 698 "./neo-c.h"
            __result82__ = __result_obj__ = default_value_92;
            come_call_finalizer2(sType_finalize,default_value_92, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer2(sType_finalize,default_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional161;
void* right_value148;
struct list_item$1CVALUEph* litem_97;
struct CVALUE* __dec_obj50;
_Bool _if_conditional163;
void* right_value149;
struct list_item$1CVALUEph* litem_98;
struct CVALUE* __dec_obj51;
void* right_value150;
struct list_item$1CVALUEph* litem_99;
struct CVALUE* __dec_obj52;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1CVALUEph*));
right_value149 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1CVALUEph*));
right_value150 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1CVALUEph*));
            # 256 "./neo-c.h"
            # 225 "./neo-c.h"
            if(_if_conditional161=self->len==0,            _if_conditional161) {
                # 226 "./neo-c.h"
                litem_97=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./neo-c.h"
                litem_97->prev=((void*)0);
                # 229 "./neo-c.h"
                litem_97->next=((void*)0);
                # 230 "./neo-c.h"
                __dec_obj50=litem_97->item;
                litem_97->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 232 "./neo-c.h"
                self->tail=litem_97;
                # 233 "./neo-c.h"
                self->head=litem_97;
            }
            else {
                # 256 "./neo-c.h"
                # 235 "./neo-c.h"
                if(_if_conditional163=self->len==1,                _if_conditional163) {
                    # 236 "./neo-c.h"
                    litem_98=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./neo-c.h"
                    litem_98->prev=self->head;
                    # 239 "./neo-c.h"
                    litem_98->next=((void*)0);
                    # 240 "./neo-c.h"
                    __dec_obj51=litem_98->item;
                    litem_98->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 242 "./neo-c.h"
                    self->tail=litem_98;
                    # 243 "./neo-c.h"
                    self->head->next=litem_98;
                }
                else {
                    # 246 "./neo-c.h"
                    litem_99=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./neo-c.h"
                    litem_99->prev=self->tail;
                    # 249 "./neo-c.h"
                    litem_99->next=((void*)0);
                    # 250 "./neo-c.h"
                    __dec_obj52=litem_99->item;
                    litem_99->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 252 "./neo-c.h"
                    self->tail->next=litem_99;
                    # 253 "./neo-c.h"
                    self->tail=litem_99;
                }
            }
            # 256 "./neo-c.h"
            self->len++;
            # 258 "./neo-c.h"
            __result83__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional162=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional162) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value151;
char* __dec_obj53;
void* right_value152;
struct sNode* __dec_obj54;
void* right_value153;
struct sNode* __dec_obj55;
void* right_value154;
char* __dec_obj56;
struct sStoreFieldNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    # 131 "18field.c"
    self->sline=info->sline;
    # 132 "18field.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 134 "18field.c"
    __dec_obj54=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(left))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 135 "18field.c"
    __dec_obj55=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(right))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 136 "18field.c"
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 138 "18field.c"
    __result85__ = __result_obj__ = self;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    # 143 "18field.c"
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
void* right_value155;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    # 148 "18field.c"
    __result87__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sStoreFieldNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_100;
struct sNode* right_101;
void* right_value156;
char* name_102;
_Bool _if_conditional168;
_Bool __result88__;
void* right_value157;
struct CVALUE* left_value_103;
_Bool _if_conditional169;
void* right_value158;
void* right_value159;
char* __dec_obj57;
_Bool _if_conditional170;
_Bool __result89__;
void* right_value160;
struct CVALUE* right_value_104;
struct sType* right_type_105;
struct sType* left_type_106;
void* right_value161;
struct sType* left_type2_107;
struct sClass* klass_108;
struct sType* field_type_114;
int index_115;
char* child_field_name_116;
_Bool _if_conditional182;
_Bool __result94__;
struct list$1tuple2$2charphsTypephph* o2_saved_117;
struct tuple2$2charphsTypeph* field_120;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_123;
struct sType* field_type2_124;
_Bool _if_conditional187;
void* right_value162;
struct sType* __dec_obj58;
_Bool _if_conditional189;
struct list$1tuple2$2charphsTypephph* o2_saved_125;
struct tuple2$2charphsTypeph* field_126;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_127;
struct sType* field_type2_128;
struct sClass* klass2_129;
struct list$1tuple2$2charphsTypephph* o2_saved_130;
struct tuple2$2charphsTypeph* field2_131;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_132;
struct sType* field_type3_133;
_Bool _if_conditional190;
void* right_value163;
char* __dec_obj59;
void* right_value164;
struct sType* __dec_obj60;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value165;
struct sType* __dec_obj61;
_Bool _if_conditional193;
_Bool __result104__;
void* right_value166;
struct CVALUE* come_value_134;
void* right_value167;
void* right_value168;
void* right_value169;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool __result105__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value170;
char* c_value_135;
void* right_value171;
char* __dec_obj62;
void* right_value172;
char* c_value_136;
void* right_value173;
char* __dec_obj63;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value174;
char* c_value_137;
void* right_value175;
char* __dec_obj64;
void* right_value176;
char* c_value_138;
void* right_value177;
char* __dec_obj65;
void* right_value178;
char* __dec_obj66;
_Bool __result106__;
int right_value_id_139;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value179;
char* c_value_140;
void* right_value180;
char* __dec_obj67;
void* right_value181;
char* c_value_141;
void* right_value182;
char* __dec_obj68;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value183;
char* c_value_142;
void* right_value184;
char* __dec_obj69;
void* right_value185;
char* c_value_143;
void* right_value186;
char* __dec_obj70;
_Bool __result107__;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value187;
char* __dec_obj71;
void* right_value188;
char* __dec_obj72;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value189;
char* __dec_obj73;
void* right_value190;
char* __dec_obj74;
_Bool __result108__;
void* right_value191;
struct sType* __dec_obj75;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_100, 0, sizeof(struct sNode*));
memset(&right_101, 0, sizeof(struct sNode*));
right_value156 = (void*)0;
memset(&name_102, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&left_value_103, 0, sizeof(struct CVALUE*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&right_value_104, 0, sizeof(struct CVALUE*));
memset(&right_type_105, 0, sizeof(struct sType*));
memset(&left_type_106, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&left_type2_107, 0, sizeof(struct sType*));
memset(&klass_108, 0, sizeof(struct sClass*));
memset(&field_type_114, 0, sizeof(struct sType*));
memset(&index_115, 0, sizeof(int));
memset(&child_field_name_116, 0, sizeof(char*));
memset(&o2_saved_117, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_120, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_123, 0, sizeof(char*));
memset(&field_type2_124, 0, sizeof(struct sType*));
memset(&field_name_123, 0, sizeof(char*));
memset(&field_type2_124, 0, sizeof(struct sType*));
right_value162 = (void*)0;
memset(&o2_saved_125, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_126, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_127, 0, sizeof(char*));
memset(&field_type2_128, 0, sizeof(struct sType*));
memset(&field_name_127, 0, sizeof(char*));
memset(&field_type2_128, 0, sizeof(struct sType*));
memset(&klass2_129, 0, sizeof(struct sClass*));
memset(&o2_saved_130, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_131, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_132, 0, sizeof(char*));
memset(&field_type3_133, 0, sizeof(struct sType*));
memset(&field_name2_132, 0, sizeof(char*));
memset(&field_type3_133, 0, sizeof(struct sType*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&come_value_134, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&c_value_135, 0, sizeof(char*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&c_value_136, 0, sizeof(char*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&c_value_137, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&c_value_138, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&right_value_id_139, 0, sizeof(int));
right_value179 = (void*)0;
memset(&c_value_140, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&c_value_141, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&c_value_142, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&c_value_143, 0, sizeof(char*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    # 153 "18field.c"
    left_100=self->mLeft;
    # 154 "18field.c"
    right_101=self->mRight;
    # 155 "18field.c"
    name_102=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(self->mName))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 161 "18field.c"
    # 157 "18field.c"
    if(_if_conditional168=!node_compile(left_100,info),    _if_conditional168) {
        # 158 "18field.c"
        __result88__ = (_Bool)0;
        name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    # 161 "18field.c"
    left_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 162 "18field.c"
    dec_stack_ptr(1,info);
    # 168 "18field.c"
    # 164 "18field.c"
    if(_if_conditional169=gComeDebug&&left_value_103->type->mPointerNum>0,    _if_conditional169) {
        # 165 "18field.c"
        __dec_obj57=left_value_103->c_value;
        left_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value158=make_type_name_string(left_value_103->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_103->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 172 "18field.c"
    # 168 "18field.c"
    if(_if_conditional170=!node_compile(right_101,info),    _if_conditional170) {
        # 169 "18field.c"
        __result89__ = (_Bool)0;
        name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result89__;
    }
    # 172 "18field.c"
    right_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 173 "18field.c"
    right_type_105=right_value_104->type;
    # 175 "18field.c"
    dec_stack_ptr(1,info);
    # 177 "18field.c"
    left_type_106=left_value_103->type;
    # 179 "18field.c"
    left_type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=solve_generics(left_type_106,left_type_106,info))));
    come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 181 "18field.c"
    klass_108=left_type2_107->mClass;
    # 182 "18field.c"
    klass_108=map$2charphsClassphp_operator_load_element(info->classes,klass_108->mName);
    # 184 "18field.c"
    field_type_114=((void*)0);
    # 185 "18field.c"
    index_115=0;
    # 186 "18field.c"
    child_field_name_116=((void*)0);
    # 187 "18field.c"
    klass_108=map$2charphsClassphp_operator_load_element(info->classes,klass_108->mName);
    # 194 "18field.c"
    # 189 "18field.c"
    if(_if_conditional182=klass_108->mFields==((void*)0),    _if_conditional182) {
        # 190 "18field.c"
        err_msg(info,"%s fields are null",klass_108->mName);
        # 191 "18field.c"
        __result94__ = (_Bool)0;
        name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result94__;
    }
    # 205 "18field.c"
    for(    o2_saved_117=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_108->mFields)),field_120=list$1tuple2$2charphsTypephph_begin((o2_saved_117));    !list$1tuple2$2charphsTypephph_end((o2_saved_117));    field_120=list$1tuple2$2charphsTypephph_next((o2_saved_117))    ){
        # 195 "18field.c"
        multiple_assign_var1=field_120;
        field_name_123=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_124=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 200 "18field.c"
        # 197 "18field.c"
        if(_if_conditional187=string_operator_equals(field_name_123,name_102),        _if_conditional187) {
            # 198 "18field.c"
            __dec_obj58=field_type_114;
            field_type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(field_type2_124))));
            come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 199 "18field.c"
            field_name_123 = come_decrement_ref_count2(field_name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 202 "18field.c"
        index_115++;
        field_name_123 = come_decrement_ref_count2(field_name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 240 "18field.c"
    # 205 "18field.c"
    if(_if_conditional189=index_115==list$1tuple2$2charphsTypephph_length(klass_108->mFields),    _if_conditional189) {
        # 206 "18field.c"
        index_115=0;
        # 234 "18field.c"
        for(        o2_saved_125=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_108->mFields)),field_126=list$1tuple2$2charphsTypephph_begin((o2_saved_125));        !list$1tuple2$2charphsTypephph_end((o2_saved_125));        field_126=list$1tuple2$2charphsTypephph_next((o2_saved_125))        ){
            # 208 "18field.c"
            multiple_assign_var2=field_126;
            field_name_127=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_128=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            # 210 "18field.c"
            klass2_129=field_type2_128->mClass;
            # 222 "18field.c"
            for(            o2_saved_130=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_129->mFields)),field2_131=list$1tuple2$2charphsTypephph_begin((o2_saved_130));            !list$1tuple2$2charphsTypephph_end((o2_saved_130));            field2_131=list$1tuple2$2charphsTypephph_next((o2_saved_130))            ){
                # 213 "18field.c"
                multiple_assign_var3=field2_131;
                field_name2_132=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_133=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                # 220 "18field.c"
                # 215 "18field.c"
                if(_if_conditional190=string_operator_equals(field_name2_132,name_102),                _if_conditional190) {
                    # 216 "18field.c"
                    __dec_obj59=child_field_name_116;
                    child_field_name_116=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(field_name_127))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 217 "18field.c"
                    __dec_obj60=field_type_114;
                    field_type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(field_type3_133))));
                    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 218 "18field.c"
                    field_name2_132 = come_decrement_ref_count2(field_name2_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_132 = come_decrement_ref_count2(field_name2_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 226 "18field.c"
            # 222 "18field.c"
            if(child_field_name_116) {
                # 223 "18field.c"
                field_name_127 = come_decrement_ref_count2(field_name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 229 "18field.c"
            # 226 "18field.c"
            if(_if_conditional192=string_operator_equals(field_name_127,name_102),            _if_conditional192) {
                # 227 "18field.c"
                __dec_obj61=field_type_114;
                field_type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(field_type2_128))));
                come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "18field.c"
                field_name_127 = come_decrement_ref_count2(field_name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 231 "18field.c"
            index_115++;
            field_name_127 = come_decrement_ref_count2(field_name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 238 "18field.c"
        # 234 "18field.c"
        if(_if_conditional193=index_115==list$1tuple2$2charphsTypephph_length(klass_108->mFields),        _if_conditional193) {
            # 235 "18field.c"
            err_msg(info,"field not found(%s) in %s(1)",name_102,klass_108->mName);
            # 236 "18field.c"
            __result104__ = (_Bool)0;
            name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result104__;
        }
    }
    # 240 "18field.c"
    come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 240, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 242 "18field.c"
    check_assign_type(((char*)(right_value168=xsprintf("\%s is assigned to",((char*)(right_value167=string_to_string(name_102)))))),field_type_114,right_type_105,right_value_104,(_Bool)0,(_Bool)1,info);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 244 "18field.c"
    right_type_105=((struct sType*)(right_value169=sType_clone(right_value_104->type)));
    come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 258 "18field.c"
    # 246 "18field.c"
    if(_if_conditional194=field_type_114->mHeap&&!right_value_104->type->mHeap,    _if_conditional194) {
        # 257 "18field.c"
        # 247 "18field.c"
        if(_if_conditional195=string_operator_equals(right_value_104->type->mClass->mName,"void")&&right_value_104->type->mPointerNum==1,        _if_conditional195) {
        }
        else {
            # 256 "18field.c"
            # 251 "18field.c"
            if(_if_conditional196=!right_value_104->type->mDelegate&&!right_value_104->type->mShare&&!gComeGC,            _if_conditional196) {
                # 252 "18field.c"
                err_msg(info,"require right value as heap object(%s)(1)",name_102);
                # 253 "18field.c"
                printf("right type is %s pointer num %d heap %d\n",right_value_104->type->mClass->mName,right_value_104->type->mPointerNum,right_value_104->type->mHeap);
                # 254 "18field.c"
                __result105__ = (_Bool)0;
                name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result105__;
            }
        }
    }
    # 352 "18field.c"
    # 258 "18field.c"
    if(_if_conditional197=field_type_114->mHeap&&right_type_105->mHeap&&field_type_114->mPointerNum>0&&right_type_105->mPointerNum>0,    _if_conditional197) {
        # 292 "18field.c"
        # 260 "18field.c"
        if(_if_conditional198=left_value_103->type->mPointerNum==1,        _if_conditional198) {
            # 273 "18field.c"
            # 261 "18field.c"
            if(child_field_name_116) {
                # 262 "18field.c"
                c_value_135=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s->%s.%s",left_value_103->c_value,child_field_name_116,name_102))));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 263 "18field.c"
                decrement_ref_count_object(field_type_114,c_value_135,info,(_Bool)0);
                # 264 "18field.c"
                std_move(field_type_114,right_type_105,right_value_104,info);
                # 265 "18field.c"
                __dec_obj62=come_value_134->c_value;
                come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->%s.%s=%s",left_value_103->c_value,child_field_name_116,name_102,right_value_104->c_value))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_135 = come_decrement_ref_count2(c_value_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 268 "18field.c"
                c_value_136=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s",left_value_103->c_value,name_102))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 269 "18field.c"
                decrement_ref_count_object(field_type_114,c_value_136,info,(_Bool)0);
                # 270 "18field.c"
                std_move(field_type_114,right_type_105,right_value_104,info);
                # 271 "18field.c"
                __dec_obj63=come_value_134->c_value;
                come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s->%s=%s",left_value_103->c_value,name_102,right_value_104->c_value))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_136 = come_decrement_ref_count2(c_value_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 292 "18field.c"
            # 274 "18field.c"
            if(_if_conditional200=left_value_103->type->mPointerNum==0,            _if_conditional200) {
                # 287 "18field.c"
                # 275 "18field.c"
                if(child_field_name_116) {
                    # 276 "18field.c"
                    c_value_137=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.%s.%s",left_value_103->c_value,child_field_name_116,name_102))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 277 "18field.c"
                    decrement_ref_count_object(field_type_114,c_value_137,info,(_Bool)0);
                    # 278 "18field.c"
                    std_move(field_type_114,right_type_105,right_value_104,info);
                    # 279 "18field.c"
                    __dec_obj64=come_value_134->c_value;
                    come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s.%s.%s=%s",left_value_103->c_value,child_field_name_116,name_102,right_value_104->c_value))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_137 = come_decrement_ref_count2(c_value_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 282 "18field.c"
                    c_value_138=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s.%s",left_value_103->c_value,name_102))));
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 283 "18field.c"
                    decrement_ref_count_object(field_type_114,c_value_138,info,(_Bool)0);
                    # 284 "18field.c"
                    __dec_obj65=right_value_104->c_value;
                    right_value_104->c_value=(char*)come_increment_ref_count(((char*)(right_value177=increment_ref_count_object(right_value_104->type,right_value_104->c_value,info))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 285 "18field.c"
                    __dec_obj66=come_value_134->c_value;
                    come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.%s=%s",left_value_103->c_value,name_102,right_value_104->c_value))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_138 = come_decrement_ref_count2(c_value_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 289 "18field.c"
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_102,left_value_103->type->mPointerNum);
                # 290 "18field.c"
                __result106__ = (_Bool)0;
                name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result106__;
            }
        }
        # 292 "18field.c"
        right_value_id_139=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_104->c_value));
        # 297 "18field.c"
        # 294 "18field.c"
        if(_if_conditional202=right_value_id_139!=-1,        _if_conditional202) {
            # 295 "18field.c"
            remove_object_from_right_values(right_value_id_139,info);
        }
    }
    else {
        # 352 "18field.c"
        # 298 "18field.c"
        if(_if_conditional203=field_type_114->mHeap&&field_type_114->mPointerNum>0&&right_type_105->mPointerNum>0&&string_operator_equals(right_type_105->mClass->mName,"void"),        _if_conditional203) {
            # 328 "18field.c"
            # 300 "18field.c"
            if(_if_conditional204=left_value_103->type->mPointerNum==1,            _if_conditional204) {
                # 311 "18field.c"
                # 301 "18field.c"
                if(child_field_name_116) {
                    # 302 "18field.c"
                    c_value_140=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s->%s.%s",left_value_103->c_value,child_field_name_116,name_102))));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 303 "18field.c"
                    decrement_ref_count_object(field_type_114,c_value_140,info,(_Bool)0);
                    # 304 "18field.c"
                    __dec_obj67=come_value_134->c_value;
                    come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s->%s.%s=%s",left_value_103->c_value,child_field_name_116,name_102,right_value_104->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_140 = come_decrement_ref_count2(c_value_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 307 "18field.c"
                    c_value_141=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s->%s",left_value_103->c_value,name_102))));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 308 "18field.c"
                    decrement_ref_count_object(field_type_114,c_value_141,info,(_Bool)0);
                    # 309 "18field.c"
                    __dec_obj68=come_value_134->c_value;
                    come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s->%s=%s",left_value_103->c_value,name_102,right_value_104->c_value))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_141 = come_decrement_ref_count2(c_value_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 328 "18field.c"
                # 312 "18field.c"
                if(_if_conditional206=left_value_103->type->mPointerNum==0,                _if_conditional206) {
                    # 323 "18field.c"
                    # 313 "18field.c"
                    if(child_field_name_116) {
                        # 314 "18field.c"
                        c_value_142=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s.%s.%s",left_value_103->c_value,child_field_name_116,name_102))));
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 315 "18field.c"
                        decrement_ref_count_object(field_type_114,c_value_142,info,(_Bool)0);
                        # 316 "18field.c"
                        __dec_obj69=come_value_134->c_value;
                        come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s.%s.%s=%s",left_value_103->c_value,child_field_name_116,name_102,right_value_104->c_value))));
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_142 = come_decrement_ref_count2(c_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 319 "18field.c"
                        c_value_143=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s.%s",left_value_103->c_value,name_102))));
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 320 "18field.c"
                        decrement_ref_count_object(field_type_114,c_value_143,info,(_Bool)0);
                        # 321 "18field.c"
                        __dec_obj70=come_value_134->c_value;
                        come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s.%s=%s",left_value_103->c_value,name_102,right_value_104->c_value))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    # 325 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_102,left_value_103->type->mPointerNum);
                    # 326 "18field.c"
                    __result107__ = (_Bool)0;
                    name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result107__;
                }
            }
        }
        else {
            # 350 "18field.c"
            # 330 "18field.c"
            if(_if_conditional208=left_value_103->type->mPointerNum==1,            _if_conditional208) {
                # 337 "18field.c"
                # 331 "18field.c"
                if(child_field_name_116) {
                    # 332 "18field.c"
                    __dec_obj71=come_value_134->c_value;
                    come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s->%s.%s=%s",left_value_103->c_value,child_field_name_116,name_102,right_value_104->c_value))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 335 "18field.c"
                    __dec_obj72=come_value_134->c_value;
                    come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s->%s=%s",left_value_103->c_value,name_102,right_value_104->c_value))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 350 "18field.c"
                # 338 "18field.c"
                if(_if_conditional210=left_value_103->type->mPointerNum==0,                _if_conditional210) {
                    # 345 "18field.c"
                    # 339 "18field.c"
                    if(child_field_name_116) {
                        # 340 "18field.c"
                        __dec_obj73=come_value_134->c_value;
                        come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s.%s.%s=%s",left_value_103->c_value,child_field_name_116,name_102,right_value_104->c_value))));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 343 "18field.c"
                        __dec_obj74=come_value_134->c_value;
                        come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s.%s=%s",left_value_103->c_value,name_102,right_value_104->c_value))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    # 347 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_102,left_value_103->type->mPointerNum);
                    # 348 "18field.c"
                    __result108__ = (_Bool)0;
                    name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result108__;
                }
            }
        }
    }
    # 352 "18field.c"
    __dec_obj75=come_value_134->type;
    come_value_134->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(field_type_114))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 353 "18field.c"
    come_value_134->var=((void*)0);
    # 355 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_134));
    # 357 "18field.c"
    add_come_last_code(info,"%s;\n",come_value_134->c_value);
    # 359 "18field.c"
    __result109__ = (_Bool)1;
    name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result109__;
    name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_116 = come_decrement_ref_count2(child_field_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_109;
unsigned int hash_110;
unsigned int it_111;
_Bool _while_condtional16;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sClass* __result90__;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct sClass* __result91__;
struct sClass* __result92__;
struct sClass* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_109, 0, sizeof(struct sClass*));
memset(&hash_110, 0, sizeof(unsigned int));
memset(&it_111, 0, sizeof(unsigned int));
        # 1544 "./neo-c.h"
        # 1545 "./neo-c.h"
        memset(&default_value_109,0,sizeof(struct sClass*));
        # 1547 "./neo-c.h"
        hash_110=string_get_hash_key(((char*)key))%self->size;
        # 1548 "./neo-c.h"
        it_111=hash_110;
        # 1572 "./neo-c.h"
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            # 1570 "./neo-c.h"
            # 1551 "./neo-c.h"
            if(_if_conditional171=self->item_existance[it_111],            _if_conditional171) {
                # 1558 "./neo-c.h"
                # 1553 "./neo-c.h"
                if(_if_conditional172=string_equals(self->keys[it_111],key),                _if_conditional172) {
                    # 1555 "./neo-c.h"
                    __result90__ = __result_obj__ = self->items[it_111];
                    come_call_finalizer2(sClass_finalize,default_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result90__;
                }
                # 1558 "./neo-c.h"
                it_111++;
                # 1566 "./neo-c.h"
                # 1560 "./neo-c.h"
                if(_if_conditional180=it_111>=self->size,                _if_conditional180) {
                    # 1561 "./neo-c.h"
                    it_111=0;
                }
                else {
                    # 1566 "./neo-c.h"
                    # 1563 "./neo-c.h"
                    if(_if_conditional181=it_111==hash_110,                    _if_conditional181) {
                        # 1564 "./neo-c.h"
                        __result91__ = __result_obj__ = default_value_109;
                        come_call_finalizer2(sClass_finalize,default_value_109, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result91__;
                    }
                }
            }
            else {
                # 1568 "./neo-c.h"
                __result92__ = __result_obj__ = default_value_109;
                come_call_finalizer2(sClass_finalize,default_value_109, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result92__;
            }
        }
        # 1572 "./neo-c.h"
        __result93__ = __result_obj__ = default_value_109;
        come_call_finalizer2(sClass_finalize,default_value_109, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer2(sClass_finalize,default_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional173=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional173) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional174=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional174) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional178=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional178) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sClass_finalize"
                        # 3 "sClass_finalize"
                        if(_if_conditional179=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional179) {
                            # 3 "sClass_finalize"
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_112;
_Bool _while_condtional17;
struct list_item$1tuple2$2charphsTypephph* prev_it_113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_113, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./neo-c.h"
                                it_112=self->head;
                                # 129 "./neo-c.h"
                                while(_while_condtional17=it_112!=((void*)0),                                _while_condtional17) {
                                    # 125 "./neo-c.h"
                                    prev_it_113=it_112;
                                    # 126 "./neo-c.h"
                                    it_112=it_112->next;
                                    # 127 "./neo-c.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional175=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional175) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional176=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional176) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional177=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional177) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional183;
struct tuple2$2charphsTypeph* result_118;
struct tuple2$2charphsTypeph* __result95__;
_Bool _if_conditional184;
struct tuple2$2charphsTypeph* __result96__;
struct tuple2$2charphsTypeph* result_119;
struct tuple2$2charphsTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_118, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_119, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional183=self==((void*)0),        _if_conditional183) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_118,0,sizeof(struct tuple2$2charphsTypeph*));
            # 288 "./neo-c.h"
            __result95__ = __result_obj__ = result_118;
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
        memset(&result_119,0,sizeof(struct tuple2$2charphsTypeph*));
        # 298 "./neo-c.h"
        __result97__ = __result_obj__ = result_119;
        return __result97__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result98__ = self==((void*)0)||self->it==((void*)0);
        return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct tuple2$2charphsTypeph* result_121;
struct tuple2$2charphsTypeph* __result99__;
_Bool _if_conditional186;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* result_122;
struct tuple2$2charphsTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_122, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional185=self==((void*)0)||self->it==((void*)0),        _if_conditional185) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_121,0,sizeof(struct tuple2$2charphsTypeph*));
            # 305 "./neo-c.h"
            __result99__ = __result_obj__ = result_121;
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
        memset(&result_122,0,sizeof(struct tuple2$2charphsTypeph*));
        # 316 "./neo-c.h"
        __result101__ = __result_obj__ = result_122;
        return __result101__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional188;
int __result102__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional188=self==((void*)0),        _if_conditional188) {
            # 365 "./neo-c.h"
            __result102__ = 0;
            return __result102__;
        }
        # 367 "./neo-c.h"
        __result103__ = self->len;
        return __result103__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    # 364 "18field.c"
    __result110__ = self->sline;
    return __result110__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    # 369 "18field.c"
    __result111__ = __result_obj__ = ((char*)(right_value192=__builtin_string(self->sname)));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __dec_obj76;
void* right_value194;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
right_value194 = (void*)0;
    # 385 "18field.c"
    self->sline=info->sline;
    # 386 "18field.c"
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 388 "18field.c"
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 389 "18field.c"
    self->mOnlyNullCecker=only_null_checker;
    # 391 "18field.c"
    __result112__ = __result_obj__ = self;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 396 "18field.c"
    __result113__ = (_Bool)0;
    return __result113__;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
void* right_value195;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    # 401 "18field.c"
    __result114__ = __result_obj__ = ((char*)(right_value195=__builtin_string("sNullCheckNode")));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_144;
_Bool _if_conditional214;
_Bool __result115__;
void* right_value196;
struct CVALUE* left_value_145;
_Bool _if_conditional215;
void* right_value197;
char* method_name_146;
_Bool _if_conditional220;
struct sType* obj_type_149;
_Bool _if_conditional221;
struct sType* obj_type2_150;
void* right_value198;
void* right_value199;
char* __dec_obj78;
struct sFun* fun_151;
_Bool _if_conditional222;
_Bool __result120__;
void* right_value200;
struct sType* type_152;
void* right_value201;
struct CVALUE* come_value_153;
void* right_value202;
char* __dec_obj79;
void* right_value203;
struct sType* __dec_obj80;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value204;
struct CVALUE* come_value_154;
void* right_value205;
void* right_value206;
char* __dec_obj81;
void* right_value207;
struct sType* __dec_obj82;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_144, 0, sizeof(struct sNode*));
right_value196 = (void*)0;
memset(&left_value_145, 0, sizeof(struct CVALUE*));
right_value197 = (void*)0;
memset(&method_name_146, 0, sizeof(char*));
memset(&obj_type_149, 0, sizeof(struct sType*));
memset(&obj_type2_150, 0, sizeof(struct sType*));
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&fun_151, 0, sizeof(struct sFun*));
right_value200 = (void*)0;
memset(&type_152, 0, sizeof(struct sType*));
right_value201 = (void*)0;
memset(&come_value_153, 0, sizeof(struct CVALUE*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
    # 406 "18field.c"
    left_144=self->mLeft;
    # 412 "18field.c"
    # 408 "18field.c"
    if(_if_conditional214=!node_compile(left_144,info),    _if_conditional214) {
        # 409 "18field.c"
        __result115__ = (_Bool)0;
        return __result115__;
    }
    # 412 "18field.c"
    left_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 413 "18field.c"
    dec_stack_ptr(1,info);
    # 467 "18field.c"
    # 415 "18field.c"
    if(_if_conditional215=!self->mOnlyNullCecker&&left_value_145->type->mNoSolvedGenericsType&&left_value_145->type->mNoSolvedGenericsType->v1&&left_value_145->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_145->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional215) {
        # 416 "18field.c"
        method_name_146=(char*)come_increment_ref_count(((char*)(right_value197=create_method_name(left_value_145->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 430 "18field.c"
        # 418 "18field.c"
        if(_if_conditional220=map$2charphsFunph_at(info->funcs,method_name_146,((void*)0))==((void*)0),        _if_conditional220) {
            # 419 "18field.c"
            obj_type_149=left_value_145->type->mNoSolvedGenericsType->v1;
            # 428 "18field.c"
            # 420 "18field.c"
            if(_if_conditional221=list$1sTypeph_length(obj_type_149->mGenericsTypes)>0,            _if_conditional221) {
                # 421 "18field.c"
                obj_type2_150=left_value_145->type;
                # 422 "18field.c"
                __dec_obj78=method_name_146;
                method_name_146=(char*)come_increment_ref_count(((char*)(right_value199=make_generics_function(obj_type2_150,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 425 "18field.c"
                err_msg(info,"require expect implementation(%s)",left_value_145->type->mClass->mName);
                # 426 "18field.c"
                exit(1);
            }
        }
        # 430 "18field.c"
        fun_151=map$2charphsFunphp_operator_load_element(info->funcs,method_name_146);
        # 437 "18field.c"
        # 432 "18field.c"
        if(_if_conditional222=fun_151==((void*)0),        _if_conditional222) {
            # 433 "18field.c"
            err_msg(info,"function not found(%s)",method_name_146);
            # 434 "18field.c"
            __result120__ = (_Bool)1;
            method_name_146 = come_decrement_ref_count2(method_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result120__;
        }
        # 437 "18field.c"
        type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(fun_151->mResultType,left_value_145->type,info))));
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 439 "18field.c"
        come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 439, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 441 "18field.c"
        __dec_obj79=come_value_153->c_value;
        come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s(%s)",method_name_146,left_value_145->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 442 "18field.c"
        __dec_obj80=come_value_153->type;
        come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(type_152))));
        come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 443 "18field.c"
        come_value_153->var=((void*)0);
        # 445 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
        # 447 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_153->c_value);
        method_name_146 = come_decrement_ref_count2(method_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 467 "18field.c"
        # 449 "18field.c"
        if(_if_conditional223=!gComeDebug,        _if_conditional223) {
            # 450 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_145));
        }
        else {
            # 467 "18field.c"
            # 452 "18field.c"
            if(_if_conditional224=left_value_145->type->mPointerNum>0,            _if_conditional224) {
                # 453 "18field.c"
                come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 453, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 455 "18field.c"
                __dec_obj81=come_value_154->c_value;
                come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value206=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value205=make_type_name_string(left_value_145->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_145->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 456 "18field.c"
                __dec_obj82=come_value_154->type;
                come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(left_value_145->type))));
                come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 457 "18field.c"
                come_value_154->var=((void*)0);
                # 459 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
                # 461 "18field.c"
                add_come_last_code(info,"%s;\n",come_value_154->c_value);
                come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 464 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_145));
            }
        }
    }
    # 467 "18field.c"
    __result121__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result121__;
    come_call_finalizer2(CVALUE_finalize,left_value_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_147;
unsigned int it_148;
_Bool _while_condtional18;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sFun* __result116__;
_Bool _if_conditional218;
_Bool _if_conditional219;
struct sFun* __result117__;
struct sFun* __result118__;
struct sFun* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_147, 0, sizeof(unsigned int));
memset(&it_148, 0, sizeof(unsigned int));
            # 1226 "./neo-c.h"
            hash_147=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./neo-c.h"
            it_148=hash_147;
            # 1251 "./neo-c.h"
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                # 1249 "./neo-c.h"
                # 1230 "./neo-c.h"
                if(_if_conditional216=self->item_existance[it_148],                _if_conditional216) {
                    # 1237 "./neo-c.h"
                    # 1232 "./neo-c.h"
                    if(_if_conditional217=string_equals(self->keys[it_148],key),                    _if_conditional217) {
                        # 1234 "./neo-c.h"
                        __result116__ = __result_obj__ = self->items[it_148];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result116__;
                    }
                    # 1237 "./neo-c.h"
                    it_148++;
                    # 1245 "./neo-c.h"
                    # 1239 "./neo-c.h"
                    if(_if_conditional218=it_148>=self->size,                    _if_conditional218) {
                        # 1240 "./neo-c.h"
                        it_148=0;
                    }
                    else {
                        # 1245 "./neo-c.h"
                        # 1242 "./neo-c.h"
                        if(_if_conditional219=it_148==hash_147,                        _if_conditional219) {
                            # 1243 "./neo-c.h"
                            __result117__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result117__;
                        }
                    }
                }
                else {
                    # 1247 "./neo-c.h"
                    __result118__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result118__;
                }
            }
            # 1251 "./neo-c.h"
            __result119__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result119__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 472 "18field.c"
    __result122__ = self->sline;
    return __result122__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value208;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    # 477 "18field.c"
    __result123__ = __result_obj__ = ((char*)(right_value208=__builtin_string(self->sname)));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value209;
char* __dec_obj83;
void* right_value210;
struct sNode* __dec_obj84;
struct sNullableNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
right_value210 = (void*)0;
    # 492 "18field.c"
    self->sline=info->sline;
    # 493 "18field.c"
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 495 "18field.c"
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 497 "18field.c"
    __result124__ = __result_obj__ = self;
    come_call_finalizer2(sNullableNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result124__;
    come_call_finalizer2(sNullableNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullableNode_terminated(){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    # 502 "18field.c"
    __result125__ = (_Bool)0;
    return __result125__;
}

char* sNullableNode_kind(){
void* __result_obj__;
void* right_value211;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
    # 507 "18field.c"
    __result126__ = __result_obj__ = ((char*)(right_value211=__builtin_string("sNullableNode")));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_155;
_Bool _if_conditional227;
_Bool __result127__;
void* right_value212;
struct CVALUE* left_value_156;
_Bool _if_conditional228;
void* right_value216;
struct CVALUE* come_value_158;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_155, 0, sizeof(struct sNode*));
right_value212 = (void*)0;
memset(&left_value_156, 0, sizeof(struct CVALUE*));
right_value216 = (void*)0;
memset(&come_value_158, 0, sizeof(struct CVALUE*));
    # 512 "18field.c"
    left_155=self->mLeft;
    # 518 "18field.c"
    # 514 "18field.c"
    if(_if_conditional227=!node_compile(left_155,info),    _if_conditional227) {
        # 515 "18field.c"
        __result127__ = (_Bool)0;
        return __result127__;
    }
    # 518 "18field.c"
    left_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 519 "18field.c"
    dec_stack_ptr(1,info);
    # 534 "18field.c"
    # 521 "18field.c"
    if(_if_conditional228=left_value_156->type->mPointerNum>0&&left_value_156->type->mNullValue,    _if_conditional228) {
        # 522 "18field.c"
        come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=CVALUE_clone(left_value_156))));
        come_call_finalizer2(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 524 "18field.c"
        come_value_158->type->mNullValue=(_Bool)0;
        # 526 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
        # 528 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_158->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 531 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_156));
    }
    # 534 "18field.c"
    __result130__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result130__;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional229;
struct CVALUE* __result128__;
void* right_value213;
struct CVALUE* result_157;
_Bool _if_conditional230;
void* right_value214;
char* __dec_obj85;
_Bool _if_conditional231;
void* right_value215;
struct sType* __dec_obj86;
_Bool _if_conditional232;
struct CVALUE* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
memset(&result_157, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
right_value215 = (void*)0;
            # 3 "CVALUE_clone"
            # 2 "CVALUE_clone"
            if(_if_conditional229=self==(void*)0,            _if_conditional229) {
                # 2 "CVALUE_clone"
                __result128__ = __result_obj__ = (void*)0;
                return __result128__;
            }
            # 3 "CVALUE_clone"
            result_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "CVALUE_clone"
            # 4 "CVALUE_clone"
            if(_if_conditional230=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional230) {
                # 4 "CVALUE_clone"
                __dec_obj85=result_157->c_value;
                result_157->c_value=(char*)come_increment_ref_count(((char*)(right_value214=string_clone(self->c_value))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "CVALUE_clone"
            # 5 "CVALUE_clone"
            if(_if_conditional231=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional231) {
                # 5 "CVALUE_clone"
                __dec_obj86=result_157->type;
                result_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(self->type))));
                come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "CVALUE_clone"
            # 6 "CVALUE_clone"
            if(_if_conditional232=self!=((void*)0),            _if_conditional232) {
                # 6 "CVALUE_clone"
                result_157->var=self->var;
            }
            # 7 "CVALUE_clone"
            __result129__ = __result_obj__ = result_157;
            come_call_finalizer2(CVALUE_finalize,result_157, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result129__;
            come_call_finalizer2(CVALUE_finalize,result_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNullableNode_sline(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    # 539 "18field.c"
    __result131__ = self->sline;
    return __result131__;
}

char* sNullableNode_sname(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value217;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    # 544 "18field.c"
    __result132__ = __result_obj__ = ((char*)(right_value217=__builtin_string(self->sname)));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value218;
char* __dec_obj87;
void* right_value219;
struct sNode* __dec_obj88;
void* right_value220;
struct sNode* __dec_obj89;
void* right_value221;
struct sNode* __dec_obj90;
struct sRangeCheckNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
    # 559 "18field.c"
    self->sline=info->sline;
    # 560 "18field.c"
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 562 "18field.c"
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value219) { right_value219 = come_decrement_ref_count2(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 563 "18field.c"
    __dec_obj89=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=sNode_clone(begin))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value220) { right_value220 = come_decrement_ref_count2(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 564 "18field.c"
    __dec_obj90=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=sNode_clone(end))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value221) { right_value221 = come_decrement_ref_count2(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 566 "18field.c"
    __result133__ = __result_obj__ = self;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result133__;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    # 571 "18field.c"
    __result134__ = (_Bool)0;
    return __result134__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
void* right_value222;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    # 576 "18field.c"
    __result135__ = __result_obj__ = ((char*)(right_value222=__builtin_string("sRangeCheckNode")));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_159;
_Bool _if_conditional237;
_Bool __result136__;
void* right_value223;
struct CVALUE* left_value_160;
struct sNode* begin_161;
_Bool _if_conditional238;
_Bool __result137__;
void* right_value224;
struct CVALUE* begin_value_162;
struct sNode* end_163;
_Bool _if_conditional239;
_Bool __result138__;
void* right_value225;
struct CVALUE* end_value_164;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value226;
struct CVALUE* come_value_165;
void* right_value227;
void* right_value228;
char* __dec_obj91;
void* right_value229;
struct sType* __dec_obj92;
void* right_value230;
struct CVALUE* come_value_166;
void* right_value231;
void* right_value232;
char* __dec_obj93;
void* right_value233;
struct sType* __dec_obj94;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_159, 0, sizeof(struct sNode*));
right_value223 = (void*)0;
memset(&left_value_160, 0, sizeof(struct CVALUE*));
memset(&begin_161, 0, sizeof(struct sNode*));
right_value224 = (void*)0;
memset(&begin_value_162, 0, sizeof(struct CVALUE*));
memset(&end_163, 0, sizeof(struct sNode*));
right_value225 = (void*)0;
memset(&end_value_164, 0, sizeof(struct CVALUE*));
right_value226 = (void*)0;
memset(&come_value_165, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    # 581 "18field.c"
    left_159=self->mLeft;
    # 587 "18field.c"
    # 583 "18field.c"
    if(_if_conditional237=!node_compile(left_159,info),    _if_conditional237) {
        # 584 "18field.c"
        __result136__ = (_Bool)0;
        return __result136__;
    }
    # 587 "18field.c"
    left_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 588 "18field.c"
    dec_stack_ptr(1,info);
    # 590 "18field.c"
    begin_161=self->mBegin;
    # 596 "18field.c"
    # 592 "18field.c"
    if(_if_conditional238=!node_compile(begin_161,info),    _if_conditional238) {
        # 593 "18field.c"
        __result137__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result137__;
    }
    # 596 "18field.c"
    begin_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 597 "18field.c"
    dec_stack_ptr(1,info);
    # 599 "18field.c"
    end_163=self->mEnd;
    # 605 "18field.c"
    # 601 "18field.c"
    if(_if_conditional239=!node_compile(end_163,info),    _if_conditional239) {
        # 602 "18field.c"
        __result138__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,begin_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result138__;
    }
    # 605 "18field.c"
    end_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 606 "18field.c"
    dec_stack_ptr(1,info);
    # 639 "18field.c"
    # 608 "18field.c"
    if(_if_conditional240=left_value_160->type->mPointerNum>0,    _if_conditional240) {
        # 634 "18field.c"
        # 609 "18field.c"
        if(_if_conditional241=!gComeDebug,        _if_conditional241) {
            # 610 "18field.c"
            come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 610, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 612 "18field.c"
            __dec_obj91=come_value_165->c_value;
            come_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("(*((%s)%s))",((char*)(right_value227=make_type_name_string(left_value_160->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_160->c_value))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 614 "18field.c"
            left_value_160->type->mPointerNum--;
            # 615 "18field.c"
            __dec_obj92=come_value_165->type;
            come_value_165->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(left_value_160->type))));
            come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 616 "18field.c"
            come_value_165->var=((void*)0);
            # 618 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
            # 620 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_165->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 623 "18field.c"
            come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 623, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 625 "18field.c"
            __dec_obj93=come_value_166->c_value;
            come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value231=make_type_name_string(left_value_160->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_160->c_value,begin_value_162->c_value,end_value_164->c_value,info->sname,info->sline))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 626 "18field.c"
            left_value_160->type->mPointerNum--;
            # 627 "18field.c"
            __dec_obj94=come_value_166->type;
            come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(left_value_160->type))));
            come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 628 "18field.c"
            come_value_166->var=((void*)0);
            # 630 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
            # 632 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_166->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        # 636 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_160));
    }
    # 639 "18field.c"
    __result139__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result139__;
    come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    # 644 "18field.c"
    __result140__ = self->sline;
    return __result140__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value234;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    # 649 "18field.c"
    __result141__ = __result_obj__ = ((char*)(right_value234=__builtin_string(self->sname)));
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value235;
void* right_value236;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value242;
struct sNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value242 = (void*)0;
    # 654 "18field.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 654, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value236=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value235=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 654, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result144__ = __result_obj__ = ((struct sNode*)(right_value242=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value242) { right_value242 = come_decrement_ref_count2(right_value242, ((struct sNode*)right_value242)->finalize, ((struct sNode*)right_value242)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result144__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value243;
char* __dec_obj99;
void* right_value244;
struct sNode* __dec_obj100;
void* right_value245;
char* __dec_obj101;
struct sLoadFieldNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
    # 668 "18field.c"
    self->sline=info->sline;
    # 669 "18field.c"
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(info->sname))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 671 "18field.c"
    __dec_obj100=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 672 "18field.c"
    __dec_obj101=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(name))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 674 "18field.c"
    __result145__ = __result_obj__ = self;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    # 679 "18field.c"
    __result146__ = (_Bool)0;
    return __result146__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
void* right_value246;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    # 684 "18field.c"
    __result147__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sLoadFieldNode")));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_168;
void* right_value247;
char* name_169;
_Bool _if_conditional255;
_Bool __result148__;
void* right_value248;
struct CVALUE* left_value_170;
_Bool _if_conditional256;
void* right_value249;
void* right_value250;
char* __dec_obj102;
struct sType* left_type_171;
void* right_value251;
struct sType* left_type2_172;
struct sClass* klass_173;
struct sType* field_type_174;
int index_175;
char* child_field_name_176;
_Bool _if_conditional257;
_Bool __result149__;
struct list$1tuple2$2charphsTypephph* o2_saved_177;
struct tuple2$2charphsTypeph* field_178;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_179;
struct sType* field_type2_180;
_Bool _if_conditional258;
void* right_value252;
struct sType* __dec_obj103;
_Bool _if_conditional259;
struct list$1tuple2$2charphsTypephph* o2_saved_181;
struct tuple2$2charphsTypeph* field_182;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_183;
struct sType* field_type2_184;
struct sClass* klass2_185;
struct list$1tuple2$2charphsTypephph* o2_saved_186;
struct tuple2$2charphsTypeph* field2_187;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_188;
struct sType* field_type3_189;
_Bool _if_conditional260;
void* right_value253;
char* __dec_obj104;
void* right_value254;
struct sType* __dec_obj105;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value255;
struct sType* __dec_obj106;
_Bool _if_conditional263;
_Bool __result150__;
void* right_value256;
struct CVALUE* come_value_190;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value257;
char* __dec_obj107;
void* right_value258;
char* __dec_obj108;
_Bool _if_conditional266;
void* right_value259;
char* __dec_obj109;
void* right_value260;
char* __dec_obj110;
void* right_value261;
struct sType* __dec_obj111;
_Bool _if_conditional267;
_Bool __result151__;
_Bool _if_conditional269;
void* right_value262;
struct sType* __dec_obj112;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_168, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&name_169, 0, sizeof(char*));
right_value248 = (void*)0;
memset(&left_value_170, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&left_type_171, 0, sizeof(struct sType*));
right_value251 = (void*)0;
memset(&left_type2_172, 0, sizeof(struct sType*));
memset(&klass_173, 0, sizeof(struct sClass*));
memset(&field_type_174, 0, sizeof(struct sType*));
memset(&index_175, 0, sizeof(int));
memset(&child_field_name_176, 0, sizeof(char*));
memset(&o2_saved_177, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_178, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_179, 0, sizeof(char*));
memset(&field_type2_180, 0, sizeof(struct sType*));
memset(&field_name_179, 0, sizeof(char*));
memset(&field_type2_180, 0, sizeof(struct sType*));
right_value252 = (void*)0;
memset(&o2_saved_181, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_182, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_183, 0, sizeof(char*));
memset(&field_type2_184, 0, sizeof(struct sType*));
memset(&field_name_183, 0, sizeof(char*));
memset(&field_type2_184, 0, sizeof(struct sType*));
memset(&klass2_185, 0, sizeof(struct sClass*));
memset(&o2_saved_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_187, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_188, 0, sizeof(char*));
memset(&field_type3_189, 0, sizeof(struct sType*));
memset(&field_name2_188, 0, sizeof(char*));
memset(&field_type3_189, 0, sizeof(struct sType*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
    # 689 "18field.c"
    left_168=self->mLeft;
    # 690 "18field.c"
    name_169=(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(self->mName))));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 696 "18field.c"
    # 692 "18field.c"
    if(_if_conditional255=!node_compile(left_168,info),    _if_conditional255) {
        # 693 "18field.c"
        __result148__ = (_Bool)0;
        name_169 = come_decrement_ref_count2(name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result148__;
    }
    # 696 "18field.c"
    left_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 697 "18field.c"
    dec_stack_ptr(1,info);
    # 703 "18field.c"
    # 699 "18field.c"
    if(_if_conditional256=gComeDebug&&left_value_170->type->mPointerNum>0,    _if_conditional256) {
        # 700 "18field.c"
        __dec_obj102=left_value_170->c_value;
        left_value_170->c_value=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value249=make_type_name_string(left_value_170->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_170->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 703 "18field.c"
    left_type_171=left_value_170->type;
    # 705 "18field.c"
    left_type2_172=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=solve_generics(left_type_171,left_type_171,info))));
    come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 707 "18field.c"
    klass_173=left_type2_172->mClass;
    # 708 "18field.c"
    klass_173=map$2charphsClassphp_operator_load_element(info->classes,klass_173->mName);
    # 710 "18field.c"
    field_type_174=((void*)0);
    # 711 "18field.c"
    index_175=0;
    # 712 "18field.c"
    child_field_name_176=((void*)0);
    # 713 "18field.c"
    klass_173=map$2charphsClassphp_operator_load_element(info->classes,klass_173->mName);
    # 718 "18field.c"
    # 714 "18field.c"
    if(_if_conditional257=klass_173==((void*)0)||klass_173->mFields==((void*)0),    _if_conditional257) {
        # 715 "18field.c"
        err_msg(info,"invalid class %s",klass_173->mName);
        # 716 "18field.c"
        __result149__ = (_Bool)0;
        name_169 = come_decrement_ref_count2(name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_176 = come_decrement_ref_count2(child_field_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result149__;
    }
    # 729 "18field.c"
    for(    o2_saved_177=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_173->mFields)),field_178=list$1tuple2$2charphsTypephph_begin((o2_saved_177));    !list$1tuple2$2charphsTypephph_end((o2_saved_177));    field_178=list$1tuple2$2charphsTypephph_next((o2_saved_177))    ){
        # 719 "18field.c"
        multiple_assign_var4=field_178;
        field_name_179=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_180=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        # 726 "18field.c"
        # 721 "18field.c"
        if(_if_conditional258=string_operator_equals(field_name_179,name_169),        _if_conditional258) {
            # 722 "18field.c"
            __dec_obj103=field_type_174;
            field_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(field_type2_180))));
            come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 723 "18field.c"
            field_name_179 = come_decrement_ref_count2(field_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 726 "18field.c"
        index_175++;
        field_name_179 = come_decrement_ref_count2(field_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 764 "18field.c"
    # 729 "18field.c"
    if(_if_conditional259=index_175==list$1tuple2$2charphsTypephph_length(klass_173->mFields),    _if_conditional259) {
        # 730 "18field.c"
        index_175=0;
        # 758 "18field.c"
        for(        o2_saved_181=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_173->mFields)),field_182=list$1tuple2$2charphsTypephph_begin((o2_saved_181));        !list$1tuple2$2charphsTypephph_end((o2_saved_181));        field_182=list$1tuple2$2charphsTypephph_next((o2_saved_181))        ){
            # 732 "18field.c"
            multiple_assign_var5=field_182;
            field_name_183=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_184=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            # 734 "18field.c"
            klass2_185=field_type2_184->mClass;
            # 746 "18field.c"
            for(            o2_saved_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_185->mFields)),field2_187=list$1tuple2$2charphsTypephph_begin((o2_saved_186));            !list$1tuple2$2charphsTypephph_end((o2_saved_186));            field2_187=list$1tuple2$2charphsTypephph_next((o2_saved_186))            ){
                # 737 "18field.c"
                multiple_assign_var6=field2_187;
                field_name2_188=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_189=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                # 744 "18field.c"
                # 739 "18field.c"
                if(_if_conditional260=string_operator_equals(field_name2_188,name_169),                _if_conditional260) {
                    # 740 "18field.c"
                    __dec_obj104=child_field_name_176;
                    child_field_name_176=(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(field_name_183))));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 741 "18field.c"
                    __dec_obj105=field_type_174;
                    field_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(field_type3_189))));
                    come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 742 "18field.c"
                    field_name2_188 = come_decrement_ref_count2(field_name2_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_188 = come_decrement_ref_count2(field_name2_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 750 "18field.c"
            # 746 "18field.c"
            if(child_field_name_176) {
                # 747 "18field.c"
                field_name_183 = come_decrement_ref_count2(field_name_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 755 "18field.c"
            # 750 "18field.c"
            if(_if_conditional262=string_operator_equals(field_name_183,name_169),            _if_conditional262) {
                # 751 "18field.c"
                __dec_obj106=field_type_174;
                field_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(field_type2_184))));
                come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 752 "18field.c"
                field_name_183 = come_decrement_ref_count2(field_name_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 755 "18field.c"
            index_175++;
            field_name_183 = come_decrement_ref_count2(field_name_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 762 "18field.c"
        # 758 "18field.c"
        if(_if_conditional263=index_175==list$1tuple2$2charphsTypephph_length(klass_173->mFields),        _if_conditional263) {
            # 759 "18field.c"
            err_msg(info,"field not found(%s) in %s(2)",name_169,klass_173->mName);
            # 760 "18field.c"
            __result150__ = (_Bool)0;
            name_169 = come_decrement_ref_count2(name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_176 = come_decrement_ref_count2(child_field_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result150__;
        }
    }
    # 764 "18field.c"
    come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 764, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 782 "18field.c"
    # 766 "18field.c"
    if(_if_conditional264=left_value_170->type->mPointerNum>0,    _if_conditional264) {
        # 773 "18field.c"
        # 767 "18field.c"
        if(child_field_name_176) {
            # 768 "18field.c"
            __dec_obj107=come_value_190->c_value;
            come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s->%s.%s",left_value_170->c_value,child_field_name_176,name_169))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 771 "18field.c"
            __dec_obj108=come_value_190->c_value;
            come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s->%s",left_value_170->c_value,name_169))));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 781 "18field.c"
        # 775 "18field.c"
        if(child_field_name_176) {
            # 776 "18field.c"
            __dec_obj109=come_value_190->c_value;
            come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("%s.%s.%s",left_value_170->c_value,child_field_name_176,name_169))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 779 "18field.c"
            __dec_obj110=come_value_190->c_value;
            come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("%s.%s",left_value_170->c_value,name_169))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 782 "18field.c"
    __dec_obj111=come_value_190->type;
    come_value_190->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(field_type_174))));
    come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 783 "18field.c"
    come_value_190->var=((void*)0);
    # 790 "18field.c"
    # 785 "18field.c"
    if(_if_conditional267=field_type_174==((void*)0),    _if_conditional267) {
        # 786 "18field.c"
        err_msg(info,"no field(%s)\n",name_169);
        # 787 "18field.c"
        __result151__ = (_Bool)0;
        name_169 = come_decrement_ref_count2(name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_176 = come_decrement_ref_count2(child_field_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    # 798 "18field.c"
    # 790 "18field.c"
    if(_if_conditional269=list$1sNodeph_length(come_value_190->type->mArrayNum)==1,    _if_conditional269) {
        # 791 "18field.c"
        __dec_obj112=come_value_190->type->mOriginalLoadVarType->v1;
        come_value_190->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_clone(come_value_190->type))));
        come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 793 "18field.c"
        list$1sNodeph_reset(come_value_190->type->mArrayNum);
        # 794 "18field.c"
        come_value_190->type->mPointerNum++;
        # 795 "18field.c"
        come_value_190->type->mOriginalTypeNamePointerNum=come_value_190->type->mPointerNum;
    }
    # 798 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
    # 800 "18field.c"
    __result155__ = (_Bool)1;
    name_169 = come_decrement_ref_count2(name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_176 = come_decrement_ref_count2(child_field_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result155__;
    name_169 = come_decrement_ref_count2(name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_176 = come_decrement_ref_count2(child_field_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional268;
int __result152__;
int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional268=self==((void*)0),        _if_conditional268) {
            # 365 "./neo-c.h"
            __result152__ = 0;
            return __result152__;
        }
        # 367 "./neo-c.h"
        __result153__ = self->len;
        return __result153__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_191;
_Bool _while_condtional19;
struct list_item$1sNodeph* prev_it_192;
struct list$1sNodeph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_191, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_192, 0, sizeof(struct list_item$1sNodeph*));
            # 433 "./neo-c.h"
            it_191=self->head;
            # 440 "./neo-c.h"
            while(_while_condtional19=it_191!=((void*)0),            _while_condtional19) {
                # 435 "./neo-c.h"
                prev_it_192=it_191;
                # 436 "./neo-c.h"
                it_191=it_191->next;
                # 437 "./neo-c.h"
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./neo-c.h"
            self->head=((void*)0);
            # 441 "./neo-c.h"
            self->tail=((void*)0);
            # 443 "./neo-c.h"
            self->len=0;
            # 445 "./neo-c.h"
            __result154__ = __result_obj__ = self;
            return __result154__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    # 805 "18field.c"
    __result156__ = self->sline;
    return __result156__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value263;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
    # 810 "18field.c"
    __result157__ = __result_obj__ = ((char*)(right_value263=__builtin_string(self->sname)));
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value264;
char* __dec_obj113;
void* right_value265;
struct sNode* __dec_obj114;
void* right_value266;
struct sNode* __dec_obj115;
void* right_value267;
struct list$1sNodeph* __dec_obj116;
struct sStoreArrayNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
    # 826 "18field.c"
    self->sline=info->sline;
    # 827 "18field.c"
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(info->sname))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 829 "18field.c"
    __dec_obj114=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(left))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 830 "18field.c"
    __dec_obj115=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=sNode_clone(right))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 831 "18field.c"
    __dec_obj116=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value267=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 832 "18field.c"
    self->mQuote=quote;
    # 834 "18field.c"
    __result158__ = __result_obj__ = self;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result158__;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    # 839 "18field.c"
    __result159__ = (_Bool)0;
    return __result159__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
void* right_value268;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
    # 844 "18field.c"
    __result160__ = __result_obj__ = ((char*)(right_value268=__builtin_string("sStoreArrayNode")));
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_193;
struct sNode* right_194;
struct list$1sNodeph* array_num_nodes_195;
_Bool _if_conditional274;
_Bool __result161__;
void* right_value269;
struct CVALUE* left_value_196;
_Bool _if_conditional275;
void* right_value270;
void* right_value271;
char* __dec_obj117;
struct sType* left_type_197;
void* right_value272;
void* right_value273;
struct list$1CVALUEph* array_num_200;
struct list$1sNodeph* o2_saved_201;
struct sNode* it_204;
_Bool _if_conditional280;
_Bool __result170__;
void* right_value274;
struct CVALUE* c_value_207;
_Bool _if_conditional281;
_Bool __result171__;
void* right_value275;
struct CVALUE* right_value_208;
struct sType* right_type_209;
struct sClass* klass_210;
void* right_value276;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
_Bool _if_conditional282;
_Bool _if_conditional285;
char* check_code_217;
_Bool _if_conditional286;
struct sType* var_type_218;
void* right_value277;
struct sType* result_type_219;
_Bool _if_conditional287;
struct sType* __dec_obj118;
_Bool _if_conditional288;
int n_220;
_Bool _if_conditional290;
void* right_value278;
struct sType* __dec_obj119;
_Bool _if_conditional291;
void* right_value279;
struct sType* __dec_obj120;
_Bool _if_conditional292;
int i_221;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value280;
struct CVALUE* come_value_234;
void* right_value281;
void* right_value282;
struct buffer* buf_235;
void* right_value283;
struct sType* result_type2_236;
void* right_value284;
struct list$1CVALUEph* o2_saved_237;
struct CVALUE* it_240;
void* right_value285;
void* right_value286;
int i_243;
struct list$1sNodeph* o2_saved_244;
struct sNode* it_245;
_Bool _if_conditional319;
void* right_value287;
struct CVALUE* come_value_246;
void* right_value288;
_Bool _if_conditional320;
void* right_value289;
void* right_value290;
char* __dec_obj121;
void* right_value291;
struct CVALUE* come_value_247;
_Bool _if_conditional321;
int i_248;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value292;
void* right_value293;
struct buffer* buf_249;
struct list$1CVALUEph* o2_saved_250;
struct CVALUE* it_251;
void* right_value294;
void* right_value295;
char* left_value_code_252;
void* right_value296;
_Bool _if_conditional324;
_Bool _if_conditional325;
void* right_value297;
char* __dec_obj122;
_Bool _if_conditional326;
void* right_value298;
char* __dec_obj123;
_Bool __result185__;
int right_value_id_253;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value299;
char* __dec_obj124;
_Bool _if_conditional329;
void* right_value300;
char* __dec_obj125;
_Bool __result186__;
void* right_value301;
struct sType* result_type_254;
void* right_value302;
void* right_value303;
struct list$1sNodeph* __dec_obj126;
struct sType* __dec_obj127;
_Bool _if_conditional330;
void* right_value304;
char* __dec_obj128;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_193, 0, sizeof(struct sNode*));
memset(&right_194, 0, sizeof(struct sNode*));
memset(&array_num_nodes_195, 0, sizeof(struct list$1sNodeph*));
right_value269 = (void*)0;
memset(&left_value_196, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&left_type_197, 0, sizeof(struct sType*));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&array_num_200, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_201, 0, sizeof(struct list$1sNodeph*));
memset(&it_204, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
memset(&c_value_207, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
memset(&right_value_208, 0, sizeof(struct CVALUE*));
memset(&right_type_209, 0, sizeof(struct sType*));
memset(&klass_210, 0, sizeof(struct sClass*));
right_value276 = (void*)0;
memset(&type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
memset(&calling_fun_213, 0, sizeof(_Bool));
memset(&check_code_217, 0, sizeof(char*));
memset(&var_type_218, 0, sizeof(struct sType*));
right_value277 = (void*)0;
memset(&result_type_219, 0, sizeof(struct sType*));
memset(&n_220, 0, sizeof(int));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&i_221, 0, sizeof(int));
right_value280 = (void*)0;
memset(&come_value_234, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&buf_235, 0, sizeof(struct buffer*));
right_value283 = (void*)0;
memset(&result_type2_236, 0, sizeof(struct sType*));
right_value284 = (void*)0;
memset(&o2_saved_237, 0, sizeof(struct list$1CVALUEph*));
memset(&it_240, 0, sizeof(struct CVALUE*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&i_243, 0, sizeof(int));
memset(&o2_saved_244, 0, sizeof(struct list$1sNodeph*));
memset(&it_245, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
memset(&come_value_246, 0, sizeof(struct CVALUE*));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&come_value_247, 0, sizeof(struct CVALUE*));
memset(&i_248, 0, sizeof(int));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&buf_249, 0, sizeof(struct buffer*));
memset(&o2_saved_250, 0, sizeof(struct list$1CVALUEph*));
memset(&it_251, 0, sizeof(struct CVALUE*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&left_value_code_252, 0, sizeof(char*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&right_value_id_253, 0, sizeof(int));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&result_type_254, 0, sizeof(struct sType*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
    # 849 "18field.c"
    left_193=self->mLeft;
    # 850 "18field.c"
    right_194=self->mRight;
    # 851 "18field.c"
    array_num_nodes_195=self->mArrayNum;
    # 857 "18field.c"
    # 853 "18field.c"
    if(_if_conditional274=!node_compile(left_193,info),    _if_conditional274) {
        # 854 "18field.c"
        __result161__ = (_Bool)0;
        return __result161__;
    }
    # 857 "18field.c"
    left_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 858 "18field.c"
    dec_stack_ptr(1,info);
    # 864 "18field.c"
    # 860 "18field.c"
    if(_if_conditional275=gComeDebug&&left_value_196->type->mPointerNum>0,    _if_conditional275) {
        # 861 "18field.c"
        __dec_obj117=left_value_196->c_value;
        left_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value270=make_type_name_string(left_value_196->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_196->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 864 "18field.c"
    left_type_197=left_value_196->type;
    # 866 "18field.c"
    array_num_200=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value273=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value272=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 866, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 879 "18field.c"
    for(    o2_saved_201=(array_num_nodes_195),it_204=list$1sNodeph_begin((o2_saved_201));    !list$1sNodeph_end((o2_saved_201));    it_204=list$1sNodeph_next((o2_saved_201))    ){
        # 873 "18field.c"
        # 869 "18field.c"
        if(_if_conditional280=!node_compile(it_204,info),        _if_conditional280) {
            # 870 "18field.c"
            __result170__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result170__;
        }
        # 873 "18field.c"
        c_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 874 "18field.c"
        dec_stack_ptr(1,info);
        # 876 "18field.c"
        list$1CVALUEph_push_back(array_num_200,(struct CVALUE*)come_increment_ref_count(c_value_207));
        come_call_finalizer2(CVALUE_finalize,c_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 883 "18field.c"
    # 879 "18field.c"
    if(_if_conditional281=!node_compile(right_194,info),    _if_conditional281) {
        # 880 "18field.c"
        __result171__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,array_num_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result171__;
    }
    # 883 "18field.c"
    right_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 884 "18field.c"
    dec_stack_ptr(1,info);
    # 886 "18field.c"
    right_type_209=right_value_208->type;
    # 888 "18field.c"
    klass_210=left_value_196->type->mClass;
    # 890 "18field.c"
    type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(left_value_196->type))));
    come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 892 "18field.c"
    fun_name_212="operator_store_element";
    # 893 "18field.c"
    # 901 "18field.c"
    # 894 "18field.c"
    if(self->mQuote) {
        # 895 "18field.c"
        calling_fun_213=(_Bool)0;
    }
    else {
        # 898 "18field.c"
        calling_fun_213=operator_overload_fun2(type_211,fun_name_212,left_value_196,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_200,0), "18field.c", 898, 9)),right_value_208,info);
    }
    # 1060 "18field.c"
    # 901 "18field.c"
    if(_if_conditional285=!calling_fun_213,    _if_conditional285) {
        # 902 "18field.c"
        check_code_217=((void*)0);
        # 980 "18field.c"
        # 903 "18field.c"
        if(_if_conditional286=left_value_196->var&&left_value_196->var->mType&&list$1sNodeph_length(left_value_196->var->mType->mArrayNum)>0,        _if_conditional286) {
            # 905 "18field.c"
            var_type_218=left_value_196->var->mType;
            # 906 "18field.c"
            result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(left_type_197))));
            come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 912 "18field.c"
            # 908 "18field.c"
            if(result_type_219->mOriginalLoadVarType->v1) {
                # 909 "18field.c"
                __dec_obj118=result_type_219;
                result_type_219=(struct sType*)come_increment_ref_count(result_type_219->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 946 "18field.c"
            # 912 "18field.c"
            if(_if_conditional288=list$1sNodeph_length(result_type_219->mArrayNum)>0,            _if_conditional288) {
                # 913 "18field.c"
                n_220=list$1sNodeph_length(result_type_219->mArrayNum)-list$1CVALUEph_length(array_num_200);
                # 935 "18field.c"
                # 915 "18field.c"
                if(_if_conditional290=n_220==0,                _if_conditional290) {
                    # 916 "18field.c"
                    __dec_obj119=result_type_219;
                    result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(left_type_197))));
                    come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 920 "18field.c"
                    # 917 "18field.c"
                    if(left_type_197->mOriginalLoadVarType->v1) {
                        # 918 "18field.c"
                        __dec_obj120=result_type_219;
                        result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(left_type_197->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 920 "18field.c"
                    list$1sNodeph_reset(result_type_219->mArrayNum);
                }
                else {
                    # 935 "18field.c"
                    # 922 "18field.c"
                    if(_if_conditional292=n_220>0,                    _if_conditional292) {
                        # 926 "18field.c"
                        for(                        i_221=0;                        i_221<n_220;                        i_221++                        ){
                            # 924 "18field.c"
                            list$1sNodeph_delete(result_type_219->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 935 "18field.c"
                        # 927 "18field.c"
                        if(_if_conditional311=n_220<0,                        _if_conditional311) {
                            # 928 "18field.c"
                            list$1sNodeph_reset(result_type_219->mArrayNum);
                            # 929 "18field.c"
                            result_type_219->mPointerNum+=n_220;
                            # 934 "18field.c"
                            # 931 "18field.c"
                            if(_if_conditional312=result_type_219->mPointerNum<0,                            _if_conditional312) {
                                # 932 "18field.c"
                                result_type_219->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 944 "18field.c"
                # 937 "18field.c"
                if(_if_conditional313=result_type_219->mPointerNum>0,                _if_conditional313) {
                    # 938 "18field.c"
                    result_type_219->mPointerNum-=list$1CVALUEph_length(array_num_200);
                    # 943 "18field.c"
                    # 940 "18field.c"
                    if(_if_conditional314=result_type_219->mPointerNum<0,                    _if_conditional314) {
                        # 941 "18field.c"
                        result_type_219->mPointerNum=0;
                    }
                }
            }
            # 946 "18field.c"
            come_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 946, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 948 "18field.c"
            buf_235=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value282=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value281=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 948, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 950 "18field.c"
            result_type2_236=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(result_type_219))));
            come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 951 "18field.c"
            result_type2_236->mPointerNum++;
            # 953 "18field.c"
            buffer_append_str(buf_235,((char*)(right_value284=xsprintf("come_range_check(&%s",left_value_196->c_value))));
            right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 958 "18field.c"
            for(            o2_saved_237=(struct list$1CVALUEph*)come_increment_ref_count((array_num_200)),it_240=list$1CVALUEph_begin((o2_saved_237));            !list$1CVALUEph_end((o2_saved_237));            it_240=list$1CVALUEph_next((o2_saved_237))            ){
                # 956 "18field.c"
                buffer_append_str(buf_235,((char*)(right_value285=xsprintf("[%s]",it_240->c_value))));
                right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 958 "18field.c"
            buffer_append_str(buf_235,((char*)(right_value286=xsprintf(",%s,%s+(",left_value_196->c_value,left_value_196->c_value))));
            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 959 "18field.c"
            i_243=0;
            # 975 "18field.c"
            for(            o2_saved_244=(struct list$1sNodeph*)come_increment_ref_count((var_type_218->mArrayNum)),it_245=list$1sNodeph_begin((o2_saved_244));            !list$1sNodeph_end((o2_saved_244));            it_245=list$1sNodeph_next((o2_saved_244))            ){
                # 966 "18field.c"
                # 961 "18field.c"
                if(_if_conditional319=!node_compile(it_245,info),                _if_conditional319) {
                    # 962 "18field.c"
                    err_msg(info,"invalid array num");
                    # 963 "18field.c"
                    exit(1);
                }
                # 966 "18field.c"
                come_value_246=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 967 "18field.c"
                dec_stack_ptr(1,info);
                # 969 "18field.c"
                buffer_append_str(buf_235,((char*)(right_value288=xsprintf("%s",come_value_246->c_value))));
                right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 973 "18field.c"
                # 970 "18field.c"
                if(_if_conditional320=i_243!=list$1sNodeph_length(var_type_218->mArrayNum)-1,                _if_conditional320) {
                    # 971 "18field.c"
                    buffer_append_str(buf_235,"*");
                }
                # 973 "18field.c"
                i_243++;
                come_call_finalizer2(CVALUE_finalize,come_value_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 975 "18field.c"
            buffer_append_str(buf_235,((char*)(right_value289=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 977 "18field.c"
            __dec_obj121=check_code_217;
            check_code_217=(char*)come_increment_ref_count(((char*)(right_value290=buffer_to_string(buf_235))));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 980 "18field.c"
        come_value_247=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 980, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1001 "18field.c"
        # 988 "18field.c"
        if(_if_conditional321=list$1sNodeph_length(left_type_197->mArrayNum)>0,        _if_conditional321) {
            # 992 "18field.c"
            for(            i_248=0;            i_248<list$1CVALUEph_length(array_num_200);            i_248++            ){
                # 990 "18field.c"
                list$1sNodeph_delete(left_type_197->mArrayNum,-1,-1);
            }
        }
        else {
            # 1001 "18field.c"
            # 993 "18field.c"
            if(_if_conditional322=left_type_197->mPointerNum>0,            _if_conditional322) {
                # 994 "18field.c"
                left_type_197->mPointerNum-=list$1CVALUEph_length(array_num_200);
                # 999 "18field.c"
                # 996 "18field.c"
                if(_if_conditional323=left_type_197->mPointerNum<0,                _if_conditional323) {
                    # 997 "18field.c"
                    left_type_197->mPointerNum=0;
                }
            }
        }
        # 1001 "18field.c"
        buf_249=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value292=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1001, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1003 "18field.c"
        buffer_append_str(buf_249,left_value_196->c_value);
        # 1009 "18field.c"
        for(        o2_saved_250=(struct list$1CVALUEph*)come_increment_ref_count((array_num_200)),it_251=list$1CVALUEph_begin((o2_saved_250));        !list$1CVALUEph_end((o2_saved_250));        it_251=list$1CVALUEph_next((o2_saved_250))        ){
            # 1006 "18field.c"
            buffer_append_str(buf_249,((char*)(right_value294=xsprintf("[%s]",it_251->c_value))));
            right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1009 "18field.c"
        left_value_code_252=(char*)come_increment_ref_count(((char*)(right_value295=buffer_to_string(buf_249))));
        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1011 "18field.c"
        check_assign_type(((char*)(right_value296=xsprintf("array is assinged to"))),left_type_197,right_type_209,right_value_208,(_Bool)0,(_Bool)1,info);
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1046 "18field.c"
        # 1012 "18field.c"
        if(_if_conditional324=left_type_197->mHeap&&right_type_209->mHeap&&left_type_197->mPointerNum>0&&right_type_209->mPointerNum>0,        _if_conditional324) {
            # 1028 "18field.c"
            # 1014 "18field.c"
            if(_if_conditional325=left_value_196->type->mPointerNum>=1,            _if_conditional325) {
                # 1015 "18field.c"
                decrement_ref_count_object(left_type_197,left_value_code_252,info,(_Bool)0);
                # 1016 "18field.c"
                std_move(left_type_197,right_type_209,right_value_208,info);
                # 1017 "18field.c"
                __dec_obj122=come_value_247->c_value;
                come_value_247->c_value=(char*)come_increment_ref_count(((char*)(right_value297=xsprintf("%s=%s",left_value_code_252,right_value_208->c_value))));
                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1028 "18field.c"
                # 1019 "18field.c"
                if(_if_conditional326=left_value_196->type->mPointerNum==0,                _if_conditional326) {
                    # 1020 "18field.c"
                    decrement_ref_count_object(left_type_197,left_value_code_252,info,(_Bool)0);
                    # 1021 "18field.c"
                    std_move(left_type_197,right_type_209,right_value_208,info);
                    # 1022 "18field.c"
                    __dec_obj123=come_value_247->c_value;
                    come_value_247->c_value=(char*)come_increment_ref_count(((char*)(right_value298=xsprintf("%s=%s",left_value_code_252,right_value_208->c_value))));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1025 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_252,left_value_196->type->mPointerNum);
                    # 1026 "18field.c"
                    __result185__ = (_Bool)0;
                    check_code_217 = come_decrement_ref_count2(check_code_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_252 = come_decrement_ref_count2(left_value_code_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result185__;
                }
            }
            # 1028 "18field.c"
            right_value_id_253=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_208->c_value));
            # 1033 "18field.c"
            # 1030 "18field.c"
            if(_if_conditional327=right_value_id_253!=-1,            _if_conditional327) {
                # 1031 "18field.c"
                remove_object_from_right_values(right_value_id_253,info);
            }
        }
        else {
            # 1045 "18field.c"
            # 1035 "18field.c"
            if(_if_conditional328=left_value_196->type->mPointerNum>=1,            _if_conditional328) {
                # 1036 "18field.c"
                __dec_obj124=come_value_247->c_value;
                come_value_247->c_value=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("%s=%s",left_value_code_252,right_value_208->c_value))));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1045 "18field.c"
                # 1038 "18field.c"
                if(_if_conditional329=left_value_196->type->mPointerNum==0,                _if_conditional329) {
                    # 1039 "18field.c"
                    __dec_obj125=come_value_247->c_value;
                    come_value_247->c_value=(char*)come_increment_ref_count(((char*)(right_value300=xsprintf("%s=%s",left_value_code_252,right_value_208->c_value))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1042 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_252,left_value_196->type->mPointerNum);
                    # 1043 "18field.c"
                    __result186__ = (_Bool)0;
                    check_code_217 = come_decrement_ref_count2(check_code_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_252 = come_decrement_ref_count2(left_value_code_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result186__;
                }
            }
        }
        # 1046 "18field.c"
        result_type_254=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(left_type_197))));
        come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1047 "18field.c"
        __dec_obj126=result_type_254->mArrayNum;
        result_type_254->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value303=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value302=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1047, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1048 "18field.c"
        __dec_obj127=come_value_247->type;
        come_value_247->type=(struct sType*)come_increment_ref_count(result_type_254);
        come_call_finalizer2(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1049 "18field.c"
        come_value_247->var=((void*)0);
        # 1055 "18field.c"
        # 1051 "18field.c"
        if(_if_conditional330=check_code_217&&gComeDebug,        _if_conditional330) {
            # 1052 "18field.c"
            __dec_obj128=come_value_247->c_value;
            come_value_247->c_value=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("(%s, %s)",check_code_217,come_value_247->c_value))));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 1055 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_247));
        # 1057 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_247->c_value);
        check_code_217 = come_decrement_ref_count2(check_code_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_252 = come_decrement_ref_count2(left_value_code_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1060 "18field.c"
    __result187__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result187__;
    come_call_finalizer2(CVALUE_finalize,left_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./neo-c.h"
        self->head=((void*)0);
        # 105 "./neo-c.h"
        self->tail=((void*)0);
        # 106 "./neo-c.h"
        self->len=0;
        # 108 "./neo-c.h"
        __result162__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result162__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_198;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_198, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_199, 0, sizeof(struct list_item$1CVALUEph*));
            # 123 "./neo-c.h"
            it_198=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional20=it_198!=((void*)0),            _while_condtional20) {
                # 125 "./neo-c.h"
                prev_it_199=it_198;
                # 126 "./neo-c.h"
                it_198=it_198->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional276;
struct sNode* result_202;
struct sNode* __result163__;
_Bool _if_conditional277;
struct sNode* __result164__;
struct sNode* result_203;
struct sNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_202, 0, sizeof(struct sNode*));
memset(&result_203, 0, sizeof(struct sNode*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional276=self==((void*)0),        _if_conditional276) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_202,0,sizeof(struct sNode*));
            # 288 "./neo-c.h"
            __result163__ = __result_obj__ = result_202;
            return __result163__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result164__ = __result_obj__ = self->it->item;
            return __result164__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_203,0,sizeof(struct sNode*));
        # 298 "./neo-c.h"
        __result165__ = __result_obj__ = result_203;
        return __result165__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result166__ = self==((void*)0)||self->it==((void*)0);
        return __result166__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional278;
struct sNode* result_205;
struct sNode* __result167__;
_Bool _if_conditional279;
struct sNode* __result168__;
struct sNode* result_206;
struct sNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(struct sNode*));
memset(&result_206, 0, sizeof(struct sNode*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional278=self==((void*)0)||self->it==((void*)0),        _if_conditional278) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_205,0,sizeof(struct sNode*));
            # 305 "./neo-c.h"
            __result167__ = __result_obj__ = result_205;
            return __result167__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result168__ = __result_obj__ = self->it->item;
            return __result168__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_206,0,sizeof(struct sNode*));
        # 316 "./neo-c.h"
        __result169__ = __result_obj__ = result_206;
        return __result169__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional283;
struct list_item$1CVALUEph* it_214;
int i_215;
_Bool _while_condtional21;
_Bool _if_conditional284;
struct CVALUE* __result172__;
struct CVALUE* default_value_216;
struct CVALUE* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_214, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_215, 0, sizeof(int));
memset(&default_value_216, 0, sizeof(struct CVALUE*));
            # 686 "./neo-c.h"
            # 682 "./neo-c.h"
            if(_if_conditional283=position<0,            _if_conditional283) {
                # 683 "./neo-c.h"
                position+=self->len;
            }
            # 686 "./neo-c.h"
            it_214=self->head;
            # 687 "./neo-c.h"
            i_215=0;
            # 694 "./neo-c.h"
            while(_while_condtional21=it_214!=((void*)0),            _while_condtional21) {
                # 692 "./neo-c.h"
                # 689 "./neo-c.h"
                if(_if_conditional284=position==i_215,                _if_conditional284) {
                    # 690 "./neo-c.h"
                    __result172__ = __result_obj__ = it_214->item;
                    return __result172__;
                }
                # 692 "./neo-c.h"
                it_214=it_214->next;
                # 693 "./neo-c.h"
                i_215++;
            }
            # 696 "./neo-c.h"
            # 697 "./neo-c.h"
            memset(&default_value_216,0,sizeof(struct CVALUE*));
            # 698 "./neo-c.h"
            __result173__ = __result_obj__ = default_value_216;
            come_call_finalizer2(CVALUE_finalize,default_value_216, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result173__;
            come_call_finalizer2(CVALUE_finalize,default_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional289;
int __result174__;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 367 "./neo-c.h"
                    # 364 "./neo-c.h"
                    if(_if_conditional289=self==((void*)0),                    _if_conditional289) {
                        # 365 "./neo-c.h"
                        __result174__ = 0;
                        return __result174__;
                    }
                    # 367 "./neo-c.h"
                    __result175__ = self->len;
                    return __result175__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
int tmp_222;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct list$1sNodeph* __result176__;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list_item$1sNodeph* it_223;
int i_224;
_Bool _while_condtional22;
_Bool _if_conditional301;
struct list_item$1sNodeph* prev_it_225;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct list_item$1sNodeph* it_226;
int i_227;
_Bool _while_condtional23;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list_item$1sNodeph* prev_it_228;
struct list_item$1sNodeph* it_229;
struct list_item$1sNodeph* head_prev_it_230;
struct list_item$1sNodeph* tail_it_231;
int i_232;
_Bool _while_condtional24;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list_item$1sNodeph* prev_it_233;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list$1sNodeph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_222, 0, sizeof(int));
memset(&it_223, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_224, 0, sizeof(int));
memset(&prev_it_225, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_226, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_227, 0, sizeof(int));
memset(&prev_it_228, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_229, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_230, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_231, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_232, 0, sizeof(int));
memset(&prev_it_233, 0, sizeof(struct list_item$1sNodeph*));
                                # 467 "./neo-c.h"
                                # 464 "./neo-c.h"
                                if(_if_conditional293=head<0,                                _if_conditional293) {
                                    # 465 "./neo-c.h"
                                    head+=self->len;
                                }
                                # 471 "./neo-c.h"
                                # 467 "./neo-c.h"
                                if(_if_conditional294=tail<0,                                _if_conditional294) {
                                    # 468 "./neo-c.h"
                                    tail+=self->len+1;
                                }
                                # 477 "./neo-c.h"
                                # 471 "./neo-c.h"
                                if(_if_conditional295=head>tail,                                _if_conditional295) {
                                    # 472 "./neo-c.h"
                                    tmp_222=tail;
                                    # 473 "./neo-c.h"
                                    tail=head;
                                    # 474 "./neo-c.h"
                                    head=tmp_222;
                                }
                                # 481 "./neo-c.h"
                                # 477 "./neo-c.h"
                                if(_if_conditional296=head<0,                                _if_conditional296) {
                                    # 478 "./neo-c.h"
                                    head=0;
                                }
                                # 485 "./neo-c.h"
                                # 481 "./neo-c.h"
                                if(_if_conditional297=tail>self->len,                                _if_conditional297) {
                                    # 482 "./neo-c.h"
                                    tail=self->len;
                                }
                                # 489 "./neo-c.h"
                                # 485 "./neo-c.h"
                                if(_if_conditional298=head==tail,                                _if_conditional298) {
                                    # 486 "./neo-c.h"
                                    __result176__ = __result_obj__ = self;
                                    return __result176__;
                                }
                                # 584 "./neo-c.h"
                                # 489 "./neo-c.h"
                                if(_if_conditional299=head==0&&tail==self->len,                                _if_conditional299) {
                                    # 491 "./neo-c.h"
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    # 584 "./neo-c.h"
                                    # 493 "./neo-c.h"
                                    if(_if_conditional300=head==0,                                    _if_conditional300) {
                                        # 494 "./neo-c.h"
                                        it_223=self->head;
                                        # 495 "./neo-c.h"
                                        i_224=0;
                                        # 517 "./neo-c.h"
                                        while(_while_condtional22=it_223!=((void*)0),                                        _while_condtional22) {
                                            # 516 "./neo-c.h"
                                            # 497 "./neo-c.h"
                                            if(_if_conditional301=i_224<tail,                                            _if_conditional301) {
                                                # 498 "./neo-c.h"
                                                prev_it_225=it_223;
                                                # 500 "./neo-c.h"
                                                it_223=it_223->next;
                                                # 501 "./neo-c.h"
                                                i_224++;
                                                # 503 "./neo-c.h"
                                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                # 505 "./neo-c.h"
                                                self->len--;
                                            }
                                            else {
                                                # 516 "./neo-c.h"
                                                # 507 "./neo-c.h"
                                                if(_if_conditional302=i_224==tail,                                                _if_conditional302) {
                                                    # 508 "./neo-c.h"
                                                    self->head=it_223;
                                                    # 509 "./neo-c.h"
                                                    self->head->prev=((void*)0);
                                                    # 510 "./neo-c.h"
                                                    break;
                                                }
                                                else {
                                                    # 513 "./neo-c.h"
                                                    it_223=it_223->next;
                                                    # 514 "./neo-c.h"
                                                    i_224++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 584 "./neo-c.h"
                                        # 518 "./neo-c.h"
                                        if(_if_conditional303=tail==self->len,                                        _if_conditional303) {
                                            # 519 "./neo-c.h"
                                            it_226=self->head;
                                            # 520 "./neo-c.h"
                                            i_227=0;
                                            # 542 "./neo-c.h"
                                            while(_while_condtional23=it_226!=((void*)0),                                            _while_condtional23) {
                                                # 527 "./neo-c.h"
                                                # 522 "./neo-c.h"
                                                if(_if_conditional304=i_227==head,                                                _if_conditional304) {
                                                    # 523 "./neo-c.h"
                                                    self->tail=it_226->prev;
                                                    # 524 "./neo-c.h"
                                                    self->tail->next=((void*)0);
                                                }
                                                # 541 "./neo-c.h"
                                                # 527 "./neo-c.h"
                                                if(_if_conditional305=i_227>=head,                                                _if_conditional305) {
                                                    # 528 "./neo-c.h"
                                                    prev_it_228=it_226;
                                                    # 530 "./neo-c.h"
                                                    it_226=it_226->next;
                                                    # 531 "./neo-c.h"
                                                    i_227++;
                                                    # 533 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 535 "./neo-c.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 538 "./neo-c.h"
                                                    it_226=it_226->next;
                                                    # 539 "./neo-c.h"
                                                    i_227++;
                                                }
                                            }
                                        }
                                        else {
                                            # 544 "./neo-c.h"
                                            it_229=self->head;
                                            # 546 "./neo-c.h"
                                            head_prev_it_230=((void*)0);
                                            # 547 "./neo-c.h"
                                            tail_it_231=((void*)0);
                                            # 550 "./neo-c.h"
                                            i_232=0;
                                            # 576 "./neo-c.h"
                                            while(_while_condtional24=it_229!=((void*)0),                                            _while_condtional24) {
                                                # 555 "./neo-c.h"
                                                # 552 "./neo-c.h"
                                                if(_if_conditional306=i_232==head,                                                _if_conditional306) {
                                                    # 553 "./neo-c.h"
                                                    head_prev_it_230=it_229->prev;
                                                }
                                                # 559 "./neo-c.h"
                                                # 555 "./neo-c.h"
                                                if(_if_conditional307=i_232==tail,                                                _if_conditional307) {
                                                    # 556 "./neo-c.h"
                                                    tail_it_231=it_229;
                                                }
                                                # 574 "./neo-c.h"
                                                # 559 "./neo-c.h"
                                                if(_if_conditional308=i_232>=head&&i_232<tail,                                                _if_conditional308) {
                                                    # 561 "./neo-c.h"
                                                    prev_it_233=it_229;
                                                    # 563 "./neo-c.h"
                                                    it_229=it_229->next;
                                                    # 564 "./neo-c.h"
                                                    i_232++;
                                                    # 566 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 568 "./neo-c.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 571 "./neo-c.h"
                                                    it_229=it_229->next;
                                                    # 572 "./neo-c.h"
                                                    i_232++;
                                                }
                                            }
                                            # 579 "./neo-c.h"
                                            # 576 "./neo-c.h"
                                            if(_if_conditional309=head_prev_it_230!=((void*)0),                                            _if_conditional309) {
                                                # 577 "./neo-c.h"
                                                head_prev_it_230->next=tail_it_231;
                                            }
                                            # 582 "./neo-c.h"
                                            # 579 "./neo-c.h"
                                            if(_if_conditional310=tail_it_231!=((void*)0),                                            _if_conditional310) {
                                                # 580 "./neo-c.h"
                                                tail_it_231->prev=head_prev_it_230;
                                            }
                                        }
                                    }
                                }
                                # 584 "./neo-c.h"
                                __result177__ = __result_obj__ = self;
                                return __result177__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional315;
struct CVALUE* result_238;
struct CVALUE* __result178__;
_Bool _if_conditional316;
struct CVALUE* __result179__;
struct CVALUE* result_239;
struct CVALUE* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_238, 0, sizeof(struct CVALUE*));
memset(&result_239, 0, sizeof(struct CVALUE*));
                # 290 "./neo-c.h"
                # 285 "./neo-c.h"
                if(_if_conditional315=self==((void*)0),                _if_conditional315) {
                    # 286 "./neo-c.h"
                    # 287 "./neo-c.h"
                    memset(&result_238,0,sizeof(struct CVALUE*));
                    # 288 "./neo-c.h"
                    __result178__ = __result_obj__ = result_238;
                    return __result178__;
                }
                # 290 "./neo-c.h"
                self->it=self->head;
                # 296 "./neo-c.h"
                # 292 "./neo-c.h"
                if(self->it) {
                    # 293 "./neo-c.h"
                    __result179__ = __result_obj__ = self->it->item;
                    return __result179__;
                }
                # 296 "./neo-c.h"
                # 297 "./neo-c.h"
                memset(&result_239,0,sizeof(struct CVALUE*));
                # 298 "./neo-c.h"
                __result180__ = __result_obj__ = result_239;
                return __result180__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./neo-c.h"
                __result181__ = self==((void*)0)||self->it==((void*)0);
                return __result181__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional317;
struct CVALUE* result_241;
struct CVALUE* __result182__;
_Bool _if_conditional318;
struct CVALUE* __result183__;
struct CVALUE* result_242;
struct CVALUE* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_241, 0, sizeof(struct CVALUE*));
memset(&result_242, 0, sizeof(struct CVALUE*));
                # 308 "./neo-c.h"
                # 302 "./neo-c.h"
                if(_if_conditional317=self==((void*)0)||self->it==((void*)0),                _if_conditional317) {
                    # 303 "./neo-c.h"
                    # 304 "./neo-c.h"
                    memset(&result_241,0,sizeof(struct CVALUE*));
                    # 305 "./neo-c.h"
                    __result182__ = __result_obj__ = result_241;
                    return __result182__;
                }
                # 308 "./neo-c.h"
                self->it=self->it->next;
                # 314 "./neo-c.h"
                # 310 "./neo-c.h"
                if(self->it) {
                    # 311 "./neo-c.h"
                    __result183__ = __result_obj__ = self->it->item;
                    return __result183__;
                }
                # 314 "./neo-c.h"
                # 315 "./neo-c.h"
                memset(&result_242,0,sizeof(struct CVALUE*));
                # 316 "./neo-c.h"
                __result184__ = __result_obj__ = result_242;
                return __result184__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1065 "18field.c"
    __result188__ = self->sline;
    return __result188__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value305;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
    # 1070 "18field.c"
    __result189__ = __result_obj__ = ((char*)(right_value305=__builtin_string(self->sname)));
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result189__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value306;
char* __dec_obj129;
void* right_value307;
struct list$1sNodeph* __dec_obj130;
void* right_value308;
struct sNode* __dec_obj131;
struct sLoadArrayNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
    # 1086 "18field.c"
    self->sline=info->sline;
    # 1087 "18field.c"
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1089 "18field.c"
    __dec_obj130=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value307=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1090 "18field.c"
    self->mBreakGuard=break_guard;
    # 1092 "18field.c"
    __dec_obj131=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(left))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1093 "18field.c"
    self->mQuote=quote;
    # 1095 "18field.c"
    __result190__ = __result_obj__ = self;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result190__;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1100 "18field.c"
    __result191__ = (_Bool)0;
    return __result191__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
void* right_value309;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
    # 1105 "18field.c"
    __result192__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sLoadArrayNode")));
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result192__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_255;
struct list$1sNodeph* array_num_nodes_256;
_Bool _if_conditional334;
_Bool __result193__;
void* right_value310;
struct CVALUE* left_value_257;
_Bool _if_conditional335;
void* right_value311;
void* right_value312;
char* __dec_obj132;
void* right_value313;
struct sType* left_type_258;
void* right_value314;
void* right_value315;
struct list$1CVALUEph* array_num_259;
struct list$1sNodeph* o2_saved_260;
struct sNode* it_261;
_Bool _if_conditional336;
_Bool __result194__;
void* right_value316;
struct CVALUE* c_value_262;
void* right_value317;
struct sType* type_263;
char* fun_name_264;
_Bool calling_fun_265;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
struct sType* var_type_266;
void* right_value318;
struct sType* result_type_267;
_Bool _if_conditional340;
struct sType* __dec_obj133;
_Bool _if_conditional341;
int n_268;
_Bool _if_conditional342;
void* right_value319;
struct sType* __dec_obj134;
_Bool _if_conditional343;
void* right_value320;
struct sType* __dec_obj135;
_Bool _if_conditional344;
int i_269;
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value321;
struct CVALUE* come_value_270;
void* right_value322;
void* right_value323;
struct buffer* buf_271;
void* right_value324;
struct sType* result_type2_272;
void* right_value325;
void* right_value326;
struct list$1CVALUEph* o2_saved_273;
struct CVALUE* it_274;
void* right_value327;
void* right_value328;
int i_275;
struct list$1sNodeph* o2_saved_276;
struct sNode* it_277;
_Bool _if_conditional349;
void* right_value329;
struct CVALUE* come_value_278;
void* right_value330;
_Bool _if_conditional350;
void* right_value331;
void* right_value332;
char* left_value_code_279;
void* right_value333;
char* __dec_obj136;
void* right_value334;
struct sType* __dec_obj137;
void* right_value335;
struct CVALUE* come_value_280;
void* right_value336;
void* right_value337;
struct buffer* buf_281;
struct list$1CVALUEph* o2_saved_282;
struct CVALUE* it_283;
void* right_value338;
void* right_value339;
char* left_value_code_284;
void* right_value340;
char* __dec_obj138;
void* right_value341;
struct sType* result_type_285;
_Bool _if_conditional351;
struct sType* __dec_obj139;
_Bool _if_conditional352;
int n_286;
_Bool _if_conditional353;
void* right_value342;
struct sType* __dec_obj140;
_Bool _if_conditional354;
void* right_value343;
struct sType* __dec_obj141;
_Bool _if_conditional355;
int i_287;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
void* right_value344;
struct sType* __dec_obj142;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_255, 0, sizeof(struct sNode*));
memset(&array_num_nodes_256, 0, sizeof(struct list$1sNodeph*));
right_value310 = (void*)0;
memset(&left_value_257, 0, sizeof(struct CVALUE*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&left_type_258, 0, sizeof(struct sType*));
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&array_num_259, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_260, 0, sizeof(struct list$1sNodeph*));
memset(&it_261, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
memset(&c_value_262, 0, sizeof(struct CVALUE*));
right_value317 = (void*)0;
memset(&type_263, 0, sizeof(struct sType*));
memset(&fun_name_264, 0, sizeof(char*));
memset(&calling_fun_265, 0, sizeof(_Bool));
memset(&var_type_266, 0, sizeof(struct sType*));
right_value318 = (void*)0;
memset(&result_type_267, 0, sizeof(struct sType*));
memset(&n_268, 0, sizeof(int));
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&i_269, 0, sizeof(int));
right_value321 = (void*)0;
memset(&come_value_270, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&buf_271, 0, sizeof(struct buffer*));
right_value324 = (void*)0;
memset(&result_type2_272, 0, sizeof(struct sType*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&o2_saved_273, 0, sizeof(struct list$1CVALUEph*));
memset(&it_274, 0, sizeof(struct CVALUE*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&i_275, 0, sizeof(int));
memset(&o2_saved_276, 0, sizeof(struct list$1sNodeph*));
memset(&it_277, 0, sizeof(struct sNode*));
right_value329 = (void*)0;
memset(&come_value_278, 0, sizeof(struct CVALUE*));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&left_value_code_279, 0, sizeof(char*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&come_value_280, 0, sizeof(struct CVALUE*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&buf_281, 0, sizeof(struct buffer*));
memset(&o2_saved_282, 0, sizeof(struct list$1CVALUEph*));
memset(&it_283, 0, sizeof(struct CVALUE*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&left_value_code_284, 0, sizeof(char*));
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&result_type_285, 0, sizeof(struct sType*));
memset(&n_286, 0, sizeof(int));
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&i_287, 0, sizeof(int));
right_value344 = (void*)0;
    # 1110 "18field.c"
    left_255=self->mLeft;
    # 1111 "18field.c"
    array_num_nodes_256=self->mArrayNum;
    # 1117 "18field.c"
    # 1113 "18field.c"
    if(_if_conditional334=!node_compile(left_255,info),    _if_conditional334) {
        # 1114 "18field.c"
        __result193__ = (_Bool)0;
        return __result193__;
    }
    # 1117 "18field.c"
    left_value_257=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1118 "18field.c"
    dec_stack_ptr(1,info);
    # 1124 "18field.c"
    # 1120 "18field.c"
    if(_if_conditional335=gComeDebug&&left_value_257->type->mPointerNum>0,    _if_conditional335) {
        # 1121 "18field.c"
        __dec_obj132=left_value_257->c_value;
        left_value_257->c_value=(char*)come_increment_ref_count(((char*)(right_value312=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value311=make_type_name_string(left_value_257->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_257->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1124 "18field.c"
    left_type_258=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(left_value_257->type))));
    come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1126 "18field.c"
    array_num_259=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value315=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value314=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1126, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1139 "18field.c"
    for(    o2_saved_260=(array_num_nodes_256),it_261=list$1sNodeph_begin((o2_saved_260));    !list$1sNodeph_end((o2_saved_260));    it_261=list$1sNodeph_next((o2_saved_260))    ){
        # 1133 "18field.c"
        # 1129 "18field.c"
        if(_if_conditional336=!node_compile(it_261,info),        _if_conditional336) {
            # 1130 "18field.c"
            __result194__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result194__;
        }
        # 1133 "18field.c"
        c_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value316=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1134 "18field.c"
        dec_stack_ptr(1,info);
        # 1136 "18field.c"
        list$1CVALUEph_push_back(array_num_259,(struct CVALUE*)come_increment_ref_count(c_value_262));
        come_call_finalizer2(CVALUE_finalize,c_value_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1139 "18field.c"
    type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=sType_clone(left_value_257->type))));
    come_call_finalizer2(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1141 "18field.c"
    fun_name_264="operator_load_element";
    # 1142 "18field.c"
    # 1150 "18field.c"
    # 1143 "18field.c"
    if(self->mQuote) {
        # 1144 "18field.c"
        calling_fun_265=(_Bool)0;
    }
    else {
        # 1147 "18field.c"
        calling_fun_265=operator_overload_fun(type_263,fun_name_264,left_value_257,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_259,0), "18field.c", 1147, 10)),self->mBreakGuard,info);
    }
    # 1303 "18field.c"
    # 1150 "18field.c"
    if(_if_conditional338=!calling_fun_265,    _if_conditional338) {
        # 1301 "18field.c"
        # 1151 "18field.c"
        if(_if_conditional339=gComeDebug&&left_value_257->var&&left_value_257->var->mType&&list$1sNodeph_length(left_value_257->var->mType->mArrayNum)>0,        _if_conditional339) {
            # 1153 "18field.c"
            var_type_266=left_value_257->var->mType;
            # 1154 "18field.c"
            result_type_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(left_type_258))));
            come_call_finalizer2(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1160 "18field.c"
            # 1156 "18field.c"
            if(result_type_267->mOriginalLoadVarType->v1) {
                # 1157 "18field.c"
                __dec_obj133=result_type_267;
                result_type_267=(struct sType*)come_increment_ref_count(result_type_267->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 1194 "18field.c"
            # 1160 "18field.c"
            if(_if_conditional341=list$1sNodeph_length(result_type_267->mArrayNum)>0,            _if_conditional341) {
                # 1161 "18field.c"
                n_268=list$1sNodeph_length(result_type_267->mArrayNum)-list$1CVALUEph_length(array_num_259);
                # 1183 "18field.c"
                # 1163 "18field.c"
                if(_if_conditional342=n_268==0,                _if_conditional342) {
                    # 1164 "18field.c"
                    __dec_obj134=result_type_267;
                    result_type_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(left_type_258))));
                    come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1168 "18field.c"
                    # 1165 "18field.c"
                    if(left_type_258->mOriginalLoadVarType->v1) {
                        # 1166 "18field.c"
                        __dec_obj135=result_type_267;
                        result_type_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(left_type_258->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1168 "18field.c"
                    list$1sNodeph_reset(result_type_267->mArrayNum);
                }
                else {
                    # 1183 "18field.c"
                    # 1170 "18field.c"
                    if(_if_conditional344=n_268>0,                    _if_conditional344) {
                        # 1174 "18field.c"
                        for(                        i_269=0;                        i_269<n_268;                        i_269++                        ){
                            # 1172 "18field.c"
                            list$1sNodeph_delete(result_type_267->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1183 "18field.c"
                        # 1175 "18field.c"
                        if(_if_conditional345=n_268<0,                        _if_conditional345) {
                            # 1176 "18field.c"
                            list$1sNodeph_reset(result_type_267->mArrayNum);
                            # 1177 "18field.c"
                            result_type_267->mPointerNum+=n_268;
                            # 1182 "18field.c"
                            # 1179 "18field.c"
                            if(_if_conditional346=result_type_267->mPointerNum<0,                            _if_conditional346) {
                                # 1180 "18field.c"
                                result_type_267->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1192 "18field.c"
                # 1185 "18field.c"
                if(_if_conditional347=result_type_267->mPointerNum>0,                _if_conditional347) {
                    # 1186 "18field.c"
                    result_type_267->mPointerNum-=list$1CVALUEph_length(array_num_259);
                    # 1191 "18field.c"
                    # 1188 "18field.c"
                    if(_if_conditional348=result_type_267->mPointerNum<0,                    _if_conditional348) {
                        # 1189 "18field.c"
                        result_type_267->mPointerNum=0;
                    }
                }
            }
            # 1194 "18field.c"
            come_value_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1194, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1196 "18field.c"
            buf_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1196, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1199 "18field.c"
            result_type2_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(result_type_267))));
            come_call_finalizer2(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1200 "18field.c"
            result_type2_272->mPointerNum++;
            # 1204 "18field.c"
            buffer_append_str(buf_271,((char*)(right_value326=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value325=make_type_name_string(result_type2_272,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_257->c_value))));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1209 "18field.c"
            for(            o2_saved_273=(struct list$1CVALUEph*)come_increment_ref_count((array_num_259)),it_274=list$1CVALUEph_begin((o2_saved_273));            !list$1CVALUEph_end((o2_saved_273));            it_274=list$1CVALUEph_next((o2_saved_273))            ){
                # 1207 "18field.c"
                buffer_append_str(buf_271,((char*)(right_value327=xsprintf("[%s]",it_274->c_value))));
                right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1209 "18field.c"
            buffer_append_str(buf_271,((char*)(right_value328=xsprintf(",%s,%s+(",left_value_257->c_value,left_value_257->c_value))));
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1210 "18field.c"
            i_275=0;
            # 1226 "18field.c"
            for(            o2_saved_276=(struct list$1sNodeph*)come_increment_ref_count((var_type_266->mArrayNum)),it_277=list$1sNodeph_begin((o2_saved_276));            !list$1sNodeph_end((o2_saved_276));            it_277=list$1sNodeph_next((o2_saved_276))            ){
                # 1217 "18field.c"
                # 1212 "18field.c"
                if(_if_conditional349=!node_compile(it_277,info),                _if_conditional349) {
                    # 1213 "18field.c"
                    err_msg(info,"invalid array num");
                    # 1214 "18field.c"
                    exit(1);
                }
                # 1217 "18field.c"
                come_value_278=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1218 "18field.c"
                dec_stack_ptr(1,info);
                # 1220 "18field.c"
                buffer_append_str(buf_271,((char*)(right_value330=xsprintf("%s",come_value_278->c_value))));
                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1224 "18field.c"
                # 1221 "18field.c"
                if(_if_conditional350=i_275!=list$1sNodeph_length(var_type_266->mArrayNum)-1,                _if_conditional350) {
                    # 1222 "18field.c"
                    buffer_append_str(buf_271,"*");
                }
                # 1224 "18field.c"
                i_275++;
                come_call_finalizer2(CVALUE_finalize,come_value_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1226 "18field.c"
            buffer_append_str(buf_271,((char*)(right_value331=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1228 "18field.c"
            left_value_code_279=(char*)come_increment_ref_count(((char*)(right_value332=buffer_to_string(buf_271))));
            right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1230 "18field.c"
            __dec_obj136=come_value_270->c_value;
            come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value333=xsprintf("%s",left_value_code_279))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1232 "18field.c"
            __dec_obj137=come_value_270->type;
            come_value_270->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(result_type_267))));
            come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1233 "18field.c"
            come_value_270->var=((void*)0);
            # 1235 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_270));
            # 1237 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_270->c_value);
            come_call_finalizer2(sType_finalize,result_type_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_272, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_279 = come_decrement_ref_count2(left_value_code_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1240 "18field.c"
            come_value_280=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1240, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1242 "18field.c"
            buf_281=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value337=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value336=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1242, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1244 "18field.c"
            buffer_append_str(buf_281,left_value_257->c_value);
            # 1250 "18field.c"
            for(            o2_saved_282=(struct list$1CVALUEph*)come_increment_ref_count((array_num_259)),it_283=list$1CVALUEph_begin((o2_saved_282));            !list$1CVALUEph_end((o2_saved_282));            it_283=list$1CVALUEph_next((o2_saved_282))            ){
                # 1247 "18field.c"
                buffer_append_str(buf_281,((char*)(right_value338=xsprintf("[%s]",it_283->c_value))));
                right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1250 "18field.c"
            left_value_code_284=(char*)come_increment_ref_count(((char*)(right_value339=buffer_to_string(buf_281))));
            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1252 "18field.c"
            __dec_obj138=come_value_280->c_value;
            come_value_280->c_value=(char*)come_increment_ref_count(((char*)(right_value340=xsprintf("%s",left_value_code_284))));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1254 "18field.c"
            result_type_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(left_type_258))));
            come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1260 "18field.c"
            # 1256 "18field.c"
            if(result_type_285->mOriginalLoadVarType->v1) {
                # 1257 "18field.c"
                __dec_obj139=result_type_285;
                result_type_285=(struct sType*)come_increment_ref_count(result_type_285->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 1294 "18field.c"
            # 1260 "18field.c"
            if(_if_conditional352=list$1sNodeph_length(result_type_285->mArrayNum)>0,            _if_conditional352) {
                # 1261 "18field.c"
                n_286=list$1sNodeph_length(result_type_285->mArrayNum)-list$1CVALUEph_length(array_num_259);
                # 1283 "18field.c"
                # 1263 "18field.c"
                if(_if_conditional353=n_286==0,                _if_conditional353) {
                    # 1264 "18field.c"
                    __dec_obj140=result_type_285;
                    result_type_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(left_type_258))));
                    come_call_finalizer2(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1268 "18field.c"
                    # 1265 "18field.c"
                    if(left_type_258->mOriginalLoadVarType->v1) {
                        # 1266 "18field.c"
                        __dec_obj141=result_type_285;
                        result_type_285=(struct sType*)come_increment_ref_count(((struct sType*)(right_value343=sType_clone(left_type_258->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1268 "18field.c"
                    list$1sNodeph_reset(result_type_285->mArrayNum);
                }
                else {
                    # 1283 "18field.c"
                    # 1270 "18field.c"
                    if(_if_conditional355=n_286>0,                    _if_conditional355) {
                        # 1274 "18field.c"
                        for(                        i_287=0;                        i_287<n_286;                        i_287++                        ){
                            # 1272 "18field.c"
                            list$1sNodeph_delete(result_type_285->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1283 "18field.c"
                        # 1275 "18field.c"
                        if(_if_conditional356=n_286<0,                        _if_conditional356) {
                            # 1276 "18field.c"
                            list$1sNodeph_reset(result_type_285->mArrayNum);
                            # 1277 "18field.c"
                            result_type_285->mPointerNum+=n_286;
                            # 1282 "18field.c"
                            # 1279 "18field.c"
                            if(_if_conditional357=result_type_285->mPointerNum<0,                            _if_conditional357) {
                                # 1280 "18field.c"
                                result_type_285->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1292 "18field.c"
                # 1285 "18field.c"
                if(_if_conditional358=result_type_285->mPointerNum>0,                _if_conditional358) {
                    # 1286 "18field.c"
                    result_type_285->mPointerNum-=list$1CVALUEph_length(array_num_259);
                    # 1291 "18field.c"
                    # 1288 "18field.c"
                    if(_if_conditional359=result_type_285->mPointerNum<0,                    _if_conditional359) {
                        # 1289 "18field.c"
                        result_type_285->mPointerNum=0;
                    }
                }
            }
            # 1294 "18field.c"
            __dec_obj142=come_value_280->type;
            come_value_280->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value344=sType_clone(result_type_285))));
            come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1295 "18field.c"
            come_value_280->var=((void*)0);
            # 1297 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_280));
            # 1299 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_280->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_284 = come_decrement_ref_count2(left_value_code_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 1303 "18field.c"
    __result195__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result195__;
    come_call_finalizer2(CVALUE_finalize,left_value_257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1308 "18field.c"
    __result196__ = self->sline;
    return __result196__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value345;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
    # 1313 "18field.c"
    __result197__ = __result_obj__ = ((char*)(right_value345=__builtin_string(self->sname)));
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result197__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value346;
char* __dec_obj143;
void* right_value347;
struct list$1sNodeph* __dec_obj144;
void* right_value348;
struct sNode* __dec_obj145;
struct sLoadRangeArrayNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
    # 1328 "18field.c"
    self->sline=info->sline;
    # 1329 "18field.c"
    __dec_obj143=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string(info->sname))));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1331 "18field.c"
    __dec_obj144=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value347=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1333 "18field.c"
    __dec_obj145=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1334 "18field.c"
    self->mQuote=quote;
    # 1336 "18field.c"
    __result198__ = __result_obj__ = self;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result198__;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1341 "18field.c"
    __result199__ = (_Bool)0;
    return __result199__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
void* right_value349;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value349 = (void*)0;
    # 1346 "18field.c"
    __result200__ = __result_obj__ = ((char*)(right_value349=__builtin_string("sLoadRangeArrayNode")));
    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result200__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_288;
struct list$1sNodeph* array_num_nodes_289;
_Bool _if_conditional363;
_Bool __result201__;
void* right_value350;
struct CVALUE* left_value_290;
void* right_value351;
struct sType* left_type_291;
void* right_value352;
void* right_value353;
struct list$1CVALUEph* array_num_292;
struct list$1sNodeph* o2_saved_293;
struct sNode* it_294;
_Bool _if_conditional364;
_Bool __result202__;
void* right_value354;
struct CVALUE* c_value_295;
void* right_value355;
struct sType* type_296;
char* fun_name_297;
_Bool calling_fun_298;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value356;
struct CVALUE* come_value_299;
void* right_value357;
void* right_value358;
struct buffer* buf_300;
struct list$1CVALUEph* o2_saved_301;
struct CVALUE* it_302;
void* right_value359;
void* right_value360;
char* left_value_code_303;
void* right_value361;
char* __dec_obj146;
void* right_value362;
struct sType* result_type_304;
_Bool _if_conditional367;
struct sType* __dec_obj147;
_Bool _if_conditional368;
int n_305;
_Bool _if_conditional369;
void* right_value363;
struct sType* __dec_obj148;
_Bool _if_conditional370;
void* right_value364;
struct sType* __dec_obj149;
_Bool _if_conditional371;
int i_306;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
void* right_value365;
struct sType* __dec_obj150;
_Bool __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_288, 0, sizeof(struct sNode*));
memset(&array_num_nodes_289, 0, sizeof(struct list$1sNodeph*));
right_value350 = (void*)0;
memset(&left_value_290, 0, sizeof(struct CVALUE*));
right_value351 = (void*)0;
memset(&left_type_291, 0, sizeof(struct sType*));
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&array_num_292, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_293, 0, sizeof(struct list$1sNodeph*));
memset(&it_294, 0, sizeof(struct sNode*));
right_value354 = (void*)0;
memset(&c_value_295, 0, sizeof(struct CVALUE*));
right_value355 = (void*)0;
memset(&type_296, 0, sizeof(struct sType*));
memset(&fun_name_297, 0, sizeof(char*));
memset(&calling_fun_298, 0, sizeof(_Bool));
right_value356 = (void*)0;
memset(&come_value_299, 0, sizeof(struct CVALUE*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&buf_300, 0, sizeof(struct buffer*));
memset(&o2_saved_301, 0, sizeof(struct list$1CVALUEph*));
memset(&it_302, 0, sizeof(struct CVALUE*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&left_value_code_303, 0, sizeof(char*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&result_type_304, 0, sizeof(struct sType*));
memset(&n_305, 0, sizeof(int));
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&i_306, 0, sizeof(int));
right_value365 = (void*)0;
    # 1351 "18field.c"
    left_288=self->mLeft;
    # 1352 "18field.c"
    array_num_nodes_289=self->mArrayNum;
    # 1358 "18field.c"
    # 1354 "18field.c"
    if(_if_conditional363=!node_compile(left_288,info),    _if_conditional363) {
        # 1355 "18field.c"
        __result201__ = (_Bool)0;
        return __result201__;
    }
    # 1358 "18field.c"
    left_value_290=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value350=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1359 "18field.c"
    dec_stack_ptr(1,info);
    # 1361 "18field.c"
    left_type_291=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(left_value_290->type))));
    come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1363 "18field.c"
    array_num_292=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value353=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value352=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1363, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1376 "18field.c"
    for(    o2_saved_293=(array_num_nodes_289),it_294=list$1sNodeph_begin((o2_saved_293));    !list$1sNodeph_end((o2_saved_293));    it_294=list$1sNodeph_next((o2_saved_293))    ){
        # 1370 "18field.c"
        # 1366 "18field.c"
        if(_if_conditional364=!node_compile(it_294,info),        _if_conditional364) {
            # 1367 "18field.c"
            __result202__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result202__;
        }
        # 1370 "18field.c"
        c_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value354=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1371 "18field.c"
        dec_stack_ptr(1,info);
        # 1373 "18field.c"
        list$1CVALUEph_push_back(array_num_292,(struct CVALUE*)come_increment_ref_count(c_value_295));
        come_call_finalizer2(CVALUE_finalize,c_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1376 "18field.c"
    type_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_clone(left_value_290->type))));
    come_call_finalizer2(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1378 "18field.c"
    fun_name_297="operator_load_range_element";
    # 1379 "18field.c"
    # 1387 "18field.c"
    # 1380 "18field.c"
    if(self->mQuote) {
        # 1381 "18field.c"
        calling_fun_298=(_Bool)0;
    }
    else {
        # 1384 "18field.c"
        calling_fun_298=operator_overload_fun2(type_296,fun_name_297,left_value_290,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_292,0), "18field.c", 1384, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_292,1), "18field.c", 1384, 12)),info);
    }
    # 1450 "18field.c"
    # 1387 "18field.c"
    if(_if_conditional366=!calling_fun_298,    _if_conditional366) {
        # 1388 "18field.c"
        come_value_299=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value356=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1388, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1390 "18field.c"
        buf_300=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value358=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value357=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1390, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1392 "18field.c"
        buffer_append_str(buf_300,left_value_290->c_value);
        # 1398 "18field.c"
        for(        o2_saved_301=(struct list$1CVALUEph*)come_increment_ref_count((array_num_292)),it_302=list$1CVALUEph_begin((o2_saved_301));        !list$1CVALUEph_end((o2_saved_301));        it_302=list$1CVALUEph_next((o2_saved_301))        ){
            # 1395 "18field.c"
            buffer_append_str(buf_300,((char*)(right_value359=xsprintf("[%s]",it_302->c_value))));
            right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1398 "18field.c"
        left_value_code_303=(char*)come_increment_ref_count(((char*)(right_value360=buffer_to_string(buf_300))));
        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1400 "18field.c"
        __dec_obj146=come_value_299->c_value;
        come_value_299->c_value=(char*)come_increment_ref_count(((char*)(right_value361=xsprintf("%s",left_value_code_303))));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1402 "18field.c"
        result_type_304=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_clone(left_type_291))));
        come_call_finalizer2(sType_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1408 "18field.c"
        # 1404 "18field.c"
        if(result_type_304->mOriginalLoadVarType->v1) {
            # 1405 "18field.c"
            __dec_obj147=result_type_304;
            result_type_304=(struct sType*)come_increment_ref_count(result_type_304->mOriginalLoadVarType->v1);
            come_call_finalizer2(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 1442 "18field.c"
        # 1408 "18field.c"
        if(_if_conditional368=list$1sNodeph_length(result_type_304->mArrayNum)>0,        _if_conditional368) {
            # 1409 "18field.c"
            n_305=list$1sNodeph_length(result_type_304->mArrayNum)-list$1CVALUEph_length(array_num_292);
            # 1431 "18field.c"
            # 1411 "18field.c"
            if(_if_conditional369=n_305==0,            _if_conditional369) {
                # 1412 "18field.c"
                __dec_obj148=result_type_304;
                result_type_304=(struct sType*)come_increment_ref_count(((struct sType*)(right_value363=sType_clone(left_type_291))));
                come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1416 "18field.c"
                # 1413 "18field.c"
                if(left_type_291->mOriginalLoadVarType->v1) {
                    # 1414 "18field.c"
                    __dec_obj149=result_type_304;
                    result_type_304=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(left_type_291->mOriginalLoadVarType->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 1416 "18field.c"
                list$1sNodeph_reset(result_type_304->mArrayNum);
            }
            else {
                # 1431 "18field.c"
                # 1418 "18field.c"
                if(_if_conditional371=n_305>0,                _if_conditional371) {
                    # 1422 "18field.c"
                    for(                    i_306=0;                    i_306<n_305;                    i_306++                    ){
                        # 1420 "18field.c"
                        list$1sNodeph_delete(result_type_304->mArrayNum,-1,-1);
                    }
                }
                else {
                    # 1431 "18field.c"
                    # 1423 "18field.c"
                    if(_if_conditional372=n_305<0,                    _if_conditional372) {
                        # 1424 "18field.c"
                        list$1sNodeph_reset(result_type_304->mArrayNum);
                        # 1425 "18field.c"
                        result_type_304->mPointerNum+=n_305;
                        # 1430 "18field.c"
                        # 1427 "18field.c"
                        if(_if_conditional373=result_type_304->mPointerNum<0,                        _if_conditional373) {
                            # 1428 "18field.c"
                            result_type_304->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            # 1440 "18field.c"
            # 1433 "18field.c"
            if(_if_conditional374=result_type_304->mPointerNum>0,            _if_conditional374) {
                # 1434 "18field.c"
                result_type_304->mPointerNum-=list$1CVALUEph_length(array_num_292);
                # 1439 "18field.c"
                # 1436 "18field.c"
                if(_if_conditional375=result_type_304->mPointerNum<0,                _if_conditional375) {
                    # 1437 "18field.c"
                    result_type_304->mPointerNum=0;
                }
            }
        }
        # 1442 "18field.c"
        __dec_obj150=come_value_299->type;
        come_value_299->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value365=sType_clone(result_type_304))));
        come_call_finalizer2(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1443 "18field.c"
        come_value_299->var=((void*)0);
        # 1445 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_299));
        # 1447 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_299->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_303 = come_decrement_ref_count2(left_value_code_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1450 "18field.c"
    __result203__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result203__;
    come_call_finalizer2(CVALUE_finalize,left_value_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result204__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1455 "18field.c"
    __result204__ = self->sline;
    return __result204__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value366;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
    # 1460 "18field.c"
    __result205__ = __result_obj__ = ((char*)(right_value366=__builtin_string(self->sname)));
    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result205__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1465 "18field.c"
    __result206__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result206__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1470 "18field.c"
    err_msg(info,"parse_method_call is failed");
    # 1471 "18field.c"
    exit(2);
    # 1473 "18field.c"
    __result207__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result207__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional25;
_Bool range_array_307;
char* p_308;
int sline_309;
_Bool _if_conditional376;
_Bool no_comma_310;
_Bool no_output_err_311;
_Bool no_output_come_code_312;
void* right_value367;
struct sNode* exp_313;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool quote_314;
_Bool _if_conditional379;
void* right_value368;
void* right_value369;
struct list$1sNodeph* array_num_315;
void* right_value370;
struct sNode* node2_316;
_Bool _if_conditional382;
void* right_value374;
struct sNode* node3_320;
void* right_value375;
void* right_value376;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value381;
struct sNode* __dec_obj157;
_Bool _if_conditional392;
_Bool quote_322;
_Bool _if_conditional393;
_Bool range_323;
void* right_value382;
void* right_value383;
struct list$1sNodeph* array_num_324;
_Bool _while_condtional26;
_Bool range_array2_325;
char* p_326;
int sline_327;
_Bool _if_conditional394;
_Bool no_comma_328;
_Bool no_output_err_329;
_Bool no_output_come_code_330;
void* right_value384;
struct sNode* exp_331;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value385;
struct sNode* node2_332;
_Bool _if_conditional398;
_Bool break_guard_333;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value386;
struct sNode* right_node_334;
void* right_value387;
void* right_value388;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value394;
struct sNode* __dec_obj162;
void* right_value395;
void* right_value396;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value401;
struct sNode* __dec_obj166;
_Bool _if_conditional422;
_Bool no_comma_337;
void* right_value402;
struct sNode* begin_338;
void* right_value403;
struct sNode* end_339;
void* right_value404;
void* right_value405;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value411;
struct sNode* __dec_obj171;
_Bool _if_conditional433;
void* right_value412;
void* right_value413;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value417;
struct sNode* __dec_obj174;
_Bool _if_conditional441;
void* right_value418;
void* right_value419;
struct sNode* _inf_value7;
struct sNullableNode* _inf_obj_value7;
void* right_value423;
struct sNode* __dec_obj177;
_Bool _if_conditional449;
_Bool _if_conditional450;
void* right_value424;
void* right_value425;
void* right_value426;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value430;
struct sNode* __dec_obj180;
void* right_value431;
char* field_name_344;
_Bool parse_method_generics_type_345;
char* p_346;
int sline_347;
_Bool _if_conditional458;
_Bool _if_conditional459;
void* right_value432;
char* word_348;
_Bool _if_conditional460;
_Bool _if_conditional461;
void* right_value433;
struct sNode* right_node_349;
void* right_value434;
void* right_value435;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* right_value441;
struct sNode* __dec_obj185;
_Bool _if_conditional472;
_Bool _if_conditional473;
void* right_value442;
void* right_value443;
struct sNode* __dec_obj186;
_Bool _if_conditional474;
void* right_value444;
void* right_value445;
struct sNode* __dec_obj187;
void* right_value446;
void* right_value447;
struct sNode* __dec_obj188;
void* right_value448;
void* right_value449;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* right_value454;
struct sNode* __dec_obj192;
void* right_value455;
struct sNode* node2_352;
_Bool _if_conditional483;
struct sNode* __dec_obj193;
struct sNode* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_307, 0, sizeof(_Bool));
memset(&p_308, 0, sizeof(char*));
memset(&sline_309, 0, sizeof(int));
memset(&no_comma_310, 0, sizeof(_Bool));
memset(&no_output_err_311, 0, sizeof(_Bool));
memset(&no_output_come_code_312, 0, sizeof(_Bool));
right_value367 = (void*)0;
memset(&exp_313, 0, sizeof(struct sNode*));
memset(&quote_314, 0, sizeof(_Bool));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&array_num_315, 0, sizeof(struct list$1sNodeph*));
right_value370 = (void*)0;
memset(&node2_316, 0, sizeof(struct sNode*));
right_value374 = (void*)0;
memset(&node3_320, 0, sizeof(struct sNode*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value381 = (void*)0;
memset(&quote_322, 0, sizeof(_Bool));
memset(&range_323, 0, sizeof(_Bool));
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&array_num_324, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_325, 0, sizeof(_Bool));
memset(&p_326, 0, sizeof(char*));
memset(&sline_327, 0, sizeof(int));
memset(&no_comma_328, 0, sizeof(_Bool));
memset(&no_output_err_329, 0, sizeof(_Bool));
memset(&no_output_come_code_330, 0, sizeof(_Bool));
right_value384 = (void*)0;
memset(&exp_331, 0, sizeof(struct sNode*));
right_value385 = (void*)0;
memset(&node2_332, 0, sizeof(struct sNode*));
memset(&break_guard_333, 0, sizeof(_Bool));
right_value386 = (void*)0;
memset(&right_node_334, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value401 = (void*)0;
memset(&no_comma_337, 0, sizeof(_Bool));
right_value402 = (void*)0;
memset(&begin_338, 0, sizeof(struct sNode*));
right_value403 = (void*)0;
memset(&end_339, 0, sizeof(struct sNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
memset(&field_name_344, 0, sizeof(char*));
memset(&parse_method_generics_type_345, 0, sizeof(_Bool));
memset(&p_346, 0, sizeof(char*));
memset(&sline_347, 0, sizeof(int));
right_value432 = (void*)0;
memset(&word_348, 0, sizeof(char*));
right_value433 = (void*)0;
memset(&right_node_349, 0, sizeof(struct sNode*));
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
memset(&node2_352, 0, sizeof(struct sNode*));
    # 1738 "18field.c"
    while(_while_condtional25=(_Bool)1,    _while_condtional25) {
        # 1479 "18field.c"
        range_array_307=(_Bool)0;
        # 1508 "18field.c"
        {
            # 1481 "18field.c"
            p_308=info->p;
            # 1482 "18field.c"
            sline_309=info->sline;
            # 1504 "18field.c"
            # 1484 "18field.c"
            if(_if_conditional376=*info->p==91,            _if_conditional376) {
                # 1485 "18field.c"
                info->p++;
                # 1486 "18field.c"
                skip_spaces_and_lf(info);
                # 1488 "18field.c"
                no_comma_310=info->no_comma;
                # 1489 "18field.c"
                no_output_err_311=info->no_output_err;
                # 1490 "18field.c"
                no_output_come_code_312=info->no_output_come_code;
                # 1491 "18field.c"
                info->no_output_err=(_Bool)1;
                # 1492 "18field.c"
                info->no_comma=(_Bool)1;
                # 1493 "18field.c"
                info->no_output_come_code=(_Bool)1;
                # 1494 "18field.c"
                exp_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=expression_v13(info))));
                if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1495 "18field.c"
                info->no_comma=no_comma_310;
                # 1496 "18field.c"
                info->no_output_err=no_output_err_311;
                # 1497 "18field.c"
                info->no_output_come_code=no_output_come_code_312;
                # 1502 "18field.c"
                # 1499 "18field.c"
                if(_if_conditional377=*info->p==46&&*(info->p+1)==46,                _if_conditional377) {
                    # 1500 "18field.c"
                    range_array_307=(_Bool)1;
                }
                if(exp_313) { exp_313 = come_decrement_ref_count2(exp_313, ((struct sNode*)exp_313)->finalize, ((struct sNode*)exp_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1504 "18field.c"
            info->p=p_308;
            # 1505 "18field.c"
            info->sline=sline_309;
        }
        # 1736 "18field.c"
        # 1508 "18field.c"
        if(_if_conditional378=range_array_307&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional378) {
            # 1509 "18field.c"
            quote_314=*info->p==92;
            # 1513 "18field.c"
            # 1510 "18field.c"
            if(quote_314) {
                # 1511 "18field.c"
                info->p++;
            }
            # 1513 "18field.c"
            info->p++;
            # 1514 "18field.c"
            skip_spaces_and_lf(info);
            # 1516 "18field.c"
            array_num_315=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value369=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value368=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1516, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1518 "18field.c"
            skip_pointer_attribute(info);
            # 1520 "18field.c"
            node2_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=expression_v13(info))));
            if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1522 "18field.c"
            list$1sNodeph_push_back(array_num_315,(struct sNode*)come_increment_ref_count(node2_316));
            # 1537 "18field.c"
            # 1524 "18field.c"
            if(_if_conditional382=*info->p==46&&*(info->p+1)==46,            _if_conditional382) {
                # 1525 "18field.c"
                info->p+=2;
                # 1526 "18field.c"
                skip_spaces_and_lf(info);
                # 1528 "18field.c"
                skip_pointer_attribute(info);
                # 1530 "18field.c"
                node3_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=expression_v13(info))));
                if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1532 "18field.c"
                list$1sNodeph_push_back(array_num_315,(struct sNode*)come_increment_ref_count(node3_320));
                # 1534 "18field.c"
                expected_next_character(93,info);
                if(node3_320) { node3_320 = come_decrement_ref_count2(node3_320, ((struct sNode*)node3_320)->finalize, ((struct sNode*)node3_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1537 "18field.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1537, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value376=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value375=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1537, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_315),quote_314,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value2->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value2->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj157=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=_inf_value2)));
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer2(list$1sNodephp_finalize,array_num_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node2_316) { node2_316 = come_decrement_ref_count2(node2_316, ((struct sNode*)node2_316)->finalize, ((struct sNode*)node2_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1736 "18field.c"
            # 1539 "18field.c"
            if(_if_conditional392=!range_array_307&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional392) {
                # 1540 "18field.c"
                quote_322=*info->p==92;
                # 1545 "18field.c"
                # 1541 "18field.c"
                if(quote_322) {
                    # 1542 "18field.c"
                    info->p++;
                }
                # 1545 "18field.c"
                range_323=(_Bool)0;
                # 1546 "18field.c"
                array_num_324=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value383=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value382=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1546, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1604 "18field.c"
                while(_while_condtional26=1,                _while_condtional26) {
                    # 1548 "18field.c"
                    range_array2_325=(_Bool)0;
                    # 1577 "18field.c"
                    {
                        # 1550 "18field.c"
                        p_326=info->p;
                        # 1551 "18field.c"
                        sline_327=info->sline;
                        # 1573 "18field.c"
                        # 1553 "18field.c"
                        if(_if_conditional394=*info->p==91,                        _if_conditional394) {
                            # 1554 "18field.c"
                            info->p++;
                            # 1555 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1557 "18field.c"
                            no_comma_328=info->no_comma;
                            # 1558 "18field.c"
                            no_output_err_329=info->no_output_err;
                            # 1559 "18field.c"
                            no_output_come_code_330=info->no_output_come_code;
                            # 1560 "18field.c"
                            info->no_output_err=(_Bool)1;
                            # 1561 "18field.c"
                            info->no_comma=(_Bool)1;
                            # 1562 "18field.c"
                            info->no_output_come_code=(_Bool)1;
                            # 1563 "18field.c"
                            exp_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=expression_v13(info))));
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1564 "18field.c"
                            info->no_comma=no_comma_328;
                            # 1565 "18field.c"
                            info->no_output_err=no_output_err_329;
                            # 1566 "18field.c"
                            info->no_output_come_code=no_output_come_code_330;
                            # 1571 "18field.c"
                            # 1568 "18field.c"
                            if(_if_conditional395=*info->p==46&&*(info->p+1)==46,                            _if_conditional395) {
                                # 1569 "18field.c"
                                range_array2_325=(_Bool)1;
                            }
                            if(exp_331) { exp_331 = come_decrement_ref_count2(exp_331, ((struct sNode*)exp_331)->finalize, ((struct sNode*)exp_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 1573 "18field.c"
                        info->p=p_326;
                        # 1574 "18field.c"
                        info->sline=sline_327;
                    }
                    # 1602 "18field.c"
                    # 1577 "18field.c"
                    if(range_array2_325) {
                        # 1578 "18field.c"
                        break;
                    }
                    else {
                        # 1602 "18field.c"
                        # 1580 "18field.c"
                        if(_if_conditional397=*info->p==91,                        _if_conditional397) {
                            # 1581 "18field.c"
                            info->p++;
                            # 1582 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1584 "18field.c"
                            skip_pointer_attribute(info);
                            # 1586 "18field.c"
                            node2_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=expression_v13(info))));
                            if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1588 "18field.c"
                            list$1sNodeph_push_back(array_num_324,(struct sNode*)come_increment_ref_count(node2_332));
                            # 1598 "18field.c"
                            # 1590 "18field.c"
                            if(_if_conditional398=*info->p==93,                            _if_conditional398) {
                                # 1591 "18field.c"
                                info->p++;
                                # 1592 "18field.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1595 "18field.c"
                                err_msg(info,"require ] character");
                                # 1596 "18field.c"
                                exit(2);
                            }
                            if(node2_332) { node2_332 = come_decrement_ref_count2(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1600 "18field.c"
                            break;
                        }
                    }
                }
                # 1604 "18field.c"
                break_guard_333=(_Bool)0;
                # 1611 "18field.c"
                # 1605 "18field.c"
                if(_if_conditional399=*info->p==63&&*(info->p+1)==63,                _if_conditional399) {
                    # 1606 "18field.c"
                    info->p+=2;
                    # 1607 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1608 "18field.c"
                    break_guard_333=(_Bool)1;
                }
                # 1626 "18field.c"
                # 1611 "18field.c"
                if(_if_conditional400=*info->p==61&&*(info->p+1)!=61,                _if_conditional400) {
                    # 1612 "18field.c"
                    info->p++;
                    # 1613 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1615 "18field.c"
                    parse_sharp_v5(info);
                    # 1617 "18field.c"
                    right_node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=expression_v13(info))));
                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1619 "18field.c"
                    parse_sharp_v5(info);
                    # 1621 "18field.c"
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1621, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value388=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value387=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1621, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_334),(struct list$1sNodeph*)come_increment_ref_count(array_num_324),quote_322,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sStoreArrayNode_sline;
                    _inf_value3->sname=(void*)sStoreArrayNode_sname;
                    _inf_value3->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=_inf_value3)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_334) { right_node_334 = come_decrement_ref_count2(right_node_334, ((struct sNode*)right_node_334)->finalize, ((struct sNode*)right_node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1624 "18field.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1624, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value396=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value395=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1624, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_324),quote_322,break_guard_333,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sLoadArrayNode_sline;
                    _inf_value4->sname=(void*)sLoadArrayNode_sname;
                    _inf_value4->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj166=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=_inf_value4)));
                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_324, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 1736 "18field.c"
                # 1627 "18field.c"
                if(_if_conditional422=*info->p==33&&*(info->p+1)==123,                _if_conditional422) {
                    # 1628 "18field.c"
                    info->p+=2;
                    # 1629 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1631 "18field.c"
                    no_comma_337=info->no_comma;
                    # 1632 "18field.c"
                    info->no_comma=(_Bool)1;
                    # 1633 "18field.c"
                    begin_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=expression_v13(info))));
                    if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1636 "18field.c"
                    info->no_comma=no_comma_337;
                    # 1636 "18field.c"
                    expected_next_character(44,info);
                    # 1638 "18field.c"
                    end_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=expression_v13(info))));
                    if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1640 "18field.c"
                    expected_next_character(125,info);
                    # 1642 "18field.c"
                    parse_sharp_v5(info);
                    # 1644 "18field.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1644, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value405=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value404=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1644, "sRangeCheckNode")))),node,begin_338,end_339,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sRangeCheckNode_sline;
                    _inf_value5->sname=(void*)sRangeCheckNode_sname;
                    _inf_value5->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj171=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=_inf_value5)));
                    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_338) { begin_338 = come_decrement_ref_count2(begin_338, ((struct sNode*)begin_338)->finalize, ((struct sNode*)begin_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_339) { end_339 = come_decrement_ref_count2(end_339, ((struct sNode*)end_339)->finalize, ((struct sNode*)end_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1736 "18field.c"
                    # 1646 "18field.c"
                    if(_if_conditional433=*info->p==33&&*(info->p+1)!=61,                    _if_conditional433) {
                        # 1647 "18field.c"
                        info->p++;
                        # 1648 "18field.c"
                        skip_spaces_and_lf(info);
                        # 1650 "18field.c"
                        parse_sharp_v5(info);
                        # 1652 "18field.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1652, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value413=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value412=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1652, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNullCheckNode_sline;
                        _inf_value6->sname=(void*)sNullCheckNode_sname;
                        _inf_value6->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj174=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=_inf_value6)));
                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer2(sNullCheckNode_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNullCheckNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        # 1736 "18field.c"
                        # 1654 "18field.c"
                        if(_if_conditional441=*info->p==63&&*(info->p+1)==63,                        _if_conditional441) {
                            # 1655 "18field.c"
                            info->p+=2;
                            # 1656 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1658 "18field.c"
                            parse_sharp_v5(info);
                            # 1660 "18field.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1660, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullableNode*)(right_value419=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value418=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1660, "sNullableNode")))),node,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullableNode_finalize;
                            _inf_value7->clone=(void*)sNullableNode_clone;
                            _inf_value7->compile=(void*)sNullableNode_compile;
                            _inf_value7->sline=(void*)sNullableNode_sline;
                            _inf_value7->sname=(void*)sNullableNode_sname;
                            _inf_value7->terminated=(void*)sNullableNode_terminated;
                            _inf_value7->kind=(void*)sNullableNode_kind;
                            __dec_obj177=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=_inf_value7)));
                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer2(sNullableNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sNullableNode_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        else {
                            # 1736 "18field.c"
                            # 1662 "18field.c"
                            if(_if_conditional449=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                            _if_conditional449) {
                                # 1672 "18field.c"
                                # 1663 "18field.c"
                                if(_if_conditional450=*info->p==46,                                _if_conditional450) {
                                    # 1664 "18field.c"
                                    info->p++;
                                    # 1665 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 1668 "18field.c"
                                    info->p+=2;
                                    # 1669 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1672 "18field.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1672, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value426=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value424=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1672, "sNullCheckNode")))),((struct sNode*)(right_value425=sNode_clone(node))),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value8->clone=(void*)sNullCheckNode_clone;
                                _inf_value8->compile=(void*)sNullCheckNode_compile;
                                _inf_value8->sline=(void*)sNullCheckNode_sline;
                                _inf_value8->sname=(void*)sNullCheckNode_sname;
                                _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                                _inf_value8->kind=(void*)sNullCheckNode_kind;
                                __dec_obj180=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=_inf_value8)));
                                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer2(sNullCheckNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer2(sNullCheckNode_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1674 "18field.c"
                                parse_sharp_v5(info);
                                # 1676 "18field.c"
                                field_name_344=(char*)come_increment_ref_count(((char*)(right_value431=parse_word(info))));
                                right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1678 "18field.c"
                                parse_sharp_v5(info);
                                # 1680 "18field.c"
                                parse_method_generics_type_345=(_Bool)0;
                                # 1702 "18field.c"
                                {
                                    # 1682 "18field.c"
                                    p_346=info->p;
                                    # 1683 "18field.c"
                                    sline_347=info->sline;
                                    # 1698 "18field.c"
                                    # 1685 "18field.c"
                                    if(_if_conditional458=*info->p==60,                                    _if_conditional458) {
                                        # 1686 "18field.c"
                                        info->p++;
                                        # 1687 "18field.c"
                                        skip_spaces_and_lf(info);
                                        # 1696 "18field.c"
                                        # 1689 "18field.c"
                                        if(_if_conditional459=xisalpha(*info->p)||*info->p==95,                                        _if_conditional459) {
                                            # 1690 "18field.c"
                                            word_348=(char*)come_increment_ref_count(((char*)(right_value432=parse_word(info))));
                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 1695 "18field.c"
                                            # 1692 "18field.c"
                                            if(_if_conditional460=is_type_name(word_348,info),                                            _if_conditional460) {
                                                # 1693 "18field.c"
                                                parse_method_generics_type_345=(_Bool)1;
                                            }
                                            word_348 = come_decrement_ref_count2(word_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 1698 "18field.c"
                                    info->p=p_346;
                                    # 1699 "18field.c"
                                    info->sline=sline_347;
                                }
                                # 1726 "18field.c"
                                # 1702 "18field.c"
                                if(_if_conditional461=*info->p==61&&*(info->p+1)!=61,                                _if_conditional461) {
                                    # 1703 "18field.c"
                                    info->p++;
                                    # 1704 "18field.c"
                                    skip_spaces_and_lf(info);
                                    # 1706 "18field.c"
                                    parse_sharp_v5(info);
                                    # 1708 "18field.c"
                                    right_node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=expression_v13(info))));
                                    if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1710 "18field.c"
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1710, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreFieldNode*)(right_value435=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value434=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1710, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_349),(char*)come_increment_ref_count(field_name_344),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value9->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value9->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value9->sline=(void*)sStoreFieldNode_sline;
                                    _inf_value9->sname=(void*)sStoreFieldNode_sname;
                                    _inf_value9->terminated=(void*)sStoreFieldNode_terminated;
                                    _inf_value9->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj185=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=_inf_value9)));
                                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    if(right_node_349) { right_node_349 = come_decrement_ref_count2(right_node_349, ((struct sNode*)right_node_349)->finalize, ((struct sNode*)right_node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1726 "18field.c"
                                    # 1712 "18field.c"
                                    if(_if_conditional472=*info->p==40||*info->p==123||parse_method_generics_type_345||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                    _if_conditional472) {
                                        # 1722 "18field.c"
                                        # 1713 "18field.c"
                                        if(_if_conditional473=string_operator_equals(field_name_344,"if"),                                        _if_conditional473) {
                                            # 1714 "18field.c"
                                            __dec_obj186=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=sNode_clone(node)))),info))));
                                            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            # 1722 "18field.c"
                                            # 1716 "18field.c"
                                            if(_if_conditional474=string_operator_equals(field_name_344,"elif"),                                            _if_conditional474) {
                                                # 1717 "18field.c"
                                                __dec_obj187=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(node)))),info))));
                                                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                # 1720 "18field.c"
                                                __dec_obj188=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_344),info))));
                                                if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        # 1724 "18field.c"
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1724, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sLoadFieldNode*)(right_value449=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value448=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1724, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_344),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value10->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value10->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value10->sline=(void*)sLoadFieldNode_sline;
                                        _inf_value10->sname=(void*)sLoadFieldNode_sname;
                                        _inf_value10->terminated=(void*)sLoadFieldNode_terminated;
                                        _inf_value10->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj192=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=_inf_value10)));
                                        if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                }
                                field_name_344 = come_decrement_ref_count2(field_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 1728 "18field.c"
                                node2_352=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                                if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1734 "18field.c"
                                # 1730 "18field.c"
                                if(_if_conditional483=node2_352==((void*)0),                                _if_conditional483) {
                                    # 1731 "18field.c"
                                    if(node2_352) { node2_352 = come_decrement_ref_count2(node2_352, ((struct sNode*)node2_352)->finalize, ((struct sNode*)node2_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                # 1734 "18field.c"
                                __dec_obj193=node;
                                node=(struct sNode*)come_increment_ref_count(node2_352);
                                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_352) { node2_352 = come_decrement_ref_count2(node2_352, ((struct sNode*)node2_352)->finalize, ((struct sNode*)node2_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    # 1738 "18field.c"
    __result227__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result227__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional380;
void* right_value371;
struct list_item$1sNodeph* litem_317;
struct sNode* __dec_obj151;
_Bool _if_conditional381;
void* right_value372;
struct list_item$1sNodeph* litem_318;
struct sNode* __dec_obj152;
void* right_value373;
struct list_item$1sNodeph* litem_319;
struct sNode* __dec_obj153;
struct list$1sNodeph* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&litem_317, 0, sizeof(struct list_item$1sNodeph*));
right_value372 = (void*)0;
memset(&litem_318, 0, sizeof(struct list_item$1sNodeph*));
right_value373 = (void*)0;
memset(&litem_319, 0, sizeof(struct list_item$1sNodeph*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional380=self->len==0,                _if_conditional380) {
                    # 226 "./neo-c.h"
                    litem_317=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value371=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_317->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_317->next=((void*)0);
                    # 230 "./neo-c.h"
                    __dec_obj151=litem_317->item;
                    litem_317->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                    # 232 "./neo-c.h"
                    self->tail=litem_317;
                    # 233 "./neo-c.h"
                    self->head=litem_317;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional381=self->len==1,                    _if_conditional381) {
                        # 236 "./neo-c.h"
                        litem_318=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value372=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_318->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_318->next=((void*)0);
                        # 240 "./neo-c.h"
                        __dec_obj152=litem_318->item;
                        litem_318->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                        # 242 "./neo-c.h"
                        self->tail=litem_318;
                        # 243 "./neo-c.h"
                        self->head->next=litem_318;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_319=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value373=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_319->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_319->next=((void*)0);
                        # 250 "./neo-c.h"
                        __dec_obj153=litem_319->item;
                        litem_319->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                        # 252 "./neo-c.h"
                        self->tail->next=litem_319;
                        # 253 "./neo-c.h"
                        self->tail=litem_319;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result208__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result208__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sLoadRangeArrayNode_finalize"
                # 0 "sLoadRangeArrayNode_finalize"
                if(_if_conditional383=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional383) {
                    # 0 "sLoadRangeArrayNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 2 "sLoadRangeArrayNode_finalize"
                # 1 "sLoadRangeArrayNode_finalize"
                if(_if_conditional384=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional384) {
                    # 1 "sLoadRangeArrayNode_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sLoadRangeArrayNode_finalize"
                # 2 "sLoadRangeArrayNode_finalize"
                if(_if_conditional385=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional385) {
                    # 2 "sLoadRangeArrayNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional386;
struct sLoadRangeArrayNode* __result209__;
void* right_value377;
struct sLoadRangeArrayNode* result_321;
_Bool _if_conditional387;
void* right_value378;
struct sNode* __dec_obj154;
_Bool _if_conditional388;
void* right_value379;
struct list$1sNodeph* __dec_obj155;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value380;
char* __dec_obj156;
struct sLoadRangeArrayNode* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
memset(&result_321, 0, sizeof(struct sLoadRangeArrayNode*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
                # 3 "sLoadRangeArrayNode_clone"
                # 2 "sLoadRangeArrayNode_clone"
                if(_if_conditional386=self==(void*)0,                _if_conditional386) {
                    # 2 "sLoadRangeArrayNode_clone"
                    __result209__ = __result_obj__ = (void*)0;
                    return __result209__;
                }
                # 3 "sLoadRangeArrayNode_clone"
                result_321=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value377=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sLoadRangeArrayNode_clone"
                # 4 "sLoadRangeArrayNode_clone"
                if(_if_conditional387=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional387) {
                    # 4 "sLoadRangeArrayNode_clone"
                    __dec_obj154=result_321->mLeft;
                    result_321->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(self->mLeft))));
                    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "sLoadRangeArrayNode_clone"
                # 5 "sLoadRangeArrayNode_clone"
                if(_if_conditional388=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional388) {
                    # 5 "sLoadRangeArrayNode_clone"
                    __dec_obj155=result_321->mArrayNum;
                    result_321->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value379=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sLoadRangeArrayNode_clone"
                # 6 "sLoadRangeArrayNode_clone"
                if(_if_conditional389=self!=((void*)0),                _if_conditional389) {
                    # 6 "sLoadRangeArrayNode_clone"
                    result_321->mQuote=self->mQuote;
                }
                # 8 "sLoadRangeArrayNode_clone"
                # 7 "sLoadRangeArrayNode_clone"
                if(_if_conditional390=self!=((void*)0),                _if_conditional390) {
                    # 7 "sLoadRangeArrayNode_clone"
                    result_321->sline=self->sline;
                }
                # 9 "sLoadRangeArrayNode_clone"
                # 8 "sLoadRangeArrayNode_clone"
                if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional391) {
                    # 8 "sLoadRangeArrayNode_clone"
                    __dec_obj156=result_321->sname;
                    result_321->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->sname))));
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 9 "sLoadRangeArrayNode_clone"
                __result210__ = __result_obj__ = result_321;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_321, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result210__;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sStoreArrayNode_finalize"
                        # 0 "sStoreArrayNode_finalize"
                        if(_if_conditional401=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional401) {
                            # 0 "sStoreArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sStoreArrayNode_finalize"
                        # 1 "sStoreArrayNode_finalize"
                        if(_if_conditional402=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional402) {
                            # 1 "sStoreArrayNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sStoreArrayNode_finalize"
                        # 2 "sStoreArrayNode_finalize"
                        if(_if_conditional403=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional403) {
                            # 2 "sStoreArrayNode_finalize"
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sStoreArrayNode_finalize"
                        # 3 "sStoreArrayNode_finalize"
                        if(_if_conditional404=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional404) {
                            # 3 "sStoreArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional405;
struct sStoreArrayNode* __result211__;
void* right_value389;
struct sStoreArrayNode* result_335;
_Bool _if_conditional406;
void* right_value390;
struct sNode* __dec_obj158;
_Bool _if_conditional407;
void* right_value391;
struct sNode* __dec_obj159;
_Bool _if_conditional408;
void* right_value392;
struct list$1sNodeph* __dec_obj160;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value393;
char* __dec_obj161;
struct sStoreArrayNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_335, 0, sizeof(struct sStoreArrayNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
                        # 3 "sStoreArrayNode_clone"
                        # 2 "sStoreArrayNode_clone"
                        if(_if_conditional405=self==(void*)0,                        _if_conditional405) {
                            # 2 "sStoreArrayNode_clone"
                            __result211__ = __result_obj__ = (void*)0;
                            return __result211__;
                        }
                        # 3 "sStoreArrayNode_clone"
                        result_335=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value389=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer2(sStoreArrayNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sStoreArrayNode_clone"
                        # 4 "sStoreArrayNode_clone"
                        if(_if_conditional406=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional406) {
                            # 4 "sStoreArrayNode_clone"
                            __dec_obj158=result_335->mLeft;
                            result_335->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=sNode_clone(self->mLeft))));
                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sStoreArrayNode_clone"
                        # 5 "sStoreArrayNode_clone"
                        if(_if_conditional407=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional407) {
                            # 5 "sStoreArrayNode_clone"
                            __dec_obj159=result_335->mRight;
                            result_335->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(self->mRight))));
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sStoreArrayNode_clone"
                        # 6 "sStoreArrayNode_clone"
                        if(_if_conditional408=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional408) {
                            # 6 "sStoreArrayNode_clone"
                            __dec_obj160=result_335->mArrayNum;
                            result_335->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value392=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 8 "sStoreArrayNode_clone"
                        # 7 "sStoreArrayNode_clone"
                        if(_if_conditional409=self!=((void*)0),                        _if_conditional409) {
                            # 7 "sStoreArrayNode_clone"
                            result_335->mQuote=self->mQuote;
                        }
                        # 9 "sStoreArrayNode_clone"
                        # 8 "sStoreArrayNode_clone"
                        if(_if_conditional410=self!=((void*)0),                        _if_conditional410) {
                            # 8 "sStoreArrayNode_clone"
                            result_335->sline=self->sline;
                        }
                        # 10 "sStoreArrayNode_clone"
                        # 9 "sStoreArrayNode_clone"
                        if(_if_conditional411=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional411) {
                            # 9 "sStoreArrayNode_clone"
                            __dec_obj161=result_335->sname;
                            result_335->sname=(char*)come_increment_ref_count(((char*)(right_value393=string_clone(self->sname))));
                            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sStoreArrayNode_clone"
                        __result212__ = __result_obj__ = result_335;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result212__;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLoadArrayNode_finalize"
                        # 0 "sLoadArrayNode_finalize"
                        if(_if_conditional412=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional412) {
                            # 0 "sLoadArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sLoadArrayNode_finalize"
                        # 1 "sLoadArrayNode_finalize"
                        if(_if_conditional413=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional413) {
                            # 1 "sLoadArrayNode_finalize"
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sLoadArrayNode_finalize"
                        # 2 "sLoadArrayNode_finalize"
                        if(_if_conditional414=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional414) {
                            # 2 "sLoadArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional415;
struct sLoadArrayNode* __result213__;
void* right_value397;
struct sLoadArrayNode* result_336;
_Bool _if_conditional416;
void* right_value398;
struct sNode* __dec_obj163;
_Bool _if_conditional417;
void* right_value399;
struct list$1sNodeph* __dec_obj164;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value400;
char* __dec_obj165;
struct sLoadArrayNode* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
memset(&result_336, 0, sizeof(struct sLoadArrayNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
                        # 3 "sLoadArrayNode_clone"
                        # 2 "sLoadArrayNode_clone"
                        if(_if_conditional415=self==(void*)0,                        _if_conditional415) {
                            # 2 "sLoadArrayNode_clone"
                            __result213__ = __result_obj__ = (void*)0;
                            return __result213__;
                        }
                        # 3 "sLoadArrayNode_clone"
                        result_336=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value397=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer2(sLoadArrayNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLoadArrayNode_clone"
                        # 4 "sLoadArrayNode_clone"
                        if(_if_conditional416=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional416) {
                            # 4 "sLoadArrayNode_clone"
                            __dec_obj163=result_336->mLeft;
                            result_336->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->mLeft))));
                            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sLoadArrayNode_clone"
                        # 5 "sLoadArrayNode_clone"
                        if(_if_conditional417=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional417) {
                            # 5 "sLoadArrayNode_clone"
                            __dec_obj164=result_336->mArrayNum;
                            result_336->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value399=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sLoadArrayNode_clone"
                        # 6 "sLoadArrayNode_clone"
                        if(_if_conditional418=self!=((void*)0),                        _if_conditional418) {
                            # 6 "sLoadArrayNode_clone"
                            result_336->mQuote=self->mQuote;
                        }
                        # 8 "sLoadArrayNode_clone"
                        # 7 "sLoadArrayNode_clone"
                        if(_if_conditional419=self!=((void*)0),                        _if_conditional419) {
                            # 7 "sLoadArrayNode_clone"
                            result_336->mBreakGuard=self->mBreakGuard;
                        }
                        # 9 "sLoadArrayNode_clone"
                        # 8 "sLoadArrayNode_clone"
                        if(_if_conditional420=self!=((void*)0),                        _if_conditional420) {
                            # 8 "sLoadArrayNode_clone"
                            result_336->sline=self->sline;
                        }
                        # 10 "sLoadArrayNode_clone"
                        # 9 "sLoadArrayNode_clone"
                        if(_if_conditional421=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional421) {
                            # 9 "sLoadArrayNode_clone"
                            __dec_obj165=result_336->sname;
                            result_336->sname=(char*)come_increment_ref_count(((char*)(right_value400=string_clone(self->sname))));
                            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sLoadArrayNode_clone"
                        __result214__ = __result_obj__ = result_336;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result214__;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sRangeCheckNode_finalize"
                        # 0 "sRangeCheckNode_finalize"
                        if(_if_conditional423=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional423) {
                            # 0 "sRangeCheckNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sRangeCheckNode_finalize"
                        # 1 "sRangeCheckNode_finalize"
                        if(_if_conditional424=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional424) {
                            # 1 "sRangeCheckNode_finalize"
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sRangeCheckNode_finalize"
                        # 2 "sRangeCheckNode_finalize"
                        if(_if_conditional425=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional425) {
                            # 2 "sRangeCheckNode_finalize"
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 4 "sRangeCheckNode_finalize"
                        # 3 "sRangeCheckNode_finalize"
                        if(_if_conditional426=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional426) {
                            # 3 "sRangeCheckNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional427;
struct sRangeCheckNode* __result215__;
void* right_value406;
struct sRangeCheckNode* result_340;
_Bool _if_conditional428;
void* right_value407;
struct sNode* __dec_obj167;
_Bool _if_conditional429;
void* right_value408;
struct sNode* __dec_obj168;
_Bool _if_conditional430;
void* right_value409;
struct sNode* __dec_obj169;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value410;
char* __dec_obj170;
struct sRangeCheckNode* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
memset(&result_340, 0, sizeof(struct sRangeCheckNode*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
                        # 3 "sRangeCheckNode_clone"
                        # 2 "sRangeCheckNode_clone"
                        if(_if_conditional427=self==(void*)0,                        _if_conditional427) {
                            # 2 "sRangeCheckNode_clone"
                            __result215__ = __result_obj__ = (void*)0;
                            return __result215__;
                        }
                        # 3 "sRangeCheckNode_clone"
                        result_340=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value406=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer2(sRangeCheckNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sRangeCheckNode_clone"
                        # 4 "sRangeCheckNode_clone"
                        if(_if_conditional428=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional428) {
                            # 4 "sRangeCheckNode_clone"
                            __dec_obj167=result_340->mLeft;
                            result_340->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->mLeft))));
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sRangeCheckNode_clone"
                        # 5 "sRangeCheckNode_clone"
                        if(_if_conditional429=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional429) {
                            # 5 "sRangeCheckNode_clone"
                            __dec_obj168=result_340->mBegin;
                            result_340->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=sNode_clone(self->mBegin))));
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sRangeCheckNode_clone"
                        # 6 "sRangeCheckNode_clone"
                        if(_if_conditional430=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional430) {
                            # 6 "sRangeCheckNode_clone"
                            __dec_obj169=result_340->mEnd;
                            result_340->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=sNode_clone(self->mEnd))));
                            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sRangeCheckNode_clone"
                        # 7 "sRangeCheckNode_clone"
                        if(_if_conditional431=self!=((void*)0),                        _if_conditional431) {
                            # 7 "sRangeCheckNode_clone"
                            result_340->sline=self->sline;
                        }
                        # 9 "sRangeCheckNode_clone"
                        # 8 "sRangeCheckNode_clone"
                        if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional432) {
                            # 8 "sRangeCheckNode_clone"
                            __dec_obj170=result_340->sname;
                            result_340->sname=(char*)come_increment_ref_count(((char*)(right_value410=string_clone(self->sname))));
                            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sRangeCheckNode_clone"
                        __result216__ = __result_obj__ = result_340;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result216__;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullableNode_finalize(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional442;
_Bool _if_conditional443;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sNullableNode_finalize"
                                # 0 "sNullableNode_finalize"
                                if(_if_conditional442=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional442) {
                                    # 0 "sNullableNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sNullableNode_finalize"
                                # 1 "sNullableNode_finalize"
                                if(_if_conditional443=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional443) {
                                    # 1 "sNullableNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional444;
struct sNullableNode* __result219__;
void* right_value420;
struct sNullableNode* result_342;
_Bool _if_conditional445;
void* right_value421;
struct sNode* __dec_obj175;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value422;
char* __dec_obj176;
struct sNullableNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value420 = (void*)0;
memset(&result_342, 0, sizeof(struct sNullableNode*));
right_value421 = (void*)0;
right_value422 = (void*)0;
                                # 3 "sNullableNode_clone"
                                # 2 "sNullableNode_clone"
                                if(_if_conditional444=self==(void*)0,                                _if_conditional444) {
                                    # 2 "sNullableNode_clone"
                                    __result219__ = __result_obj__ = (void*)0;
                                    return __result219__;
                                }
                                # 3 "sNullableNode_clone"
                                result_342=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value420=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"))));
                                come_call_finalizer2(sNullableNode_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sNullableNode_clone"
                                # 4 "sNullableNode_clone"
                                if(_if_conditional445=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional445) {
                                    # 4 "sNullableNode_clone"
                                    __dec_obj175=result_342->mLeft;
                                    result_342->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=sNode_clone(self->mLeft))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sNullableNode_clone"
                                # 5 "sNullableNode_clone"
                                if(_if_conditional446=self!=((void*)0),                                _if_conditional446) {
                                    # 5 "sNullableNode_clone"
                                    result_342->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                # 7 "sNullableNode_clone"
                                # 6 "sNullableNode_clone"
                                if(_if_conditional447=self!=((void*)0),                                _if_conditional447) {
                                    # 6 "sNullableNode_clone"
                                    result_342->sline=self->sline;
                                }
                                # 8 "sNullableNode_clone"
                                # 7 "sNullableNode_clone"
                                if(_if_conditional448=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional448) {
                                    # 7 "sNullableNode_clone"
                                    __dec_obj176=result_342->sname;
                                    result_342->sname=(char*)come_increment_ref_count(((char*)(right_value422=string_clone(self->sname))));
                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sNullableNode_clone"
                                __result220__ = __result_obj__ = result_342;
                                come_call_finalizer2(sNullableNode_finalize,result_342, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result220__;
                                come_call_finalizer2(sNullableNode_finalize,result_342, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional451;
_Bool _if_conditional452;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sNullCheckNode_finalize"
                                    # 0 "sNullCheckNode_finalize"
                                    if(_if_conditional451=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional451) {
                                        # 0 "sNullCheckNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sNullCheckNode_finalize"
                                    # 1 "sNullCheckNode_finalize"
                                    if(_if_conditional452=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional452) {
                                        # 1 "sNullCheckNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional453;
struct sNullCheckNode* __result221__;
void* right_value427;
struct sNullCheckNode* result_343;
_Bool _if_conditional454;
void* right_value428;
struct sNode* __dec_obj178;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
void* right_value429;
char* __dec_obj179;
struct sNullCheckNode* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value427 = (void*)0;
memset(&result_343, 0, sizeof(struct sNullCheckNode*));
right_value428 = (void*)0;
right_value429 = (void*)0;
                                    # 3 "sNullCheckNode_clone"
                                    # 2 "sNullCheckNode_clone"
                                    if(_if_conditional453=self==(void*)0,                                    _if_conditional453) {
                                        # 2 "sNullCheckNode_clone"
                                        __result221__ = __result_obj__ = (void*)0;
                                        return __result221__;
                                    }
                                    # 3 "sNullCheckNode_clone"
                                    result_343=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value427=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                    come_call_finalizer2(sNullCheckNode_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sNullCheckNode_clone"
                                    # 4 "sNullCheckNode_clone"
                                    if(_if_conditional454=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional454) {
                                        # 4 "sNullCheckNode_clone"
                                        __dec_obj178=result_343->mLeft;
                                        result_343->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=sNode_clone(self->mLeft))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sNullCheckNode_clone"
                                    # 5 "sNullCheckNode_clone"
                                    if(_if_conditional455=self!=((void*)0),                                    _if_conditional455) {
                                        # 5 "sNullCheckNode_clone"
                                        result_343->mOnlyNullCecker=self->mOnlyNullCecker;
                                    }
                                    # 7 "sNullCheckNode_clone"
                                    # 6 "sNullCheckNode_clone"
                                    if(_if_conditional456=self!=((void*)0),                                    _if_conditional456) {
                                        # 6 "sNullCheckNode_clone"
                                        result_343->sline=self->sline;
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    # 7 "sNullCheckNode_clone"
                                    if(_if_conditional457=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional457) {
                                        # 7 "sNullCheckNode_clone"
                                        __dec_obj179=result_343->sname;
                                        result_343->sname=(char*)come_increment_ref_count(((char*)(right_value429=string_clone(self->sname))));
                                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    __result222__ = __result_obj__ = result_343;
                                    come_call_finalizer2(sNullCheckNode_finalize,result_343, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result222__;
                                    come_call_finalizer2(sNullCheckNode_finalize,result_343, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional462;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sStoreFieldNode_finalize"
                                        # 0 "sStoreFieldNode_finalize"
                                        if(_if_conditional462=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional462) {
                                            # 0 "sStoreFieldNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sStoreFieldNode_finalize"
                                        # 1 "sStoreFieldNode_finalize"
                                        if(_if_conditional463=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional463) {
                                            # 1 "sStoreFieldNode_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sStoreFieldNode_finalize"
                                        # 2 "sStoreFieldNode_finalize"
                                        if(_if_conditional464=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional464) {
                                            # 2 "sStoreFieldNode_finalize"
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 4 "sStoreFieldNode_finalize"
                                        # 3 "sStoreFieldNode_finalize"
                                        if(_if_conditional465=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional465) {
                                            # 3 "sStoreFieldNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional466;
struct sStoreFieldNode* __result223__;
void* right_value436;
struct sStoreFieldNode* result_350;
_Bool _if_conditional467;
void* right_value437;
struct sNode* __dec_obj181;
_Bool _if_conditional468;
void* right_value438;
struct sNode* __dec_obj182;
_Bool _if_conditional469;
void* right_value439;
char* __dec_obj183;
_Bool _if_conditional470;
_Bool _if_conditional471;
void* right_value440;
char* __dec_obj184;
struct sStoreFieldNode* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value436 = (void*)0;
memset(&result_350, 0, sizeof(struct sStoreFieldNode*));
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
                                        # 3 "sStoreFieldNode_clone"
                                        # 2 "sStoreFieldNode_clone"
                                        if(_if_conditional466=self==(void*)0,                                        _if_conditional466) {
                                            # 2 "sStoreFieldNode_clone"
                                            __result223__ = __result_obj__ = (void*)0;
                                            return __result223__;
                                        }
                                        # 3 "sStoreFieldNode_clone"
                                        result_350=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value436=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                        come_call_finalizer2(sStoreFieldNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sStoreFieldNode_clone"
                                        # 4 "sStoreFieldNode_clone"
                                        if(_if_conditional467=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional467) {
                                            # 4 "sStoreFieldNode_clone"
                                            __dec_obj181=result_350->mLeft;
                                            result_350->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=sNode_clone(self->mLeft))));
                                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sStoreFieldNode_clone"
                                        # 5 "sStoreFieldNode_clone"
                                        if(_if_conditional468=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional468) {
                                            # 5 "sStoreFieldNode_clone"
                                            __dec_obj182=result_350->mRight;
                                            result_350->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=sNode_clone(self->mRight))));
                                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sStoreFieldNode_clone"
                                        # 6 "sStoreFieldNode_clone"
                                        if(_if_conditional469=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional469) {
                                            # 6 "sStoreFieldNode_clone"
                                            __dec_obj183=result_350->mName;
                                            result_350->mName=(char*)come_increment_ref_count(((char*)(right_value439=string_clone(self->mName))));
                                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sStoreFieldNode_clone"
                                        # 7 "sStoreFieldNode_clone"
                                        if(_if_conditional470=self!=((void*)0),                                        _if_conditional470) {
                                            # 7 "sStoreFieldNode_clone"
                                            result_350->sline=self->sline;
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        # 8 "sStoreFieldNode_clone"
                                        if(_if_conditional471=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional471) {
                                            # 8 "sStoreFieldNode_clone"
                                            __dec_obj184=result_350->sname;
                                            result_350->sname=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(self->sname))));
                                            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        __result224__ = __result_obj__ = result_350;
                                        come_call_finalizer2(sStoreFieldNode_finalize,result_350, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result224__;
                                        come_call_finalizer2(sStoreFieldNode_finalize,result_350, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sLoadFieldNode_finalize"
                                            # 0 "sLoadFieldNode_finalize"
                                            if(_if_conditional475=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional475) {
                                                # 0 "sLoadFieldNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 2 "sLoadFieldNode_finalize"
                                            # 1 "sLoadFieldNode_finalize"
                                            if(_if_conditional476=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional476) {
                                                # 1 "sLoadFieldNode_finalize"
                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 3 "sLoadFieldNode_finalize"
                                            # 2 "sLoadFieldNode_finalize"
                                            if(_if_conditional477=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional477) {
                                                # 2 "sLoadFieldNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional478;
struct sLoadFieldNode* __result225__;
void* right_value450;
struct sLoadFieldNode* result_351;
_Bool _if_conditional479;
void* right_value451;
struct sNode* __dec_obj189;
_Bool _if_conditional480;
void* right_value452;
char* __dec_obj190;
_Bool _if_conditional481;
_Bool _if_conditional482;
void* right_value453;
char* __dec_obj191;
struct sLoadFieldNode* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value450 = (void*)0;
memset(&result_351, 0, sizeof(struct sLoadFieldNode*));
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
                                            # 3 "sLoadFieldNode_clone"
                                            # 2 "sLoadFieldNode_clone"
                                            if(_if_conditional478=self==(void*)0,                                            _if_conditional478) {
                                                # 2 "sLoadFieldNode_clone"
                                                __result225__ = __result_obj__ = (void*)0;
                                                return __result225__;
                                            }
                                            # 3 "sLoadFieldNode_clone"
                                            result_351=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value450=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                            come_call_finalizer2(sLoadFieldNode_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sLoadFieldNode_clone"
                                            # 4 "sLoadFieldNode_clone"
                                            if(_if_conditional479=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional479) {
                                                # 4 "sLoadFieldNode_clone"
                                                __dec_obj189=result_351->mLeft;
                                                result_351->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=sNode_clone(self->mLeft))));
                                                if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 6 "sLoadFieldNode_clone"
                                            # 5 "sLoadFieldNode_clone"
                                            if(_if_conditional480=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional480) {
                                                # 5 "sLoadFieldNode_clone"
                                                __dec_obj190=result_351->mName;
                                                result_351->mName=(char*)come_increment_ref_count(((char*)(right_value452=string_clone(self->mName))));
                                                __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sLoadFieldNode_clone"
                                            # 6 "sLoadFieldNode_clone"
                                            if(_if_conditional481=self!=((void*)0),                                            _if_conditional481) {
                                                # 6 "sLoadFieldNode_clone"
                                                result_351->sline=self->sline;
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            # 7 "sLoadFieldNode_clone"
                                            if(_if_conditional482=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional482) {
                                                # 7 "sLoadFieldNode_clone"
                                                __dec_obj191=result_351->sname;
                                                result_351->sname=(char*)come_increment_ref_count(((char*)(right_value453=string_clone(self->sname))));
                                                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value453 = come_decrement_ref_count2(right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            __result226__ = __result_obj__ = result_351;
                                            come_call_finalizer2(sLoadFieldNode_finalize,result_351, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result226__;
                                            come_call_finalizer2(sLoadFieldNode_finalize,result_351, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

