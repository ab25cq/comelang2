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
struct sStoreFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};
struct sNullCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sNullableNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sRangeCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
};
struct sLoadFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    char* mName;
};
struct sStoreArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};
struct sLoadArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    _Bool mBreakGuard;
};
struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

struct sNode* parse_global_variable(struct sInfo* info);

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

_Bool sStoreFieldNode_terminated(struct sStoreFieldNode* self);

char* sStoreFieldNode_kind(struct sStoreFieldNode* self);

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
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated(struct sNullCheckNode* self);

char* sNullCheckNode_kind(struct sNullCheckNode* self);

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);

_Bool sNullableNode_terminated(struct sNullableNode* self);

char* sNullableNode_kind(struct sNullableNode* self);

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated(struct sRangeCheckNode* self);

char* sRangeCheckNode_kind(struct sRangeCheckNode* self);

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated(struct sLoadFieldNode* self);

char* sLoadFieldNode_kind(struct sLoadFieldNode* self);

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated(struct sStoreArrayNode* self);

char* sStoreArrayNode_kind(struct sStoreArrayNode* self);

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
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);

_Bool sLoadArrayNode_terminated(struct sLoadArrayNode* self);

char* sLoadArrayNode_kind(struct sLoadArrayNode* self);

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated(struct sLoadRangeArrayNode* self);

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

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










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_77;
_Bool _if_conditional110;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
char* fun_name2_80;
struct sFun* operator_fun_81;
_Bool _if_conditional111;
_Bool _if_conditional113;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_87;
_Bool _if_conditional128;
void* right_value119;
_Bool _if_conditional129;
_Bool __result76__;
void* right_value120;
char* __dec_obj37;
int i_91;
void* right_value121;
char* new_fun_name_92;
_Bool _if_conditional149;
void* right_value122;
char* __dec_obj38;
_Bool _if_conditional150;
_Bool result_93;
_Bool _if_conditional151;
void* right_value123;
struct CVALUE* come_value_94;
char* left_value2_95;
void* right_value124;
void* right_value125;
_Bool _if_conditional156;
void* right_value126;
char* __dec_obj39;
void* right_value127;
char* __dec_obj40;
char* middle_value2_99;
void* right_value128;
void* right_value129;
_Bool _if_conditional157;
void* right_value130;
char* __dec_obj41;
void* right_value131;
char* __dec_obj42;
char* right_value2_100;
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
struct sType* result_type1_101;
void* right_value142;
struct sType* result_type2_102;
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
memset(&generics_type_77, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&class_name_79, 0, sizeof(char*));
memset(&fun_name2_80, 0, sizeof(char*));
memset(&operator_fun_81, 0, sizeof(struct sFun*));
right_value115 = (void*)0;
memset(&none_generics_name_82, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&obj_type_83, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&fun_name3_84, 0, sizeof(char*));
memset(&generics_fun_87, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&i_91, 0, sizeof(int));
right_value121 = (void*)0;
memset(&new_fun_name_92, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&result_93, 0, sizeof(_Bool));
right_value123 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
memset(&left_value2_95, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&middle_value2_99, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&right_value2_100, 0, sizeof(char*));
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
memset(&result_type1_101, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&result_type2_102, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    # 5 "18field.c"
    generics_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 11 "18field.c"
    # 7 "18field.c"
    if(generics_type_77->mNoSolvedGenericsType->v1) {
        # 8 "18field.c"
        __dec_obj35=generics_type_77;
        generics_type_77=(struct sType*)come_increment_ref_count(generics_type_77->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 11 "18field.c"
    klass_78=type->mClass;
    # 12 "18field.c"
    class_name_79=klass_78->mName;
    # 14 "18field.c"
    # 15 "18field.c"
    operator_fun_81=((void*)0);
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
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 24 "18field.c"
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 26 "18field.c"
        __dec_obj36=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 27 "18field.c"
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 29 "18field.c"
        generics_fun_87=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        # 37 "18field.c"
        # 31 "18field.c"
        if(generics_fun_87) {
            # 35 "18field.c"
            # 32 "18field.c"
            if(_if_conditional129=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_80)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional129) {
                # 33 "18field.c"
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
        }
        # 37 "18field.c"
        operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 40 "18field.c"
        __dec_obj37=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 42 "18field.c"
        # 53 "18field.c"
        for(        i_91=128-1;        i_91>=1;        i_91--        ){
            # 44 "18field.c"
            new_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s_v%d",fun_name2_80,i_91))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 45 "18field.c"
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_92);
            # 51 "18field.c"
            # 47 "18field.c"
            if(operator_fun_81) {
                # 48 "18field.c"
                __dec_obj38=fun_name2_80;
                fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(new_fun_name_92))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 49 "18field.c"
                new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 56 "18field.c"
        # 53 "18field.c"
        if(_if_conditional150=operator_fun_81==((void*)0),        _if_conditional150) {
            # 54 "18field.c"
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        }
    }
    # 58 "18field.c"
    result_93=(_Bool)0;
    # 116 "18field.c"
    # 60 "18field.c"
    if(operator_fun_81) {
        # 61 "18field.c"
        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer3(right_value123,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 62 "18field.c"
        # 63 "18field.c"
        check_assign_type(((char*)(right_value125=xsprintf("\%s is assigned to",((char*)(right_value124=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 71 "18field.c"
        # 64 "18field.c"
        if(_if_conditional156=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap,        _if_conditional156) {
            # 65 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info);
            # 66 "18field.c"
            __dec_obj39=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 69 "18field.c"
            __dec_obj40=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 71 "18field.c"
        # 72 "18field.c"
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 80 "18field.c"
        # 73 "18field.c"
        if(_if_conditional157=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap,        _if_conditional157) {
            # 74 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info);
            # 75 "18field.c"
            __dec_obj41=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 78 "18field.c"
            __dec_obj42=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 80 "18field.c"
        # 81 "18field.c"
        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 90 "18field.c"
        # 82 "18field.c"
        if(_if_conditional158=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap,        _if_conditional158) {
            # 83 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info);
            # 84 "18field.c"
            __dec_obj43=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 87 "18field.c"
            __dec_obj44=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 90 "18field.c"
        __dec_obj45=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_80))),((char*)(right_value137=string_to_string(left_value2_95))),((char*)(right_value138=string_to_string(middle_value2_99))),((char*)(right_value139=string_to_string(right_value2_100)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 92 "18field.c"
        result_type1_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(operator_fun_81->mResultType))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 94 "18field.c"
        result_type2_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=solve_generics(result_type1_101,generics_type_77,info))));
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 96 "18field.c"
        __dec_obj46=come_value_94->type;
        come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(result_type2_102))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 97 "18field.c"
        come_value_94->var=((void*)0);
        # 103 "18field.c"
        # 99 "18field.c"
        if(result_type2_102->mHeap) {
            # 100 "18field.c"
            __dec_obj47=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value144=append_object_to_right_values(come_value_94->c_value,(struct sType*)come_increment_ref_count(result_type2_102),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        # 103 "18field.c"
        if(_if_conditional160=result_type2_102->mGuardValue&&result_type2_102->mPointerNum>0,        _if_conditional160) {
            # 104 "18field.c"
            __dec_obj48=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value145=make_type_name_string(result_type2_102,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_94->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        __dec_obj49=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value147=append_stackframe(come_value_94->c_value,come_value_94->type,info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 109 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_94->c_value);
        # 111 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        # 113 "18field.c"
        result_93=(_Bool)1;
        come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_95 = come_decrement_ref_count2(left_value2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_99 = come_decrement_ref_count2(middle_value2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_100 = come_decrement_ref_count2(right_value2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_101,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 116 "18field.c"
    __result84__ = result_93;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(right_value79,sType_finalize, 0, 1, 0, 0, __result_obj__);
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
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            # 6 "sType_clone"
            __dec_obj17=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            # 7 "sType_clone"
            __dec_obj18=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            # 10 "sType_clone"
            __dec_obj24=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            # 13 "sType_clone"
            __dec_obj29=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            # 14 "sType_clone"
            __dec_obj30=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                # 1 "sType_finalize"
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                # 2 "sType_finalize"
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional27) {
                # 5 "sType_finalize"
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional29) {
                # 6 "sType_finalize"
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional30) {
                # 7 "sType_finalize"
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional32) {
                # 8 "sType_finalize"
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
                    # 124 "./neo-c.h"
                    it_48=self->head;
                    # 130 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 126 "./neo-c.h"
                        prev_it_49=it_48;
                        # 127 "./neo-c.h"
                        it_48=it_48->next;
                        # 128 "./neo-c.h"
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    # 124 "./neo-c.h"
                    it_50=self->head;
                    # 130 "./neo-c.h"
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        # 126 "./neo-c.h"
                        prev_it_51=it_50;
                        # 127 "./neo-c.h"
                        it_50=it_50->next;
                        # 128 "./neo-c.h"
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
                    # 124 "./neo-c.h"
                    it_52=self->head;
                    # 130 "./neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        # 126 "./neo-c.h"
                        prev_it_53=it_52;
                        # 127 "./neo-c.h"
                        it_52=it_52->next;
                        # 128 "./neo-c.h"
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
                # 143 "./neo-c.h"
                # 140 "./neo-c.h"
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    # 141 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 143 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 143, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 145 "./neo-c.h"
                it_55=self->head;
                # 152 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 147 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 152 "./neo-c.h"
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 105 "./neo-c.h"
                    self->head=((void*)0);
                    # 106 "./neo-c.h"
                    self->tail=((void*)0);
                    # 107 "./neo-c.h"
                    self->len=0;
                    # 109 "./neo-c.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
                        # 187 "./neo-c.h"
                        # 156 "./neo-c.h"
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            # 157 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 159 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 160 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 161 "./neo-c.h"
                            __dec_obj12=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 163 "./neo-c.h"
                            self->tail=litem_56;
                            # 164 "./neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 187 "./neo-c.h"
                            # 166 "./neo-c.h"
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                # 167 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 170 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj13=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail=litem_57;
                                # 174 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 177 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 177, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 179 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 180 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 181 "./neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 183 "./neo-c.h"
                                self->tail->next=litem_58;
                                # 184 "./neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 187 "./neo-c.h"
                        self->len++;
                        # 189 "./neo-c.h"
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_59;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                # 124 "./neo-c.h"
                it_59=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    # 126 "./neo-c.h"
                    prev_it_60=it_59;
                    # 127 "./neo-c.h"
                    it_59=it_59->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __result57__;
void* right_value87;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional45;
void* right_value88;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value87,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj16=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional44) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result59__;
void* right_value93;
void* right_value94;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value99;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
                # 143 "./neo-c.h"
                # 140 "./neo-c.h"
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    # 141 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 143 "./neo-c.h"
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 143, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 145 "./neo-c.h"
                it_63=self->head;
                # 152 "./neo-c.h"
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    # 147 "./neo-c.h"
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_63->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 149 "./neo-c.h"
                    it_63=it_63->next;
                }
                # 152 "./neo-c.h"
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 105 "./neo-c.h"
                    self->head=((void*)0);
                    # 106 "./neo-c.h"
                    self->tail=((void*)0);
                    # 107 "./neo-c.h"
                    self->len=0;
                    # 109 "./neo-c.h"
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value95;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj21;
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj22;
void* right_value97;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        # 187 "./neo-c.h"
                        # 156 "./neo-c.h"
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            # 157 "./neo-c.h"
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 159 "./neo-c.h"
                            litem_64->prev=((void*)0);
                            # 160 "./neo-c.h"
                            litem_64->next=((void*)0);
                            # 161 "./neo-c.h"
                            __dec_obj21=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            # 163 "./neo-c.h"
                            self->tail=litem_64;
                            # 164 "./neo-c.h"
                            self->head=litem_64;
                        }
                        else {
                            # 187 "./neo-c.h"
                            # 166 "./neo-c.h"
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                # 167 "./neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_65->prev=self->head;
                                # 170 "./neo-c.h"
                                litem_65->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj22=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail=litem_65;
                                # 174 "./neo-c.h"
                                self->head->next=litem_65;
                            }
                            else {
                                # 177 "./neo-c.h"
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 177, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 179 "./neo-c.h"
                                litem_66->prev=self->tail;
                                # 180 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 181 "./neo-c.h"
                                __dec_obj23=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 183 "./neo-c.h"
                                self->tail->next=litem_66;
                                # 184 "./neo-c.h"
                                self->tail=litem_66;
                            }
                        }
                        # 187 "./neo-c.h"
                        self->len++;
                        # 189 "./neo-c.h"
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
struct sNode* result_67;
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
memset(&result_67, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            # 2 "sNode_clone"
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        # 3 "sNode_clone"
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional54) {
                            # 4 "sNode_clone"
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            # 5 "sNode_clone"
                            result_67->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            # 6 "sNode_clone"
                            result_67->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            # 7 "sNode_clone"
                            result_67->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            # 8 "sNode_clone"
                            result_67->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 9 "sNode_clone"
                            result_67->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 10 "sNode_clone"
                            result_67->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 11 "sNode_clone"
                            result_67->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result63__ = __result_obj__ = result_67;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_68;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_69, 0, sizeof(struct list_item$1sNodeph*));
                # 124 "./neo-c.h"
                it_68=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    # 126 "./neo-c.h"
                    prev_it_69=it_68;
                    # 127 "./neo-c.h"
                    it_68=it_68->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result65__;
void* right_value102;
void* right_value103;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value107;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
                # 143 "./neo-c.h"
                # 140 "./neo-c.h"
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    # 141 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 143 "./neo-c.h"
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 143, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 145 "./neo-c.h"
                it_71=self->head;
                # 152 "./neo-c.h"
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    # 147 "./neo-c.h"
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_71->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    it_71=it_71->next;
                }
                # 152 "./neo-c.h"
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 105 "./neo-c.h"
                    self->head=((void*)0);
                    # 106 "./neo-c.h"
                    self->tail=((void*)0);
                    # 107 "./neo-c.h"
                    self->len=0;
                    # 109 "./neo-c.h"
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value104;
struct list_item$1charph* litem_72;
char* __dec_obj26;
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_73;
char* __dec_obj27;
void* right_value106;
struct list_item$1charph* litem_74;
char* __dec_obj28;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value105 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        # 187 "./neo-c.h"
                        # 156 "./neo-c.h"
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            # 157 "./neo-c.h"
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 159 "./neo-c.h"
                            litem_72->prev=((void*)0);
                            # 160 "./neo-c.h"
                            litem_72->next=((void*)0);
                            # 161 "./neo-c.h"
                            __dec_obj26=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 163 "./neo-c.h"
                            self->tail=litem_72;
                            # 164 "./neo-c.h"
                            self->head=litem_72;
                        }
                        else {
                            # 187 "./neo-c.h"
                            # 166 "./neo-c.h"
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                # 167 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_73->prev=self->head;
                                # 170 "./neo-c.h"
                                litem_73->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj27=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail=litem_73;
                                # 174 "./neo-c.h"
                                self->head->next=litem_73;
                            }
                            else {
                                # 177 "./neo-c.h"
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 177, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 179 "./neo-c.h"
                                litem_74->prev=self->tail;
                                # 180 "./neo-c.h"
                                litem_74->next=((void*)0);
                                # 181 "./neo-c.h"
                                __dec_obj28=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 183 "./neo-c.h"
                                self->tail->next=litem_74;
                                # 184 "./neo-c.h"
                                self->tail=litem_74;
                            }
                        }
                        # 187 "./neo-c.h"
                        self->len++;
                        # 189 "./neo-c.h"
                        __result67__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result67__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_75;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                # 124 "./neo-c.h"
                it_75=self->head;
                # 130 "./neo-c.h"
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    # 126 "./neo-c.h"
                    prev_it_76=it_75;
                    # 127 "./neo-c.h"
                    it_75=it_75->next;
                    # 128 "./neo-c.h"
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional112;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        # 368 "./neo-c.h"
        # 365 "./neo-c.h"
        if(_if_conditional112=self==((void*)0),        _if_conditional112) {
            # 366 "./neo-c.h"
            __result70__ = 0;
            return __result70__;
        }
        # 368 "./neo-c.h"
        __result71__ = self->len;
        return __result71__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional16;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sGenericsFun* __result72__;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
            # 1227 "./neo-c.h"
            hash_85=string_get_hash_key(((char*)key))%self->size;
            # 1228 "./neo-c.h"
            it_86=hash_85;
            # 1252 "./neo-c.h"
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                # 1250 "./neo-c.h"
                # 1231 "./neo-c.h"
                if(_if_conditional114=self->item_existance[it_86],                _if_conditional114) {
                    # 1238 "./neo-c.h"
                    # 1233 "./neo-c.h"
                    if(_if_conditional115=string_equals(self->keys[it_86],key),                    _if_conditional115) {
                        # 1235 "./neo-c.h"
                        __result72__ = __result_obj__ = self->items[it_86];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    # 1238 "./neo-c.h"
                    it_86++;
                    # 1246 "./neo-c.h"
                    # 1240 "./neo-c.h"
                    if(_if_conditional126=it_86>=self->size,                    _if_conditional126) {
                        # 1241 "./neo-c.h"
                        it_86=0;
                    }
                    else {
                        # 1246 "./neo-c.h"
                        # 1243 "./neo-c.h"
                        if(_if_conditional127=it_86==hash_85,                        _if_conditional127) {
                            # 1244 "./neo-c.h"
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    # 1248 "./neo-c.h"
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            # 1252 "./neo-c.h"
            __result75__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
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
                                come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sGenericsFun_finalize"
                            # 1 "sGenericsFun_finalize"
                            if(_if_conditional117=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional117) {
                                # 1 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sGenericsFun_finalize"
                            # 2 "sGenericsFun_finalize"
                            if(_if_conditional118=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional118) {
                                # 2 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sGenericsFun_finalize"
                            # 5 "sGenericsFun_finalize"
                            if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional121) {
                                # 5 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sGenericsFun_finalize"
                            # 6 "sGenericsFun_finalize"
                            if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional122) {
                                # 6 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sGenericsFun_finalize"
                            # 7 "sGenericsFun_finalize"
                            if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional123) {
                                # 7 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sFun* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sFun* __result77__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sFun* __result78__;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sFun*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            # 1545 "./neo-c.h"
            # 1546 "./neo-c.h"
            memset(&default_value_88,0,sizeof(struct sFun*));
            # 1548 "./neo-c.h"
            hash_89=string_get_hash_key(((char*)key))%self->size;
            # 1549 "./neo-c.h"
            it_90=hash_89;
            # 1573 "./neo-c.h"
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                # 1571 "./neo-c.h"
                # 1552 "./neo-c.h"
                if(_if_conditional130=self->item_existance[it_90],                _if_conditional130) {
                    # 1559 "./neo-c.h"
                    # 1554 "./neo-c.h"
                    if(_if_conditional131=string_equals(self->keys[it_90],key),                    _if_conditional131) {
                        # 1556 "./neo-c.h"
                        __result77__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        return __result77__;
                    }
                    # 1559 "./neo-c.h"
                    it_90++;
                    # 1567 "./neo-c.h"
                    # 1561 "./neo-c.h"
                    if(_if_conditional147=it_90>=self->size,                    _if_conditional147) {
                        # 1562 "./neo-c.h"
                        it_90=0;
                    }
                    else {
                        # 1567 "./neo-c.h"
                        # 1564 "./neo-c.h"
                        if(_if_conditional148=it_90==hash_89,                        _if_conditional148) {
                            # 1565 "./neo-c.h"
                            __result78__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result78__;
                        }
                    }
                }
                else {
                    # 1569 "./neo-c.h"
                    __result79__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
            }
            # 1573 "./neo-c.h"
            __result80__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sFun_finalize"
                            # 2 "sFun_finalize"
                            if(_if_conditional134=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional134) {
                                # 2 "sFun_finalize"
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sFun_finalize"
                            # 3 "sFun_finalize"
                            if(_if_conditional135=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional135) {
                                # 3 "sFun_finalize"
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sFun_finalize"
                            # 4 "sFun_finalize"
                            if(_if_conditional136=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional136) {
                                # 4 "sFun_finalize"
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sFun_finalize"
                            # 5 "sFun_finalize"
                            if(_if_conditional137=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional137) {
                                # 5 "sFun_finalize"
                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sFun_finalize"
                            # 6 "sFun_finalize"
                            if(_if_conditional138=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional138) {
                                # 6 "sFun_finalize"
                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sFun_finalize"
                            # 7 "sFun_finalize"
                            if(_if_conditional141=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional141) {
                                # 7 "sFun_finalize"
                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sFun_finalize"
                            # 8 "sFun_finalize"
                            if(_if_conditional142=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional142) {
                                # 8 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sFun_finalize"
                            # 9 "sFun_finalize"
                            if(_if_conditional143=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional143) {
                                # 9 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 11 "sFun_finalize"
                            # 10 "sFun_finalize"
                            if(_if_conditional144=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional144) {
                                # 10 "sFun_finalize"
                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sBlock_finalize"
                                    # 1 "sBlock_finalize"
                                    if(_if_conditional140=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional140) {
                                        # 1 "sBlock_finalize"
                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
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
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional154;
struct list_item$1sTypeph* it_96;
int i_97;
_Bool _while_condtional18;
_Bool _if_conditional155;
struct sType* __result81__;
struct sType* default_value_98;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_97, 0, sizeof(int));
memset(&default_value_98, 0, sizeof(struct sType*));
            # 687 "./neo-c.h"
            # 683 "./neo-c.h"
            if(_if_conditional154=position<0,            _if_conditional154) {
                # 684 "./neo-c.h"
                position+=self->len;
            }
            # 687 "./neo-c.h"
            it_96=self->head;
            # 688 "./neo-c.h"
            i_97=0;
            # 695 "./neo-c.h"
            while(_while_condtional18=it_96!=((void*)0),            _while_condtional18) {
                # 693 "./neo-c.h"
                # 690 "./neo-c.h"
                if(_if_conditional155=position==i_97,                _if_conditional155) {
                    # 691 "./neo-c.h"
                    __result81__ = __result_obj__ = it_96->item;
                    return __result81__;
                }
                # 693 "./neo-c.h"
                it_96=it_96->next;
                # 694 "./neo-c.h"
                i_97++;
            }
            # 697 "./neo-c.h"
            # 698 "./neo-c.h"
            memset(&default_value_98,0,sizeof(struct sType*));
            # 699 "./neo-c.h"
            __result82__ = __result_obj__ = default_value_98;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional161;
void* right_value148;
struct list_item$1CVALUEph* litem_103;
struct CVALUE* __dec_obj50;
_Bool _if_conditional163;
void* right_value149;
struct list_item$1CVALUEph* litem_104;
struct CVALUE* __dec_obj51;
void* right_value150;
struct list_item$1CVALUEph* litem_105;
struct CVALUE* __dec_obj52;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1CVALUEph*));
right_value149 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1CVALUEph*));
right_value150 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1CVALUEph*));
            # 257 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional161=self->len==0,            _if_conditional161) {
                # 227 "./neo-c.h"
                litem_103=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_103->prev=((void*)0);
                # 230 "./neo-c.h"
                litem_103->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj50=litem_103->item;
                litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_103;
                # 234 "./neo-c.h"
                self->head=litem_103;
            }
            else {
                # 257 "./neo-c.h"
                # 236 "./neo-c.h"
                if(_if_conditional163=self->len==1,                _if_conditional163) {
                    # 237 "./neo-c.h"
                    litem_104=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_104->prev=self->head;
                    # 240 "./neo-c.h"
                    litem_104->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj51=litem_104->item;
                    litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail=litem_104;
                    # 244 "./neo-c.h"
                    self->head->next=litem_104;
                }
                else {
                    # 247 "./neo-c.h"
                    litem_105=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 247, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 249 "./neo-c.h"
                    litem_105->prev=self->tail;
                    # 250 "./neo-c.h"
                    litem_105->next=((void*)0);
                    # 251 "./neo-c.h"
                    __dec_obj52=litem_105->item;
                    litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 253 "./neo-c.h"
                    self->tail->next=litem_105;
                    # 254 "./neo-c.h"
                    self->tail=litem_105;
                }
            }
            # 257 "./neo-c.h"
            self->len++;
            # 259 "./neo-c.h"
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional162=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional162) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
    # 127 "18field.c"
    self->sline=info->sline;
    # 128 "18field.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 130 "18field.c"
    __dec_obj54=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(left))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 131 "18field.c"
    __dec_obj55=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(right))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 132 "18field.c"
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 135 "18field.c"
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreFieldNode_terminated(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    # 137 "18field.c"
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__;
void* right_value155;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    # 142 "18field.c"
    __result87__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sStoreFieldNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_106;
struct sNode* right_107;
void* right_value156;
char* name_108;
_Bool _if_conditional168;
_Bool __result88__;
void* right_value157;
struct CVALUE* left_value_109;
_Bool _if_conditional169;
void* right_value158;
void* right_value159;
char* __dec_obj57;
_Bool _if_conditional170;
_Bool __result89__;
void* right_value160;
struct CVALUE* right_value_110;
struct sType* right_type_111;
struct sType* left_type_112;
void* right_value161;
struct sType* left_type2_113;
struct sClass* klass_114;
struct sType* field_type_120;
int index_121;
char* child_field_name_122;
_Bool _if_conditional182;
_Bool __result94__;
struct list$1tuple2$2charphsTypephph* o2_saved_123;
struct tuple2$2charphsTypeph* field_126;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_129;
struct sType* field_type2_130;
_Bool _if_conditional187;
void* right_value162;
struct sType* __dec_obj58;
_Bool _if_conditional189;
struct list$1tuple2$2charphsTypephph* o2_saved_131;
struct tuple2$2charphsTypeph* field_132;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_133;
struct sType* field_type2_134;
struct sClass* klass2_135;
struct list$1tuple2$2charphsTypephph* o2_saved_136;
struct tuple2$2charphsTypeph* field2_137;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_138;
struct sType* field_type3_139;
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
struct CVALUE* come_value_140;
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
char* c_value_141;
void* right_value171;
char* __dec_obj62;
void* right_value172;
char* c_value_142;
void* right_value173;
char* __dec_obj63;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value174;
char* c_value_143;
void* right_value175;
char* __dec_obj64;
void* right_value176;
char* c_value_144;
void* right_value177;
char* __dec_obj65;
void* right_value178;
char* __dec_obj66;
_Bool __result106__;
int right_value_id_145;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value179;
char* c_value_146;
void* right_value180;
char* __dec_obj67;
void* right_value181;
char* c_value_147;
void* right_value182;
char* __dec_obj68;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value183;
char* c_value_148;
void* right_value184;
char* __dec_obj69;
void* right_value185;
char* c_value_149;
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
memset(&left_106, 0, sizeof(struct sNode*));
memset(&right_107, 0, sizeof(struct sNode*));
right_value156 = (void*)0;
memset(&name_108, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&right_value_110, 0, sizeof(struct CVALUE*));
memset(&right_type_111, 0, sizeof(struct sType*));
memset(&left_type_112, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&left_type2_113, 0, sizeof(struct sType*));
memset(&klass_114, 0, sizeof(struct sClass*));
memset(&field_type_120, 0, sizeof(struct sType*));
memset(&index_121, 0, sizeof(int));
memset(&child_field_name_122, 0, sizeof(char*));
memset(&o2_saved_123, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_126, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_129, 0, sizeof(char*));
memset(&field_type2_130, 0, sizeof(struct sType*));
memset(&field_name_129, 0, sizeof(char*));
memset(&field_type2_130, 0, sizeof(struct sType*));
right_value162 = (void*)0;
memset(&o2_saved_131, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_132, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&klass2_135, 0, sizeof(struct sClass*));
memset(&o2_saved_136, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_137, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_138, 0, sizeof(char*));
memset(&field_type3_139, 0, sizeof(struct sType*));
memset(&field_name2_138, 0, sizeof(char*));
memset(&field_type3_139, 0, sizeof(struct sType*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&c_value_141, 0, sizeof(char*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&c_value_142, 0, sizeof(char*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&c_value_143, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&c_value_144, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&right_value_id_145, 0, sizeof(int));
right_value179 = (void*)0;
memset(&c_value_146, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&c_value_147, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&c_value_148, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&c_value_149, 0, sizeof(char*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    # 147 "18field.c"
    left_106=self->mLeft;
    # 148 "18field.c"
    right_107=self->mRight;
    # 149 "18field.c"
    name_108=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(self->mName))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 155 "18field.c"
    # 151 "18field.c"
    if(_if_conditional168=!node_compile(left_106,info),    _if_conditional168) {
        # 152 "18field.c"
        __result88__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    # 155 "18field.c"
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value157,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 156 "18field.c"
    dec_stack_ptr(1,info);
    # 162 "18field.c"
    # 158 "18field.c"
    if(_if_conditional169=gComeDebug&&left_value_109->type->mPointerNum>0,    _if_conditional169) {
        # 159 "18field.c"
        __dec_obj57=left_value_109->c_value;
        left_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value158=make_type_name_string(left_value_109->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_109->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 166 "18field.c"
    # 162 "18field.c"
    if(_if_conditional170=!node_compile(right_107,info),    _if_conditional170) {
        # 163 "18field.c"
        __result89__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result89__;
    }
    # 166 "18field.c"
    right_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 167 "18field.c"
    right_type_111=right_value_110->type;
    # 169 "18field.c"
    dec_stack_ptr(1,info);
    # 171 "18field.c"
    left_type_112=left_value_109->type;
    # 173 "18field.c"
    left_type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=solve_generics(left_type_112,left_type_112,info))));
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 175 "18field.c"
    klass_114=left_type2_113->mClass;
    # 176 "18field.c"
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    # 178 "18field.c"
    field_type_120=((void*)0);
    # 179 "18field.c"
    index_121=0;
    # 180 "18field.c"
    child_field_name_122=((void*)0);
    # 181 "18field.c"
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    # 188 "18field.c"
    # 183 "18field.c"
    if(_if_conditional182=klass_114->mFields==((void*)0),    _if_conditional182) {
        # 184 "18field.c"
        err_msg(info,"%s fields are null",klass_114->mName);
        # 185 "18field.c"
        __result94__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result94__;
    }
    # 199 "18field.c"
    for(    o2_saved_123=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_126=list$1tuple2$2charphsTypephph_begin((o2_saved_123));    !list$1tuple2$2charphsTypephph_end((o2_saved_123));    field_126=list$1tuple2$2charphsTypephph_next((o2_saved_123))    ){
        # 189 "18field.c"
        multiple_assign_var1=field_126;
        field_name_129=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_130=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 194 "18field.c"
        # 191 "18field.c"
        if(_if_conditional187=string_operator_equals(field_name_129,name_108),        _if_conditional187) {
            # 192 "18field.c"
            __dec_obj58=field_type_120;
            field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(field_type2_130))));
            come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 193 "18field.c"
            field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 196 "18field.c"
        index_121++;
        field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    # 234 "18field.c"
    # 199 "18field.c"
    if(_if_conditional189=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),    _if_conditional189) {
        # 200 "18field.c"
        index_121=0;
        # 228 "18field.c"
        for(        o2_saved_131=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_132=list$1tuple2$2charphsTypephph_begin((o2_saved_131));        !list$1tuple2$2charphsTypephph_end((o2_saved_131));        field_132=list$1tuple2$2charphsTypephph_next((o2_saved_131))        ){
            # 202 "18field.c"
            multiple_assign_var2=field_132;
            field_name_133=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            # 204 "18field.c"
            klass2_135=field_type2_134->mClass;
            # 216 "18field.c"
            for(            o2_saved_136=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_135->mFields)),field2_137=list$1tuple2$2charphsTypephph_begin((o2_saved_136));            !list$1tuple2$2charphsTypephph_end((o2_saved_136));            field2_137=list$1tuple2$2charphsTypephph_next((o2_saved_136))            ){
                # 207 "18field.c"
                multiple_assign_var3=field2_137;
                field_name2_138=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_139=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                # 214 "18field.c"
                # 209 "18field.c"
                if(_if_conditional190=string_operator_equals(field_name2_138,name_108),                _if_conditional190) {
                    # 210 "18field.c"
                    __dec_obj59=child_field_name_122;
                    child_field_name_122=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(field_name_133))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 211 "18field.c"
                    __dec_obj60=field_type_120;
                    field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(field_type3_139))));
                    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 212 "18field.c"
                    field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_136,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            # 220 "18field.c"
            # 216 "18field.c"
            if(child_field_name_122) {
                # 217 "18field.c"
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 223 "18field.c"
            # 220 "18field.c"
            if(_if_conditional192=string_operator_equals(field_name_133,name_108),            _if_conditional192) {
                # 221 "18field.c"
                __dec_obj61=field_type_120;
                field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(field_type2_134))));
                come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 222 "18field.c"
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 225 "18field.c"
            index_121++;
            field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_131,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        # 232 "18field.c"
        # 228 "18field.c"
        if(_if_conditional193=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),        _if_conditional193) {
            # 229 "18field.c"
            err_msg(info,"field not found(%s) in %s(1)",name_108,klass_114->mName);
            # 230 "18field.c"
            __result104__ = (_Bool)0;
            name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result104__;
        }
    }
    # 234 "18field.c"
    come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 234, "CVALUE"))));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 236 "18field.c"
    check_assign_type(((char*)(right_value168=xsprintf("\%s is assigned to",((char*)(right_value167=string_to_string(name_108)))))),field_type_120,right_type_111,right_value_110,(_Bool)0,(_Bool)1,info);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 238 "18field.c"
    right_type_111=((struct sType*)(right_value169=sType_clone(right_value_110->type)));
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 252 "18field.c"
    # 240 "18field.c"
    if(_if_conditional194=field_type_120->mHeap&&!right_value_110->type->mHeap,    _if_conditional194) {
        # 251 "18field.c"
        # 241 "18field.c"
        if(_if_conditional195=string_operator_equals(right_value_110->type->mClass->mName,"void")&&right_value_110->type->mPointerNum==1,        _if_conditional195) {
        }
        else {
            # 250 "18field.c"
            # 245 "18field.c"
            if(_if_conditional196=!right_value_110->type->mDelegate&&!right_value_110->type->mShare&&!gComeGC,            _if_conditional196) {
                # 246 "18field.c"
                err_msg(info,"require right value as heap object(%s)(1)",name_108);
                # 247 "18field.c"
                printf("right type is %s pointer num %d heap %d\n",right_value_110->type->mClass->mName,right_value_110->type->mPointerNum,right_value_110->type->mHeap);
                # 248 "18field.c"
                __result105__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result105__;
            }
        }
    }
    # 346 "18field.c"
    # 252 "18field.c"
    if(_if_conditional197=field_type_120->mHeap&&right_type_111->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0,    _if_conditional197) {
        # 286 "18field.c"
        # 254 "18field.c"
        if(_if_conditional198=left_value_109->type->mPointerNum==1,        _if_conditional198) {
            # 267 "18field.c"
            # 255 "18field.c"
            if(child_field_name_122) {
                # 256 "18field.c"
                c_value_141=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 257 "18field.c"
                decrement_ref_count_object(field_type_120,c_value_141,info,(_Bool)0);
                # 258 "18field.c"
                std_move(field_type_120,right_type_111,right_value_110,info);
                # 259 "18field.c"
                __dec_obj62=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_141 = come_decrement_ref_count2(c_value_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 262 "18field.c"
                c_value_142=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 263 "18field.c"
                decrement_ref_count_object(field_type_120,c_value_142,info,(_Bool)0);
                # 264 "18field.c"
                std_move(field_type_120,right_type_111,right_value_110,info);
                # 265 "18field.c"
                __dec_obj63=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_142 = come_decrement_ref_count2(c_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 286 "18field.c"
            # 268 "18field.c"
            if(_if_conditional200=left_value_109->type->mPointerNum==0,            _if_conditional200) {
                # 281 "18field.c"
                # 269 "18field.c"
                if(child_field_name_122) {
                    # 270 "18field.c"
                    c_value_143=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 271 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_143,info,(_Bool)0);
                    # 272 "18field.c"
                    std_move(field_type_120,right_type_111,right_value_110,info);
                    # 273 "18field.c"
                    __dec_obj64=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 276 "18field.c"
                    c_value_144=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 277 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_144,info,(_Bool)0);
                    # 278 "18field.c"
                    __dec_obj65=right_value_110->c_value;
                    right_value_110->c_value=(char*)come_increment_ref_count(((char*)(right_value177=increment_ref_count_object(right_value_110->type,right_value_110->c_value,info))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 279 "18field.c"
                    __dec_obj66=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 283 "18field.c"
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                # 284 "18field.c"
                __result106__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result106__;
            }
        }
        # 286 "18field.c"
        right_value_id_145=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_110->c_value));
        # 291 "18field.c"
        # 288 "18field.c"
        if(_if_conditional202=right_value_id_145!=-1,        _if_conditional202) {
            # 289 "18field.c"
            remove_object_from_right_values(right_value_id_145,info);
        }
    }
    else {
        # 346 "18field.c"
        # 292 "18field.c"
        if(_if_conditional203=field_type_120->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0&&string_operator_equals(right_type_111->mClass->mName,"void"),        _if_conditional203) {
            # 322 "18field.c"
            # 294 "18field.c"
            if(_if_conditional204=left_value_109->type->mPointerNum==1,            _if_conditional204) {
                # 305 "18field.c"
                # 295 "18field.c"
                if(child_field_name_122) {
                    # 296 "18field.c"
                    c_value_146=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 297 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_146,info,(_Bool)0);
                    # 298 "18field.c"
                    __dec_obj67=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 301 "18field.c"
                    c_value_147=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 302 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_147,info,(_Bool)0);
                    # 303 "18field.c"
                    __dec_obj68=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_147 = come_decrement_ref_count2(c_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 322 "18field.c"
                # 306 "18field.c"
                if(_if_conditional206=left_value_109->type->mPointerNum==0,                _if_conditional206) {
                    # 317 "18field.c"
                    # 307 "18field.c"
                    if(child_field_name_122) {
                        # 308 "18field.c"
                        c_value_148=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 309 "18field.c"
                        decrement_ref_count_object(field_type_120,c_value_148,info,(_Bool)0);
                        # 310 "18field.c"
                        __dec_obj69=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 313 "18field.c"
                        c_value_149=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 314 "18field.c"
                        decrement_ref_count_object(field_type_120,c_value_149,info,(_Bool)0);
                        # 315 "18field.c"
                        __dec_obj70=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_149 = come_decrement_ref_count2(c_value_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    # 319 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    # 320 "18field.c"
                    __result107__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result107__;
                }
            }
        }
        else {
            # 344 "18field.c"
            # 324 "18field.c"
            if(_if_conditional208=left_value_109->type->mPointerNum==1,            _if_conditional208) {
                # 331 "18field.c"
                # 325 "18field.c"
                if(child_field_name_122) {
                    # 326 "18field.c"
                    __dec_obj71=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 329 "18field.c"
                    __dec_obj72=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 344 "18field.c"
                # 332 "18field.c"
                if(_if_conditional210=left_value_109->type->mPointerNum==0,                _if_conditional210) {
                    # 339 "18field.c"
                    # 333 "18field.c"
                    if(child_field_name_122) {
                        # 334 "18field.c"
                        __dec_obj73=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 337 "18field.c"
                        __dec_obj74=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    # 341 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    # 342 "18field.c"
                    __result108__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result108__;
                }
            }
        }
    }
    # 346 "18field.c"
    __dec_obj75=come_value_140->type;
    come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(field_type_120))));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 347 "18field.c"
    come_value_140->var=((void*)0);
    # 349 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
    # 351 "18field.c"
    add_come_last_code(info,"%s;\n",come_value_140->c_value);
    # 353 "18field.c"
    __result109__ = (_Bool)1;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_115;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional19;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sClass* __result90__;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct sClass* __result91__;
struct sClass* __result92__;
struct sClass* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_115, 0, sizeof(struct sClass*));
memset(&hash_116, 0, sizeof(unsigned int));
memset(&it_117, 0, sizeof(unsigned int));
        # 1545 "./neo-c.h"
        # 1546 "./neo-c.h"
        memset(&default_value_115,0,sizeof(struct sClass*));
        # 1548 "./neo-c.h"
        hash_116=string_get_hash_key(((char*)key))%self->size;
        # 1549 "./neo-c.h"
        it_117=hash_116;
        # 1573 "./neo-c.h"
        while(_while_condtional19=(_Bool)1,        _while_condtional19) {
            # 1571 "./neo-c.h"
            # 1552 "./neo-c.h"
            if(_if_conditional171=self->item_existance[it_117],            _if_conditional171) {
                # 1559 "./neo-c.h"
                # 1554 "./neo-c.h"
                if(_if_conditional172=string_equals(self->keys[it_117],key),                _if_conditional172) {
                    # 1556 "./neo-c.h"
                    __result90__ = __result_obj__ = self->items[it_117];
                    come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result90__;
                }
                # 1559 "./neo-c.h"
                it_117++;
                # 1567 "./neo-c.h"
                # 1561 "./neo-c.h"
                if(_if_conditional180=it_117>=self->size,                _if_conditional180) {
                    # 1562 "./neo-c.h"
                    it_117=0;
                }
                else {
                    # 1567 "./neo-c.h"
                    # 1564 "./neo-c.h"
                    if(_if_conditional181=it_117==hash_116,                    _if_conditional181) {
                        # 1565 "./neo-c.h"
                        __result91__ = __result_obj__ = default_value_115;
                        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result91__;
                    }
                }
            }
            else {
                # 1569 "./neo-c.h"
                __result92__ = __result_obj__ = default_value_115;
                come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
            }
        }
        # 1573 "./neo-c.h"
        __result93__ = __result_obj__ = default_value_115;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
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
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_118;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 124 "./neo-c.h"
                                it_118=self->head;
                                # 130 "./neo-c.h"
                                while(_while_condtional20=it_118!=((void*)0),                                _while_condtional20) {
                                    # 126 "./neo-c.h"
                                    prev_it_119=it_118;
                                    # 127 "./neo-c.h"
                                    it_118=it_118->next;
                                    # 128 "./neo-c.h"
                                    come_call_finalizer3(prev_it_119,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional183;
struct tuple2$2charphsTypeph* result_124;
struct tuple2$2charphsTypeph* __result95__;
_Bool _if_conditional184;
struct tuple2$2charphsTypeph* __result96__;
struct tuple2$2charphsTypeph* result_125;
struct tuple2$2charphsTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 291 "./neo-c.h"
        # 286 "./neo-c.h"
        if(_if_conditional183=self==((void*)0),        _if_conditional183) {
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_124,0,sizeof(struct tuple2$2charphsTypeph*));
            # 289 "./neo-c.h"
            __result95__ = __result_obj__ = result_124;
            return __result95__;
        }
        # 291 "./neo-c.h"
        self->it=self->head;
        # 297 "./neo-c.h"
        # 293 "./neo-c.h"
        if(self->it) {
            # 294 "./neo-c.h"
            __result96__ = __result_obj__ = self->it->item;
            return __result96__;
        }
        # 297 "./neo-c.h"
        # 298 "./neo-c.h"
        memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*));
        # 299 "./neo-c.h"
        __result97__ = __result_obj__ = result_125;
        return __result97__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        # 321 "./neo-c.h"
        __result98__ = self==((void*)0)||self->it==((void*)0);
        return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct tuple2$2charphsTypeph* result_127;
struct tuple2$2charphsTypeph* __result99__;
_Bool _if_conditional186;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* result_128;
struct tuple2$2charphsTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 309 "./neo-c.h"
        # 303 "./neo-c.h"
        if(_if_conditional185=self==((void*)0)||self->it==((void*)0),        _if_conditional185) {
            # 304 "./neo-c.h"
            # 305 "./neo-c.h"
            memset(&result_127,0,sizeof(struct tuple2$2charphsTypeph*));
            # 306 "./neo-c.h"
            __result99__ = __result_obj__ = result_127;
            return __result99__;
        }
        # 309 "./neo-c.h"
        self->it=self->it->next;
        # 315 "./neo-c.h"
        # 311 "./neo-c.h"
        if(self->it) {
            # 312 "./neo-c.h"
            __result100__ = __result_obj__ = self->it->item;
            return __result100__;
        }
        # 315 "./neo-c.h"
        # 316 "./neo-c.h"
        memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*));
        # 317 "./neo-c.h"
        __result101__ = __result_obj__ = result_128;
        return __result101__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional188;
int __result102__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
        # 368 "./neo-c.h"
        # 365 "./neo-c.h"
        if(_if_conditional188=self==((void*)0),        _if_conditional188) {
            # 366 "./neo-c.h"
            __result102__ = 0;
            return __result102__;
        }
        # 368 "./neo-c.h"
        __result103__ = self->len;
        return __result103__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __dec_obj76;
void* right_value193;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result110__;
struct sNullCheckNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    # 365 "18field.c"
    self->sline=info->sline;
    # 366 "18field.c"
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 368 "18field.c"
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 369 "18field.c"
    self->mOnlyNullCecker=only_null_checker;
    # 371 "18field.c"
    __result110__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result110__;
    # 374 "18field.c"
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    # 376 "18field.c"
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__;
void* right_value194;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    # 381 "18field.c"
    __result113__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sNullCheckNode")));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_150;
_Bool _if_conditional214;
_Bool __result114__;
void* right_value195;
struct CVALUE* left_value_151;
_Bool _if_conditional215;
void* right_value196;
char* method_name_152;
_Bool _if_conditional220;
struct sType* obj_type_155;
_Bool _if_conditional221;
struct sType* obj_type2_156;
void* right_value197;
void* right_value198;
char* __dec_obj78;
struct sFun* fun_157;
_Bool _if_conditional222;
_Bool __result119__;
void* right_value199;
struct sType* type_158;
void* right_value200;
struct CVALUE* come_value_159;
void* right_value201;
char* __dec_obj79;
void* right_value202;
struct sType* __dec_obj80;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value203;
struct CVALUE* come_value_160;
void* right_value204;
void* right_value205;
char* __dec_obj81;
void* right_value206;
struct sType* __dec_obj82;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_150, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
memset(&left_value_151, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
memset(&method_name_152, 0, sizeof(char*));
memset(&obj_type_155, 0, sizeof(struct sType*));
memset(&obj_type2_156, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&fun_157, 0, sizeof(struct sFun*));
right_value199 = (void*)0;
memset(&type_158, 0, sizeof(struct sType*));
right_value200 = (void*)0;
memset(&come_value_159, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    # 386 "18field.c"
    left_150=self->mLeft;
    # 392 "18field.c"
    # 388 "18field.c"
    if(_if_conditional214=!node_compile(left_150,info),    _if_conditional214) {
        # 389 "18field.c"
        __result114__ = (_Bool)0;
        return __result114__;
    }
    # 392 "18field.c"
    left_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 393 "18field.c"
    dec_stack_ptr(1,info);
    # 447 "18field.c"
    # 395 "18field.c"
    if(_if_conditional215=!self->mOnlyNullCecker&&left_value_151->type->mNoSolvedGenericsType&&left_value_151->type->mNoSolvedGenericsType->v1&&left_value_151->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_151->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional215) {
        # 396 "18field.c"
        method_name_152=(char*)come_increment_ref_count(((char*)(right_value196=create_method_name(left_value_151->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 410 "18field.c"
        # 398 "18field.c"
        if(_if_conditional220=map$2charphsFunph_at(info->funcs,method_name_152,((void*)0))==((void*)0),        _if_conditional220) {
            # 399 "18field.c"
            obj_type_155=left_value_151->type->mNoSolvedGenericsType->v1;
            # 408 "18field.c"
            # 400 "18field.c"
            if(_if_conditional221=list$1sTypeph_length(obj_type_155->mGenericsTypes)>0,            _if_conditional221) {
                # 401 "18field.c"
                obj_type2_156=left_value_151->type;
                # 402 "18field.c"
                __dec_obj78=method_name_152;
                method_name_152=(char*)come_increment_ref_count(((char*)(right_value198=make_generics_function(obj_type2_156,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 405 "18field.c"
                err_msg(info,"require expect implementation(%s)",left_value_151->type->mClass->mName);
                # 406 "18field.c"
                exit(1);
            }
        }
        # 410 "18field.c"
        fun_157=map$2charphsFunphp_operator_load_element(info->funcs,method_name_152);
        # 417 "18field.c"
        # 412 "18field.c"
        if(_if_conditional222=fun_157==((void*)0),        _if_conditional222) {
            # 413 "18field.c"
            err_msg(info,"function not found(%s)",method_name_152);
            # 414 "18field.c"
            __result119__ = (_Bool)1;
            method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result119__;
        }
        # 417 "18field.c"
        type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=solve_generics(fun_157->mResultType,left_value_151->type,info))));
        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 419 "18field.c"
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 419, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 421 "18field.c"
        __dec_obj79=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s(%s)",method_name_152,left_value_151->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 422 "18field.c"
        __dec_obj80=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(type_158))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 423 "18field.c"
        come_value_159->var=((void*)0);
        # 425 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        # 427 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 447 "18field.c"
        # 429 "18field.c"
        if(_if_conditional223=!gComeDebug,        _if_conditional223) {
            # 430 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
        }
        else {
            # 447 "18field.c"
            # 432 "18field.c"
            if(_if_conditional224=left_value_151->type->mPointerNum>0,            _if_conditional224) {
                # 433 "18field.c"
                come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 433, "CVALUE"))));
                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 435 "18field.c"
                __dec_obj81=come_value_160->c_value;
                come_value_160->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value204=make_type_name_string(left_value_151->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_151->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 436 "18field.c"
                __dec_obj82=come_value_160->type;
                come_value_160->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(left_value_151->type))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 437 "18field.c"
                come_value_160->var=((void*)0);
                # 439 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
                # 441 "18field.c"
                add_come_last_code(info,"%s;\n",come_value_160->c_value);
                come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 444 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
            }
        }
    }
    # 447 "18field.c"
    __result120__ = (_Bool)1;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_153;
unsigned int it_154;
_Bool _while_condtional21;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sFun* __result115__;
_Bool _if_conditional218;
_Bool _if_conditional219;
struct sFun* __result116__;
struct sFun* __result117__;
struct sFun* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_153, 0, sizeof(unsigned int));
memset(&it_154, 0, sizeof(unsigned int));
            # 1227 "./neo-c.h"
            hash_153=string_get_hash_key(((char*)key))%self->size;
            # 1228 "./neo-c.h"
            it_154=hash_153;
            # 1252 "./neo-c.h"
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                # 1250 "./neo-c.h"
                # 1231 "./neo-c.h"
                if(_if_conditional216=self->item_existance[it_154],                _if_conditional216) {
                    # 1238 "./neo-c.h"
                    # 1233 "./neo-c.h"
                    if(_if_conditional217=string_equals(self->keys[it_154],key),                    _if_conditional217) {
                        # 1235 "./neo-c.h"
                        __result115__ = __result_obj__ = self->items[it_154];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result115__;
                    }
                    # 1238 "./neo-c.h"
                    it_154++;
                    # 1246 "./neo-c.h"
                    # 1240 "./neo-c.h"
                    if(_if_conditional218=it_154>=self->size,                    _if_conditional218) {
                        # 1241 "./neo-c.h"
                        it_154=0;
                    }
                    else {
                        # 1246 "./neo-c.h"
                        # 1243 "./neo-c.h"
                        if(_if_conditional219=it_154==hash_153,                        _if_conditional219) {
                            # 1244 "./neo-c.h"
                            __result116__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result116__;
                        }
                    }
                }
                else {
                    # 1248 "./neo-c.h"
                    __result117__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result117__;
                }
            }
            # 1252 "./neo-c.h"
            __result118__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result118__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value207;
char* __dec_obj83;
void* right_value208;
struct sNode* __dec_obj84;
struct sNullableNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
right_value208 = (void*)0;
    # 459 "18field.c"
    self->sline=info->sline;
    # 460 "18field.c"
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 462 "18field.c"
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 465 "18field.c"
    __result121__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result121__;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullableNode_terminated(struct sNullableNode* self){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 467 "18field.c"
    __result122__ = (_Bool)0;
    return __result122__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__;
void* right_value209;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    # 472 "18field.c"
    __result123__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sNullableNode")));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_161;
_Bool _if_conditional227;
_Bool __result124__;
void* right_value210;
struct CVALUE* left_value_162;
_Bool _if_conditional228;
void* right_value214;
struct CVALUE* come_value_164;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_161, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&left_value_162, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
memset(&come_value_164, 0, sizeof(struct CVALUE*));
    # 477 "18field.c"
    left_161=self->mLeft;
    # 483 "18field.c"
    # 479 "18field.c"
    if(_if_conditional227=!node_compile(left_161,info),    _if_conditional227) {
        # 480 "18field.c"
        __result124__ = (_Bool)0;
        return __result124__;
    }
    # 483 "18field.c"
    left_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 484 "18field.c"
    dec_stack_ptr(1,info);
    # 499 "18field.c"
    # 486 "18field.c"
    if(_if_conditional228=left_value_162->type->mPointerNum>0&&left_value_162->type->mNullValue,    _if_conditional228) {
        # 487 "18field.c"
        come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=CVALUE_clone(left_value_162))));
        come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 489 "18field.c"
        come_value_164->type->mNullValue=(_Bool)0;
        # 491 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
        # 493 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_164->c_value);
        come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 496 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_162));
    }
    # 499 "18field.c"
    __result127__ = (_Bool)1;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result127__;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional229;
struct CVALUE* __result125__;
void* right_value211;
struct CVALUE* result_163;
_Bool _if_conditional230;
void* right_value212;
char* __dec_obj85;
_Bool _if_conditional231;
void* right_value213;
struct sType* __dec_obj86;
_Bool _if_conditional232;
struct CVALUE* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&result_163, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
            # 3 "CVALUE_clone"
            # 2 "CVALUE_clone"
            if(_if_conditional229=self==(void*)0,            _if_conditional229) {
                # 2 "CVALUE_clone"
                __result125__ = __result_obj__ = (void*)0;
                return __result125__;
            }
            # 3 "CVALUE_clone"
            result_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value211,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "CVALUE_clone"
            # 4 "CVALUE_clone"
            if(_if_conditional230=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional230) {
                # 4 "CVALUE_clone"
                __dec_obj85=result_163->c_value;
                result_163->c_value=(char*)come_increment_ref_count(((char*)(right_value212=string_clone(self->c_value))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "CVALUE_clone"
            # 5 "CVALUE_clone"
            if(_if_conditional231=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional231) {
                # 5 "CVALUE_clone"
                __dec_obj86=result_163->type;
                result_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "CVALUE_clone"
            # 6 "CVALUE_clone"
            if(_if_conditional232=self!=((void*)0),            _if_conditional232) {
                # 6 "CVALUE_clone"
                result_163->var=self->var;
            }
            # 7 "CVALUE_clone"
            __result126__ = __result_obj__ = result_163;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value215;
char* __dec_obj87;
void* right_value216;
struct sNode* __dec_obj88;
void* right_value217;
struct sNode* __dec_obj89;
void* right_value218;
struct sNode* __dec_obj90;
struct sRangeCheckNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    # 511 "18field.c"
    self->sline=info->sline;
    # 512 "18field.c"
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 514 "18field.c"
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 515 "18field.c"
    __dec_obj89=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(begin))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 516 "18field.c"
    __dec_obj90=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(end))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 519 "18field.c"
    __result128__ = __result_obj__ = self;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    # 521 "18field.c"
    __result129__ = (_Bool)0;
    return __result129__;
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__;
void* right_value219;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    # 526 "18field.c"
    __result130__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sRangeCheckNode")));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_165;
_Bool _if_conditional237;
_Bool __result131__;
void* right_value220;
struct CVALUE* left_value_166;
struct sNode* begin_167;
_Bool _if_conditional238;
_Bool __result132__;
void* right_value221;
struct CVALUE* begin_value_168;
struct sNode* end_169;
_Bool _if_conditional239;
_Bool __result133__;
void* right_value222;
struct CVALUE* end_value_170;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value223;
struct CVALUE* come_value_171;
void* right_value224;
void* right_value225;
char* __dec_obj91;
void* right_value226;
struct sType* __dec_obj92;
void* right_value227;
struct CVALUE* come_value_172;
void* right_value228;
void* right_value229;
char* __dec_obj93;
void* right_value230;
struct sType* __dec_obj94;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_165, 0, sizeof(struct sNode*));
right_value220 = (void*)0;
memset(&left_value_166, 0, sizeof(struct CVALUE*));
memset(&begin_167, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
memset(&begin_value_168, 0, sizeof(struct CVALUE*));
memset(&end_169, 0, sizeof(struct sNode*));
right_value222 = (void*)0;
memset(&end_value_170, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
    # 531 "18field.c"
    left_165=self->mLeft;
    # 537 "18field.c"
    # 533 "18field.c"
    if(_if_conditional237=!node_compile(left_165,info),    _if_conditional237) {
        # 534 "18field.c"
        __result131__ = (_Bool)0;
        return __result131__;
    }
    # 537 "18field.c"
    left_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 538 "18field.c"
    dec_stack_ptr(1,info);
    # 540 "18field.c"
    begin_167=self->mBegin;
    # 546 "18field.c"
    # 542 "18field.c"
    if(_if_conditional238=!node_compile(begin_167,info),    _if_conditional238) {
        # 543 "18field.c"
        __result132__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result132__;
    }
    # 546 "18field.c"
    begin_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 547 "18field.c"
    dec_stack_ptr(1,info);
    # 549 "18field.c"
    end_169=self->mEnd;
    # 555 "18field.c"
    # 551 "18field.c"
    if(_if_conditional239=!node_compile(end_169,info),    _if_conditional239) {
        # 552 "18field.c"
        __result133__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    # 555 "18field.c"
    end_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 556 "18field.c"
    dec_stack_ptr(1,info);
    # 589 "18field.c"
    # 558 "18field.c"
    if(_if_conditional240=left_value_166->type->mPointerNum>0,    _if_conditional240) {
        # 584 "18field.c"
        # 559 "18field.c"
        if(_if_conditional241=!gComeDebug,        _if_conditional241) {
            # 560 "18field.c"
            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 560, "CVALUE"))));
            come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 562 "18field.c"
            __dec_obj91=come_value_171->c_value;
            come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("(*((%s)%s))",((char*)(right_value224=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 564 "18field.c"
            left_value_166->type->mPointerNum--;
            # 565 "18field.c"
            __dec_obj92=come_value_171->type;
            come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 566 "18field.c"
            come_value_171->var=((void*)0);
            # 568 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
            # 570 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_171->c_value);
            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 573 "18field.c"
            come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573, "CVALUE"))));
            come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 575 "18field.c"
            __dec_obj93=come_value_172->c_value;
            come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value228=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value,begin_value_168->c_value,end_value_170->c_value,info->sname,info->sline))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 576 "18field.c"
            left_value_166->type->mPointerNum--;
            # 577 "18field.c"
            __dec_obj94=come_value_172->type;
            come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 578 "18field.c"
            come_value_172->var=((void*)0);
            # 580 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
            # 582 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_172->c_value);
            come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        # 586 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_166));
    }
    # 589 "18field.c"
    __result134__ = (_Bool)1;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value231;
void* right_value232;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value238;
struct sNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value238 = (void*)0;
    # 595 "18field.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 595, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value232=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value231=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 595, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result137__ = __result_obj__ = ((struct sNode*)(right_value238=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(right_value231,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result137__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value239;
char* __dec_obj99;
void* right_value240;
struct sNode* __dec_obj100;
void* right_value241;
char* __dec_obj101;
struct sLoadFieldNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
    # 605 "18field.c"
    self->sline=info->sline;
    # 606 "18field.c"
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(info->sname))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 608 "18field.c"
    __dec_obj100=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 609 "18field.c"
    __dec_obj101=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(name))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 612 "18field.c"
    __result138__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result138__;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    # 614 "18field.c"
    __result139__ = (_Bool)0;
    return __result139__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__;
void* right_value242;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    # 619 "18field.c"
    __result140__ = __result_obj__ = ((char*)(right_value242=__builtin_string("sLoadFieldNode")));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_174;
void* right_value243;
char* name_175;
_Bool _if_conditional255;
_Bool __result141__;
void* right_value244;
struct CVALUE* left_value_176;
_Bool _if_conditional256;
void* right_value245;
void* right_value246;
char* __dec_obj102;
struct sType* left_type_177;
void* right_value247;
struct sType* left_type2_178;
struct sClass* klass_179;
struct sType* field_type_180;
int index_181;
char* child_field_name_182;
_Bool _if_conditional257;
_Bool __result142__;
struct list$1tuple2$2charphsTypephph* o2_saved_183;
struct tuple2$2charphsTypeph* field_184;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_185;
struct sType* field_type2_186;
_Bool _if_conditional258;
void* right_value248;
struct sType* __dec_obj103;
_Bool _if_conditional259;
struct list$1tuple2$2charphsTypephph* o2_saved_187;
struct tuple2$2charphsTypeph* field_188;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_189;
struct sType* field_type2_190;
struct sClass* klass2_191;
struct list$1tuple2$2charphsTypephph* o2_saved_192;
struct tuple2$2charphsTypeph* field2_193;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_194;
struct sType* field_type3_195;
_Bool _if_conditional260;
void* right_value249;
char* __dec_obj104;
void* right_value250;
struct sType* __dec_obj105;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value251;
struct sType* __dec_obj106;
_Bool _if_conditional263;
_Bool __result143__;
void* right_value252;
struct CVALUE* come_value_196;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value253;
char* __dec_obj107;
void* right_value254;
char* __dec_obj108;
_Bool _if_conditional266;
void* right_value255;
char* __dec_obj109;
void* right_value256;
char* __dec_obj110;
void* right_value257;
struct sType* __dec_obj111;
_Bool _if_conditional267;
_Bool __result144__;
_Bool _if_conditional269;
void* right_value258;
struct sType* __dec_obj112;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_174, 0, sizeof(struct sNode*));
right_value243 = (void*)0;
memset(&name_175, 0, sizeof(char*));
right_value244 = (void*)0;
memset(&left_value_176, 0, sizeof(struct CVALUE*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&left_type_177, 0, sizeof(struct sType*));
right_value247 = (void*)0;
memset(&left_type2_178, 0, sizeof(struct sType*));
memset(&klass_179, 0, sizeof(struct sClass*));
memset(&field_type_180, 0, sizeof(struct sType*));
memset(&index_181, 0, sizeof(int));
memset(&child_field_name_182, 0, sizeof(char*));
memset(&o2_saved_183, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_184, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_185, 0, sizeof(char*));
memset(&field_type2_186, 0, sizeof(struct sType*));
memset(&field_name_185, 0, sizeof(char*));
memset(&field_type2_186, 0, sizeof(struct sType*));
right_value248 = (void*)0;
memset(&o2_saved_187, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_188, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_189, 0, sizeof(char*));
memset(&field_type2_190, 0, sizeof(struct sType*));
memset(&field_name_189, 0, sizeof(char*));
memset(&field_type2_190, 0, sizeof(struct sType*));
memset(&klass2_191, 0, sizeof(struct sClass*));
memset(&o2_saved_192, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_193, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_194, 0, sizeof(char*));
memset(&field_type3_195, 0, sizeof(struct sType*));
memset(&field_name2_194, 0, sizeof(char*));
memset(&field_type3_195, 0, sizeof(struct sType*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&come_value_196, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
    # 624 "18field.c"
    left_174=self->mLeft;
    # 625 "18field.c"
    name_175=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(self->mName))));
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 631 "18field.c"
    # 627 "18field.c"
    if(_if_conditional255=!node_compile(left_174,info),    _if_conditional255) {
        # 628 "18field.c"
        __result141__ = (_Bool)0;
        name_175 = come_decrement_ref_count2(name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result141__;
    }
    # 631 "18field.c"
    left_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 632 "18field.c"
    dec_stack_ptr(1,info);
    # 638 "18field.c"
    # 634 "18field.c"
    if(_if_conditional256=gComeDebug&&left_value_176->type->mPointerNum>0,    _if_conditional256) {
        # 635 "18field.c"
        __dec_obj102=left_value_176->c_value;
        left_value_176->c_value=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value245=make_type_name_string(left_value_176->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_176->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 638 "18field.c"
    left_type_177=left_value_176->type;
    # 640 "18field.c"
    left_type2_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=solve_generics(left_type_177,left_type_177,info))));
    come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 642 "18field.c"
    klass_179=left_type2_178->mClass;
    # 643 "18field.c"
    klass_179=map$2charphsClassphp_operator_load_element(info->classes,klass_179->mName);
    # 645 "18field.c"
    field_type_180=((void*)0);
    # 646 "18field.c"
    index_181=0;
    # 647 "18field.c"
    child_field_name_182=((void*)0);
    # 648 "18field.c"
    klass_179=map$2charphsClassphp_operator_load_element(info->classes,klass_179->mName);
    # 653 "18field.c"
    # 649 "18field.c"
    if(_if_conditional257=klass_179==((void*)0)||klass_179->mFields==((void*)0),    _if_conditional257) {
        # 650 "18field.c"
        err_msg(info,"invalid class %s",klass_179->mName);
        # 651 "18field.c"
        __result142__ = (_Bool)0;
        name_175 = come_decrement_ref_count2(name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result142__;
    }
    # 664 "18field.c"
    for(    o2_saved_183=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_179->mFields)),field_184=list$1tuple2$2charphsTypephph_begin((o2_saved_183));    !list$1tuple2$2charphsTypephph_end((o2_saved_183));    field_184=list$1tuple2$2charphsTypephph_next((o2_saved_183))    ){
        # 654 "18field.c"
        multiple_assign_var4=field_184;
        field_name_185=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_186=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        # 661 "18field.c"
        # 656 "18field.c"
        if(_if_conditional258=string_operator_equals(field_name_185,name_175),        _if_conditional258) {
            # 657 "18field.c"
            __dec_obj103=field_type_180;
            field_type_180=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_clone(field_type2_186))));
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 658 "18field.c"
            field_name_185 = come_decrement_ref_count2(field_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_186,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 661 "18field.c"
        index_181++;
        field_name_185 = come_decrement_ref_count2(field_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_186,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_183,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    # 699 "18field.c"
    # 664 "18field.c"
    if(_if_conditional259=index_181==list$1tuple2$2charphsTypephph_length(klass_179->mFields),    _if_conditional259) {
        # 665 "18field.c"
        index_181=0;
        # 693 "18field.c"
        for(        o2_saved_187=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_179->mFields)),field_188=list$1tuple2$2charphsTypephph_begin((o2_saved_187));        !list$1tuple2$2charphsTypephph_end((o2_saved_187));        field_188=list$1tuple2$2charphsTypephph_next((o2_saved_187))        ){
            # 667 "18field.c"
            multiple_assign_var5=field_188;
            field_name_189=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_190=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            # 669 "18field.c"
            klass2_191=field_type2_190->mClass;
            # 681 "18field.c"
            for(            o2_saved_192=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_191->mFields)),field2_193=list$1tuple2$2charphsTypephph_begin((o2_saved_192));            !list$1tuple2$2charphsTypephph_end((o2_saved_192));            field2_193=list$1tuple2$2charphsTypephph_next((o2_saved_192))            ){
                # 672 "18field.c"
                multiple_assign_var6=field2_193;
                field_name2_194=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_195=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                # 679 "18field.c"
                # 674 "18field.c"
                if(_if_conditional260=string_operator_equals(field_name2_194,name_175),                _if_conditional260) {
                    # 675 "18field.c"
                    __dec_obj104=child_field_name_182;
                    child_field_name_182=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(field_name_189))));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 676 "18field.c"
                    __dec_obj105=field_type_180;
                    field_type_180=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(field_type3_195))));
                    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 677 "18field.c"
                    field_name2_194 = come_decrement_ref_count2(field_name2_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_195,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_194 = come_decrement_ref_count2(field_name2_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_195,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_192,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            # 685 "18field.c"
            # 681 "18field.c"
            if(child_field_name_182) {
                # 682 "18field.c"
                field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 690 "18field.c"
            # 685 "18field.c"
            if(_if_conditional262=string_operator_equals(field_name_189,name_175),            _if_conditional262) {
                # 686 "18field.c"
                __dec_obj106=field_type_180;
                field_type_180=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(field_type2_190))));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 687 "18field.c"
                field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 690 "18field.c"
            index_181++;
            field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_187,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        # 697 "18field.c"
        # 693 "18field.c"
        if(_if_conditional263=index_181==list$1tuple2$2charphsTypephph_length(klass_179->mFields),        _if_conditional263) {
            # 694 "18field.c"
            err_msg(info,"field not found(%s) in %s(2)",name_175,klass_179->mName);
            # 695 "18field.c"
            __result143__ = (_Bool)0;
            name_175 = come_decrement_ref_count2(name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result143__;
        }
    }
    # 699 "18field.c"
    come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 699, "CVALUE"))));
    come_call_finalizer3(right_value252,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 717 "18field.c"
    # 701 "18field.c"
    if(_if_conditional264=left_value_176->type->mPointerNum>0,    _if_conditional264) {
        # 708 "18field.c"
        # 702 "18field.c"
        if(child_field_name_182) {
            # 703 "18field.c"
            __dec_obj107=come_value_196->c_value;
            come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("%s->%s.%s",left_value_176->c_value,child_field_name_182,name_175))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 706 "18field.c"
            __dec_obj108=come_value_196->c_value;
            come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value254=xsprintf("%s->%s",left_value_176->c_value,name_175))));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 716 "18field.c"
        # 710 "18field.c"
        if(child_field_name_182) {
            # 711 "18field.c"
            __dec_obj109=come_value_196->c_value;
            come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s.%s.%s",left_value_176->c_value,child_field_name_182,name_175))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 714 "18field.c"
            __dec_obj110=come_value_196->c_value;
            come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("%s.%s",left_value_176->c_value,name_175))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 717 "18field.c"
    __dec_obj111=come_value_196->type;
    come_value_196->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(field_type_180))));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 718 "18field.c"
    come_value_196->var=((void*)0);
    # 725 "18field.c"
    # 720 "18field.c"
    if(_if_conditional267=field_type_180==((void*)0),    _if_conditional267) {
        # 721 "18field.c"
        err_msg(info,"no field(%s)\n",name_175);
        # 722 "18field.c"
        __result144__ = (_Bool)0;
        name_175 = come_decrement_ref_count2(name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result144__;
    }
    # 733 "18field.c"
    # 725 "18field.c"
    if(_if_conditional269=list$1sNodeph_length(come_value_196->type->mArrayNum)==1,    _if_conditional269) {
        # 726 "18field.c"
        __dec_obj112=come_value_196->type->mOriginalLoadVarType->v1;
        come_value_196->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(come_value_196->type))));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value258,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 728 "18field.c"
        list$1sNodeph_reset(come_value_196->type->mArrayNum);
        # 729 "18field.c"
        come_value_196->type->mPointerNum++;
        # 730 "18field.c"
        come_value_196->type->mOriginalTypeNamePointerNum=come_value_196->type->mPointerNum;
    }
    # 733 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
    # 735 "18field.c"
    __result148__ = (_Bool)1;
    name_175 = come_decrement_ref_count2(name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
    name_175 = come_decrement_ref_count2(name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional268;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
        # 368 "./neo-c.h"
        # 365 "./neo-c.h"
        if(_if_conditional268=self==((void*)0),        _if_conditional268) {
            # 366 "./neo-c.h"
            __result145__ = 0;
            return __result145__;
        }
        # 368 "./neo-c.h"
        __result146__ = self->len;
        return __result146__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_197;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_198;
struct list$1sNodeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_197, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_198, 0, sizeof(struct list_item$1sNodeph*));
            # 434 "./neo-c.h"
            it_197=self->head;
            # 441 "./neo-c.h"
            while(_while_condtional22=it_197!=((void*)0),            _while_condtional22) {
                # 436 "./neo-c.h"
                prev_it_198=it_197;
                # 437 "./neo-c.h"
                it_197=it_197->next;
                # 438 "./neo-c.h"
                come_call_finalizer3(prev_it_198,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 441 "./neo-c.h"
            self->head=((void*)0);
            # 442 "./neo-c.h"
            self->tail=((void*)0);
            # 444 "./neo-c.h"
            self->len=0;
            # 446 "./neo-c.h"
            __result147__ = __result_obj__ = self;
            return __result147__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value259;
char* __dec_obj113;
void* right_value260;
struct sNode* __dec_obj114;
void* right_value261;
struct sNode* __dec_obj115;
void* right_value262;
struct list$1sNodeph* __dec_obj116;
struct sStoreArrayNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
    # 748 "18field.c"
    self->sline=info->sline;
    # 749 "18field.c"
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(info->sname))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 751 "18field.c"
    __dec_obj114=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=sNode_clone(left))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value260) { right_value260 = come_decrement_ref_count2(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 752 "18field.c"
    __dec_obj115=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=sNode_clone(right))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 753 "18field.c"
    __dec_obj116=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value262=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj116,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value262,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 754 "18field.c"
    self->mQuote=quote;
    # 757 "18field.c"
    __result149__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result149__;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    # 759 "18field.c"
    __result150__ = (_Bool)0;
    return __result150__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__;
void* right_value263;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
    # 764 "18field.c"
    __result151__ = __result_obj__ = ((char*)(right_value263=__builtin_string("sStoreArrayNode")));
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_199;
struct sNode* right_200;
struct list$1sNodeph* array_num_nodes_201;
_Bool _if_conditional274;
_Bool __result152__;
void* right_value264;
struct CVALUE* left_value_202;
_Bool _if_conditional275;
void* right_value265;
void* right_value266;
char* __dec_obj117;
struct sType* left_type_203;
void* right_value267;
void* right_value268;
struct list$1CVALUEph* array_num_206;
struct list$1sNodeph* o2_saved_207;
struct sNode* it_210;
_Bool _if_conditional280;
_Bool __result161__;
void* right_value269;
struct CVALUE* c_value_213;
_Bool _if_conditional281;
_Bool __result162__;
void* right_value270;
struct CVALUE* right_value_214;
struct sType* right_type_215;
struct sClass* klass_216;
void* right_value271;
struct sType* type_217;
char* fun_name_218;
_Bool calling_fun_219;
_Bool _if_conditional282;
_Bool _if_conditional285;
char* check_code_223;
_Bool _if_conditional286;
struct sType* var_type_224;
void* right_value272;
struct sType* result_type_225;
_Bool _if_conditional287;
struct sType* __dec_obj118;
_Bool _if_conditional288;
int n_226;
_Bool _if_conditional290;
void* right_value273;
struct sType* __dec_obj119;
_Bool _if_conditional291;
void* right_value274;
struct sType* __dec_obj120;
_Bool _if_conditional292;
int i_227;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value275;
struct CVALUE* come_value_240;
void* right_value276;
void* right_value277;
struct buffer* buf_241;
void* right_value278;
struct sType* result_type2_242;
void* right_value279;
struct list$1CVALUEph* o2_saved_243;
struct CVALUE* it_246;
void* right_value280;
void* right_value281;
int i_249;
struct list$1sNodeph* o2_saved_250;
struct sNode* it_251;
_Bool _if_conditional319;
void* right_value282;
struct CVALUE* come_value_252;
void* right_value283;
_Bool _if_conditional320;
void* right_value284;
void* right_value285;
char* __dec_obj121;
void* right_value286;
struct CVALUE* come_value_253;
_Bool _if_conditional321;
int i_254;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value287;
void* right_value288;
struct buffer* buf_255;
struct list$1CVALUEph* o2_saved_256;
struct CVALUE* it_257;
void* right_value289;
void* right_value290;
char* left_value_code_258;
void* right_value291;
_Bool _if_conditional324;
_Bool _if_conditional325;
void* right_value292;
char* __dec_obj122;
_Bool _if_conditional326;
void* right_value293;
char* __dec_obj123;
_Bool __result176__;
int right_value_id_259;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value294;
char* __dec_obj124;
_Bool _if_conditional329;
void* right_value295;
char* __dec_obj125;
_Bool __result177__;
void* right_value296;
struct sType* result_type_260;
void* right_value297;
void* right_value298;
struct list$1sNodeph* __dec_obj126;
struct sType* __dec_obj127;
_Bool _if_conditional330;
void* right_value299;
char* __dec_obj128;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_199, 0, sizeof(struct sNode*));
memset(&right_200, 0, sizeof(struct sNode*));
memset(&array_num_nodes_201, 0, sizeof(struct list$1sNodeph*));
right_value264 = (void*)0;
memset(&left_value_202, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&left_type_203, 0, sizeof(struct sType*));
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&array_num_206, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_207, 0, sizeof(struct list$1sNodeph*));
memset(&it_210, 0, sizeof(struct sNode*));
right_value269 = (void*)0;
memset(&c_value_213, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
memset(&right_value_214, 0, sizeof(struct CVALUE*));
memset(&right_type_215, 0, sizeof(struct sType*));
memset(&klass_216, 0, sizeof(struct sClass*));
right_value271 = (void*)0;
memset(&type_217, 0, sizeof(struct sType*));
memset(&fun_name_218, 0, sizeof(char*));
memset(&calling_fun_219, 0, sizeof(_Bool));
memset(&check_code_223, 0, sizeof(char*));
memset(&var_type_224, 0, sizeof(struct sType*));
right_value272 = (void*)0;
memset(&result_type_225, 0, sizeof(struct sType*));
memset(&n_226, 0, sizeof(int));
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&i_227, 0, sizeof(int));
right_value275 = (void*)0;
memset(&come_value_240, 0, sizeof(struct CVALUE*));
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&buf_241, 0, sizeof(struct buffer*));
right_value278 = (void*)0;
memset(&result_type2_242, 0, sizeof(struct sType*));
right_value279 = (void*)0;
memset(&o2_saved_243, 0, sizeof(struct list$1CVALUEph*));
memset(&it_246, 0, sizeof(struct CVALUE*));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&i_249, 0, sizeof(int));
memset(&o2_saved_250, 0, sizeof(struct list$1sNodeph*));
memset(&it_251, 0, sizeof(struct sNode*));
right_value282 = (void*)0;
memset(&come_value_252, 0, sizeof(struct CVALUE*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&come_value_253, 0, sizeof(struct CVALUE*));
memset(&i_254, 0, sizeof(int));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&buf_255, 0, sizeof(struct buffer*));
memset(&o2_saved_256, 0, sizeof(struct list$1CVALUEph*));
memset(&it_257, 0, sizeof(struct CVALUE*));
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&left_value_code_258, 0, sizeof(char*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&right_value_id_259, 0, sizeof(int));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&result_type_260, 0, sizeof(struct sType*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
    # 769 "18field.c"
    left_199=self->mLeft;
    # 770 "18field.c"
    right_200=self->mRight;
    # 771 "18field.c"
    array_num_nodes_201=self->mArrayNum;
    # 777 "18field.c"
    # 773 "18field.c"
    if(_if_conditional274=!node_compile(left_199,info),    _if_conditional274) {
        # 774 "18field.c"
        __result152__ = (_Bool)0;
        return __result152__;
    }
    # 777 "18field.c"
    left_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value264,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 778 "18field.c"
    dec_stack_ptr(1,info);
    # 784 "18field.c"
    # 780 "18field.c"
    if(_if_conditional275=gComeDebug&&left_value_202->type->mPointerNum>0,    _if_conditional275) {
        # 781 "18field.c"
        __dec_obj117=left_value_202->c_value;
        left_value_202->c_value=(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value265=make_type_name_string(left_value_202->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_202->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 784 "18field.c"
    left_type_203=left_value_202->type;
    # 786 "18field.c"
    array_num_206=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value268=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value267=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 786, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value267,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value268,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 799 "18field.c"
    for(    o2_saved_207=(array_num_nodes_201),it_210=list$1sNodeph_begin((o2_saved_207));    !list$1sNodeph_end((o2_saved_207));    it_210=list$1sNodeph_next((o2_saved_207))    ){
        # 793 "18field.c"
        # 789 "18field.c"
        if(_if_conditional280=!node_compile(it_210,info),        _if_conditional280) {
            # 790 "18field.c"
            __result161__ = (_Bool)0;
            come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_206,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result161__;
        }
        # 793 "18field.c"
        c_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value269,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 794 "18field.c"
        dec_stack_ptr(1,info);
        # 796 "18field.c"
        list$1CVALUEph_push_back(array_num_206,(struct CVALUE*)come_increment_ref_count(c_value_213));
        come_call_finalizer3(c_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 803 "18field.c"
    # 799 "18field.c"
    if(_if_conditional281=!node_compile(right_200,info),    _if_conditional281) {
        # 800 "18field.c"
        __result162__ = (_Bool)0;
        come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_206,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result162__;
    }
    # 803 "18field.c"
    right_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value270,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 804 "18field.c"
    dec_stack_ptr(1,info);
    # 806 "18field.c"
    right_type_215=right_value_214->type;
    # 808 "18field.c"
    klass_216=left_value_202->type->mClass;
    # 810 "18field.c"
    type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(left_value_202->type))));
    come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 812 "18field.c"
    fun_name_218="operator_store_element";
    # 813 "18field.c"
    # 821 "18field.c"
    # 814 "18field.c"
    if(self->mQuote) {
        # 815 "18field.c"
        calling_fun_219=(_Bool)0;
    }
    else {
        # 818 "18field.c"
        calling_fun_219=operator_overload_fun2(type_217,fun_name_218,left_value_202,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_206,0), "18field.c", 818, 9)),right_value_214,info);
    }
    # 980 "18field.c"
    # 821 "18field.c"
    if(_if_conditional285=!calling_fun_219,    _if_conditional285) {
        # 822 "18field.c"
        check_code_223=((void*)0);
        # 900 "18field.c"
        # 823 "18field.c"
        if(_if_conditional286=left_value_202->var&&left_value_202->var->mType&&list$1sNodeph_length(left_value_202->var->mType->mArrayNum)>0,        _if_conditional286) {
            # 825 "18field.c"
            var_type_224=left_value_202->var->mType;
            # 826 "18field.c"
            result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(left_type_203))));
            come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 832 "18field.c"
            # 828 "18field.c"
            if(result_type_225->mOriginalLoadVarType->v1) {
                # 829 "18field.c"
                __dec_obj118=result_type_225;
                result_type_225=(struct sType*)come_increment_ref_count(result_type_225->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 866 "18field.c"
            # 832 "18field.c"
            if(_if_conditional288=list$1sNodeph_length(result_type_225->mArrayNum)>0,            _if_conditional288) {
                # 833 "18field.c"
                n_226=list$1sNodeph_length(result_type_225->mArrayNum)-list$1CVALUEph_length(array_num_206);
                # 855 "18field.c"
                # 835 "18field.c"
                if(_if_conditional290=n_226==0,                _if_conditional290) {
                    # 836 "18field.c"
                    __dec_obj119=result_type_225;
                    result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(left_type_203))));
                    come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 840 "18field.c"
                    # 837 "18field.c"
                    if(left_type_203->mOriginalLoadVarType->v1) {
                        # 838 "18field.c"
                        __dec_obj120=result_type_225;
                        result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(left_type_203->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value274,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 840 "18field.c"
                    list$1sNodeph_reset(result_type_225->mArrayNum);
                }
                else {
                    # 855 "18field.c"
                    # 842 "18field.c"
                    if(_if_conditional292=n_226>0,                    _if_conditional292) {
                        # 846 "18field.c"
                        for(                        i_227=0;                        i_227<n_226;                        i_227++                        ){
                            # 844 "18field.c"
                            list$1sNodeph_delete(result_type_225->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 855 "18field.c"
                        # 847 "18field.c"
                        if(_if_conditional311=n_226<0,                        _if_conditional311) {
                            # 848 "18field.c"
                            list$1sNodeph_reset(result_type_225->mArrayNum);
                            # 849 "18field.c"
                            result_type_225->mPointerNum+=n_226;
                            # 854 "18field.c"
                            # 851 "18field.c"
                            if(_if_conditional312=result_type_225->mPointerNum<0,                            _if_conditional312) {
                                # 852 "18field.c"
                                result_type_225->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 864 "18field.c"
                # 857 "18field.c"
                if(_if_conditional313=result_type_225->mPointerNum>0,                _if_conditional313) {
                    # 858 "18field.c"
                    result_type_225->mPointerNum-=list$1CVALUEph_length(array_num_206);
                    # 863 "18field.c"
                    # 860 "18field.c"
                    if(_if_conditional314=result_type_225->mPointerNum<0,                    _if_conditional314) {
                        # 861 "18field.c"
                        result_type_225->mPointerNum=0;
                    }
                }
            }
            # 866 "18field.c"
            come_value_240=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 866, "CVALUE"))));
            come_call_finalizer3(right_value275,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 868 "18field.c"
            buf_241=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value277=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value276=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 868, "buffer"))))))));
            come_call_finalizer3(right_value276,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value277,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 870 "18field.c"
            result_type2_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(result_type_225))));
            come_call_finalizer3(right_value278,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 871 "18field.c"
            result_type2_242->mPointerNum++;
            # 873 "18field.c"
            buffer_append_str(buf_241,((char*)(right_value279=xsprintf("come_range_check(&%s",left_value_202->c_value))));
            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 878 "18field.c"
            for(            o2_saved_243=(struct list$1CVALUEph*)come_increment_ref_count((array_num_206)),it_246=list$1CVALUEph_begin((o2_saved_243));            !list$1CVALUEph_end((o2_saved_243));            it_246=list$1CVALUEph_next((o2_saved_243))            ){
                # 876 "18field.c"
                buffer_append_str(buf_241,((char*)(right_value280=xsprintf("[%s]",it_246->c_value))));
                right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_243,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 878 "18field.c"
            buffer_append_str(buf_241,((char*)(right_value281=xsprintf(",%s,%s+(",left_value_202->c_value,left_value_202->c_value))));
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 879 "18field.c"
            i_249=0;
            # 895 "18field.c"
            for(            o2_saved_250=(struct list$1sNodeph*)come_increment_ref_count((var_type_224->mArrayNum)),it_251=list$1sNodeph_begin((o2_saved_250));            !list$1sNodeph_end((o2_saved_250));            it_251=list$1sNodeph_next((o2_saved_250))            ){
                # 886 "18field.c"
                # 881 "18field.c"
                if(_if_conditional319=!node_compile(it_251,info),                _if_conditional319) {
                    # 882 "18field.c"
                    err_msg(info,"invalid array num");
                    # 883 "18field.c"
                    exit(1);
                }
                # 886 "18field.c"
                come_value_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value282,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 887 "18field.c"
                dec_stack_ptr(1,info);
                # 889 "18field.c"
                buffer_append_str(buf_241,((char*)(right_value283=xsprintf("%s",come_value_252->c_value))));
                right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 893 "18field.c"
                # 890 "18field.c"
                if(_if_conditional320=i_249!=list$1sNodeph_length(var_type_224->mArrayNum)-1,                _if_conditional320) {
                    # 891 "18field.c"
                    buffer_append_str(buf_241,"*");
                }
                # 893 "18field.c"
                i_249++;
                come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_250,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            # 895 "18field.c"
            buffer_append_str(buf_241,((char*)(right_value284=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 897 "18field.c"
            __dec_obj121=check_code_223;
            check_code_223=(char*)come_increment_ref_count(((char*)(right_value285=buffer_to_string(buf_241))));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_241,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 900 "18field.c"
        come_value_253=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 900, "CVALUE"))));
        come_call_finalizer3(right_value286,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 921 "18field.c"
        # 908 "18field.c"
        if(_if_conditional321=list$1sNodeph_length(left_type_203->mArrayNum)>0,        _if_conditional321) {
            # 912 "18field.c"
            for(            i_254=0;            i_254<list$1CVALUEph_length(array_num_206);            i_254++            ){
                # 910 "18field.c"
                list$1sNodeph_delete(left_type_203->mArrayNum,-1,-1);
            }
        }
        else {
            # 921 "18field.c"
            # 913 "18field.c"
            if(_if_conditional322=left_type_203->mPointerNum>0,            _if_conditional322) {
                # 914 "18field.c"
                left_type_203->mPointerNum-=list$1CVALUEph_length(array_num_206);
                # 919 "18field.c"
                # 916 "18field.c"
                if(_if_conditional323=left_type_203->mPointerNum<0,                _if_conditional323) {
                    # 917 "18field.c"
                    left_type_203->mPointerNum=0;
                }
            }
        }
        # 921 "18field.c"
        buf_255=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value288=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value287=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 921, "buffer"))))))));
        come_call_finalizer3(right_value287,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value288,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 923 "18field.c"
        buffer_append_str(buf_255,left_value_202->c_value);
        # 929 "18field.c"
        for(        o2_saved_256=(struct list$1CVALUEph*)come_increment_ref_count((array_num_206)),it_257=list$1CVALUEph_begin((o2_saved_256));        !list$1CVALUEph_end((o2_saved_256));        it_257=list$1CVALUEph_next((o2_saved_256))        ){
            # 926 "18field.c"
            buffer_append_str(buf_255,((char*)(right_value289=xsprintf("[%s]",it_257->c_value))));
            right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_256,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 929 "18field.c"
        left_value_code_258=(char*)come_increment_ref_count(((char*)(right_value290=buffer_to_string(buf_255))));
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 931 "18field.c"
        check_assign_type(((char*)(right_value291=xsprintf("array is assinged to"))),left_type_203,right_type_215,right_value_214,(_Bool)0,(_Bool)1,info);
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 966 "18field.c"
        # 932 "18field.c"
        if(_if_conditional324=left_type_203->mHeap&&right_type_215->mHeap&&left_type_203->mPointerNum>0&&right_type_215->mPointerNum>0,        _if_conditional324) {
            # 948 "18field.c"
            # 934 "18field.c"
            if(_if_conditional325=left_value_202->type->mPointerNum>=1,            _if_conditional325) {
                # 935 "18field.c"
                decrement_ref_count_object(left_type_203,left_value_code_258,info,(_Bool)0);
                # 936 "18field.c"
                std_move(left_type_203,right_type_215,right_value_214,info);
                # 937 "18field.c"
                __dec_obj122=come_value_253->c_value;
                come_value_253->c_value=(char*)come_increment_ref_count(((char*)(right_value292=xsprintf("%s=%s",left_value_code_258,right_value_214->c_value))));
                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 948 "18field.c"
                # 939 "18field.c"
                if(_if_conditional326=left_value_202->type->mPointerNum==0,                _if_conditional326) {
                    # 940 "18field.c"
                    decrement_ref_count_object(left_type_203,left_value_code_258,info,(_Bool)0);
                    # 941 "18field.c"
                    std_move(left_type_203,right_type_215,right_value_214,info);
                    # 942 "18field.c"
                    __dec_obj123=come_value_253->c_value;
                    come_value_253->c_value=(char*)come_increment_ref_count(((char*)(right_value293=xsprintf("%s=%s",left_value_code_258,right_value_214->c_value))));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 945 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_258,left_value_202->type->mPointerNum);
                    # 946 "18field.c"
                    __result176__ = (_Bool)0;
                    check_code_223 = come_decrement_ref_count2(check_code_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_255,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_258 = come_decrement_ref_count2(left_value_code_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_206,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result176__;
                }
            }
            # 948 "18field.c"
            right_value_id_259=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_214->c_value));
            # 953 "18field.c"
            # 950 "18field.c"
            if(_if_conditional327=right_value_id_259!=-1,            _if_conditional327) {
                # 951 "18field.c"
                remove_object_from_right_values(right_value_id_259,info);
            }
        }
        else {
            # 965 "18field.c"
            # 955 "18field.c"
            if(_if_conditional328=left_value_202->type->mPointerNum>=1,            _if_conditional328) {
                # 956 "18field.c"
                __dec_obj124=come_value_253->c_value;
                come_value_253->c_value=(char*)come_increment_ref_count(((char*)(right_value294=xsprintf("%s=%s",left_value_code_258,right_value_214->c_value))));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 965 "18field.c"
                # 958 "18field.c"
                if(_if_conditional329=left_value_202->type->mPointerNum==0,                _if_conditional329) {
                    # 959 "18field.c"
                    __dec_obj125=come_value_253->c_value;
                    come_value_253->c_value=(char*)come_increment_ref_count(((char*)(right_value295=xsprintf("%s=%s",left_value_code_258,right_value_214->c_value))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 962 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_258,left_value_202->type->mPointerNum);
                    # 963 "18field.c"
                    __result177__ = (_Bool)0;
                    check_code_223 = come_decrement_ref_count2(check_code_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_255,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_258 = come_decrement_ref_count2(left_value_code_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_206,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result177__;
                }
            }
        }
        # 966 "18field.c"
        result_type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(left_type_203))));
        come_call_finalizer3(right_value296,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 967 "18field.c"
        __dec_obj126=result_type_260->mArrayNum;
        result_type_260->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value298=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value297=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 967, "list$1sNodeph"))))))));
        come_call_finalizer3(__dec_obj126,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value297,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value298,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 968 "18field.c"
        __dec_obj127=come_value_253->type;
        come_value_253->type=(struct sType*)come_increment_ref_count(result_type_260);
        come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 969 "18field.c"
        come_value_253->var=((void*)0);
        # 975 "18field.c"
        # 971 "18field.c"
        if(_if_conditional330=check_code_223&&gComeDebug,        _if_conditional330) {
            # 972 "18field.c"
            __dec_obj128=come_value_253->c_value;
            come_value_253->c_value=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("(%s, %s)",check_code_223,come_value_253->c_value))));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 975 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_253));
        # 977 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_253->c_value);
        check_code_223 = come_decrement_ref_count2(check_code_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_255,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_258 = come_decrement_ref_count2(left_value_code_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_260,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 980 "18field.c"
    __result178__ = (_Bool)1;
    come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_206,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result178__;
    come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_206,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
        # 105 "./neo-c.h"
        self->head=((void*)0);
        # 106 "./neo-c.h"
        self->tail=((void*)0);
        # 107 "./neo-c.h"
        self->len=0;
        # 109 "./neo-c.h"
        __result153__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result153__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_204;
_Bool _while_condtional23;
struct list_item$1CVALUEph* prev_it_205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_204, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_205, 0, sizeof(struct list_item$1CVALUEph*));
            # 124 "./neo-c.h"
            it_204=self->head;
            # 130 "./neo-c.h"
            while(_while_condtional23=it_204!=((void*)0),            _while_condtional23) {
                # 126 "./neo-c.h"
                prev_it_205=it_204;
                # 127 "./neo-c.h"
                it_204=it_204->next;
                # 128 "./neo-c.h"
                come_call_finalizer3(prev_it_205,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional276;
struct sNode* result_208;
struct sNode* __result154__;
_Bool _if_conditional277;
struct sNode* __result155__;
struct sNode* result_209;
struct sNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_208, 0, sizeof(struct sNode*));
memset(&result_209, 0, sizeof(struct sNode*));
        # 291 "./neo-c.h"
        # 286 "./neo-c.h"
        if(_if_conditional276=self==((void*)0),        _if_conditional276) {
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_208,0,sizeof(struct sNode*));
            # 289 "./neo-c.h"
            __result154__ = __result_obj__ = result_208;
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
        memset(&result_209,0,sizeof(struct sNode*));
        # 299 "./neo-c.h"
        __result156__ = __result_obj__ = result_209;
        return __result156__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
        # 321 "./neo-c.h"
        __result157__ = self==((void*)0)||self->it==((void*)0);
        return __result157__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional278;
struct sNode* result_211;
struct sNode* __result158__;
_Bool _if_conditional279;
struct sNode* __result159__;
struct sNode* result_212;
struct sNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_211, 0, sizeof(struct sNode*));
memset(&result_212, 0, sizeof(struct sNode*));
        # 309 "./neo-c.h"
        # 303 "./neo-c.h"
        if(_if_conditional278=self==((void*)0)||self->it==((void*)0),        _if_conditional278) {
            # 304 "./neo-c.h"
            # 305 "./neo-c.h"
            memset(&result_211,0,sizeof(struct sNode*));
            # 306 "./neo-c.h"
            __result158__ = __result_obj__ = result_211;
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
        memset(&result_212,0,sizeof(struct sNode*));
        # 317 "./neo-c.h"
        __result160__ = __result_obj__ = result_212;
        return __result160__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional283;
struct list_item$1CVALUEph* it_220;
int i_221;
_Bool _while_condtional24;
_Bool _if_conditional284;
struct CVALUE* __result163__;
struct CVALUE* default_value_222;
struct CVALUE* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_220, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_221, 0, sizeof(int));
memset(&default_value_222, 0, sizeof(struct CVALUE*));
            # 687 "./neo-c.h"
            # 683 "./neo-c.h"
            if(_if_conditional283=position<0,            _if_conditional283) {
                # 684 "./neo-c.h"
                position+=self->len;
            }
            # 687 "./neo-c.h"
            it_220=self->head;
            # 688 "./neo-c.h"
            i_221=0;
            # 695 "./neo-c.h"
            while(_while_condtional24=it_220!=((void*)0),            _while_condtional24) {
                # 693 "./neo-c.h"
                # 690 "./neo-c.h"
                if(_if_conditional284=position==i_221,                _if_conditional284) {
                    # 691 "./neo-c.h"
                    __result163__ = __result_obj__ = it_220->item;
                    return __result163__;
                }
                # 693 "./neo-c.h"
                it_220=it_220->next;
                # 694 "./neo-c.h"
                i_221++;
            }
            # 697 "./neo-c.h"
            # 698 "./neo-c.h"
            memset(&default_value_222,0,sizeof(struct CVALUE*));
            # 699 "./neo-c.h"
            __result164__ = __result_obj__ = default_value_222;
            come_call_finalizer3(default_value_222,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result164__;
            come_call_finalizer3(default_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional289;
int __result165__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 368 "./neo-c.h"
                    # 365 "./neo-c.h"
                    if(_if_conditional289=self==((void*)0),                    _if_conditional289) {
                        # 366 "./neo-c.h"
                        __result165__ = 0;
                        return __result165__;
                    }
                    # 368 "./neo-c.h"
                    __result166__ = self->len;
                    return __result166__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
int tmp_228;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct list$1sNodeph* __result167__;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list_item$1sNodeph* it_229;
int i_230;
_Bool _while_condtional25;
_Bool _if_conditional301;
struct list_item$1sNodeph* prev_it_231;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct list_item$1sNodeph* it_232;
int i_233;
_Bool _while_condtional26;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list_item$1sNodeph* prev_it_234;
struct list_item$1sNodeph* it_235;
struct list_item$1sNodeph* head_prev_it_236;
struct list_item$1sNodeph* tail_it_237;
int i_238;
_Bool _while_condtional27;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list_item$1sNodeph* prev_it_239;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list$1sNodeph* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_228, 0, sizeof(int));
memset(&it_229, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_230, 0, sizeof(int));
memset(&prev_it_231, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_232, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_233, 0, sizeof(int));
memset(&prev_it_234, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_235, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_236, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_237, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_238, 0, sizeof(int));
memset(&prev_it_239, 0, sizeof(struct list_item$1sNodeph*));
                                # 468 "./neo-c.h"
                                # 465 "./neo-c.h"
                                if(_if_conditional293=head<0,                                _if_conditional293) {
                                    # 466 "./neo-c.h"
                                    head+=self->len;
                                }
                                # 472 "./neo-c.h"
                                # 468 "./neo-c.h"
                                if(_if_conditional294=tail<0,                                _if_conditional294) {
                                    # 469 "./neo-c.h"
                                    tail+=self->len+1;
                                }
                                # 478 "./neo-c.h"
                                # 472 "./neo-c.h"
                                if(_if_conditional295=head>tail,                                _if_conditional295) {
                                    # 473 "./neo-c.h"
                                    tmp_228=tail;
                                    # 474 "./neo-c.h"
                                    tail=head;
                                    # 475 "./neo-c.h"
                                    head=tmp_228;
                                }
                                # 482 "./neo-c.h"
                                # 478 "./neo-c.h"
                                if(_if_conditional296=head<0,                                _if_conditional296) {
                                    # 479 "./neo-c.h"
                                    head=0;
                                }
                                # 486 "./neo-c.h"
                                # 482 "./neo-c.h"
                                if(_if_conditional297=tail>self->len,                                _if_conditional297) {
                                    # 483 "./neo-c.h"
                                    tail=self->len;
                                }
                                # 490 "./neo-c.h"
                                # 486 "./neo-c.h"
                                if(_if_conditional298=head==tail,                                _if_conditional298) {
                                    # 487 "./neo-c.h"
                                    __result167__ = __result_obj__ = self;
                                    return __result167__;
                                }
                                # 585 "./neo-c.h"
                                # 490 "./neo-c.h"
                                if(_if_conditional299=head==0&&tail==self->len,                                _if_conditional299) {
                                    # 492 "./neo-c.h"
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    # 585 "./neo-c.h"
                                    # 494 "./neo-c.h"
                                    if(_if_conditional300=head==0,                                    _if_conditional300) {
                                        # 495 "./neo-c.h"
                                        it_229=self->head;
                                        # 496 "./neo-c.h"
                                        i_230=0;
                                        # 518 "./neo-c.h"
                                        while(_while_condtional25=it_229!=((void*)0),                                        _while_condtional25) {
                                            # 517 "./neo-c.h"
                                            # 498 "./neo-c.h"
                                            if(_if_conditional301=i_230<tail,                                            _if_conditional301) {
                                                # 499 "./neo-c.h"
                                                prev_it_231=it_229;
                                                # 501 "./neo-c.h"
                                                it_229=it_229->next;
                                                # 502 "./neo-c.h"
                                                i_230++;
                                                # 504 "./neo-c.h"
                                                come_call_finalizer3(prev_it_231,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                # 506 "./neo-c.h"
                                                self->len--;
                                            }
                                            else {
                                                # 517 "./neo-c.h"
                                                # 508 "./neo-c.h"
                                                if(_if_conditional302=i_230==tail,                                                _if_conditional302) {
                                                    # 509 "./neo-c.h"
                                                    self->head=it_229;
                                                    # 510 "./neo-c.h"
                                                    self->head->prev=((void*)0);
                                                    # 511 "./neo-c.h"
                                                    break;
                                                }
                                                else {
                                                    # 514 "./neo-c.h"
                                                    it_229=it_229->next;
                                                    # 515 "./neo-c.h"
                                                    i_230++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 585 "./neo-c.h"
                                        # 519 "./neo-c.h"
                                        if(_if_conditional303=tail==self->len,                                        _if_conditional303) {
                                            # 520 "./neo-c.h"
                                            it_232=self->head;
                                            # 521 "./neo-c.h"
                                            i_233=0;
                                            # 543 "./neo-c.h"
                                            while(_while_condtional26=it_232!=((void*)0),                                            _while_condtional26) {
                                                # 528 "./neo-c.h"
                                                # 523 "./neo-c.h"
                                                if(_if_conditional304=i_233==head,                                                _if_conditional304) {
                                                    # 524 "./neo-c.h"
                                                    self->tail=it_232->prev;
                                                    # 525 "./neo-c.h"
                                                    self->tail->next=((void*)0);
                                                }
                                                # 542 "./neo-c.h"
                                                # 528 "./neo-c.h"
                                                if(_if_conditional305=i_233>=head,                                                _if_conditional305) {
                                                    # 529 "./neo-c.h"
                                                    prev_it_234=it_232;
                                                    # 531 "./neo-c.h"
                                                    it_232=it_232->next;
                                                    # 532 "./neo-c.h"
                                                    i_233++;
                                                    # 534 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_234,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    # 536 "./neo-c.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 539 "./neo-c.h"
                                                    it_232=it_232->next;
                                                    # 540 "./neo-c.h"
                                                    i_233++;
                                                }
                                            }
                                        }
                                        else {
                                            # 545 "./neo-c.h"
                                            it_235=self->head;
                                            # 547 "./neo-c.h"
                                            head_prev_it_236=((void*)0);
                                            # 548 "./neo-c.h"
                                            tail_it_237=((void*)0);
                                            # 551 "./neo-c.h"
                                            i_238=0;
                                            # 577 "./neo-c.h"
                                            while(_while_condtional27=it_235!=((void*)0),                                            _while_condtional27) {
                                                # 556 "./neo-c.h"
                                                # 553 "./neo-c.h"
                                                if(_if_conditional306=i_238==head,                                                _if_conditional306) {
                                                    # 554 "./neo-c.h"
                                                    head_prev_it_236=it_235->prev;
                                                }
                                                # 560 "./neo-c.h"
                                                # 556 "./neo-c.h"
                                                if(_if_conditional307=i_238==tail,                                                _if_conditional307) {
                                                    # 557 "./neo-c.h"
                                                    tail_it_237=it_235;
                                                }
                                                # 575 "./neo-c.h"
                                                # 560 "./neo-c.h"
                                                if(_if_conditional308=i_238>=head&&i_238<tail,                                                _if_conditional308) {
                                                    # 562 "./neo-c.h"
                                                    prev_it_239=it_235;
                                                    # 564 "./neo-c.h"
                                                    it_235=it_235->next;
                                                    # 565 "./neo-c.h"
                                                    i_238++;
                                                    # 567 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_239,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    # 569 "./neo-c.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 572 "./neo-c.h"
                                                    it_235=it_235->next;
                                                    # 573 "./neo-c.h"
                                                    i_238++;
                                                }
                                            }
                                            # 580 "./neo-c.h"
                                            # 577 "./neo-c.h"
                                            if(_if_conditional309=head_prev_it_236!=((void*)0),                                            _if_conditional309) {
                                                # 578 "./neo-c.h"
                                                head_prev_it_236->next=tail_it_237;
                                            }
                                            # 583 "./neo-c.h"
                                            # 580 "./neo-c.h"
                                            if(_if_conditional310=tail_it_237!=((void*)0),                                            _if_conditional310) {
                                                # 581 "./neo-c.h"
                                                tail_it_237->prev=head_prev_it_236;
                                            }
                                        }
                                    }
                                }
                                # 585 "./neo-c.h"
                                __result168__ = __result_obj__ = self;
                                return __result168__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional315;
struct CVALUE* result_244;
struct CVALUE* __result169__;
_Bool _if_conditional316;
struct CVALUE* __result170__;
struct CVALUE* result_245;
struct CVALUE* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_244, 0, sizeof(struct CVALUE*));
memset(&result_245, 0, sizeof(struct CVALUE*));
                # 291 "./neo-c.h"
                # 286 "./neo-c.h"
                if(_if_conditional315=self==((void*)0),                _if_conditional315) {
                    # 287 "./neo-c.h"
                    # 288 "./neo-c.h"
                    memset(&result_244,0,sizeof(struct CVALUE*));
                    # 289 "./neo-c.h"
                    __result169__ = __result_obj__ = result_244;
                    return __result169__;
                }
                # 291 "./neo-c.h"
                self->it=self->head;
                # 297 "./neo-c.h"
                # 293 "./neo-c.h"
                if(self->it) {
                    # 294 "./neo-c.h"
                    __result170__ = __result_obj__ = self->it->item;
                    return __result170__;
                }
                # 297 "./neo-c.h"
                # 298 "./neo-c.h"
                memset(&result_245,0,sizeof(struct CVALUE*));
                # 299 "./neo-c.h"
                __result171__ = __result_obj__ = result_245;
                return __result171__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
                # 321 "./neo-c.h"
                __result172__ = self==((void*)0)||self->it==((void*)0);
                return __result172__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional317;
struct CVALUE* result_247;
struct CVALUE* __result173__;
_Bool _if_conditional318;
struct CVALUE* __result174__;
struct CVALUE* result_248;
struct CVALUE* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct CVALUE*));
memset(&result_248, 0, sizeof(struct CVALUE*));
                # 309 "./neo-c.h"
                # 303 "./neo-c.h"
                if(_if_conditional317=self==((void*)0)||self->it==((void*)0),                _if_conditional317) {
                    # 304 "./neo-c.h"
                    # 305 "./neo-c.h"
                    memset(&result_247,0,sizeof(struct CVALUE*));
                    # 306 "./neo-c.h"
                    __result173__ = __result_obj__ = result_247;
                    return __result173__;
                }
                # 309 "./neo-c.h"
                self->it=self->it->next;
                # 315 "./neo-c.h"
                # 311 "./neo-c.h"
                if(self->it) {
                    # 312 "./neo-c.h"
                    __result174__ = __result_obj__ = self->it->item;
                    return __result174__;
                }
                # 315 "./neo-c.h"
                # 316 "./neo-c.h"
                memset(&result_248,0,sizeof(struct CVALUE*));
                # 317 "./neo-c.h"
                __result175__ = __result_obj__ = result_248;
                return __result175__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value300;
char* __dec_obj129;
void* right_value301;
struct list$1sNodeph* __dec_obj130;
void* right_value302;
struct sNode* __dec_obj131;
struct sLoadArrayNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
    # 993 "18field.c"
    self->sline=info->sline;
    # 994 "18field.c"
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 996 "18field.c"
    __dec_obj130=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value301=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value301,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 997 "18field.c"
    self->mBreakGuard=break_guard;
    # 999 "18field.c"
    __dec_obj131=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=sNode_clone(left))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1000 "18field.c"
    self->mQuote=quote;
    # 1003 "18field.c"
    __result179__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result179__;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1005 "18field.c"
    __result180__ = (_Bool)0;
    return __result180__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__;
void* right_value303;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
    # 1010 "18field.c"
    __result181__ = __result_obj__ = ((char*)(right_value303=__builtin_string("sLoadArrayNode")));
    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_261;
struct list$1sNodeph* array_num_nodes_262;
_Bool _if_conditional334;
_Bool __result182__;
void* right_value304;
struct CVALUE* left_value_263;
_Bool _if_conditional335;
void* right_value305;
void* right_value306;
char* __dec_obj132;
void* right_value307;
struct sType* left_type_264;
void* right_value308;
void* right_value309;
struct list$1CVALUEph* array_num_265;
struct list$1sNodeph* o2_saved_266;
struct sNode* it_267;
_Bool _if_conditional336;
_Bool __result183__;
void* right_value310;
struct CVALUE* c_value_268;
void* right_value311;
struct sType* type_269;
char* fun_name_270;
_Bool calling_fun_271;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
struct sType* var_type_272;
void* right_value312;
struct sType* result_type_273;
_Bool _if_conditional340;
struct sType* __dec_obj133;
_Bool _if_conditional341;
int n_274;
_Bool _if_conditional342;
void* right_value313;
struct sType* __dec_obj134;
_Bool _if_conditional343;
void* right_value314;
struct sType* __dec_obj135;
_Bool _if_conditional344;
int i_275;
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value315;
struct CVALUE* come_value_276;
void* right_value316;
void* right_value317;
struct buffer* buf_277;
void* right_value318;
struct sType* result_type2_278;
void* right_value319;
void* right_value320;
struct list$1CVALUEph* o2_saved_279;
struct CVALUE* it_280;
void* right_value321;
void* right_value322;
int i_281;
struct list$1sNodeph* o2_saved_282;
struct sNode* it_283;
_Bool _if_conditional349;
void* right_value323;
struct CVALUE* come_value_284;
void* right_value324;
_Bool _if_conditional350;
void* right_value325;
void* right_value326;
char* left_value_code_285;
void* right_value327;
char* __dec_obj136;
void* right_value328;
struct sType* __dec_obj137;
void* right_value329;
struct CVALUE* come_value_286;
void* right_value330;
void* right_value331;
struct buffer* buf_287;
struct list$1CVALUEph* o2_saved_288;
struct CVALUE* it_289;
void* right_value332;
void* right_value333;
char* left_value_code_290;
void* right_value334;
char* __dec_obj138;
void* right_value335;
struct sType* result_type_291;
_Bool _if_conditional351;
struct sType* __dec_obj139;
_Bool _if_conditional352;
int n_292;
_Bool _if_conditional353;
void* right_value336;
struct sType* __dec_obj140;
_Bool _if_conditional354;
void* right_value337;
struct sType* __dec_obj141;
_Bool _if_conditional355;
int i_293;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
void* right_value338;
struct sType* __dec_obj142;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_261, 0, sizeof(struct sNode*));
memset(&array_num_nodes_262, 0, sizeof(struct list$1sNodeph*));
right_value304 = (void*)0;
memset(&left_value_263, 0, sizeof(struct CVALUE*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&left_type_264, 0, sizeof(struct sType*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&array_num_265, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_266, 0, sizeof(struct list$1sNodeph*));
memset(&it_267, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
memset(&c_value_268, 0, sizeof(struct CVALUE*));
right_value311 = (void*)0;
memset(&type_269, 0, sizeof(struct sType*));
memset(&fun_name_270, 0, sizeof(char*));
memset(&calling_fun_271, 0, sizeof(_Bool));
memset(&var_type_272, 0, sizeof(struct sType*));
right_value312 = (void*)0;
memset(&result_type_273, 0, sizeof(struct sType*));
memset(&n_274, 0, sizeof(int));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&i_275, 0, sizeof(int));
right_value315 = (void*)0;
memset(&come_value_276, 0, sizeof(struct CVALUE*));
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&buf_277, 0, sizeof(struct buffer*));
right_value318 = (void*)0;
memset(&result_type2_278, 0, sizeof(struct sType*));
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&o2_saved_279, 0, sizeof(struct list$1CVALUEph*));
memset(&it_280, 0, sizeof(struct CVALUE*));
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&i_281, 0, sizeof(int));
memset(&o2_saved_282, 0, sizeof(struct list$1sNodeph*));
memset(&it_283, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
memset(&come_value_284, 0, sizeof(struct CVALUE*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&left_value_code_285, 0, sizeof(char*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&come_value_286, 0, sizeof(struct CVALUE*));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&buf_287, 0, sizeof(struct buffer*));
memset(&o2_saved_288, 0, sizeof(struct list$1CVALUEph*));
memset(&it_289, 0, sizeof(struct CVALUE*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&left_value_code_290, 0, sizeof(char*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&result_type_291, 0, sizeof(struct sType*));
memset(&n_292, 0, sizeof(int));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&i_293, 0, sizeof(int));
right_value338 = (void*)0;
    # 1015 "18field.c"
    left_261=self->mLeft;
    # 1016 "18field.c"
    array_num_nodes_262=self->mArrayNum;
    # 1022 "18field.c"
    # 1018 "18field.c"
    if(_if_conditional334=!node_compile(left_261,info),    _if_conditional334) {
        # 1019 "18field.c"
        __result182__ = (_Bool)0;
        return __result182__;
    }
    # 1022 "18field.c"
    left_value_263=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value304,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1023 "18field.c"
    dec_stack_ptr(1,info);
    # 1029 "18field.c"
    # 1025 "18field.c"
    if(_if_conditional335=gComeDebug&&left_value_263->type->mPointerNum>0,    _if_conditional335) {
        # 1026 "18field.c"
        __dec_obj132=left_value_263->c_value;
        left_value_263->c_value=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value305=make_type_name_string(left_value_263->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_263->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1029 "18field.c"
    left_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_clone(left_value_263->type))));
    come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1031 "18field.c"
    array_num_265=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value309=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value308=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1031, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value308,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value309,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1044 "18field.c"
    for(    o2_saved_266=(array_num_nodes_262),it_267=list$1sNodeph_begin((o2_saved_266));    !list$1sNodeph_end((o2_saved_266));    it_267=list$1sNodeph_next((o2_saved_266))    ){
        # 1038 "18field.c"
        # 1034 "18field.c"
        if(_if_conditional336=!node_compile(it_267,info),        _if_conditional336) {
            # 1035 "18field.c"
            __result183__ = (_Bool)0;
            come_call_finalizer3(left_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_265,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result183__;
        }
        # 1038 "18field.c"
        c_value_268=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value310,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1039 "18field.c"
        dec_stack_ptr(1,info);
        # 1041 "18field.c"
        list$1CVALUEph_push_back(array_num_265,(struct CVALUE*)come_increment_ref_count(c_value_268));
        come_call_finalizer3(c_value_268,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1044 "18field.c"
    type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(left_value_263->type))));
    come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1046 "18field.c"
    fun_name_270="operator_load_element";
    # 1047 "18field.c"
    # 1055 "18field.c"
    # 1048 "18field.c"
    if(self->mQuote) {
        # 1049 "18field.c"
        calling_fun_271=(_Bool)0;
    }
    else {
        # 1052 "18field.c"
        calling_fun_271=operator_overload_fun(type_269,fun_name_270,left_value_263,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_265,0), "18field.c", 1052, 10)),self->mBreakGuard,info);
    }
    # 1208 "18field.c"
    # 1055 "18field.c"
    if(_if_conditional338=!calling_fun_271,    _if_conditional338) {
        # 1206 "18field.c"
        # 1056 "18field.c"
        if(_if_conditional339=gComeDebug&&left_value_263->var&&left_value_263->var->mType&&list$1sNodeph_length(left_value_263->var->mType->mArrayNum)>0,        _if_conditional339) {
            # 1058 "18field.c"
            var_type_272=left_value_263->var->mType;
            # 1059 "18field.c"
            result_type_273=(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=sType_clone(left_type_264))));
            come_call_finalizer3(right_value312,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1065 "18field.c"
            # 1061 "18field.c"
            if(result_type_273->mOriginalLoadVarType->v1) {
                # 1062 "18field.c"
                __dec_obj133=result_type_273;
                result_type_273=(struct sType*)come_increment_ref_count(result_type_273->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 1099 "18field.c"
            # 1065 "18field.c"
            if(_if_conditional341=list$1sNodeph_length(result_type_273->mArrayNum)>0,            _if_conditional341) {
                # 1066 "18field.c"
                n_274=list$1sNodeph_length(result_type_273->mArrayNum)-list$1CVALUEph_length(array_num_265);
                # 1088 "18field.c"
                # 1068 "18field.c"
                if(_if_conditional342=n_274==0,                _if_conditional342) {
                    # 1069 "18field.c"
                    __dec_obj134=result_type_273;
                    result_type_273=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(left_type_264))));
                    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1073 "18field.c"
                    # 1070 "18field.c"
                    if(left_type_264->mOriginalLoadVarType->v1) {
                        # 1071 "18field.c"
                        __dec_obj135=result_type_273;
                        result_type_273=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_type_264->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value314,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1073 "18field.c"
                    list$1sNodeph_reset(result_type_273->mArrayNum);
                }
                else {
                    # 1088 "18field.c"
                    # 1075 "18field.c"
                    if(_if_conditional344=n_274>0,                    _if_conditional344) {
                        # 1079 "18field.c"
                        for(                        i_275=0;                        i_275<n_274;                        i_275++                        ){
                            # 1077 "18field.c"
                            list$1sNodeph_delete(result_type_273->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1088 "18field.c"
                        # 1080 "18field.c"
                        if(_if_conditional345=n_274<0,                        _if_conditional345) {
                            # 1081 "18field.c"
                            list$1sNodeph_reset(result_type_273->mArrayNum);
                            # 1082 "18field.c"
                            result_type_273->mPointerNum+=n_274;
                            # 1087 "18field.c"
                            # 1084 "18field.c"
                            if(_if_conditional346=result_type_273->mPointerNum<0,                            _if_conditional346) {
                                # 1085 "18field.c"
                                result_type_273->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1097 "18field.c"
                # 1090 "18field.c"
                if(_if_conditional347=result_type_273->mPointerNum>0,                _if_conditional347) {
                    # 1091 "18field.c"
                    result_type_273->mPointerNum-=list$1CVALUEph_length(array_num_265);
                    # 1096 "18field.c"
                    # 1093 "18field.c"
                    if(_if_conditional348=result_type_273->mPointerNum<0,                    _if_conditional348) {
                        # 1094 "18field.c"
                        result_type_273->mPointerNum=0;
                    }
                }
            }
            # 1099 "18field.c"
            come_value_276=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1099, "CVALUE"))));
            come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 1101 "18field.c"
            buf_277=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value317=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value316=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1101, "buffer"))))))));
            come_call_finalizer3(right_value316,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value317,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 1104 "18field.c"
            result_type2_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(result_type_273))));
            come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1105 "18field.c"
            result_type2_278->mPointerNum++;
            # 1109 "18field.c"
            buffer_append_str(buf_277,((char*)(right_value320=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value319=make_type_name_string(result_type2_278,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_263->c_value))));
            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1114 "18field.c"
            for(            o2_saved_279=(struct list$1CVALUEph*)come_increment_ref_count((array_num_265)),it_280=list$1CVALUEph_begin((o2_saved_279));            !list$1CVALUEph_end((o2_saved_279));            it_280=list$1CVALUEph_next((o2_saved_279))            ){
                # 1112 "18field.c"
                buffer_append_str(buf_277,((char*)(right_value321=xsprintf("[%s]",it_280->c_value))));
                right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_279,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 1114 "18field.c"
            buffer_append_str(buf_277,((char*)(right_value322=xsprintf(",%s,%s+(",left_value_263->c_value,left_value_263->c_value))));
            right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1115 "18field.c"
            i_281=0;
            # 1131 "18field.c"
            for(            o2_saved_282=(struct list$1sNodeph*)come_increment_ref_count((var_type_272->mArrayNum)),it_283=list$1sNodeph_begin((o2_saved_282));            !list$1sNodeph_end((o2_saved_282));            it_283=list$1sNodeph_next((o2_saved_282))            ){
                # 1122 "18field.c"
                # 1117 "18field.c"
                if(_if_conditional349=!node_compile(it_283,info),                _if_conditional349) {
                    # 1118 "18field.c"
                    err_msg(info,"invalid array num");
                    # 1119 "18field.c"
                    exit(1);
                }
                # 1122 "18field.c"
                come_value_284=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value323,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 1123 "18field.c"
                dec_stack_ptr(1,info);
                # 1125 "18field.c"
                buffer_append_str(buf_277,((char*)(right_value324=xsprintf("%s",come_value_284->c_value))));
                right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1129 "18field.c"
                # 1126 "18field.c"
                if(_if_conditional350=i_281!=list$1sNodeph_length(var_type_272->mArrayNum)-1,                _if_conditional350) {
                    # 1127 "18field.c"
                    buffer_append_str(buf_277,"*");
                }
                # 1129 "18field.c"
                i_281++;
                come_call_finalizer3(come_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_282,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            # 1131 "18field.c"
            buffer_append_str(buf_277,((char*)(right_value325=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1133 "18field.c"
            left_value_code_285=(char*)come_increment_ref_count(((char*)(right_value326=buffer_to_string(buf_277))));
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1135 "18field.c"
            __dec_obj136=come_value_276->c_value;
            come_value_276->c_value=(char*)come_increment_ref_count(((char*)(right_value327=xsprintf("%s",left_value_code_285))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1137 "18field.c"
            __dec_obj137=come_value_276->type;
            come_value_276->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(result_type_273))));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1138 "18field.c"
            come_value_276->var=((void*)0);
            # 1140 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_276));
            # 1142 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_276->c_value);
            come_call_finalizer3(result_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_277,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_278,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_285 = come_decrement_ref_count2(left_value_code_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1145 "18field.c"
            come_value_286=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1145, "CVALUE"))));
            come_call_finalizer3(right_value329,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 1147 "18field.c"
            buf_287=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value331=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value330=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1147, "buffer"))))))));
            come_call_finalizer3(right_value330,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value331,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 1149 "18field.c"
            buffer_append_str(buf_287,left_value_263->c_value);
            # 1155 "18field.c"
            for(            o2_saved_288=(struct list$1CVALUEph*)come_increment_ref_count((array_num_265)),it_289=list$1CVALUEph_begin((o2_saved_288));            !list$1CVALUEph_end((o2_saved_288));            it_289=list$1CVALUEph_next((o2_saved_288))            ){
                # 1152 "18field.c"
                buffer_append_str(buf_287,((char*)(right_value332=xsprintf("[%s]",it_289->c_value))));
                right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_288,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 1155 "18field.c"
            left_value_code_290=(char*)come_increment_ref_count(((char*)(right_value333=buffer_to_string(buf_287))));
            right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1157 "18field.c"
            __dec_obj138=come_value_286->c_value;
            come_value_286->c_value=(char*)come_increment_ref_count(((char*)(right_value334=xsprintf("%s",left_value_code_290))));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1159 "18field.c"
            result_type_291=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(left_type_264))));
            come_call_finalizer3(right_value335,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1165 "18field.c"
            # 1161 "18field.c"
            if(result_type_291->mOriginalLoadVarType->v1) {
                # 1162 "18field.c"
                __dec_obj139=result_type_291;
                result_type_291=(struct sType*)come_increment_ref_count(result_type_291->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 1199 "18field.c"
            # 1165 "18field.c"
            if(_if_conditional352=list$1sNodeph_length(result_type_291->mArrayNum)>0,            _if_conditional352) {
                # 1166 "18field.c"
                n_292=list$1sNodeph_length(result_type_291->mArrayNum)-list$1CVALUEph_length(array_num_265);
                # 1188 "18field.c"
                # 1168 "18field.c"
                if(_if_conditional353=n_292==0,                _if_conditional353) {
                    # 1169 "18field.c"
                    __dec_obj140=result_type_291;
                    result_type_291=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(left_type_264))));
                    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1173 "18field.c"
                    # 1170 "18field.c"
                    if(left_type_264->mOriginalLoadVarType->v1) {
                        # 1171 "18field.c"
                        __dec_obj141=result_type_291;
                        result_type_291=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(left_type_264->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value337,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1173 "18field.c"
                    list$1sNodeph_reset(result_type_291->mArrayNum);
                }
                else {
                    # 1188 "18field.c"
                    # 1175 "18field.c"
                    if(_if_conditional355=n_292>0,                    _if_conditional355) {
                        # 1179 "18field.c"
                        for(                        i_293=0;                        i_293<n_292;                        i_293++                        ){
                            # 1177 "18field.c"
                            list$1sNodeph_delete(result_type_291->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1188 "18field.c"
                        # 1180 "18field.c"
                        if(_if_conditional356=n_292<0,                        _if_conditional356) {
                            # 1181 "18field.c"
                            list$1sNodeph_reset(result_type_291->mArrayNum);
                            # 1182 "18field.c"
                            result_type_291->mPointerNum+=n_292;
                            # 1187 "18field.c"
                            # 1184 "18field.c"
                            if(_if_conditional357=result_type_291->mPointerNum<0,                            _if_conditional357) {
                                # 1185 "18field.c"
                                result_type_291->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1197 "18field.c"
                # 1190 "18field.c"
                if(_if_conditional358=result_type_291->mPointerNum>0,                _if_conditional358) {
                    # 1191 "18field.c"
                    result_type_291->mPointerNum-=list$1CVALUEph_length(array_num_265);
                    # 1196 "18field.c"
                    # 1193 "18field.c"
                    if(_if_conditional359=result_type_291->mPointerNum<0,                    _if_conditional359) {
                        # 1194 "18field.c"
                        result_type_291->mPointerNum=0;
                    }
                }
            }
            # 1199 "18field.c"
            __dec_obj142=come_value_286->type;
            come_value_286->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_clone(result_type_291))));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1200 "18field.c"
            come_value_286->var=((void*)0);
            # 1202 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_286));
            # 1204 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_286->c_value);
            come_call_finalizer3(come_value_286,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_287,buffer_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_290 = come_decrement_ref_count2(left_value_code_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 1208 "18field.c"
    __result184__ = (_Bool)1;
    come_call_finalizer3(left_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_265,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result184__;
    come_call_finalizer3(left_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_265,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value339;
char* __dec_obj143;
void* right_value340;
struct list$1sNodeph* __dec_obj144;
void* right_value341;
struct sNode* __dec_obj145;
struct sLoadRangeArrayNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
    # 1220 "18field.c"
    self->sline=info->sline;
    # 1221 "18field.c"
    __dec_obj143=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value339=__builtin_string(info->sname))));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1223 "18field.c"
    __dec_obj144=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value340=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj144,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value340,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1225 "18field.c"
    __dec_obj145=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1226 "18field.c"
    self->mQuote=quote;
    # 1229 "18field.c"
    __result185__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result185__;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1231 "18field.c"
    __result186__ = (_Bool)0;
    return __result186__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__;
void* right_value342;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value342 = (void*)0;
    # 1236 "18field.c"
    __result187__ = __result_obj__ = ((char*)(right_value342=__builtin_string("sLoadRangeArrayNode")));
    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result187__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_294;
struct list$1sNodeph* array_num_nodes_295;
_Bool _if_conditional363;
_Bool __result188__;
void* right_value343;
struct CVALUE* left_value_296;
void* right_value344;
struct sType* left_type_297;
void* right_value345;
void* right_value346;
struct list$1CVALUEph* array_num_298;
struct list$1sNodeph* o2_saved_299;
struct sNode* it_300;
_Bool _if_conditional364;
_Bool __result189__;
void* right_value347;
struct CVALUE* c_value_301;
void* right_value348;
struct sType* type_302;
char* fun_name_303;
_Bool calling_fun_304;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value349;
struct CVALUE* come_value_305;
void* right_value350;
void* right_value351;
struct buffer* buf_306;
struct list$1CVALUEph* o2_saved_307;
struct CVALUE* it_308;
void* right_value352;
void* right_value353;
char* left_value_code_309;
void* right_value354;
char* __dec_obj146;
void* right_value355;
struct sType* result_type_310;
_Bool _if_conditional367;
struct sType* __dec_obj147;
_Bool _if_conditional368;
int n_311;
_Bool _if_conditional369;
void* right_value356;
struct sType* __dec_obj148;
_Bool _if_conditional370;
void* right_value357;
struct sType* __dec_obj149;
_Bool _if_conditional371;
int i_312;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
void* right_value358;
struct sType* __dec_obj150;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_294, 0, sizeof(struct sNode*));
memset(&array_num_nodes_295, 0, sizeof(struct list$1sNodeph*));
right_value343 = (void*)0;
memset(&left_value_296, 0, sizeof(struct CVALUE*));
right_value344 = (void*)0;
memset(&left_type_297, 0, sizeof(struct sType*));
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&array_num_298, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_299, 0, sizeof(struct list$1sNodeph*));
memset(&it_300, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
memset(&c_value_301, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
memset(&type_302, 0, sizeof(struct sType*));
memset(&fun_name_303, 0, sizeof(char*));
memset(&calling_fun_304, 0, sizeof(_Bool));
right_value349 = (void*)0;
memset(&come_value_305, 0, sizeof(struct CVALUE*));
right_value350 = (void*)0;
right_value351 = (void*)0;
memset(&buf_306, 0, sizeof(struct buffer*));
memset(&o2_saved_307, 0, sizeof(struct list$1CVALUEph*));
memset(&it_308, 0, sizeof(struct CVALUE*));
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&left_value_code_309, 0, sizeof(char*));
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&result_type_310, 0, sizeof(struct sType*));
memset(&n_311, 0, sizeof(int));
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&i_312, 0, sizeof(int));
right_value358 = (void*)0;
    # 1241 "18field.c"
    left_294=self->mLeft;
    # 1242 "18field.c"
    array_num_nodes_295=self->mArrayNum;
    # 1248 "18field.c"
    # 1244 "18field.c"
    if(_if_conditional363=!node_compile(left_294,info),    _if_conditional363) {
        # 1245 "18field.c"
        __result188__ = (_Bool)0;
        return __result188__;
    }
    # 1248 "18field.c"
    left_value_296=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value343=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value343,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1249 "18field.c"
    dec_stack_ptr(1,info);
    # 1251 "18field.c"
    left_type_297=(struct sType*)come_increment_ref_count(((struct sType*)(right_value344=sType_clone(left_value_296->type))));
    come_call_finalizer3(right_value344,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1253 "18field.c"
    array_num_298=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value346=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value345=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1253, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value345,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value346,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1266 "18field.c"
    for(    o2_saved_299=(array_num_nodes_295),it_300=list$1sNodeph_begin((o2_saved_299));    !list$1sNodeph_end((o2_saved_299));    it_300=list$1sNodeph_next((o2_saved_299))    ){
        # 1260 "18field.c"
        # 1256 "18field.c"
        if(_if_conditional364=!node_compile(it_300,info),        _if_conditional364) {
            # 1257 "18field.c"
            __result189__ = (_Bool)0;
            come_call_finalizer3(left_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_298,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result189__;
        }
        # 1260 "18field.c"
        c_value_301=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value347=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value347,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1261 "18field.c"
        dec_stack_ptr(1,info);
        # 1263 "18field.c"
        list$1CVALUEph_push_back(array_num_298,(struct CVALUE*)come_increment_ref_count(c_value_301));
        come_call_finalizer3(c_value_301,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1266 "18field.c"
    type_302=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=sType_clone(left_value_296->type))));
    come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1268 "18field.c"
    fun_name_303="operator_load_range_element";
    # 1269 "18field.c"
    # 1277 "18field.c"
    # 1270 "18field.c"
    if(self->mQuote) {
        # 1271 "18field.c"
        calling_fun_304=(_Bool)0;
    }
    else {
        # 1274 "18field.c"
        calling_fun_304=operator_overload_fun2(type_302,fun_name_303,left_value_296,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_298,0), "18field.c", 1274, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_298,1), "18field.c", 1274, 12)),info);
    }
    # 1340 "18field.c"
    # 1277 "18field.c"
    if(_if_conditional366=!calling_fun_304,    _if_conditional366) {
        # 1278 "18field.c"
        come_value_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value349=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1278, "CVALUE"))));
        come_call_finalizer3(right_value349,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1280 "18field.c"
        buf_306=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value351=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value350=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1280, "buffer"))))))));
        come_call_finalizer3(right_value350,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value351,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 1282 "18field.c"
        buffer_append_str(buf_306,left_value_296->c_value);
        # 1288 "18field.c"
        for(        o2_saved_307=(struct list$1CVALUEph*)come_increment_ref_count((array_num_298)),it_308=list$1CVALUEph_begin((o2_saved_307));        !list$1CVALUEph_end((o2_saved_307));        it_308=list$1CVALUEph_next((o2_saved_307))        ){
            # 1285 "18field.c"
            buffer_append_str(buf_306,((char*)(right_value352=xsprintf("[%s]",it_308->c_value))));
            right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_307,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 1288 "18field.c"
        left_value_code_309=(char*)come_increment_ref_count(((char*)(right_value353=buffer_to_string(buf_306))));
        right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1290 "18field.c"
        __dec_obj146=come_value_305->c_value;
        come_value_305->c_value=(char*)come_increment_ref_count(((char*)(right_value354=xsprintf("%s",left_value_code_309))));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1292 "18field.c"
        result_type_310=(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_clone(left_type_297))));
        come_call_finalizer3(right_value355,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1298 "18field.c"
        # 1294 "18field.c"
        if(result_type_310->mOriginalLoadVarType->v1) {
            # 1295 "18field.c"
            __dec_obj147=result_type_310;
            result_type_310=(struct sType*)come_increment_ref_count(result_type_310->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 1332 "18field.c"
        # 1298 "18field.c"
        if(_if_conditional368=list$1sNodeph_length(result_type_310->mArrayNum)>0,        _if_conditional368) {
            # 1299 "18field.c"
            n_311=list$1sNodeph_length(result_type_310->mArrayNum)-list$1CVALUEph_length(array_num_298);
            # 1321 "18field.c"
            # 1301 "18field.c"
            if(_if_conditional369=n_311==0,            _if_conditional369) {
                # 1302 "18field.c"
                __dec_obj148=result_type_310;
                result_type_310=(struct sType*)come_increment_ref_count(((struct sType*)(right_value356=sType_clone(left_type_297))));
                come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value356,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1306 "18field.c"
                # 1303 "18field.c"
                if(left_type_297->mOriginalLoadVarType->v1) {
                    # 1304 "18field.c"
                    __dec_obj149=result_type_310;
                    result_type_310=(struct sType*)come_increment_ref_count(((struct sType*)(right_value357=sType_clone(left_type_297->mOriginalLoadVarType->v1))));
                    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value357,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 1306 "18field.c"
                list$1sNodeph_reset(result_type_310->mArrayNum);
            }
            else {
                # 1321 "18field.c"
                # 1308 "18field.c"
                if(_if_conditional371=n_311>0,                _if_conditional371) {
                    # 1312 "18field.c"
                    for(                    i_312=0;                    i_312<n_311;                    i_312++                    ){
                        # 1310 "18field.c"
                        list$1sNodeph_delete(result_type_310->mArrayNum,-1,-1);
                    }
                }
                else {
                    # 1321 "18field.c"
                    # 1313 "18field.c"
                    if(_if_conditional372=n_311<0,                    _if_conditional372) {
                        # 1314 "18field.c"
                        list$1sNodeph_reset(result_type_310->mArrayNum);
                        # 1315 "18field.c"
                        result_type_310->mPointerNum+=n_311;
                        # 1320 "18field.c"
                        # 1317 "18field.c"
                        if(_if_conditional373=result_type_310->mPointerNum<0,                        _if_conditional373) {
                            # 1318 "18field.c"
                            result_type_310->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            # 1330 "18field.c"
            # 1323 "18field.c"
            if(_if_conditional374=result_type_310->mPointerNum>0,            _if_conditional374) {
                # 1324 "18field.c"
                result_type_310->mPointerNum-=list$1CVALUEph_length(array_num_298);
                # 1329 "18field.c"
                # 1326 "18field.c"
                if(_if_conditional375=result_type_310->mPointerNum<0,                _if_conditional375) {
                    # 1327 "18field.c"
                    result_type_310->mPointerNum=0;
                }
            }
        }
        # 1332 "18field.c"
        __dec_obj150=come_value_305->type;
        come_value_305->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_clone(result_type_310))));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value358,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1333 "18field.c"
        come_value_305->var=((void*)0);
        # 1335 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_305));
        # 1337 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_305->c_value);
        come_call_finalizer3(come_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_309 = come_decrement_ref_count2(left_value_code_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1340 "18field.c"
    __result190__ = (_Bool)1;
    come_call_finalizer3(left_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_298,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_302,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result190__;
    come_call_finalizer3(left_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_298,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_302,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1346 "18field.c"
    __result191__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result191__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1351 "18field.c"
    err_msg(info,"parse_method_call is failed");
    # 1352 "18field.c"
    exit(2);
    # 1354 "18field.c"
    __result192__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result192__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional28;
_Bool range_array_313;
char* p_314;
int sline_315;
_Bool _if_conditional376;
_Bool no_comma_316;
_Bool no_output_err_317;
_Bool no_output_come_code_318;
void* right_value359;
struct sNode* exp_319;
_Bool _if_conditional377;
_Bool _if_conditional378;
_Bool quote_320;
_Bool _if_conditional379;
void* right_value360;
void* right_value361;
struct list$1sNodeph* array_num_321;
void* right_value362;
struct sNode* node2_322;
_Bool _if_conditional382;
void* right_value366;
struct sNode* node3_326;
void* right_value367;
void* right_value368;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value373;
struct sNode* __dec_obj157;
_Bool _if_conditional392;
_Bool quote_328;
_Bool _if_conditional393;
_Bool range_329;
void* right_value374;
void* right_value375;
struct list$1sNodeph* array_num_330;
_Bool _while_condtional29;
_Bool range_array2_331;
char* p_332;
int sline_333;
_Bool _if_conditional394;
_Bool no_comma_334;
_Bool no_output_err_335;
_Bool no_output_come_code_336;
void* right_value376;
struct sNode* exp_337;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value377;
struct sNode* node2_338;
_Bool _if_conditional398;
_Bool break_guard_339;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value378;
struct sNode* right_node_340;
void* right_value379;
void* right_value380;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value386;
struct sNode* __dec_obj162;
void* right_value387;
void* right_value388;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value393;
struct sNode* __dec_obj166;
_Bool _if_conditional422;
_Bool no_comma_343;
void* right_value394;
struct sNode* begin_344;
void* right_value395;
struct sNode* end_345;
void* right_value396;
void* right_value397;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value403;
struct sNode* __dec_obj171;
_Bool _if_conditional433;
void* right_value404;
void* right_value405;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value409;
struct sNode* __dec_obj174;
_Bool _if_conditional441;
void* right_value410;
void* right_value411;
struct sNode* _inf_value7;
struct sNullableNode* _inf_obj_value7;
void* right_value415;
struct sNode* __dec_obj177;
_Bool _if_conditional449;
_Bool _if_conditional450;
void* right_value416;
void* right_value417;
void* right_value418;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value422;
struct sNode* __dec_obj180;
void* right_value423;
char* field_name_350;
_Bool parse_method_generics_type_351;
char* p_352;
int sline_353;
_Bool _if_conditional458;
_Bool _if_conditional459;
void* right_value424;
char* word_354;
_Bool _if_conditional460;
_Bool _if_conditional461;
void* right_value425;
struct sNode* right_node_355;
void* right_value426;
void* right_value427;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* right_value433;
struct sNode* __dec_obj185;
_Bool _if_conditional472;
_Bool _if_conditional473;
void* right_value434;
void* right_value435;
struct sNode* __dec_obj186;
_Bool _if_conditional474;
void* right_value436;
void* right_value437;
struct sNode* __dec_obj187;
void* right_value438;
void* right_value439;
struct sNode* __dec_obj188;
void* right_value440;
void* right_value441;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* right_value446;
struct sNode* __dec_obj192;
void* right_value447;
struct sNode* node2_358;
_Bool _if_conditional483;
struct sNode* __dec_obj193;
struct sNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_313, 0, sizeof(_Bool));
memset(&p_314, 0, sizeof(char*));
memset(&sline_315, 0, sizeof(int));
memset(&no_comma_316, 0, sizeof(_Bool));
memset(&no_output_err_317, 0, sizeof(_Bool));
memset(&no_output_come_code_318, 0, sizeof(_Bool));
right_value359 = (void*)0;
memset(&exp_319, 0, sizeof(struct sNode*));
memset(&quote_320, 0, sizeof(_Bool));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&array_num_321, 0, sizeof(struct list$1sNodeph*));
right_value362 = (void*)0;
memset(&node2_322, 0, sizeof(struct sNode*));
right_value366 = (void*)0;
memset(&node3_326, 0, sizeof(struct sNode*));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value373 = (void*)0;
memset(&quote_328, 0, sizeof(_Bool));
memset(&range_329, 0, sizeof(_Bool));
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&array_num_330, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_331, 0, sizeof(_Bool));
memset(&p_332, 0, sizeof(char*));
memset(&sline_333, 0, sizeof(int));
memset(&no_comma_334, 0, sizeof(_Bool));
memset(&no_output_err_335, 0, sizeof(_Bool));
memset(&no_output_come_code_336, 0, sizeof(_Bool));
right_value376 = (void*)0;
memset(&exp_337, 0, sizeof(struct sNode*));
right_value377 = (void*)0;
memset(&node2_338, 0, sizeof(struct sNode*));
memset(&break_guard_339, 0, sizeof(_Bool));
right_value378 = (void*)0;
memset(&right_node_340, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value393 = (void*)0;
memset(&no_comma_343, 0, sizeof(_Bool));
right_value394 = (void*)0;
memset(&begin_344, 0, sizeof(struct sNode*));
right_value395 = (void*)0;
memset(&end_345, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&field_name_350, 0, sizeof(char*));
memset(&parse_method_generics_type_351, 0, sizeof(_Bool));
memset(&p_352, 0, sizeof(char*));
memset(&sline_353, 0, sizeof(int));
right_value424 = (void*)0;
memset(&word_354, 0, sizeof(char*));
right_value425 = (void*)0;
memset(&right_node_355, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
memset(&node2_358, 0, sizeof(struct sNode*));
    # 1619 "18field.c"
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        # 1360 "18field.c"
        range_array_313=(_Bool)0;
        # 1389 "18field.c"
        {
            # 1362 "18field.c"
            p_314=info->p;
            # 1363 "18field.c"
            sline_315=info->sline;
            # 1385 "18field.c"
            # 1365 "18field.c"
            if(_if_conditional376=*info->p==91,            _if_conditional376) {
                # 1366 "18field.c"
                info->p++;
                # 1367 "18field.c"
                skip_spaces_and_lf(info);
                # 1369 "18field.c"
                no_comma_316=info->no_comma;
                # 1370 "18field.c"
                no_output_err_317=info->no_output_err;
                # 1371 "18field.c"
                no_output_come_code_318=info->no_output_come_code;
                # 1372 "18field.c"
                info->no_output_err=(_Bool)1;
                # 1373 "18field.c"
                info->no_comma=(_Bool)1;
                # 1374 "18field.c"
                info->no_output_come_code=(_Bool)1;
                # 1375 "18field.c"
                exp_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=expression_v13(info))));
                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1376 "18field.c"
                info->no_comma=no_comma_316;
                # 1377 "18field.c"
                info->no_output_err=no_output_err_317;
                # 1378 "18field.c"
                info->no_output_come_code=no_output_come_code_318;
                # 1383 "18field.c"
                # 1380 "18field.c"
                if(_if_conditional377=*info->p==46&&*(info->p+1)==46,                _if_conditional377) {
                    # 1381 "18field.c"
                    range_array_313=(_Bool)1;
                }
                if(exp_319) { exp_319 = come_decrement_ref_count2(exp_319, ((struct sNode*)exp_319)->finalize, ((struct sNode*)exp_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1385 "18field.c"
            info->p=p_314;
            # 1386 "18field.c"
            info->sline=sline_315;
        }
        # 1617 "18field.c"
        # 1389 "18field.c"
        if(_if_conditional378=range_array_313&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional378) {
            # 1390 "18field.c"
            quote_320=*info->p==92;
            # 1394 "18field.c"
            # 1391 "18field.c"
            if(quote_320) {
                # 1392 "18field.c"
                info->p++;
            }
            # 1394 "18field.c"
            info->p++;
            # 1395 "18field.c"
            skip_spaces_and_lf(info);
            # 1397 "18field.c"
            array_num_321=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value361=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value360=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1397, "list$1sNodeph"))))))));
            come_call_finalizer3(right_value360,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value361,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1399 "18field.c"
            skip_pointer_attribute(info);
            # 1401 "18field.c"
            node2_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=expression_v13(info))));
            if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1403 "18field.c"
            list$1sNodeph_push_back(array_num_321,(struct sNode*)come_increment_ref_count(node2_322));
            # 1418 "18field.c"
            # 1405 "18field.c"
            if(_if_conditional382=*info->p==46&&*(info->p+1)==46,            _if_conditional382) {
                # 1406 "18field.c"
                info->p+=2;
                # 1407 "18field.c"
                skip_spaces_and_lf(info);
                # 1409 "18field.c"
                skip_pointer_attribute(info);
                # 1411 "18field.c"
                node3_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=expression_v13(info))));
                if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1413 "18field.c"
                list$1sNodeph_push_back(array_num_321,(struct sNode*)come_increment_ref_count(node3_326));
                # 1415 "18field.c"
                expected_next_character(93,info);
                if(node3_326) { node3_326 = come_decrement_ref_count2(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1418 "18field.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1418, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value368=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value367=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1418, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_321),quote_320,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj157=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=_inf_value2)));
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(right_value367,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value368,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer3(array_num_321,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_322) { node2_322 = come_decrement_ref_count2(node2_322, ((struct sNode*)node2_322)->finalize, ((struct sNode*)node2_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1617 "18field.c"
            # 1420 "18field.c"
            if(_if_conditional392=!range_array_313&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional392) {
                # 1421 "18field.c"
                quote_328=*info->p==92;
                # 1426 "18field.c"
                # 1422 "18field.c"
                if(quote_328) {
                    # 1423 "18field.c"
                    info->p++;
                }
                # 1426 "18field.c"
                range_329=(_Bool)0;
                # 1427 "18field.c"
                array_num_330=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value375=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value374=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1427, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value374,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value375,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1485 "18field.c"
                while(_while_condtional29=1,                _while_condtional29) {
                    # 1429 "18field.c"
                    range_array2_331=(_Bool)0;
                    # 1458 "18field.c"
                    {
                        # 1431 "18field.c"
                        p_332=info->p;
                        # 1432 "18field.c"
                        sline_333=info->sline;
                        # 1454 "18field.c"
                        # 1434 "18field.c"
                        if(_if_conditional394=*info->p==91,                        _if_conditional394) {
                            # 1435 "18field.c"
                            info->p++;
                            # 1436 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1438 "18field.c"
                            no_comma_334=info->no_comma;
                            # 1439 "18field.c"
                            no_output_err_335=info->no_output_err;
                            # 1440 "18field.c"
                            no_output_come_code_336=info->no_output_come_code;
                            # 1441 "18field.c"
                            info->no_output_err=(_Bool)1;
                            # 1442 "18field.c"
                            info->no_comma=(_Bool)1;
                            # 1443 "18field.c"
                            info->no_output_come_code=(_Bool)1;
                            # 1444 "18field.c"
                            exp_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=expression_v13(info))));
                            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1445 "18field.c"
                            info->no_comma=no_comma_334;
                            # 1446 "18field.c"
                            info->no_output_err=no_output_err_335;
                            # 1447 "18field.c"
                            info->no_output_come_code=no_output_come_code_336;
                            # 1452 "18field.c"
                            # 1449 "18field.c"
                            if(_if_conditional395=*info->p==46&&*(info->p+1)==46,                            _if_conditional395) {
                                # 1450 "18field.c"
                                range_array2_331=(_Bool)1;
                            }
                            if(exp_337) { exp_337 = come_decrement_ref_count2(exp_337, ((struct sNode*)exp_337)->finalize, ((struct sNode*)exp_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 1454 "18field.c"
                        info->p=p_332;
                        # 1455 "18field.c"
                        info->sline=sline_333;
                    }
                    # 1483 "18field.c"
                    # 1458 "18field.c"
                    if(range_array2_331) {
                        # 1459 "18field.c"
                        break;
                    }
                    else {
                        # 1483 "18field.c"
                        # 1461 "18field.c"
                        if(_if_conditional397=*info->p==91,                        _if_conditional397) {
                            # 1462 "18field.c"
                            info->p++;
                            # 1463 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1465 "18field.c"
                            skip_pointer_attribute(info);
                            # 1467 "18field.c"
                            node2_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=expression_v13(info))));
                            if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1469 "18field.c"
                            list$1sNodeph_push_back(array_num_330,(struct sNode*)come_increment_ref_count(node2_338));
                            # 1479 "18field.c"
                            # 1471 "18field.c"
                            if(_if_conditional398=*info->p==93,                            _if_conditional398) {
                                # 1472 "18field.c"
                                info->p++;
                                # 1473 "18field.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1476 "18field.c"
                                err_msg(info,"require ] character");
                                # 1477 "18field.c"
                                exit(2);
                            }
                            if(node2_338) { node2_338 = come_decrement_ref_count2(node2_338, ((struct sNode*)node2_338)->finalize, ((struct sNode*)node2_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1481 "18field.c"
                            break;
                        }
                    }
                }
                # 1485 "18field.c"
                break_guard_339=(_Bool)0;
                # 1492 "18field.c"
                # 1486 "18field.c"
                if(_if_conditional399=*info->p==63&&*(info->p+1)==63,                _if_conditional399) {
                    # 1487 "18field.c"
                    info->p+=2;
                    # 1488 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1489 "18field.c"
                    break_guard_339=(_Bool)1;
                }
                # 1507 "18field.c"
                # 1492 "18field.c"
                if(_if_conditional400=*info->p==61&&*(info->p+1)!=61,                _if_conditional400) {
                    # 1493 "18field.c"
                    info->p++;
                    # 1494 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1496 "18field.c"
                    parse_sharp_v5(info);
                    # 1498 "18field.c"
                    right_node_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=expression_v13(info))));
                    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1500 "18field.c"
                    parse_sharp_v5(info);
                    # 1502 "18field.c"
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1502, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value380=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value379=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1502, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_340),(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=_inf_value3)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value379,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value380,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_340) { right_node_340 = come_decrement_ref_count2(right_node_340, ((struct sNode*)right_node_340)->finalize, ((struct sNode*)right_node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1505 "18field.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1505, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value388=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value387=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1505, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,break_guard_339,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj166=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=_inf_value4)));
                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value387,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value388,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer3(array_num_330,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 1617 "18field.c"
                # 1508 "18field.c"
                if(_if_conditional422=*info->p==33&&*(info->p+1)==123,                _if_conditional422) {
                    # 1509 "18field.c"
                    info->p+=2;
                    # 1510 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1512 "18field.c"
                    no_comma_343=info->no_comma;
                    # 1513 "18field.c"
                    info->no_comma=(_Bool)1;
                    # 1514 "18field.c"
                    begin_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=expression_v13(info))));
                    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1517 "18field.c"
                    info->no_comma=no_comma_343;
                    # 1517 "18field.c"
                    expected_next_character(44,info);
                    # 1519 "18field.c"
                    end_345=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=expression_v13(info))));
                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1521 "18field.c"
                    expected_next_character(125,info);
                    # 1523 "18field.c"
                    parse_sharp_v5(info);
                    # 1525 "18field.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1525, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value397=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value396=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1525, "sRangeCheckNode")))),node,begin_344,end_345,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj171=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=_inf_value5)));
                    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value396,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value397,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_344) { begin_344 = come_decrement_ref_count2(begin_344, ((struct sNode*)begin_344)->finalize, ((struct sNode*)begin_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_345) { end_345 = come_decrement_ref_count2(end_345, ((struct sNode*)end_345)->finalize, ((struct sNode*)end_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1617 "18field.c"
                    # 1527 "18field.c"
                    if(_if_conditional433=*info->p==33&&*(info->p+1)!=61,                    _if_conditional433) {
                        # 1528 "18field.c"
                        info->p++;
                        # 1529 "18field.c"
                        skip_spaces_and_lf(info);
                        # 1531 "18field.c"
                        parse_sharp_v5(info);
                        # 1533 "18field.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1533, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value405=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value404=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1533, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj174=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=_inf_value6)));
                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer3(right_value404,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value405,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        # 1617 "18field.c"
                        # 1535 "18field.c"
                        if(_if_conditional441=*info->p==63&&*(info->p+1)==63,                        _if_conditional441) {
                            # 1536 "18field.c"
                            info->p+=2;
                            # 1537 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1539 "18field.c"
                            parse_sharp_v5(info);
                            # 1541 "18field.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1541, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullableNode*)(right_value411=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value410=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1541, "sNullableNode")))),node,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullableNode_finalize;
                            _inf_value7->clone=(void*)sNullableNode_clone;
                            _inf_value7->compile=(void*)sNullableNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNullableNode_terminated;
                            _inf_value7->kind=(void*)sNullableNode_kind;
                            __dec_obj177=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=_inf_value7)));
                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer3(right_value410,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value411,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        else {
                            # 1617 "18field.c"
                            # 1543 "18field.c"
                            if(_if_conditional449=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                            _if_conditional449) {
                                # 1553 "18field.c"
                                # 1544 "18field.c"
                                if(_if_conditional450=*info->p==46,                                _if_conditional450) {
                                    # 1545 "18field.c"
                                    info->p++;
                                    # 1546 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 1549 "18field.c"
                                    info->p+=2;
                                    # 1550 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1553 "18field.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1553, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value418=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value416=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1553, "sNullCheckNode")))),((struct sNode*)(right_value417=sNode_clone(node))),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value8->clone=(void*)sNullCheckNode_clone;
                                _inf_value8->compile=(void*)sNullCheckNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                                _inf_value8->kind=(void*)sNullCheckNode_kind;
                                __dec_obj180=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=_inf_value8)));
                                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer3(right_value416,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer3(right_value418,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1555 "18field.c"
                                parse_sharp_v5(info);
                                # 1557 "18field.c"
                                field_name_350=(char*)come_increment_ref_count(((char*)(right_value423=parse_word(info))));
                                right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1559 "18field.c"
                                parse_sharp_v5(info);
                                # 1561 "18field.c"
                                parse_method_generics_type_351=(_Bool)0;
                                # 1583 "18field.c"
                                {
                                    # 1563 "18field.c"
                                    p_352=info->p;
                                    # 1564 "18field.c"
                                    sline_353=info->sline;
                                    # 1579 "18field.c"
                                    # 1566 "18field.c"
                                    if(_if_conditional458=*info->p==60,                                    _if_conditional458) {
                                        # 1567 "18field.c"
                                        info->p++;
                                        # 1568 "18field.c"
                                        skip_spaces_and_lf(info);
                                        # 1577 "18field.c"
                                        # 1570 "18field.c"
                                        if(_if_conditional459=xisalpha(*info->p)||*info->p==95,                                        _if_conditional459) {
                                            # 1571 "18field.c"
                                            word_354=(char*)come_increment_ref_count(((char*)(right_value424=parse_word(info))));
                                            right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 1576 "18field.c"
                                            # 1573 "18field.c"
                                            if(_if_conditional460=is_type_name(word_354,info),                                            _if_conditional460) {
                                                # 1574 "18field.c"
                                                parse_method_generics_type_351=(_Bool)1;
                                            }
                                            word_354 = come_decrement_ref_count2(word_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 1579 "18field.c"
                                    info->p=p_352;
                                    # 1580 "18field.c"
                                    info->sline=sline_353;
                                }
                                # 1607 "18field.c"
                                # 1583 "18field.c"
                                if(_if_conditional461=*info->p==61&&*(info->p+1)!=61,                                _if_conditional461) {
                                    # 1584 "18field.c"
                                    info->p++;
                                    # 1585 "18field.c"
                                    skip_spaces_and_lf(info);
                                    # 1587 "18field.c"
                                    parse_sharp_v5(info);
                                    # 1589 "18field.c"
                                    right_node_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=expression_v13(info))));
                                    if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1591 "18field.c"
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1591, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreFieldNode*)(right_value427=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value426=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1591, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_355),(char*)come_increment_ref_count(field_name_350),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value9->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value9->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sStoreFieldNode_terminated;
                                    _inf_value9->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj185=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=_inf_value9)));
                                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer3(right_value426,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value427,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    if(right_node_355) { right_node_355 = come_decrement_ref_count2(right_node_355, ((struct sNode*)right_node_355)->finalize, ((struct sNode*)right_node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1607 "18field.c"
                                    # 1593 "18field.c"
                                    if(_if_conditional472=*info->p==40||*info->p==123||parse_method_generics_type_351||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                    _if_conditional472) {
                                        # 1603 "18field.c"
                                        # 1594 "18field.c"
                                        if(_if_conditional473=string_operator_equals(field_name_350,"if"),                                        _if_conditional473) {
                                            # 1595 "18field.c"
                                            __dec_obj186=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(node)))),info))));
                                            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            # 1603 "18field.c"
                                            # 1597 "18field.c"
                                            if(_if_conditional474=string_operator_equals(field_name_350,"elif"),                                            _if_conditional474) {
                                                # 1598 "18field.c"
                                                __dec_obj187=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=sNode_clone(node)))),info))));
                                                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                # 1601 "18field.c"
                                                __dec_obj188=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_350),info))));
                                                if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        # 1605 "18field.c"
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1605, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sLoadFieldNode*)(right_value441=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value440=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1605, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_350),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value10->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value10->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sLoadFieldNode_terminated;
                                        _inf_value10->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj192=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=_inf_value10)));
                                        if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer3(right_value440,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value441,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                }
                                field_name_350 = come_decrement_ref_count2(field_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 1609 "18field.c"
                                node2_358=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1615 "18field.c"
                                # 1611 "18field.c"
                                if(_if_conditional483=node2_358==((void*)0),                                _if_conditional483) {
                                    # 1612 "18field.c"
                                    if(node2_358) { node2_358 = come_decrement_ref_count2(node2_358, ((struct sNode*)node2_358)->finalize, ((struct sNode*)node2_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                # 1615 "18field.c"
                                __dec_obj193=node;
                                node=(struct sNode*)come_increment_ref_count(node2_358);
                                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_358) { node2_358 = come_decrement_ref_count2(node2_358, ((struct sNode*)node2_358)->finalize, ((struct sNode*)node2_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    # 1619 "18field.c"
    __result212__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result212__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional380;
void* right_value363;
struct list_item$1sNodeph* litem_323;
struct sNode* __dec_obj151;
_Bool _if_conditional381;
void* right_value364;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj152;
void* right_value365;
struct list_item$1sNodeph* litem_325;
struct sNode* __dec_obj153;
struct list$1sNodeph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
memset(&litem_323, 0, sizeof(struct list_item$1sNodeph*));
right_value364 = (void*)0;
memset(&litem_324, 0, sizeof(struct list_item$1sNodeph*));
right_value365 = (void*)0;
memset(&litem_325, 0, sizeof(struct list_item$1sNodeph*));
                # 257 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional380=self->len==0,                _if_conditional380) {
                    # 227 "./neo-c.h"
                    litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value363=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value363,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_323->prev=((void*)0);
                    # 230 "./neo-c.h"
                    litem_323->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj151=litem_323->item;
                    litem_323->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                    # 233 "./neo-c.h"
                    self->tail=litem_323;
                    # 234 "./neo-c.h"
                    self->head=litem_323;
                }
                else {
                    # 257 "./neo-c.h"
                    # 236 "./neo-c.h"
                    if(_if_conditional381=self->len==1,                    _if_conditional381) {
                        # 237 "./neo-c.h"
                        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value364=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value364,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_324->prev=self->head;
                        # 240 "./neo-c.h"
                        litem_324->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj152=litem_324->item;
                        litem_324->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                        # 243 "./neo-c.h"
                        self->tail=litem_324;
                        # 244 "./neo-c.h"
                        self->head->next=litem_324;
                    }
                    else {
                        # 247 "./neo-c.h"
                        litem_325=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value365=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 247, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value365,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 249 "./neo-c.h"
                        litem_325->prev=self->tail;
                        # 250 "./neo-c.h"
                        litem_325->next=((void*)0);
                        # 251 "./neo-c.h"
                        __dec_obj153=litem_325->item;
                        litem_325->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                        # 253 "./neo-c.h"
                        self->tail->next=litem_325;
                        # 254 "./neo-c.h"
                        self->tail=litem_325;
                    }
                }
                # 257 "./neo-c.h"
                self->len++;
                # 259 "./neo-c.h"
                __result193__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result193__;
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
                if(_if_conditional383=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional383) {
                    # 0 "sLoadRangeArrayNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sLoadRangeArrayNode_finalize"
                # 1 "sLoadRangeArrayNode_finalize"
                if(_if_conditional384=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional384) {
                    # 1 "sLoadRangeArrayNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sLoadRangeArrayNode_finalize"
                # 2 "sLoadRangeArrayNode_finalize"
                if(_if_conditional385=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional385) {
                    # 2 "sLoadRangeArrayNode_finalize"
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional386;
struct sLoadRangeArrayNode* __result194__;
void* right_value369;
struct sLoadRangeArrayNode* result_327;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value370;
char* __dec_obj154;
_Bool _if_conditional389;
void* right_value371;
struct sNode* __dec_obj155;
_Bool _if_conditional390;
void* right_value372;
struct list$1sNodeph* __dec_obj156;
_Bool _if_conditional391;
struct sLoadRangeArrayNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value369 = (void*)0;
memset(&result_327, 0, sizeof(struct sLoadRangeArrayNode*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
                # 3 "sLoadRangeArrayNode_clone"
                # 2 "sLoadRangeArrayNode_clone"
                if(_if_conditional386=self==(void*)0,                _if_conditional386) {
                    # 2 "sLoadRangeArrayNode_clone"
                    __result194__ = __result_obj__ = (void*)0;
                    return __result194__;
                }
                # 3 "sLoadRangeArrayNode_clone"
                result_327=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value369=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer3(right_value369,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sLoadRangeArrayNode_clone"
                # 4 "sLoadRangeArrayNode_clone"
                if(_if_conditional387=self!=((void*)0),                _if_conditional387) {
                    # 4 "sLoadRangeArrayNode_clone"
                    result_327->sline=self->sline;
                }
                # 6 "sLoadRangeArrayNode_clone"
                # 5 "sLoadRangeArrayNode_clone"
                if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional388) {
                    # 5 "sLoadRangeArrayNode_clone"
                    __dec_obj154=result_327->sname;
                    result_327->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(self->sname))));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sLoadRangeArrayNode_clone"
                # 6 "sLoadRangeArrayNode_clone"
                if(_if_conditional389=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional389) {
                    # 6 "sLoadRangeArrayNode_clone"
                    __dec_obj155=result_327->mLeft;
                    result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=sNode_clone(self->mLeft))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sLoadRangeArrayNode_clone"
                # 7 "sLoadRangeArrayNode_clone"
                if(_if_conditional390=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional390) {
                    # 7 "sLoadRangeArrayNode_clone"
                    __dec_obj156=result_327->mArrayNum;
                    result_327->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value372=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj156,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value372,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sLoadRangeArrayNode_clone"
                # 8 "sLoadRangeArrayNode_clone"
                if(_if_conditional391=self!=((void*)0),                _if_conditional391) {
                    # 8 "sLoadRangeArrayNode_clone"
                    result_327->mQuote=self->mQuote;
                }
                # 9 "sLoadRangeArrayNode_clone"
                __result195__ = __result_obj__ = result_327;
                come_call_finalizer3(result_327,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result195__;
                come_call_finalizer3(result_327,sLoadRangeArrayNode_finalize, 0, 0, 0, 0, (void*)0);
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
                        if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional401) {
                            # 0 "sStoreArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sStoreArrayNode_finalize"
                        # 1 "sStoreArrayNode_finalize"
                        if(_if_conditional402=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional402) {
                            # 1 "sStoreArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sStoreArrayNode_finalize"
                        # 2 "sStoreArrayNode_finalize"
                        if(_if_conditional403=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional403) {
                            # 2 "sStoreArrayNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 4 "sStoreArrayNode_finalize"
                        # 3 "sStoreArrayNode_finalize"
                        if(_if_conditional404=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional404) {
                            # 3 "sStoreArrayNode_finalize"
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional405;
struct sStoreArrayNode* __result196__;
void* right_value381;
struct sStoreArrayNode* result_341;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value382;
char* __dec_obj158;
_Bool _if_conditional408;
void* right_value383;
struct sNode* __dec_obj159;
_Bool _if_conditional409;
void* right_value384;
struct sNode* __dec_obj160;
_Bool _if_conditional410;
void* right_value385;
struct list$1sNodeph* __dec_obj161;
_Bool _if_conditional411;
struct sStoreArrayNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_341, 0, sizeof(struct sStoreArrayNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
                        # 3 "sStoreArrayNode_clone"
                        # 2 "sStoreArrayNode_clone"
                        if(_if_conditional405=self==(void*)0,                        _if_conditional405) {
                            # 2 "sStoreArrayNode_clone"
                            __result196__ = __result_obj__ = (void*)0;
                            return __result196__;
                        }
                        # 3 "sStoreArrayNode_clone"
                        result_341=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value381=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer3(right_value381,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sStoreArrayNode_clone"
                        # 4 "sStoreArrayNode_clone"
                        if(_if_conditional406=self!=((void*)0),                        _if_conditional406) {
                            # 4 "sStoreArrayNode_clone"
                            result_341->sline=self->sline;
                        }
                        # 6 "sStoreArrayNode_clone"
                        # 5 "sStoreArrayNode_clone"
                        if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional407) {
                            # 5 "sStoreArrayNode_clone"
                            __dec_obj158=result_341->sname;
                            result_341->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sStoreArrayNode_clone"
                        # 6 "sStoreArrayNode_clone"
                        if(_if_conditional408=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional408) {
                            # 6 "sStoreArrayNode_clone"
                            __dec_obj159=result_341->mLeft;
                            result_341->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mLeft))));
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sStoreArrayNode_clone"
                        # 7 "sStoreArrayNode_clone"
                        if(_if_conditional409=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional409) {
                            # 7 "sStoreArrayNode_clone"
                            __dec_obj160=result_341->mRight;
                            result_341->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(self->mRight))));
                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sStoreArrayNode_clone"
                        # 8 "sStoreArrayNode_clone"
                        if(_if_conditional410=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional410) {
                            # 8 "sStoreArrayNode_clone"
                            __dec_obj161=result_341->mArrayNum;
                            result_341->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value385=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj161,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value385,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sStoreArrayNode_clone"
                        # 9 "sStoreArrayNode_clone"
                        if(_if_conditional411=self!=((void*)0),                        _if_conditional411) {
                            # 9 "sStoreArrayNode_clone"
                            result_341->mQuote=self->mQuote;
                        }
                        # 10 "sStoreArrayNode_clone"
                        __result197__ = __result_obj__ = result_341;
                        come_call_finalizer3(result_341,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result197__;
                        come_call_finalizer3(result_341,sStoreArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLoadArrayNode_finalize"
                        # 0 "sLoadArrayNode_finalize"
                        if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional412) {
                            # 0 "sLoadArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sLoadArrayNode_finalize"
                        # 1 "sLoadArrayNode_finalize"
                        if(_if_conditional413=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional413) {
                            # 1 "sLoadArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sLoadArrayNode_finalize"
                        # 2 "sLoadArrayNode_finalize"
                        if(_if_conditional414=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional414) {
                            # 2 "sLoadArrayNode_finalize"
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional415;
struct sLoadArrayNode* __result198__;
void* right_value389;
struct sLoadArrayNode* result_342;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value390;
char* __dec_obj163;
_Bool _if_conditional418;
void* right_value391;
struct sNode* __dec_obj164;
_Bool _if_conditional419;
void* right_value392;
struct list$1sNodeph* __dec_obj165;
_Bool _if_conditional420;
_Bool _if_conditional421;
struct sLoadArrayNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_342, 0, sizeof(struct sLoadArrayNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
                        # 3 "sLoadArrayNode_clone"
                        # 2 "sLoadArrayNode_clone"
                        if(_if_conditional415=self==(void*)0,                        _if_conditional415) {
                            # 2 "sLoadArrayNode_clone"
                            __result198__ = __result_obj__ = (void*)0;
                            return __result198__;
                        }
                        # 3 "sLoadArrayNode_clone"
                        result_342=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value389=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer3(right_value389,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLoadArrayNode_clone"
                        # 4 "sLoadArrayNode_clone"
                        if(_if_conditional416=self!=((void*)0),                        _if_conditional416) {
                            # 4 "sLoadArrayNode_clone"
                            result_342->sline=self->sline;
                        }
                        # 6 "sLoadArrayNode_clone"
                        # 5 "sLoadArrayNode_clone"
                        if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional417) {
                            # 5 "sLoadArrayNode_clone"
                            __dec_obj163=result_342->sname;
                            result_342->sname=(char*)come_increment_ref_count(((char*)(right_value390=string_clone(self->sname))));
                            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sLoadArrayNode_clone"
                        # 6 "sLoadArrayNode_clone"
                        if(_if_conditional418=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional418) {
                            # 6 "sLoadArrayNode_clone"
                            __dec_obj164=result_342->mLeft;
                            result_342->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(self->mLeft))));
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sLoadArrayNode_clone"
                        # 7 "sLoadArrayNode_clone"
                        if(_if_conditional419=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional419) {
                            # 7 "sLoadArrayNode_clone"
                            __dec_obj165=result_342->mArrayNum;
                            result_342->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value392=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj165,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value392,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sLoadArrayNode_clone"
                        # 8 "sLoadArrayNode_clone"
                        if(_if_conditional420=self!=((void*)0),                        _if_conditional420) {
                            # 8 "sLoadArrayNode_clone"
                            result_342->mQuote=self->mQuote;
                        }
                        # 10 "sLoadArrayNode_clone"
                        # 9 "sLoadArrayNode_clone"
                        if(_if_conditional421=self!=((void*)0),                        _if_conditional421) {
                            # 9 "sLoadArrayNode_clone"
                            result_342->mBreakGuard=self->mBreakGuard;
                        }
                        # 10 "sLoadArrayNode_clone"
                        __result199__ = __result_obj__ = result_342;
                        come_call_finalizer3(result_342,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result199__;
                        come_call_finalizer3(result_342,sLoadArrayNode_finalize, 0, 0, 0, 0, (void*)0);
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
                        if(_if_conditional423=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional423) {
                            # 0 "sRangeCheckNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sRangeCheckNode_finalize"
                        # 1 "sRangeCheckNode_finalize"
                        if(_if_conditional424=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional424) {
                            # 1 "sRangeCheckNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sRangeCheckNode_finalize"
                        # 2 "sRangeCheckNode_finalize"
                        if(_if_conditional425=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional425) {
                            # 2 "sRangeCheckNode_finalize"
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 4 "sRangeCheckNode_finalize"
                        # 3 "sRangeCheckNode_finalize"
                        if(_if_conditional426=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional426) {
                            # 3 "sRangeCheckNode_finalize"
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional427;
struct sRangeCheckNode* __result200__;
void* right_value398;
struct sRangeCheckNode* result_346;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value399;
char* __dec_obj167;
_Bool _if_conditional430;
void* right_value400;
struct sNode* __dec_obj168;
_Bool _if_conditional431;
void* right_value401;
struct sNode* __dec_obj169;
_Bool _if_conditional432;
void* right_value402;
struct sNode* __dec_obj170;
struct sRangeCheckNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&result_346, 0, sizeof(struct sRangeCheckNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
                        # 3 "sRangeCheckNode_clone"
                        # 2 "sRangeCheckNode_clone"
                        if(_if_conditional427=self==(void*)0,                        _if_conditional427) {
                            # 2 "sRangeCheckNode_clone"
                            __result200__ = __result_obj__ = (void*)0;
                            return __result200__;
                        }
                        # 3 "sRangeCheckNode_clone"
                        result_346=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value398=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer3(right_value398,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sRangeCheckNode_clone"
                        # 4 "sRangeCheckNode_clone"
                        if(_if_conditional428=self!=((void*)0),                        _if_conditional428) {
                            # 4 "sRangeCheckNode_clone"
                            result_346->sline=self->sline;
                        }
                        # 6 "sRangeCheckNode_clone"
                        # 5 "sRangeCheckNode_clone"
                        if(_if_conditional429=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional429) {
                            # 5 "sRangeCheckNode_clone"
                            __dec_obj167=result_346->sname;
                            result_346->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sRangeCheckNode_clone"
                        # 6 "sRangeCheckNode_clone"
                        if(_if_conditional430=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional430) {
                            # 6 "sRangeCheckNode_clone"
                            __dec_obj168=result_346->mLeft;
                            result_346->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=sNode_clone(self->mLeft))));
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sRangeCheckNode_clone"
                        # 7 "sRangeCheckNode_clone"
                        if(_if_conditional431=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional431) {
                            # 7 "sRangeCheckNode_clone"
                            __dec_obj169=result_346->mBegin;
                            result_346->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=sNode_clone(self->mBegin))));
                            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sRangeCheckNode_clone"
                        # 8 "sRangeCheckNode_clone"
                        if(_if_conditional432=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional432) {
                            # 8 "sRangeCheckNode_clone"
                            __dec_obj170=result_346->mEnd;
                            result_346->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(self->mEnd))));
                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sRangeCheckNode_clone"
                        __result201__ = __result_obj__ = result_346;
                        come_call_finalizer3(result_346,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result201__;
                        come_call_finalizer3(result_346,sRangeCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullableNode_finalize(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional442;
_Bool _if_conditional443;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sNullableNode_finalize"
                                # 0 "sNullableNode_finalize"
                                if(_if_conditional442=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional442) {
                                    # 0 "sNullableNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sNullableNode_finalize"
                                # 1 "sNullableNode_finalize"
                                if(_if_conditional443=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional443) {
                                    # 1 "sNullableNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional444;
struct sNullableNode* __result204__;
void* right_value412;
struct sNullableNode* result_348;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value413;
char* __dec_obj175;
_Bool _if_conditional447;
void* right_value414;
struct sNode* __dec_obj176;
_Bool _if_conditional448;
struct sNullableNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value412 = (void*)0;
memset(&result_348, 0, sizeof(struct sNullableNode*));
right_value413 = (void*)0;
right_value414 = (void*)0;
                                # 3 "sNullableNode_clone"
                                # 2 "sNullableNode_clone"
                                if(_if_conditional444=self==(void*)0,                                _if_conditional444) {
                                    # 2 "sNullableNode_clone"
                                    __result204__ = __result_obj__ = (void*)0;
                                    return __result204__;
                                }
                                # 3 "sNullableNode_clone"
                                result_348=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value412=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"))));
                                come_call_finalizer3(right_value412,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sNullableNode_clone"
                                # 4 "sNullableNode_clone"
                                if(_if_conditional445=self!=((void*)0),                                _if_conditional445) {
                                    # 4 "sNullableNode_clone"
                                    result_348->sline=self->sline;
                                }
                                # 6 "sNullableNode_clone"
                                # 5 "sNullableNode_clone"
                                if(_if_conditional446=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional446) {
                                    # 5 "sNullableNode_clone"
                                    __dec_obj175=result_348->sname;
                                    result_348->sname=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(self->sname))));
                                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sNullableNode_clone"
                                # 6 "sNullableNode_clone"
                                if(_if_conditional447=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional447) {
                                    # 6 "sNullableNode_clone"
                                    __dec_obj176=result_348->mLeft;
                                    result_348->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=sNode_clone(self->mLeft))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 8 "sNullableNode_clone"
                                # 7 "sNullableNode_clone"
                                if(_if_conditional448=self!=((void*)0),                                _if_conditional448) {
                                    # 7 "sNullableNode_clone"
                                    result_348->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                # 8 "sNullableNode_clone"
                                __result205__ = __result_obj__ = result_348;
                                come_call_finalizer3(result_348,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result205__;
                                come_call_finalizer3(result_348,sNullableNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional451;
_Bool _if_conditional452;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sNullCheckNode_finalize"
                                    # 0 "sNullCheckNode_finalize"
                                    if(_if_conditional451=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional451) {
                                        # 0 "sNullCheckNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sNullCheckNode_finalize"
                                    # 1 "sNullCheckNode_finalize"
                                    if(_if_conditional452=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional452) {
                                        # 1 "sNullCheckNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional453;
struct sNullCheckNode* __result206__;
void* right_value419;
struct sNullCheckNode* result_349;
_Bool _if_conditional454;
_Bool _if_conditional455;
void* right_value420;
char* __dec_obj178;
_Bool _if_conditional456;
void* right_value421;
struct sNode* __dec_obj179;
_Bool _if_conditional457;
struct sNullCheckNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value419 = (void*)0;
memset(&result_349, 0, sizeof(struct sNullCheckNode*));
right_value420 = (void*)0;
right_value421 = (void*)0;
                                    # 3 "sNullCheckNode_clone"
                                    # 2 "sNullCheckNode_clone"
                                    if(_if_conditional453=self==(void*)0,                                    _if_conditional453) {
                                        # 2 "sNullCheckNode_clone"
                                        __result206__ = __result_obj__ = (void*)0;
                                        return __result206__;
                                    }
                                    # 3 "sNullCheckNode_clone"
                                    result_349=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value419=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                    come_call_finalizer3(right_value419,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sNullCheckNode_clone"
                                    # 4 "sNullCheckNode_clone"
                                    if(_if_conditional454=self!=((void*)0),                                    _if_conditional454) {
                                        # 4 "sNullCheckNode_clone"
                                        result_349->sline=self->sline;
                                    }
                                    # 6 "sNullCheckNode_clone"
                                    # 5 "sNullCheckNode_clone"
                                    if(_if_conditional455=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional455) {
                                        # 5 "sNullCheckNode_clone"
                                        __dec_obj178=result_349->sname;
                                        result_349->sname=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->sname))));
                                        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sNullCheckNode_clone"
                                    # 6 "sNullCheckNode_clone"
                                    if(_if_conditional456=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional456) {
                                        # 6 "sNullCheckNode_clone"
                                        __dec_obj179=result_349->mLeft;
                                        result_349->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=sNode_clone(self->mLeft))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    # 7 "sNullCheckNode_clone"
                                    if(_if_conditional457=self!=((void*)0),                                    _if_conditional457) {
                                        # 7 "sNullCheckNode_clone"
                                        result_349->mOnlyNullCecker=self->mOnlyNullCecker;
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    __result207__ = __result_obj__ = result_349;
                                    come_call_finalizer3(result_349,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result207__;
                                    come_call_finalizer3(result_349,sNullCheckNode_finalize, 0, 0, 0, 0, (void*)0);
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
                                        if(_if_conditional462=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional462) {
                                            # 0 "sStoreFieldNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sStoreFieldNode_finalize"
                                        # 1 "sStoreFieldNode_finalize"
                                        if(_if_conditional463=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional463) {
                                            # 1 "sStoreFieldNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sStoreFieldNode_finalize"
                                        # 2 "sStoreFieldNode_finalize"
                                        if(_if_conditional464=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional464) {
                                            # 2 "sStoreFieldNode_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 4 "sStoreFieldNode_finalize"
                                        # 3 "sStoreFieldNode_finalize"
                                        if(_if_conditional465=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional465) {
                                            # 3 "sStoreFieldNode_finalize"
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional466;
struct sStoreFieldNode* __result208__;
void* right_value428;
struct sStoreFieldNode* result_356;
_Bool _if_conditional467;
_Bool _if_conditional468;
void* right_value429;
char* __dec_obj181;
_Bool _if_conditional469;
void* right_value430;
struct sNode* __dec_obj182;
_Bool _if_conditional470;
void* right_value431;
struct sNode* __dec_obj183;
_Bool _if_conditional471;
void* right_value432;
char* __dec_obj184;
struct sStoreFieldNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
memset(&result_356, 0, sizeof(struct sStoreFieldNode*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
                                        # 3 "sStoreFieldNode_clone"
                                        # 2 "sStoreFieldNode_clone"
                                        if(_if_conditional466=self==(void*)0,                                        _if_conditional466) {
                                            # 2 "sStoreFieldNode_clone"
                                            __result208__ = __result_obj__ = (void*)0;
                                            return __result208__;
                                        }
                                        # 3 "sStoreFieldNode_clone"
                                        result_356=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value428=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                        come_call_finalizer3(right_value428,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sStoreFieldNode_clone"
                                        # 4 "sStoreFieldNode_clone"
                                        if(_if_conditional467=self!=((void*)0),                                        _if_conditional467) {
                                            # 4 "sStoreFieldNode_clone"
                                            result_356->sline=self->sline;
                                        }
                                        # 6 "sStoreFieldNode_clone"
                                        # 5 "sStoreFieldNode_clone"
                                        if(_if_conditional468=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional468) {
                                            # 5 "sStoreFieldNode_clone"
                                            __dec_obj181=result_356->sname;
                                            result_356->sname=(char*)come_increment_ref_count(((char*)(right_value429=string_clone(self->sname))));
                                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sStoreFieldNode_clone"
                                        # 6 "sStoreFieldNode_clone"
                                        if(_if_conditional469=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional469) {
                                            # 6 "sStoreFieldNode_clone"
                                            __dec_obj182=result_356->mLeft;
                                            result_356->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=sNode_clone(self->mLeft))));
                                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 8 "sStoreFieldNode_clone"
                                        # 7 "sStoreFieldNode_clone"
                                        if(_if_conditional470=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional470) {
                                            # 7 "sStoreFieldNode_clone"
                                            __dec_obj183=result_356->mRight;
                                            result_356->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=sNode_clone(self->mRight))));
                                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        # 8 "sStoreFieldNode_clone"
                                        if(_if_conditional471=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional471) {
                                            # 8 "sStoreFieldNode_clone"
                                            __dec_obj184=result_356->mName;
                                            result_356->mName=(char*)come_increment_ref_count(((char*)(right_value432=string_clone(self->mName))));
                                            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        __result209__ = __result_obj__ = result_356;
                                        come_call_finalizer3(result_356,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result209__;
                                        come_call_finalizer3(result_356,sStoreFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sLoadFieldNode_finalize"
                                            # 0 "sLoadFieldNode_finalize"
                                            if(_if_conditional475=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional475) {
                                                # 0 "sLoadFieldNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sLoadFieldNode_finalize"
                                            # 1 "sLoadFieldNode_finalize"
                                            if(_if_conditional476=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional476) {
                                                # 1 "sLoadFieldNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sLoadFieldNode_finalize"
                                            # 2 "sLoadFieldNode_finalize"
                                            if(_if_conditional477=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional477) {
                                                # 2 "sLoadFieldNode_finalize"
                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional478;
struct sLoadFieldNode* __result210__;
void* right_value442;
struct sLoadFieldNode* result_357;
_Bool _if_conditional479;
_Bool _if_conditional480;
void* right_value443;
char* __dec_obj189;
_Bool _if_conditional481;
void* right_value444;
struct sNode* __dec_obj190;
_Bool _if_conditional482;
void* right_value445;
char* __dec_obj191;
struct sLoadFieldNode* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value442 = (void*)0;
memset(&result_357, 0, sizeof(struct sLoadFieldNode*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
                                            # 3 "sLoadFieldNode_clone"
                                            # 2 "sLoadFieldNode_clone"
                                            if(_if_conditional478=self==(void*)0,                                            _if_conditional478) {
                                                # 2 "sLoadFieldNode_clone"
                                                __result210__ = __result_obj__ = (void*)0;
                                                return __result210__;
                                            }
                                            # 3 "sLoadFieldNode_clone"
                                            result_357=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value442=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                            come_call_finalizer3(right_value442,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sLoadFieldNode_clone"
                                            # 4 "sLoadFieldNode_clone"
                                            if(_if_conditional479=self!=((void*)0),                                            _if_conditional479) {
                                                # 4 "sLoadFieldNode_clone"
                                                result_357->sline=self->sline;
                                            }
                                            # 6 "sLoadFieldNode_clone"
                                            # 5 "sLoadFieldNode_clone"
                                            if(_if_conditional480=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional480) {
                                                # 5 "sLoadFieldNode_clone"
                                                __dec_obj189=result_357->sname;
                                                result_357->sname=(char*)come_increment_ref_count(((char*)(right_value443=string_clone(self->sname))));
                                                __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sLoadFieldNode_clone"
                                            # 6 "sLoadFieldNode_clone"
                                            if(_if_conditional481=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional481) {
                                                # 6 "sLoadFieldNode_clone"
                                                __dec_obj190=result_357->mLeft;
                                                result_357->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(self->mLeft))));
                                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            # 7 "sLoadFieldNode_clone"
                                            if(_if_conditional482=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional482) {
                                                # 7 "sLoadFieldNode_clone"
                                                __dec_obj191=result_357->mName;
                                                result_357->mName=(char*)come_increment_ref_count(((char*)(right_value445=string_clone(self->mName))));
                                                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            __result211__ = __result_obj__ = result_357;
                                            come_call_finalizer3(result_357,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result211__;
                                            come_call_finalizer3(result_357,sLoadFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

