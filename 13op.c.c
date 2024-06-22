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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sSubNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMultNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sDivNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sModNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sLShiftNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sRShiftNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sGtEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sLtEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sLtNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sGtNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sNotEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sEq2Node
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sNotEq2Node
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sAndNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sXOrNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sOrNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sAndAndNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sOrOrNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sCommaNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sConditionalNode
{
    int sline;
    char* sname;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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

struct sNode* expression_node_v98(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v97(struct sInfo* info);

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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

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
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

_Bool sNullNode_terminated(struct sNullNode* self);

char* sNullNode_kind(struct sNullNode* self);

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

_Bool sNilNode_terminated(struct sNilNode* self);

char* sNilNode_kind(struct sNilNode* self);

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAddNode_terminated(struct sAddNode* self);

char* sAddNode_kind(struct sAddNode* self);

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sSubNode_terminated(struct sSubNode* self);

char* sSubNode_kind(struct sSubNode* self);

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultNode_terminated(struct sMultNode* self);

char* sMultNode_kind(struct sMultNode* self);

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivNode_terminated(struct sDivNode* self);

char* sDivNode_kind(struct sDivNode* self);

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModNode_terminated(struct sModNode* self);

char* sModNode_kind(struct sModNode* self);

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShiftNode_terminated(struct sLShiftNode* self);

char* sLShiftNode_kind(struct sLShiftNode* self);

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftNode_terminated(struct sRShiftNode* self);

char* sRShiftNode_kind(struct sRShiftNode* self);

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtEqNode_terminated(struct sGtEqNode* self);

char* sGtEqNode_kind(struct sGtEqNode* self);

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtEqNode_terminated(struct sLtEqNode* self);

char* sLtEqNode_kind(struct sLtEqNode* self);

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtNode_terminated(struct sLtNode* self);

char* sLtNode_kind(struct sLtNode* self);

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtNode_terminated(struct sGtNode* self);

char* sGtNode_kind(struct sGtNode* self);

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEqNode_terminated(struct sEqNode* self);

char* sEqNode_kind(struct sEqNode* self);

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEqNode_terminated(struct sNotEqNode* self);

char* sNotEqNode_kind(struct sNotEqNode* self);

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEq2Node_terminated(struct sEq2Node* self);

char* sEq2Node_kind(struct sEq2Node* self);

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEq2Node_terminated(struct sNotEq2Node* self);

char* sNotEq2Node_kind(struct sNotEq2Node* self);

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndNode_terminated(struct sAndNode* self);

char* sAndNode_kind(struct sAndNode* self);

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXOrNode_terminated(struct sXOrNode* self);

char* sXOrNode_kind(struct sXOrNode* self);

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrNode_terminated(struct sOrNode* self);

char* sOrNode_kind(struct sOrNode* self);

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndAndNode_terminated(struct sAndAndNode* self);

char* sAndAndNode_kind(struct sAndAndNode* self);

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrOrNode_terminated(struct sOrOrNode* self);

char* sOrOrNode_kind(struct sOrOrNode* self);

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sCommaNode_terminated(struct sCommaNode* self);

char* sCommaNode_kind(struct sCommaNode* self);

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

_Bool sConditionalNode_terminated(struct sConditionalNode* self);

char* sConditionalNode_kind(struct sConditionalNode* self);

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 45 "./neo-c.h"
    perror(msg);
    # 46 "./neo-c.h"
    stackframe();
    # 47 "./neo-c.h"
    exit(4);
    # 49 "./neo-c.h"
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
    # 1897 "./neo-c.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1898 "./neo-c.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1899 "./neo-c.h"
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
    # 1904 "./neo-c.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1905 "./neo-c.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1906 "./neo-c.h"
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
    # 1911 "./neo-c.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1912 "./neo-c.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1913 "./neo-c.h"
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
    # 1918 "./neo-c.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1919 "./neo-c.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1920 "./neo-c.h"
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
    # 1925 "./neo-c.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1926 "./neo-c.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1927 "./neo-c.h"
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
    # 1932 "./neo-c.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1933 "./neo-c.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1934 "./neo-c.h"
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
    # 1947 "./neo-c.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1947, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1949 "./neo-c.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1950 "./neo-c.h"
    result_6->p=result_6->memory->buf;
    # 1952 "./neo-c.h"
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
    # 1957 "./neo-c.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1957, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1959 "./neo-c.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1960 "./neo-c.h"
    result_7->p=(char*)result_7->memory->buf;
    # 1962 "./neo-c.h"
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
    # 1967 "./neo-c.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1967, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1969 "./neo-c.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1970 "./neo-c.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 1972 "./neo-c.h"
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
    # 1977 "./neo-c.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1977, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1979 "./neo-c.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1980 "./neo-c.h"
    result_9->p=(int*)result_9->memory->buf;
    # 1982 "./neo-c.h"
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
    # 1987 "./neo-c.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1987, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1989 "./neo-c.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1990 "./neo-c.h"
    result_10->p=(long*)result_10->memory->buf;
    # 1992 "./neo-c.h"
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
    # 2158 "./neo-c.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2158, "smart_pointer$1char")))),self,len)));
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
    # 2163 "./neo-c.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2163, "smart_pointer$1short")))),self,len)));
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
    # 2168 "./neo-c.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2168, "smart_pointer$1int")))),self,len)));
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
    # 2173 "./neo-c.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2173, "smart_pointer$1long")))),self,len)));
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
    # 2178 "./neo-c.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2178, "smart_pointer$1float")))),self,len)));
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
    # 2183 "./neo-c.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2183, "smart_pointer$1double")))),self,len)));
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
    # 2188 "./neo-c.h"
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2188, "list$1char")))),len,self)));
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
    # 2193 "./neo-c.h"
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2193, "list$1short")))),len,self)));
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
    # 2198 "./neo-c.h"
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2198, "list$1int")))),len,self)));
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
    # 2203 "./neo-c.h"
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2203, "list$1long")))),len,self)));
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
    # 2208 "./neo-c.h"
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2208, "list$1float")))),len,self)));
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
    # 2213 "./neo-c.h"
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2213, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2243 "./neo-c.h"
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2248 "./neo-c.h"
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2253 "./neo-c.h"
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2258 "./neo-c.h"
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2263 "./neo-c.h"
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2268 "./neo-c.h"
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    # 2329 "./neo-c.h"
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
    # 2334 "./neo-c.h"
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
    # 2339 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2003 "./neo-c.h"
        self->p=(char*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2003 "./neo-c.h"
        self->p=(short short*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2003 "./neo-c.h"
        self->p=(int*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2003 "./neo-c.h"
        self->p=(long*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2003 "./neo-c.h"
        self->p=(float*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 1999 "./neo-c.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1999, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 2001 "./neo-c.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2003 "./neo-c.h"
        self->p=(double*)self->memory->buf;
        # 2005 "./neo-c.h"
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
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            # 108 "./neo-c.h"
            list$1char_push_back(self,values[i_11]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional7=self->len==0,                _if_conditional7) {
                    # 217 "./neo-c.h"
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_12->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_12->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_12->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_12;
                    # 224 "./neo-c.h"
                    self->head=litem_12;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        # 227 "./neo-c.h"
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_13->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_13->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_13->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_13;
                        # 234 "./neo-c.h"
                        self->head->next=litem_13;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_14->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_14->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_14->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_14;
                        # 244 "./neo-c.h"
                        self->tail=litem_14;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_15=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional1=it_15!=((void*)0),            _while_condtional1) {
                # 116 "./neo-c.h"
                prev_it_16=it_15;
                # 117 "./neo-c.h"
                it_15=it_15->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            # 108 "./neo-c.h"
            list$1short_push_back(self,values[i_17]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    # 217 "./neo-c.h"
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_18->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_18->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_18->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_18;
                    # 224 "./neo-c.h"
                    self->head=litem_18;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        # 227 "./neo-c.h"
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_19->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_19->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_19->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_19;
                        # 234 "./neo-c.h"
                        self->head->next=litem_19;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_20->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_20->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_20->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_20;
                        # 244 "./neo-c.h"
                        self->tail=litem_20;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_21=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional2=it_21!=((void*)0),            _while_condtional2) {
                # 116 "./neo-c.h"
                prev_it_22=it_21;
                # 117 "./neo-c.h"
                it_21=it_21->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            # 108 "./neo-c.h"
            list$1int_push_back(self,values[i_23]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional11=self->len==0,                _if_conditional11) {
                    # 217 "./neo-c.h"
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_24->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_24->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_24->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_24;
                    # 224 "./neo-c.h"
                    self->head=litem_24;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        # 227 "./neo-c.h"
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_25->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_25->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_25->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_25;
                        # 234 "./neo-c.h"
                        self->head->next=litem_25;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_26->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_26->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_26->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_26;
                        # 244 "./neo-c.h"
                        self->tail=litem_26;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_27=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional3=it_27!=((void*)0),            _while_condtional3) {
                # 116 "./neo-c.h"
                prev_it_28=it_27;
                # 117 "./neo-c.h"
                it_27=it_27->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            # 108 "./neo-c.h"
            list$1long_push_back(self,values[i_29]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional13=self->len==0,                _if_conditional13) {
                    # 217 "./neo-c.h"
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_30->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_30->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_30->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_30;
                    # 224 "./neo-c.h"
                    self->head=litem_30;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        # 227 "./neo-c.h"
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_31->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_31->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_31->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_31;
                        # 234 "./neo-c.h"
                        self->head->next=litem_31;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_32->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_32->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_32->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_32;
                        # 244 "./neo-c.h"
                        self->tail=litem_32;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_33=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional4=it_33!=((void*)0),            _while_condtional4) {
                # 116 "./neo-c.h"
                prev_it_34=it_33;
                # 117 "./neo-c.h"
                it_33=it_33->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            # 108 "./neo-c.h"
            list$1float_push_back(self,values[i_35]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional15=self->len==0,                _if_conditional15) {
                    # 217 "./neo-c.h"
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_36->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_36->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_36->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_36;
                    # 224 "./neo-c.h"
                    self->head=litem_36;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        # 227 "./neo-c.h"
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_37->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_37->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_37->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_37;
                        # 234 "./neo-c.h"
                        self->head->next=litem_37;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_38->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_38->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_38->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_38;
                        # 244 "./neo-c.h"
                        self->tail=litem_38;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_39=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional5=it_39!=((void*)0),            _while_condtional5) {
                # 116 "./neo-c.h"
                prev_it_40=it_39;
                # 117 "./neo-c.h"
                it_39=it_39->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        # 103 "./neo-c.h"
        self->head=((void*)0);
        # 104 "./neo-c.h"
        self->tail=((void*)0);
        # 105 "./neo-c.h"
        self->len=0;
        # 111 "./neo-c.h"
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            # 108 "./neo-c.h"
            list$1double_push_back(self,values[i_41]);
        }
        # 111 "./neo-c.h"
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
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional17=self->len==0,                _if_conditional17) {
                    # 217 "./neo-c.h"
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_42->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_42->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_42->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_42;
                    # 224 "./neo-c.h"
                    self->head=litem_42;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        # 227 "./neo-c.h"
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_43->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_43->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_43->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_43;
                        # 234 "./neo-c.h"
                        self->head->next=litem_43;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_44->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_44->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_44->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_44;
                        # 244 "./neo-c.h"
                        self->tail=litem_44;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
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
            # 114 "./neo-c.h"
            it_45=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional6=it_45!=((void*)0),            _while_condtional6) {
                # 116 "./neo-c.h"
                prev_it_46=it_45;
                # 117 "./neo-c.h"
                it_45=it_45->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_77;
_Bool _if_conditional110;
struct sType* __dec_obj35;
_Bool _if_conditional111;
struct sClass* klass_78;
char* class_name_79;
struct sFun* operator_fun_80;
char* fun_name2_81;
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
_Bool _if_conditional149;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_91;
char* fun_name_92;
void* right_value121;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_93;
char* fun_name2_94;
_Bool _if_conditional151;
void* right_value122;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_95;
char* fun_name_96;
void* right_value123;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_97;
char* fun_name2_98;
void* right_value124;
char* __dec_obj37;
int i_99;
void* right_value125;
char* new_fun_name_100;
_Bool _if_conditional152;
void* right_value126;
char* __dec_obj38;
_Bool _if_conditional153;
_Bool result_101;
_Bool _if_conditional154;
void* right_value127;
struct CVALUE* come_value_102;
char* left_value2_103;
void* right_value128;
void* right_value129;
_Bool _if_conditional159;
void* right_value130;
char* __dec_obj39;
void* right_value131;
char* __dec_obj40;
char* right_value2_107;
void* right_value132;
void* right_value133;
_Bool _if_conditional160;
void* right_value134;
char* __dec_obj41;
void* right_value135;
char* __dec_obj42;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
char* __dec_obj43;
void* right_value140;
struct sType* type2_108;
void* right_value141;
struct sType* type3_109;
void* right_value142;
struct sType* __dec_obj44;
_Bool _if_conditional161;
void* right_value143;
char* __dec_obj45;
_Bool _if_conditional162;
void* right_value144;
void* right_value145;
char* __dec_obj46;
void* right_value146;
char* __dec_obj47;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&generics_type_77, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&class_name_79, 0, sizeof(char*));
memset(&operator_fun_80, 0, sizeof(struct sFun*));
memset(&fun_name2_81, 0, sizeof(char*));
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
memset(&fun_91, 0, sizeof(struct sFun*));
memset(&fun_name_92, 0, sizeof(char*));
memset(&fun_91, 0, sizeof(struct sFun*));
memset(&fun_name_92, 0, sizeof(char*));
right_value121 = (void*)0;
memset(&fun2_93, 0, sizeof(struct sFun*));
memset(&fun_name2_94, 0, sizeof(char*));
memset(&fun2_93, 0, sizeof(struct sFun*));
memset(&fun_name2_94, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&fun_95, 0, sizeof(struct sFun*));
memset(&fun_name_96, 0, sizeof(char*));
memset(&fun_95, 0, sizeof(struct sFun*));
memset(&fun_name_96, 0, sizeof(char*));
right_value123 = (void*)0;
memset(&fun2_97, 0, sizeof(struct sFun*));
memset(&fun_name2_98, 0, sizeof(char*));
memset(&fun2_97, 0, sizeof(struct sFun*));
memset(&fun_name2_98, 0, sizeof(char*));
right_value124 = (void*)0;
memset(&i_99, 0, sizeof(int));
right_value125 = (void*)0;
memset(&new_fun_name_100, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&result_101, 0, sizeof(_Bool));
right_value127 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
memset(&left_value2_103, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&right_value2_107, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&type2_108, 0, sizeof(struct sType*));
right_value141 = (void*)0;
memset(&type3_109, 0, sizeof(struct sType*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
    # 5 "13op.c"
    generics_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 10 "13op.c"
    # 6 "13op.c"
    if(generics_type_77->mNoSolvedGenericsType->v1) {
        # 7 "13op.c"
        __dec_obj35=generics_type_77;
        generics_type_77=(struct sType*)come_increment_ref_count(generics_type_77->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 13 "13op.c"
    # 10 "13op.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 11 "13op.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 13 "13op.c"
    klass_78=type->mClass;
    # 14 "13op.c"
    class_name_79=klass_78->mName;
    # 16 "13op.c"
    operator_fun_80=((void*)0);
    # 18 "13op.c"
    # 74 "13op.c"
    # 19 "13op.c"
    if(_if_conditional113=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional113) {
        # 20 "13op.c"
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 22 "13op.c"
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 24 "13op.c"
        __dec_obj36=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 25 "13op.c"
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 27 "13op.c"
        generics_fun_87=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        # 54 "13op.c"
        # 30 "13op.c"
        if(generics_fun_87) {
            # 35 "13op.c"
            # 31 "13op.c"
            if(_if_conditional129=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_81)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional129) {
                # 32 "13op.c"
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
            # 35 "13op.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
        else {
            # 53 "13op.c"
            # 38 "13op.c"
            if(_if_conditional149=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional149) {
                # 39 "13op.c"
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value120=create_equals_automatically(obj_type_83,"equals",info)));
                fun_91=multiple_assign_var1->v1;
                fun_name_92=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(right_value120,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 40 "13op.c"
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value121=create_operator_equals_automatically(obj_type_83,"operator_equals",info)));
                fun2_93=multiple_assign_var2->v1;
                fun_name2_94=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value121,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 42 "13op.c"
                operator_fun_80=fun2_93;
                fun_name_92 = come_decrement_ref_count2(fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_94 = come_decrement_ref_count2(fun_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 53 "13op.c"
                # 44 "13op.c"
                if(_if_conditional151=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional151) {
                    # 45 "13op.c"
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value122=create_equals_automatically(obj_type_83,"not_equals",info)));
                    fun_95=multiple_assign_var3->v1;
                    fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer3(right_value122,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 46 "13op.c"
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value123=create_operator_not_equals_automatically(obj_type_83,"operator_not_equals",info)));
                    fun2_97=multiple_assign_var4->v1;
                    fun_name2_98=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer3(right_value123,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 48 "13op.c"
                    operator_fun_80=fun2_97;
                    fun_name_96 = come_decrement_ref_count2(fun_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 51 "13op.c"
                    operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
                }
            }
        }
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 56 "13op.c"
        __dec_obj37=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value124=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 58 "13op.c"
        # 69 "13op.c"
        for(        i_99=128-1;        i_99>=1;        i_99--        ){
            # 60 "13op.c"
            new_fun_name_100=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s_v%d",fun_name2_81,i_99))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 61 "13op.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_100);
            # 67 "13op.c"
            # 63 "13op.c"
            if(operator_fun_80) {
                # 64 "13op.c"
                __dec_obj38=fun_name2_81;
                fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(new_fun_name_100))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 65 "13op.c"
                new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 72 "13op.c"
        # 69 "13op.c"
        if(_if_conditional153=operator_fun_80==((void*)0),        _if_conditional153) {
            # 70 "13op.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
    }
    # 74 "13op.c"
    result_101=(_Bool)0;
    # 123 "13op.c"
    # 76 "13op.c"
    if(_if_conditional154=operator_fun_80&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional154) {
        # 77 "13op.c"
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))));
        come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 78 "13op.c"
        # 79 "13op.c"
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 87 "13op.c"
        # 80 "13op.c"
        if(_if_conditional159=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 80, 1))->mHeap&&left_value->type->mHeap,        _if_conditional159) {
            # 81 "13op.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 81, 2)),left_value->type,left_value,info);
            # 82 "13op.c"
            __dec_obj39=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 85 "13op.c"
            __dec_obj40=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 87 "13op.c"
        # 88 "13op.c"
        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 88, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 97 "13op.c"
        # 89 "13op.c"
        if(_if_conditional160=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 89, 4))->mHeap&&right_value->type->mHeap,        _if_conditional160) {
            # 90 "13op.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 90, 5)),right_value->type,right_value,info);
            # 91 "13op.c"
            __dec_obj41=right_value2_107;
            right_value2_107=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s",right_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 94 "13op.c"
            __dec_obj42=right_value2_107;
            right_value2_107=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(right_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 97 "13op.c"
        __dec_obj43=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("\%s(\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_81))),((char*)(right_value137=string_to_string(left_value2_103))),((char*)(right_value138=string_to_string(right_value2_107)))))));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 99 "13op.c"
        type2_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(operator_fun_80->mResultType))));
        come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 101 "13op.c"
        type3_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=solve_generics(type2_108,generics_type_77,info))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 103 "13op.c"
        __dec_obj44=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(type3_109))));
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 104 "13op.c"
        come_value_102->var=((void*)0);
        # 110 "13op.c"
        # 106 "13op.c"
        if(type3_109->mHeap) {
            # 107 "13op.c"
            __dec_obj45=come_value_102->c_value;
            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value143=append_object_to_right_values(come_value_102->c_value,(struct sType*)come_increment_ref_count(type3_109),info))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 114 "13op.c"
        # 110 "13op.c"
        if(_if_conditional162=!break_guard&&type3_109->mGuardValue&&type3_109->mPointerNum>0,        _if_conditional162) {
            # 111 "13op.c"
            __dec_obj46=come_value_102->c_value;
            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value144=make_type_name_string(type3_109,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_102->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 114 "13op.c"
        __dec_obj47=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value146=append_stackframe(come_value_102->c_value,come_value_102->type,info))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 116 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_102->c_value);
        # 118 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        # 120 "13op.c"
        result_101=(_Bool)1;
        come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_103 = come_decrement_ref_count2(left_value2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_107 = come_decrement_ref_count2(right_value2_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_109,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 123 "13op.c"
    __result84__ = result_101;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                    # 114 "./neo-c.h"
                    it_48=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        # 116 "./neo-c.h"
                        prev_it_49=it_48;
                        # 117 "./neo-c.h"
                        it_48=it_48->next;
                        # 118 "./neo-c.h"
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
                    # 114 "./neo-c.h"
                    it_50=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        # 116 "./neo-c.h"
                        prev_it_51=it_50;
                        # 117 "./neo-c.h"
                        it_50=it_50->next;
                        # 118 "./neo-c.h"
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
                    # 114 "./neo-c.h"
                    it_52=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        # 116 "./neo-c.h"
                        prev_it_53=it_52;
                        # 117 "./neo-c.h"
                        it_52=it_52->next;
                        # 118 "./neo-c.h"
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
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    # 131 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 133 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_55=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 142 "./neo-c.h"
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
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
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            # 147 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj12=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_56;
                            # 154 "./neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                # 157 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj13=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_57;
                                # 164 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_58;
                                # 174 "./neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
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
                # 114 "./neo-c.h"
                it_59=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    # 116 "./neo-c.h"
                    prev_it_60=it_59;
                    # 117 "./neo-c.h"
                    it_59=it_59->next;
                    # 118 "./neo-c.h"
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
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    # 131 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 133 "./neo-c.h"
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_63=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_63->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_63=it_63->next;
                }
                # 142 "./neo-c.h"
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
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
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            # 147 "./neo-c.h"
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_64->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_64->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj21=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "./neo-c.h"
                            self->tail=litem_64;
                            # 154 "./neo-c.h"
                            self->head=litem_64;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                # 157 "./neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_65->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_65->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj22=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_65;
                                # 164 "./neo-c.h"
                                self->head->next=litem_65;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_66->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj23=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail->next=litem_66;
                                # 174 "./neo-c.h"
                                self->tail=litem_66;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
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
                # 114 "./neo-c.h"
                it_68=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    # 116 "./neo-c.h"
                    prev_it_69=it_68;
                    # 117 "./neo-c.h"
                    it_68=it_68->next;
                    # 118 "./neo-c.h"
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
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    # 131 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 133 "./neo-c.h"
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_71=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_71->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_71=it_71->next;
                }
                # 142 "./neo-c.h"
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
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
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            # 147 "./neo-c.h"
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_72->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_72->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj26=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_72;
                            # 154 "./neo-c.h"
                            self->head=litem_72;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                # 157 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_73->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_73->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj27=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_73;
                                # 164 "./neo-c.h"
                                self->head->next=litem_73;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_74->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_74->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj28=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_74;
                                # 174 "./neo-c.h"
                                self->tail=litem_74;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
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
                # 114 "./neo-c.h"
                it_75=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    # 116 "./neo-c.h"
                    prev_it_76=it_75;
                    # 117 "./neo-c.h"
                    it_75=it_75->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional112;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional112=self==((void*)0),        _if_conditional112) {
            # 352 "./neo-c.h"
            __result70__ = 0;
            return __result70__;
        }
        # 354 "./neo-c.h"
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
            # 1201 "./neo-c.h"
            hash_85=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_86=hash_85;
            # 1226 "./neo-c.h"
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional114=self->item_existance[it_86],                _if_conditional114) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional115=string_equals(self->keys[it_86],key),                    _if_conditional115) {
                        # 1209 "./neo-c.h"
                        __result72__ = __result_obj__ = self->items[it_86];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    # 1212 "./neo-c.h"
                    it_86++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional126=it_86>=self->size,                    _if_conditional126) {
                        # 1215 "./neo-c.h"
                        it_86=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional127=it_86==hash_85,                        _if_conditional127) {
                            # 1218 "./neo-c.h"
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            # 1226 "./neo-c.h"
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
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_88,0,sizeof(struct sFun*));
                # 1522 "./neo-c.h"
                hash_89=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_90=hash_89;
                # 1547 "./neo-c.h"
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional130=self->item_existance[it_90],                    _if_conditional130) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional131=string_equals(self->keys[it_90],key),                        _if_conditional131) {
                            # 1530 "./neo-c.h"
                            __result77__ = __result_obj__ = self->items[it_90];
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result77__;
                        }
                        # 1533 "./neo-c.h"
                        it_90++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional147=it_90>=self->size,                        _if_conditional147) {
                            # 1536 "./neo-c.h"
                            it_90=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional148=it_90==hash_89,                            _if_conditional148) {
                                # 1539 "./neo-c.h"
                                __result78__ = __result_obj__ = default_value_88;
                                come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result78__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result79__ = __result_obj__ = default_value_88;
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result79__;
                    }
                }
                # 1547 "./neo-c.h"
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
                                if(_if_conditional132=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional132) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional133=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional133) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional134=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional134) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional135=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional135) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional136=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional136) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional137=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional137) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional138=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional138) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional141=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional141) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional142=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional142) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional143=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional143) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional144=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional144) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional145=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional145) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional146=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional146) {
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
                                        if(_if_conditional139=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional139) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional140=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional140) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2sFunpcharphp_finalize"
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    if(_if_conditional150=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional150) {
                        # 0 "tuple2$2sFunpcharphp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional155=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional155) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional156=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional156) {
                # 1 "CVALUE_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional157;
struct list_item$1sTypeph* it_104;
int i_105;
_Bool _while_condtional18;
_Bool _if_conditional158;
struct sType* __result81__;
struct sType* default_value_106;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_105, 0, sizeof(int));
memset(&default_value_106, 0, sizeof(struct sType*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional157=position<0,            _if_conditional157) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_104=self->head;
            # 674 "./neo-c.h"
            i_105=0;
            # 681 "./neo-c.h"
            while(_while_condtional18=it_104!=((void*)0),            _while_condtional18) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional158=position==i_105,                _if_conditional158) {
                    # 677 "./neo-c.h"
                    __result81__ = __result_obj__ = it_104->item;
                    return __result81__;
                }
                # 679 "./neo-c.h"
                it_104=it_104->next;
                # 680 "./neo-c.h"
                i_105++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_106,0,sizeof(struct sType*));
            # 685 "./neo-c.h"
            __result82__ = __result_obj__ = default_value_106;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional163;
void* right_value147;
struct list_item$1CVALUEph* litem_110;
struct CVALUE* __dec_obj48;
_Bool _if_conditional165;
void* right_value148;
struct list_item$1CVALUEph* litem_111;
struct CVALUE* __dec_obj49;
void* right_value149;
struct list_item$1CVALUEph* litem_112;
struct CVALUE* __dec_obj50;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1CVALUEph*));
right_value148 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1CVALUEph*));
right_value149 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1CVALUEph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional163=self->len==0,            _if_conditional163) {
                # 217 "./neo-c.h"
                litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value147=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value147,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_110->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_110->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj48=litem_110->item;
                litem_110->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj48,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_110;
                # 224 "./neo-c.h"
                self->head=litem_110;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional165=self->len==1,                _if_conditional165) {
                    # 227 "./neo-c.h"
                    litem_111=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_111->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_111->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj49=litem_111->item;
                    litem_111->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_111;
                    # 234 "./neo-c.h"
                    self->head->next=litem_111;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_112=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_112->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_112->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj50=litem_112->item;
                    litem_112->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_112;
                    # 244 "./neo-c.h"
                    self->tail=litem_112;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional164=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional164) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
char* __dec_obj51;
struct sNullNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    # 130 "13op.c"
    self->sline=info->sline;
    # 131 "13op.c"
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 134 "13op.c"
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNode_terminated(struct sNullNode* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    # 136 "13op.c"
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__;
void* right_value151;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    # 141 "13op.c"
    __result87__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sNullNode")));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value152;
struct CVALUE* come_value_113;
void* right_value153;
char* __dec_obj52;
void* right_value154;
void* right_value155;
struct sType* __dec_obj53;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&come_value_113, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    # 146 "13op.c"
    come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 146, "CVALUE"))));
    come_call_finalizer3(right_value152,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 148 "13op.c"
    __dec_obj52=come_value_113->c_value;
    come_value_113->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("((void*)0)"))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 149 "13op.c"
    __dec_obj53=come_value_113->type;
    come_value_113->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 149, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 150 "13op.c"
    come_value_113->var=((void*)0);
    # 152 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_113->c_value);
    # 154 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_113));
    # 156 "13op.c"
    __result88__ = (_Bool)1;
    come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
void* right_value156;
void* right_value157;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value160;
struct sNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value160 = (void*)0;
    # 162 "13op.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 162, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value157=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value156=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 162, "sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result91__ = __result_obj__ = ((struct sNode*)(right_value160=_inf_value1));
    come_call_finalizer3(right_value156,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value157,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result91__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __dec_obj55;
struct sNilNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    # 169 "13op.c"
    self->sline=info->sline;
    # 170 "13op.c"
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 173 "13op.c"
    __result92__ = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNilNode_terminated(struct sNilNode* self){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    # 175 "13op.c"
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__;
void* right_value162;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    # 180 "13op.c"
    __result94__ = __result_obj__ = ((char*)(right_value162=__builtin_string("sNilNode")));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
struct CVALUE* come_value_115;
void* right_value164;
char* __dec_obj56;
void* right_value165;
void* right_value166;
struct sType* __dec_obj57;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    # 185 "13op.c"
    come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 185, "CVALUE"))));
    come_call_finalizer3(right_value163,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 187 "13op.c"
    __dec_obj56=come_value_115->c_value;
    come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("((void*)0)"))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 188 "13op.c"
    __dec_obj57=come_value_115->type;
    come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 188, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 189 "13op.c"
    come_value_115->type->mNullValue=(_Bool)1;
    # 190 "13op.c"
    come_value_115->var=((void*)0);
    # 192 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_115->c_value);
    # 194 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
    # 196 "13op.c"
    __result95__ = (_Bool)1;
    come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result95__;
    come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __dec_obj59;
void* right_value173;
struct sNode* __dec_obj60;
void* right_value174;
struct sNode* __dec_obj61;
struct sAddNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
    # 214 "13op.c"
    self->sline=info->sline;
    # 215 "13op.c"
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 217 "13op.c"
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 218 "13op.c"
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value174=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 219 "13op.c"
    self->mQuote=quote;
    # 222 "13op.c"
    __result99__ = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result99__;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAddNode_terminated(struct sAddNode* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    # 224 "13op.c"
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__;
void* right_value175;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
    # 229 "13op.c"
    __result101__ = __result_obj__ = ((char*)(right_value175=__builtin_string("sAddNode")));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_117;
_Bool _if_conditional179;
_Bool __result102__;
void* right_value176;
struct CVALUE* left_value_118;
struct sNode* right_node_119;
_Bool _if_conditional180;
_Bool __result103__;
void* right_value177;
struct CVALUE* right_value_120;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value178;
struct CVALUE* come_value_124;
void* right_value179;
char* __dec_obj62;
void* right_value180;
struct sType* __dec_obj63;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_117, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&right_node_119, 0, sizeof(struct sNode*));
right_value177 = (void*)0;
memset(&right_value_120, 0, sizeof(struct CVALUE*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&fun_name_122, 0, sizeof(char*));
memset(&calling_fun_123, 0, sizeof(_Bool));
right_value178 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
right_value180 = (void*)0;
    # 235 "13op.c"
    left_node_117=self->mLeft;
    # 241 "13op.c"
    # 237 "13op.c"
    if(_if_conditional179=!node_compile(left_node_117,info),    _if_conditional179) {
        # 238 "13op.c"
        __result102__ = (_Bool)0;
        return __result102__;
    }
    # 241 "13op.c"
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value176,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 242 "13op.c"
    dec_stack_ptr(1,info);
    # 244 "13op.c"
    right_node_119=self->mRight;
    # 250 "13op.c"
    # 246 "13op.c"
    if(_if_conditional180=!node_compile(right_node_119,info),    _if_conditional180) {
        # 247 "13op.c"
        __result103__ = (_Bool)0;
        come_call_finalizer3(left_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result103__;
    }
    # 250 "13op.c"
    right_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value177,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 251 "13op.c"
    dec_stack_ptr(1,info);
    # 253 "13op.c"
    type_121=(struct sType*)come_increment_ref_count(left_value_118->type);
    # 255 "13op.c"
    fun_name_122="operator_add";
    # 256 "13op.c"
    # 264 "13op.c"
    # 257 "13op.c"
    if(self->mQuote) {
        # 258 "13op.c"
        calling_fun_123=(_Bool)0;
    }
    else {
        # 261 "13op.c"
        calling_fun_123=operator_overload_fun(type_121,fun_name_122,left_value_118,right_value_120,(_Bool)0,info);
    }
    # 277 "13op.c"
    # 264 "13op.c"
    if(_if_conditional182=!calling_fun_123,    _if_conditional182) {
        # 265 "13op.c"
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 265, "CVALUE"))));
        come_call_finalizer3(right_value178,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 267 "13op.c"
        __dec_obj62=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s+%s",left_value_118->c_value,right_value_120->c_value))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 268 "13op.c"
        __dec_obj63=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(left_value_118->type))));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 269 "13op.c"
        come_value_124->type->mHeap=(_Bool)0;
        # 270 "13op.c"
        come_value_124->var=((void*)0);
        # 272 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        # 274 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 277 "13op.c"
    __result104__ = (_Bool)1;
    come_call_finalizer3(left_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(left_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value181;
char* __dec_obj64;
void* right_value182;
struct sNode* __dec_obj65;
void* right_value183;
struct sNode* __dec_obj66;
struct sSubNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
    # 289 "13op.c"
    self->sline=info->sline;
    # 290 "13op.c"
    __dec_obj64=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(info->sname))));
    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 292 "13op.c"
    __dec_obj65=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(left))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 293 "13op.c"
    __dec_obj66=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=sNode_clone(right))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 294 "13op.c"
    self->mQuote=quote;
    # 297 "13op.c"
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result105__;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sSubNode_terminated(struct sSubNode* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    # 299 "13op.c"
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__;
void* right_value184;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
    # 304 "13op.c"
    __result107__ = __result_obj__ = ((char*)(right_value184=__builtin_string("sSubNode")));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_125;
_Bool _if_conditional186;
_Bool __result108__;
void* right_value185;
struct CVALUE* left_value_126;
struct sNode* right_node_127;
_Bool _if_conditional187;
_Bool __result109__;
void* right_value186;
struct CVALUE* right_value_128;
struct sType* type_129;
char* fun_name_130;
_Bool calling_fun_131;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value187;
struct CVALUE* come_value_132;
void* right_value188;
char* __dec_obj67;
void* right_value189;
struct sType* __dec_obj68;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_125, 0, sizeof(struct sNode*));
right_value185 = (void*)0;
memset(&left_value_126, 0, sizeof(struct CVALUE*));
memset(&right_node_127, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
memset(&right_value_128, 0, sizeof(struct CVALUE*));
memset(&type_129, 0, sizeof(struct sType*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&calling_fun_131, 0, sizeof(_Bool));
right_value187 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value188 = (void*)0;
right_value189 = (void*)0;
    # 310 "13op.c"
    left_node_125=self->mLeft;
    # 316 "13op.c"
    # 312 "13op.c"
    if(_if_conditional186=!node_compile(left_node_125,info),    _if_conditional186) {
        # 313 "13op.c"
        __result108__ = (_Bool)0;
        return __result108__;
    }
    # 316 "13op.c"
    left_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value185,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 317 "13op.c"
    dec_stack_ptr(1,info);
    # 319 "13op.c"
    right_node_127=self->mRight;
    # 325 "13op.c"
    # 321 "13op.c"
    if(_if_conditional187=!node_compile(right_node_127,info),    _if_conditional187) {
        # 322 "13op.c"
        __result109__ = (_Bool)0;
        come_call_finalizer3(left_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result109__;
    }
    # 325 "13op.c"
    right_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 326 "13op.c"
    dec_stack_ptr(1,info);
    # 328 "13op.c"
    type_129=(struct sType*)come_increment_ref_count(left_value_126->type);
    # 330 "13op.c"
    fun_name_130="operator_sub";
    # 331 "13op.c"
    # 339 "13op.c"
    # 332 "13op.c"
    if(self->mQuote) {
        # 333 "13op.c"
        calling_fun_131=(_Bool)0;
    }
    else {
        # 336 "13op.c"
        calling_fun_131=operator_overload_fun(type_129,fun_name_130,left_value_126,right_value_128,(_Bool)0,info);
    }
    # 352 "13op.c"
    # 339 "13op.c"
    if(_if_conditional189=!calling_fun_131,    _if_conditional189) {
        # 340 "13op.c"
        come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 340, "CVALUE"))));
        come_call_finalizer3(right_value187,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 342 "13op.c"
        __dec_obj67=come_value_132->c_value;
        come_value_132->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s-%s",left_value_126->c_value,right_value_128->c_value))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 343 "13op.c"
        __dec_obj68=come_value_132->type;
        come_value_132->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(left_value_126->type))));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 344 "13op.c"
        come_value_132->type->mHeap=(_Bool)0;
        # 345 "13op.c"
        come_value_132->var=((void*)0);
        # 347 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_132->c_value);
        # 349 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
        come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 352 "13op.c"
    __result110__ = (_Bool)1;
    come_call_finalizer3(left_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(left_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value190;
char* __dec_obj69;
void* right_value191;
struct sNode* __dec_obj70;
void* right_value192;
struct sNode* __dec_obj71;
struct sMultNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    # 364 "13op.c"
    self->sline=info->sline;
    # 365 "13op.c"
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 367 "13op.c"
    self->mQuote=quote;
    # 368 "13op.c"
    __dec_obj70=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=sNode_clone(left))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 369 "13op.c"
    __dec_obj71=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value192=sNode_clone(right))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 372 "13op.c"
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result111__;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultNode_terminated(struct sMultNode* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    # 374 "13op.c"
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__;
void* right_value193;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    # 379 "13op.c"
    __result113__ = __result_obj__ = ((char*)(right_value193=__builtin_string("sMultNode")));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_133;
_Bool _if_conditional193;
_Bool __result114__;
void* right_value194;
struct CVALUE* left_value_134;
struct sNode* right_node_135;
_Bool _if_conditional194;
_Bool __result115__;
void* right_value195;
struct CVALUE* right_value_136;
struct sType* type_137;
char* fun_name_138;
_Bool calling_fun_139;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value196;
struct CVALUE* come_value_140;
void* right_value197;
char* __dec_obj72;
void* right_value198;
struct sType* __dec_obj73;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_133, 0, sizeof(struct sNode*));
right_value194 = (void*)0;
memset(&left_value_134, 0, sizeof(struct CVALUE*));
memset(&right_node_135, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
memset(&right_value_136, 0, sizeof(struct CVALUE*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&fun_name_138, 0, sizeof(char*));
memset(&calling_fun_139, 0, sizeof(_Bool));
right_value196 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value197 = (void*)0;
right_value198 = (void*)0;
    # 385 "13op.c"
    left_node_133=self->mLeft;
    # 391 "13op.c"
    # 387 "13op.c"
    if(_if_conditional193=!node_compile(left_node_133,info),    _if_conditional193) {
        # 388 "13op.c"
        __result114__ = (_Bool)0;
        return __result114__;
    }
    # 391 "13op.c"
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value194,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 392 "13op.c"
    dec_stack_ptr(1,info);
    # 394 "13op.c"
    right_node_135=self->mRight;
    # 400 "13op.c"
    # 396 "13op.c"
    if(_if_conditional194=!node_compile(right_node_135,info),    _if_conditional194) {
        # 397 "13op.c"
        __result115__ = (_Bool)0;
        come_call_finalizer3(left_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result115__;
    }
    # 400 "13op.c"
    right_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 401 "13op.c"
    dec_stack_ptr(1,info);
    # 403 "13op.c"
    type_137=(struct sType*)come_increment_ref_count(left_value_134->type);
    # 405 "13op.c"
    fun_name_138="operator_mult";
    # 406 "13op.c"
    # 414 "13op.c"
    # 407 "13op.c"
    if(self->mQuote) {
        # 408 "13op.c"
        calling_fun_139=(_Bool)0;
    }
    else {
        # 411 "13op.c"
        calling_fun_139=operator_overload_fun(type_137,fun_name_138,left_value_134,right_value_136,(_Bool)0,info);
    }
    # 427 "13op.c"
    # 414 "13op.c"
    if(_if_conditional196=!calling_fun_139,    _if_conditional196) {
        # 415 "13op.c"
        come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 415, "CVALUE"))));
        come_call_finalizer3(right_value196,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 417 "13op.c"
        __dec_obj72=come_value_140->c_value;
        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("%s*%s",left_value_134->c_value,right_value_136->c_value))));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 418 "13op.c"
        __dec_obj73=come_value_140->type;
        come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(left_value_134->type))));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 419 "13op.c"
        come_value_140->type->mHeap=(_Bool)0;
        # 420 "13op.c"
        come_value_140->var=((void*)0);
        # 422 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_140->c_value);
        # 424 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
        come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 427 "13op.c"
    __result116__ = (_Bool)1;
    come_call_finalizer3(left_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(left_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value199;
char* __dec_obj74;
void* right_value200;
struct sNode* __dec_obj75;
void* right_value201;
struct sNode* __dec_obj76;
struct sDivNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
    # 439 "13op.c"
    self->sline=info->sline;
    # 440 "13op.c"
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 442 "13op.c"
    self->mQuote=quote;
    # 443 "13op.c"
    __dec_obj75=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 444 "13op.c"
    __dec_obj76=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value201=sNode_clone(right))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value201) { right_value201 = come_decrement_ref_count2(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 447 "13op.c"
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result117__;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivNode_terminated(struct sDivNode* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    # 449 "13op.c"
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__;
void* right_value202;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    # 454 "13op.c"
    __result119__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sDivNode")));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_141;
_Bool _if_conditional200;
_Bool __result120__;
void* right_value203;
struct CVALUE* left_value_142;
struct sNode* right_node_143;
_Bool _if_conditional201;
_Bool __result121__;
void* right_value204;
struct CVALUE* right_value_144;
struct sType* type_145;
char* fun_name_146;
_Bool calling_fun_147;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value205;
struct CVALUE* come_value_148;
void* right_value206;
char* __dec_obj77;
void* right_value207;
struct sType* __dec_obj78;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_141, 0, sizeof(struct sNode*));
right_value203 = (void*)0;
memset(&left_value_142, 0, sizeof(struct CVALUE*));
memset(&right_node_143, 0, sizeof(struct sNode*));
right_value204 = (void*)0;
memset(&right_value_144, 0, sizeof(struct CVALUE*));
memset(&type_145, 0, sizeof(struct sType*));
memset(&fun_name_146, 0, sizeof(char*));
memset(&calling_fun_147, 0, sizeof(_Bool));
right_value205 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
right_value206 = (void*)0;
right_value207 = (void*)0;
    # 460 "13op.c"
    left_node_141=self->mLeft;
    # 466 "13op.c"
    # 462 "13op.c"
    if(_if_conditional200=!node_compile(left_node_141,info),    _if_conditional200) {
        # 463 "13op.c"
        __result120__ = (_Bool)0;
        return __result120__;
    }
    # 466 "13op.c"
    left_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 467 "13op.c"
    dec_stack_ptr(1,info);
    # 469 "13op.c"
    right_node_143=self->mRight;
    # 475 "13op.c"
    # 471 "13op.c"
    if(_if_conditional201=!node_compile(right_node_143,info),    _if_conditional201) {
        # 472 "13op.c"
        __result121__ = (_Bool)0;
        come_call_finalizer3(left_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    # 475 "13op.c"
    right_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value204,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 476 "13op.c"
    dec_stack_ptr(1,info);
    # 478 "13op.c"
    type_145=(struct sType*)come_increment_ref_count(left_value_142->type);
    # 480 "13op.c"
    fun_name_146="operator_div";
    # 481 "13op.c"
    # 489 "13op.c"
    # 482 "13op.c"
    if(self->mQuote) {
        # 483 "13op.c"
        calling_fun_147=(_Bool)0;
    }
    else {
        # 486 "13op.c"
        calling_fun_147=operator_overload_fun(type_145,fun_name_146,left_value_142,right_value_144,(_Bool)0,info);
    }
    # 502 "13op.c"
    # 489 "13op.c"
    if(_if_conditional203=!calling_fun_147,    _if_conditional203) {
        # 490 "13op.c"
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 490, "CVALUE"))));
        come_call_finalizer3(right_value205,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 492 "13op.c"
        __dec_obj77=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value206=xsprintf("%s/%s",left_value_142->c_value,right_value_144->c_value))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 493 "13op.c"
        __dec_obj78=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(left_value_142->type))));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value207,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 494 "13op.c"
        come_value_148->type->mHeap=(_Bool)0;
        # 495 "13op.c"
        come_value_148->var=((void*)0);
        # 497 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_148->c_value);
        # 499 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        come_call_finalizer3(come_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 502 "13op.c"
    __result122__ = (_Bool)1;
    come_call_finalizer3(left_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result122__;
    come_call_finalizer3(left_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value208;
char* __dec_obj79;
void* right_value209;
struct sNode* __dec_obj80;
void* right_value210;
struct sNode* __dec_obj81;
struct sModNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
    # 514 "13op.c"
    self->sline=info->sline;
    # 515 "13op.c"
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(info->sname))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 517 "13op.c"
    self->mQuote=quote;
    # 518 "13op.c"
    __dec_obj80=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value209) { right_value209 = come_decrement_ref_count2(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 519 "13op.c"
    __dec_obj81=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 522 "13op.c"
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result123__;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModNode_terminated(struct sModNode* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    # 524 "13op.c"
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__;
void* right_value211;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
    # 529 "13op.c"
    __result125__ = __result_obj__ = ((char*)(right_value211=__builtin_string("sModNode")));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_149;
_Bool _if_conditional207;
_Bool __result126__;
void* right_value212;
struct CVALUE* left_value_150;
struct sNode* right_node_151;
_Bool _if_conditional208;
_Bool __result127__;
void* right_value213;
struct CVALUE* right_value_152;
struct sType* type_153;
char* fun_name_154;
_Bool calling_fun_155;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value214;
struct CVALUE* come_value_156;
void* right_value215;
char* __dec_obj82;
void* right_value216;
struct sType* __dec_obj83;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_149, 0, sizeof(struct sNode*));
right_value212 = (void*)0;
memset(&left_value_150, 0, sizeof(struct CVALUE*));
memset(&right_node_151, 0, sizeof(struct sNode*));
right_value213 = (void*)0;
memset(&right_value_152, 0, sizeof(struct CVALUE*));
memset(&type_153, 0, sizeof(struct sType*));
memset(&fun_name_154, 0, sizeof(char*));
memset(&calling_fun_155, 0, sizeof(_Bool));
right_value214 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value215 = (void*)0;
right_value216 = (void*)0;
    # 535 "13op.c"
    left_node_149=self->mLeft;
    # 541 "13op.c"
    # 537 "13op.c"
    if(_if_conditional207=!node_compile(left_node_149,info),    _if_conditional207) {
        # 538 "13op.c"
        __result126__ = (_Bool)0;
        return __result126__;
    }
    # 541 "13op.c"
    left_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value212,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 542 "13op.c"
    dec_stack_ptr(1,info);
    # 544 "13op.c"
    right_node_151=self->mRight;
    # 550 "13op.c"
    # 546 "13op.c"
    if(_if_conditional208=!node_compile(right_node_151,info),    _if_conditional208) {
        # 547 "13op.c"
        __result127__ = (_Bool)0;
        come_call_finalizer3(left_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    # 550 "13op.c"
    right_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value213,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 551 "13op.c"
    dec_stack_ptr(1,info);
    # 553 "13op.c"
    type_153=(struct sType*)come_increment_ref_count(left_value_150->type);
    # 555 "13op.c"
    fun_name_154="operator_mod";
    # 556 "13op.c"
    # 564 "13op.c"
    # 557 "13op.c"
    if(self->mQuote) {
        # 558 "13op.c"
        calling_fun_155=(_Bool)0;
    }
    else {
        # 561 "13op.c"
        calling_fun_155=operator_overload_fun(type_153,fun_name_154,left_value_150,right_value_152,(_Bool)0,info);
    }
    # 577 "13op.c"
    # 564 "13op.c"
    if(_if_conditional210=!calling_fun_155,    _if_conditional210) {
        # 565 "13op.c"
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 565, "CVALUE"))));
        come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 567 "13op.c"
        __dec_obj82=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s%%%s",left_value_150->c_value,right_value_152->c_value))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 568 "13op.c"
        __dec_obj83=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(left_value_150->type))));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 569 "13op.c"
        come_value_156->type->mHeap=(_Bool)0;
        # 570 "13op.c"
        come_value_156->var=((void*)0);
        # 572 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        # 574 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        come_call_finalizer3(come_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 577 "13op.c"
    __result128__ = (_Bool)1;
    come_call_finalizer3(left_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(left_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value217;
char* __dec_obj84;
void* right_value218;
struct sNode* __dec_obj85;
void* right_value219;
struct sNode* __dec_obj86;
struct sLShiftNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
    # 589 "13op.c"
    self->sline=info->sline;
    # 590 "13op.c"
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 591 "13op.c"
    self->mQuote=quote;
    # 593 "13op.c"
    __dec_obj85=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 594 "13op.c"
    __dec_obj86=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(right))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value219) { right_value219 = come_decrement_ref_count2(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 597 "13op.c"
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShiftNode_terminated(struct sLShiftNode* self){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    # 599 "13op.c"
    __result130__ = (_Bool)0;
    return __result130__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__;
void* right_value220;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
    # 604 "13op.c"
    __result131__ = __result_obj__ = ((char*)(right_value220=__builtin_string("sLShiftNode")));
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_157;
_Bool _if_conditional214;
_Bool __result132__;
void* right_value221;
struct CVALUE* left_value_158;
struct sNode* right_node_159;
_Bool _if_conditional215;
_Bool __result133__;
void* right_value222;
struct CVALUE* right_value_160;
struct sType* type_161;
char* fun_name_162;
_Bool calling_fun_163;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value223;
struct CVALUE* come_value_164;
void* right_value224;
char* __dec_obj87;
void* right_value225;
struct sType* __dec_obj88;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_157, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
memset(&left_value_158, 0, sizeof(struct CVALUE*));
memset(&right_node_159, 0, sizeof(struct sNode*));
right_value222 = (void*)0;
memset(&right_value_160, 0, sizeof(struct CVALUE*));
memset(&type_161, 0, sizeof(struct sType*));
memset(&fun_name_162, 0, sizeof(char*));
memset(&calling_fun_163, 0, sizeof(_Bool));
right_value223 = (void*)0;
memset(&come_value_164, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    # 610 "13op.c"
    left_node_157=self->mLeft;
    # 616 "13op.c"
    # 612 "13op.c"
    if(_if_conditional214=!node_compile(left_node_157,info),    _if_conditional214) {
        # 613 "13op.c"
        __result132__ = (_Bool)0;
        return __result132__;
    }
    # 616 "13op.c"
    left_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 617 "13op.c"
    dec_stack_ptr(1,info);
    # 619 "13op.c"
    right_node_159=self->mRight;
    # 625 "13op.c"
    # 621 "13op.c"
    if(_if_conditional215=!node_compile(right_node_159,info),    _if_conditional215) {
        # 622 "13op.c"
        __result133__ = (_Bool)0;
        come_call_finalizer3(left_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    # 625 "13op.c"
    right_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 626 "13op.c"
    dec_stack_ptr(1,info);
    # 628 "13op.c"
    type_161=(struct sType*)come_increment_ref_count(left_value_158->type);
    # 630 "13op.c"
    fun_name_162="operator_lshift";
    # 631 "13op.c"
    # 639 "13op.c"
    # 632 "13op.c"
    if(self->mQuote) {
        # 633 "13op.c"
        calling_fun_163=(_Bool)0;
    }
    else {
        # 636 "13op.c"
        calling_fun_163=operator_overload_fun(type_161,fun_name_162,left_value_158,right_value_160,(_Bool)0,info);
    }
    # 652 "13op.c"
    # 639 "13op.c"
    if(_if_conditional217=!calling_fun_163,    _if_conditional217) {
        # 640 "13op.c"
        come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 640, "CVALUE"))));
        come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 642 "13op.c"
        __dec_obj87=come_value_164->c_value;
        come_value_164->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s<<%s",left_value_158->c_value,right_value_160->c_value))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 643 "13op.c"
        __dec_obj88=come_value_164->type;
        come_value_164->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_value_158->type))));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 644 "13op.c"
        come_value_164->type->mHeap=(_Bool)0;
        # 645 "13op.c"
        come_value_164->var=((void*)0);
        # 647 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_164->c_value);
        # 649 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
        come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 652 "13op.c"
    __result134__ = (_Bool)1;
    come_call_finalizer3(left_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_161,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(left_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_161,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* __dec_obj89;
void* right_value227;
struct sNode* __dec_obj90;
void* right_value228;
struct sNode* __dec_obj91;
struct sRShiftNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
    # 664 "13op.c"
    self->sline=info->sline;
    # 665 "13op.c"
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(info->sname))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 667 "13op.c"
    self->mQuote=quote;
    # 668 "13op.c"
    __dec_obj90=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(left))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 669 "13op.c"
    __dec_obj91=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=sNode_clone(right))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 672 "13op.c"
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result135__;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftNode_terminated(struct sRShiftNode* self){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    # 674 "13op.c"
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__;
void* right_value229;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
    # 679 "13op.c"
    __result137__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sRShiftNode")));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_165;
_Bool _if_conditional221;
_Bool __result138__;
void* right_value230;
struct CVALUE* left_value_166;
struct sNode* right_node_167;
_Bool _if_conditional222;
_Bool __result139__;
void* right_value231;
struct CVALUE* right_value_168;
struct sType* type_169;
char* fun_name_170;
_Bool calling_fun_171;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value232;
struct CVALUE* come_value_172;
void* right_value233;
char* __dec_obj92;
void* right_value234;
struct sType* __dec_obj93;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_165, 0, sizeof(struct sNode*));
right_value230 = (void*)0;
memset(&left_value_166, 0, sizeof(struct CVALUE*));
memset(&right_node_167, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
memset(&right_value_168, 0, sizeof(struct CVALUE*));
memset(&type_169, 0, sizeof(struct sType*));
memset(&fun_name_170, 0, sizeof(char*));
memset(&calling_fun_171, 0, sizeof(_Bool));
right_value232 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    # 685 "13op.c"
    left_node_165=self->mLeft;
    # 691 "13op.c"
    # 687 "13op.c"
    if(_if_conditional221=!node_compile(left_node_165,info),    _if_conditional221) {
        # 688 "13op.c"
        __result138__ = (_Bool)0;
        return __result138__;
    }
    # 691 "13op.c"
    left_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value230,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 692 "13op.c"
    dec_stack_ptr(1,info);
    # 694 "13op.c"
    right_node_167=self->mRight;
    # 700 "13op.c"
    # 696 "13op.c"
    if(_if_conditional222=!node_compile(right_node_167,info),    _if_conditional222) {
        # 697 "13op.c"
        __result139__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    # 700 "13op.c"
    right_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 701 "13op.c"
    dec_stack_ptr(1,info);
    # 703 "13op.c"
    type_169=(struct sType*)come_increment_ref_count(left_value_166->type);
    # 705 "13op.c"
    fun_name_170="operator_rshift";
    # 706 "13op.c"
    # 714 "13op.c"
    # 707 "13op.c"
    if(self->mQuote) {
        # 708 "13op.c"
        calling_fun_171=(_Bool)0;
    }
    else {
        # 711 "13op.c"
        calling_fun_171=operator_overload_fun(type_169,fun_name_170,left_value_166,right_value_168,(_Bool)0,info);
    }
    # 727 "13op.c"
    # 714 "13op.c"
    if(_if_conditional224=!calling_fun_171,    _if_conditional224) {
        # 715 "13op.c"
        come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 715, "CVALUE"))));
        come_call_finalizer3(right_value232,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 717 "13op.c"
        __dec_obj92=come_value_172->c_value;
        come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s>>%s",left_value_166->c_value,right_value_168->c_value))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 718 "13op.c"
        __dec_obj93=come_value_172->type;
        come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(left_value_166->type))));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 719 "13op.c"
        come_value_172->type->mHeap=(_Bool)0;
        # 720 "13op.c"
        come_value_172->var=((void*)0);
        # 722 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_172->c_value);
        # 724 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
        come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 727 "13op.c"
    __result140__ = (_Bool)1;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value235;
char* __dec_obj94;
void* right_value236;
struct sNode* __dec_obj95;
void* right_value237;
struct sNode* __dec_obj96;
struct sGtEqNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
    # 739 "13op.c"
    self->sline=info->sline;
    # 740 "13op.c"
    __dec_obj94=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(info->sname))));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 742 "13op.c"
    self->mQuote=quote;
    # 743 "13op.c"
    __dec_obj95=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(left))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value236) { right_value236 = come_decrement_ref_count2(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 744 "13op.c"
    __dec_obj96=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(right))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 747 "13op.c"
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result141__;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtEqNode_terminated(struct sGtEqNode* self){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    # 749 "13op.c"
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__;
void* right_value238;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
    # 754 "13op.c"
    __result143__ = __result_obj__ = ((char*)(right_value238=__builtin_string("sGtEqNode")));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_173;
_Bool _if_conditional228;
_Bool __result144__;
void* right_value239;
struct CVALUE* left_value_174;
struct sNode* right_node_175;
_Bool _if_conditional229;
_Bool __result145__;
void* right_value240;
struct CVALUE* right_value_176;
struct sType* type_177;
char* fun_name_178;
_Bool calling_fun_179;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value241;
struct CVALUE* come_value_180;
void* right_value242;
char* __dec_obj97;
void* right_value243;
struct sType* __dec_obj98;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_173, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
memset(&left_value_174, 0, sizeof(struct CVALUE*));
memset(&right_node_175, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
memset(&right_value_176, 0, sizeof(struct CVALUE*));
memset(&type_177, 0, sizeof(struct sType*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&calling_fun_179, 0, sizeof(_Bool));
right_value241 = (void*)0;
memset(&come_value_180, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    # 760 "13op.c"
    left_node_173=self->mLeft;
    # 766 "13op.c"
    # 762 "13op.c"
    if(_if_conditional228=!node_compile(left_node_173,info),    _if_conditional228) {
        # 763 "13op.c"
        __result144__ = (_Bool)0;
        return __result144__;
    }
    # 766 "13op.c"
    left_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 767 "13op.c"
    dec_stack_ptr(1,info);
    # 769 "13op.c"
    right_node_175=self->mRight;
    # 775 "13op.c"
    # 771 "13op.c"
    if(_if_conditional229=!node_compile(right_node_175,info),    _if_conditional229) {
        # 772 "13op.c"
        __result145__ = (_Bool)0;
        come_call_finalizer3(left_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result145__;
    }
    # 775 "13op.c"
    right_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 776 "13op.c"
    dec_stack_ptr(1,info);
    # 778 "13op.c"
    type_177=(struct sType*)come_increment_ref_count(left_value_174->type);
    # 780 "13op.c"
    fun_name_178="operator_gteq";
    # 781 "13op.c"
    # 789 "13op.c"
    # 782 "13op.c"
    if(self->mQuote) {
        # 783 "13op.c"
        calling_fun_179=(_Bool)0;
    }
    else {
        # 786 "13op.c"
        calling_fun_179=operator_overload_fun(type_177,fun_name_178,left_value_174,right_value_176,(_Bool)0,info);
    }
    # 802 "13op.c"
    # 789 "13op.c"
    if(_if_conditional231=!calling_fun_179,    _if_conditional231) {
        # 790 "13op.c"
        come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 790, "CVALUE"))));
        come_call_finalizer3(right_value241,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 792 "13op.c"
        __dec_obj97=come_value_180->c_value;
        come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("%s>=%s",left_value_174->c_value,right_value_176->c_value))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 793 "13op.c"
        __dec_obj98=come_value_180->type;
        come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(left_value_174->type))));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 794 "13op.c"
        come_value_180->type->mHeap=(_Bool)0;
        # 795 "13op.c"
        come_value_180->var=((void*)0);
        # 797 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_180->c_value);
        # 799 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
        come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 802 "13op.c"
    __result146__ = (_Bool)1;
    come_call_finalizer3(left_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
    come_call_finalizer3(left_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value244;
char* __dec_obj99;
void* right_value245;
struct sNode* __dec_obj100;
void* right_value246;
struct sNode* __dec_obj101;
struct sLtEqNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
    # 814 "13op.c"
    self->sline=info->sline;
    # 815 "13op.c"
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(info->sname))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 817 "13op.c"
    self->mQuote=quote;
    # 818 "13op.c"
    __dec_obj100=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 819 "13op.c"
    __dec_obj101=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(right))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 822 "13op.c"
    __result147__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result147__;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtEqNode_terminated(struct sLtEqNode* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    # 824 "13op.c"
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__;
void* right_value247;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    # 829 "13op.c"
    __result149__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sLtEqNode")));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_181;
_Bool _if_conditional235;
_Bool __result150__;
void* right_value248;
struct CVALUE* left_value_182;
struct sNode* right_node_183;
_Bool _if_conditional236;
_Bool __result151__;
void* right_value249;
struct CVALUE* right_value_184;
struct sType* type_185;
char* fun_name_186;
_Bool calling_fun_187;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value250;
struct CVALUE* come_value_188;
void* right_value251;
char* __dec_obj102;
void* right_value252;
struct sType* __dec_obj103;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_181, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&left_value_182, 0, sizeof(struct CVALUE*));
memset(&right_node_183, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&right_value_184, 0, sizeof(struct CVALUE*));
memset(&type_185, 0, sizeof(struct sType*));
memset(&fun_name_186, 0, sizeof(char*));
memset(&calling_fun_187, 0, sizeof(_Bool));
right_value250 = (void*)0;
memset(&come_value_188, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
    # 835 "13op.c"
    left_node_181=self->mLeft;
    # 841 "13op.c"
    # 837 "13op.c"
    if(_if_conditional235=!node_compile(left_node_181,info),    _if_conditional235) {
        # 838 "13op.c"
        __result150__ = (_Bool)0;
        return __result150__;
    }
    # 841 "13op.c"
    left_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 842 "13op.c"
    dec_stack_ptr(1,info);
    # 844 "13op.c"
    right_node_183=self->mRight;
    # 850 "13op.c"
    # 846 "13op.c"
    if(_if_conditional236=!node_compile(right_node_183,info),    _if_conditional236) {
        # 847 "13op.c"
        __result151__ = (_Bool)0;
        come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    # 850 "13op.c"
    right_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 851 "13op.c"
    dec_stack_ptr(1,info);
    # 853 "13op.c"
    type_185=(struct sType*)come_increment_ref_count(left_value_182->type);
    # 855 "13op.c"
    fun_name_186="operator_lteq";
    # 856 "13op.c"
    # 864 "13op.c"
    # 857 "13op.c"
    if(self->mQuote) {
        # 858 "13op.c"
        calling_fun_187=(_Bool)0;
    }
    else {
        # 861 "13op.c"
        calling_fun_187=operator_overload_fun(type_185,fun_name_186,left_value_182,right_value_184,(_Bool)0,info);
    }
    # 877 "13op.c"
    # 864 "13op.c"
    if(_if_conditional238=!calling_fun_187,    _if_conditional238) {
        # 865 "13op.c"
        come_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 865, "CVALUE"))));
        come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 867 "13op.c"
        __dec_obj102=come_value_188->c_value;
        come_value_188->c_value=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s<=%s",left_value_182->c_value,right_value_184->c_value))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 868 "13op.c"
        __dec_obj103=come_value_188->type;
        come_value_188->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(left_value_182->type))));
        come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 869 "13op.c"
        come_value_188->type->mHeap=(_Bool)0;
        # 870 "13op.c"
        come_value_188->var=((void*)0);
        # 872 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_188->c_value);
        # 874 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
        come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 877 "13op.c"
    __result152__ = (_Bool)1;
    come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value253;
char* __dec_obj104;
void* right_value254;
struct sNode* __dec_obj105;
void* right_value255;
struct sNode* __dec_obj106;
struct sLtNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
    # 889 "13op.c"
    self->sline=info->sline;
    # 890 "13op.c"
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(info->sname))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 892 "13op.c"
    self->mQuote=quote;
    # 893 "13op.c"
    __dec_obj105=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(left))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 894 "13op.c"
    __dec_obj106=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=sNode_clone(right))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 897 "13op.c"
    __result153__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result153__;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtNode_terminated(struct sLtNode* self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    # 899 "13op.c"
    __result154__ = (_Bool)0;
    return __result154__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__;
void* right_value256;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
    # 904 "13op.c"
    __result155__ = __result_obj__ = ((char*)(right_value256=__builtin_string("sLtNode")));
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_189;
_Bool _if_conditional242;
_Bool __result156__;
void* right_value257;
struct CVALUE* left_value_190;
struct sNode* right_node_191;
_Bool _if_conditional243;
_Bool __result157__;
void* right_value258;
struct CVALUE* right_value_192;
struct sType* type_193;
char* fun_name_194;
_Bool calling_fun_195;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value259;
struct CVALUE* come_value_196;
void* right_value260;
char* __dec_obj107;
void* right_value261;
struct sType* __dec_obj108;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_189, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
memset(&left_value_190, 0, sizeof(struct CVALUE*));
memset(&right_node_191, 0, sizeof(struct sNode*));
right_value258 = (void*)0;
memset(&right_value_192, 0, sizeof(struct CVALUE*));
memset(&type_193, 0, sizeof(struct sType*));
memset(&fun_name_194, 0, sizeof(char*));
memset(&calling_fun_195, 0, sizeof(_Bool));
right_value259 = (void*)0;
memset(&come_value_196, 0, sizeof(struct CVALUE*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    # 910 "13op.c"
    left_node_189=self->mLeft;
    # 916 "13op.c"
    # 912 "13op.c"
    if(_if_conditional242=!node_compile(left_node_189,info),    _if_conditional242) {
        # 913 "13op.c"
        __result156__ = (_Bool)0;
        return __result156__;
    }
    # 916 "13op.c"
    left_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value257,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 917 "13op.c"
    dec_stack_ptr(1,info);
    # 919 "13op.c"
    right_node_191=self->mRight;
    # 925 "13op.c"
    # 921 "13op.c"
    if(_if_conditional243=!node_compile(right_node_191,info),    _if_conditional243) {
        # 922 "13op.c"
        __result157__ = (_Bool)0;
        come_call_finalizer3(left_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result157__;
    }
    # 925 "13op.c"
    right_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value258,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 926 "13op.c"
    dec_stack_ptr(1,info);
    # 928 "13op.c"
    type_193=(struct sType*)come_increment_ref_count(left_value_190->type);
    # 930 "13op.c"
    fun_name_194="operator_lt";
    # 931 "13op.c"
    # 939 "13op.c"
    # 932 "13op.c"
    if(self->mQuote) {
        # 933 "13op.c"
        calling_fun_195=(_Bool)0;
    }
    else {
        # 936 "13op.c"
        calling_fun_195=operator_overload_fun(type_193,fun_name_194,left_value_190,right_value_192,(_Bool)0,info);
    }
    # 952 "13op.c"
    # 939 "13op.c"
    if(_if_conditional245=!calling_fun_195,    _if_conditional245) {
        # 940 "13op.c"
        come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 940, "CVALUE"))));
        come_call_finalizer3(right_value259,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 942 "13op.c"
        __dec_obj107=come_value_196->c_value;
        come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("%s<%s",left_value_190->c_value,right_value_192->c_value))));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 943 "13op.c"
        __dec_obj108=come_value_196->type;
        come_value_196->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(left_value_190->type))));
        come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 944 "13op.c"
        come_value_196->type->mHeap=(_Bool)0;
        # 945 "13op.c"
        come_value_196->var=((void*)0);
        # 947 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_196->c_value);
        # 949 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
        come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 952 "13op.c"
    __result158__ = (_Bool)1;
    come_call_finalizer3(left_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result158__;
    come_call_finalizer3(left_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value262;
char* __dec_obj109;
void* right_value263;
struct sNode* __dec_obj110;
void* right_value264;
struct sNode* __dec_obj111;
struct sGtNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
    # 964 "13op.c"
    self->sline=info->sline;
    # 965 "13op.c"
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(info->sname))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 967 "13op.c"
    self->mQuote=quote;
    # 968 "13op.c"
    __dec_obj110=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 969 "13op.c"
    __dec_obj111=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=sNode_clone(right))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 972 "13op.c"
    __result159__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result159__;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtNode_terminated(struct sGtNode* self){
void* __result_obj__;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    # 974 "13op.c"
    __result160__ = (_Bool)0;
    return __result160__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__;
void* right_value265;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
    # 979 "13op.c"
    __result161__ = __result_obj__ = ((char*)(right_value265=__builtin_string("sGtNode")));
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result161__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_197;
_Bool _if_conditional249;
_Bool __result162__;
void* right_value266;
struct CVALUE* left_value_198;
struct sNode* right_node_199;
_Bool _if_conditional250;
_Bool __result163__;
void* right_value267;
struct CVALUE* right_value_200;
struct sType* type_201;
char* fun_name_202;
_Bool calling_fun_203;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value268;
struct CVALUE* come_value_204;
void* right_value269;
char* __dec_obj112;
void* right_value270;
struct sType* __dec_obj113;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_197, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
memset(&left_value_198, 0, sizeof(struct CVALUE*));
memset(&right_node_199, 0, sizeof(struct sNode*));
right_value267 = (void*)0;
memset(&right_value_200, 0, sizeof(struct CVALUE*));
memset(&type_201, 0, sizeof(struct sType*));
memset(&fun_name_202, 0, sizeof(char*));
memset(&calling_fun_203, 0, sizeof(_Bool));
right_value268 = (void*)0;
memset(&come_value_204, 0, sizeof(struct CVALUE*));
right_value269 = (void*)0;
right_value270 = (void*)0;
    # 985 "13op.c"
    left_node_197=self->mLeft;
    # 991 "13op.c"
    # 987 "13op.c"
    if(_if_conditional249=!node_compile(left_node_197,info),    _if_conditional249) {
        # 988 "13op.c"
        __result162__ = (_Bool)0;
        return __result162__;
    }
    # 991 "13op.c"
    left_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value266,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 992 "13op.c"
    dec_stack_ptr(1,info);
    # 994 "13op.c"
    right_node_199=self->mRight;
    # 1000 "13op.c"
    # 996 "13op.c"
    if(_if_conditional250=!node_compile(right_node_199,info),    _if_conditional250) {
        # 997 "13op.c"
        __result163__ = (_Bool)0;
        come_call_finalizer3(left_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result163__;
    }
    # 1000 "13op.c"
    right_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1001 "13op.c"
    dec_stack_ptr(1,info);
    # 1003 "13op.c"
    type_201=(struct sType*)come_increment_ref_count(left_value_198->type);
    # 1005 "13op.c"
    fun_name_202="operator_gt";
    # 1006 "13op.c"
    # 1014 "13op.c"
    # 1007 "13op.c"
    if(self->mQuote) {
        # 1008 "13op.c"
        calling_fun_203=(_Bool)0;
    }
    else {
        # 1011 "13op.c"
        calling_fun_203=operator_overload_fun(type_201,fun_name_202,left_value_198,right_value_200,(_Bool)0,info);
    }
    # 1027 "13op.c"
    # 1014 "13op.c"
    if(_if_conditional252=!calling_fun_203,    _if_conditional252) {
        # 1015 "13op.c"
        come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1015, "CVALUE"))));
        come_call_finalizer3(right_value268,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1017 "13op.c"
        __dec_obj112=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(((char*)(right_value269=xsprintf("%s>%s",left_value_198->c_value,right_value_200->c_value))));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1018 "13op.c"
        __dec_obj113=come_value_204->type;
        come_value_204->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(left_value_198->type))));
        come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1019 "13op.c"
        come_value_204->type->mHeap=(_Bool)0;
        # 1020 "13op.c"
        come_value_204->var=((void*)0);
        # 1022 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_204->c_value);
        # 1024 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
        come_call_finalizer3(come_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1027 "13op.c"
    __result164__ = (_Bool)1;
    come_call_finalizer3(left_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_201,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
    come_call_finalizer3(left_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_201,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value271;
char* __dec_obj114;
void* right_value272;
struct sNode* __dec_obj115;
void* right_value273;
struct sNode* __dec_obj116;
struct sEqNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
    # 1040 "13op.c"
    self->sline=info->sline;
    # 1041 "13op.c"
    __dec_obj114=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string(info->sname))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1043 "13op.c"
    self->mQuote=quote;
    # 1044 "13op.c"
    __dec_obj115=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=sNode_clone(left))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1045 "13op.c"
    __dec_obj116=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=sNode_clone(right))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1048 "13op.c"
    __result165__ = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result165__;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sEqNode_terminated(struct sEqNode* self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1050 "13op.c"
    __result166__ = (_Bool)0;
    return __result166__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__;
void* right_value274;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
    # 1055 "13op.c"
    __result167__ = __result_obj__ = ((char*)(right_value274=__builtin_string("sEqNode")));
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_205;
_Bool _if_conditional256;
_Bool __result168__;
void* right_value275;
struct CVALUE* left_value_206;
struct sNode* right_node_207;
_Bool _if_conditional257;
_Bool __result169__;
void* right_value276;
struct CVALUE* right_value_208;
void* right_value277;
struct CVALUE* come_value_209;
void* right_value278;
char* __dec_obj117;
void* right_value279;
struct sType* __dec_obj118;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_205, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
memset(&left_value_206, 0, sizeof(struct CVALUE*));
memset(&right_node_207, 0, sizeof(struct sNode*));
right_value276 = (void*)0;
memset(&right_value_208, 0, sizeof(struct CVALUE*));
right_value277 = (void*)0;
memset(&come_value_209, 0, sizeof(struct CVALUE*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 1061 "13op.c"
    left_node_205=self->mLeft;
    # 1067 "13op.c"
    # 1063 "13op.c"
    if(_if_conditional256=!node_compile(left_node_205,info),    _if_conditional256) {
        # 1064 "13op.c"
        __result168__ = (_Bool)0;
        return __result168__;
    }
    # 1067 "13op.c"
    left_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value275,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1068 "13op.c"
    dec_stack_ptr(1,info);
    # 1070 "13op.c"
    right_node_207=self->mRight;
    # 1076 "13op.c"
    # 1072 "13op.c"
    if(_if_conditional257=!node_compile(right_node_207,info),    _if_conditional257) {
        # 1073 "13op.c"
        __result169__ = (_Bool)0;
        come_call_finalizer3(left_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result169__;
    }
    # 1076 "13op.c"
    right_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value276=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value276,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1077 "13op.c"
    dec_stack_ptr(1,info);
    # 1079 "13op.c"
    come_value_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value277=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1079, "CVALUE"))));
    come_call_finalizer3(right_value277,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1081 "13op.c"
    __dec_obj117=come_value_209->c_value;
    come_value_209->c_value=(char*)come_increment_ref_count(((char*)(right_value278=xsprintf("%s==%s",left_value_206->c_value,right_value_208->c_value))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1082 "13op.c"
    __dec_obj118=come_value_209->type;
    come_value_209->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(left_value_206->type))));
    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value279,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1083 "13op.c"
    come_value_209->type->mHeap=(_Bool)0;
    # 1084 "13op.c"
    come_value_209->var=((void*)0);
    # 1086 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_209->c_value);
    # 1088 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_209));
    # 1090 "13op.c"
    __result170__ = (_Bool)1;
    come_call_finalizer3(left_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result170__;
    come_call_finalizer3(left_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value280;
char* __dec_obj119;
void* right_value281;
struct sNode* __dec_obj120;
void* right_value282;
struct sNode* __dec_obj121;
struct sNotEqNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
    # 1102 "13op.c"
    self->sline=info->sline;
    # 1103 "13op.c"
    __dec_obj119=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string(info->sname))));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1105 "13op.c"
    self->mQuote=quote;
    # 1106 "13op.c"
    __dec_obj120=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=sNode_clone(left))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1107 "13op.c"
    __dec_obj121=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=sNode_clone(right))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1110 "13op.c"
    __result171__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result171__;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEqNode_terminated(struct sNotEqNode* self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1112 "13op.c"
    __result172__ = (_Bool)0;
    return __result172__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__;
void* right_value283;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
    # 1117 "13op.c"
    __result173__ = __result_obj__ = ((char*)(right_value283=__builtin_string("sNotEqNode")));
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_210;
_Bool _if_conditional261;
_Bool __result174__;
void* right_value284;
struct CVALUE* left_value_211;
struct sNode* right_node_212;
_Bool _if_conditional262;
_Bool __result175__;
void* right_value285;
struct CVALUE* right_value_213;
void* right_value286;
struct CVALUE* come_value_214;
void* right_value287;
char* __dec_obj122;
void* right_value288;
struct sType* __dec_obj123;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_210, 0, sizeof(struct sNode*));
right_value284 = (void*)0;
memset(&left_value_211, 0, sizeof(struct CVALUE*));
memset(&right_node_212, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&right_value_213, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
memset(&come_value_214, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
    # 1123 "13op.c"
    left_node_210=self->mLeft;
    # 1129 "13op.c"
    # 1125 "13op.c"
    if(_if_conditional261=!node_compile(left_node_210,info),    _if_conditional261) {
        # 1126 "13op.c"
        __result174__ = (_Bool)0;
        return __result174__;
    }
    # 1129 "13op.c"
    left_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value284=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value284,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1130 "13op.c"
    dec_stack_ptr(1,info);
    # 1132 "13op.c"
    right_node_212=self->mRight;
    # 1138 "13op.c"
    # 1134 "13op.c"
    if(_if_conditional262=!node_compile(right_node_212,info),    _if_conditional262) {
        # 1135 "13op.c"
        __result175__ = (_Bool)0;
        come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result175__;
    }
    # 1138 "13op.c"
    right_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1139 "13op.c"
    dec_stack_ptr(1,info);
    # 1141 "13op.c"
    come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1141, "CVALUE"))));
    come_call_finalizer3(right_value286,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1143 "13op.c"
    __dec_obj122=come_value_214->c_value;
    come_value_214->c_value=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("%s!=%s",left_value_211->c_value,right_value_213->c_value))));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1144 "13op.c"
    __dec_obj123=come_value_214->type;
    come_value_214->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(left_value_211->type))));
    come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1145 "13op.c"
    come_value_214->type->mHeap=(_Bool)0;
    # 1146 "13op.c"
    come_value_214->var=((void*)0);
    # 1148 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_214->c_value);
    # 1150 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_214));
    # 1152 "13op.c"
    __result176__ = (_Bool)1;
    come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result176__;
    come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value289;
char* __dec_obj124;
void* right_value290;
struct sNode* __dec_obj125;
void* right_value291;
struct sNode* __dec_obj126;
struct sEq2Node* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
    # 1164 "13op.c"
    self->sline=info->sline;
    # 1165 "13op.c"
    __dec_obj124=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string(info->sname))));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1167 "13op.c"
    self->mQuote=quote;
    # 1168 "13op.c"
    __dec_obj125=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNode_clone(left))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1169 "13op.c"
    __dec_obj126=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=sNode_clone(right))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1172 "13op.c"
    __result177__ = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result177__;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sEq2Node_terminated(struct sEq2Node* self){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1174 "13op.c"
    __result178__ = (_Bool)0;
    return __result178__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__;
void* right_value292;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
    # 1179 "13op.c"
    __result179__ = __result_obj__ = ((char*)(right_value292=__builtin_string("sEq2Node")));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result179__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_215;
_Bool _if_conditional266;
_Bool __result180__;
void* right_value293;
struct CVALUE* left_value_216;
struct sNode* right_node_217;
_Bool _if_conditional267;
_Bool __result181__;
void* right_value294;
struct CVALUE* right_value_218;
struct sType* type_219;
char* fun_name_220;
_Bool calling_fun_221;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value295;
struct CVALUE* come_value_222;
void* right_value296;
char* __dec_obj127;
void* right_value297;
struct sType* __dec_obj128;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_215, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
memset(&left_value_216, 0, sizeof(struct CVALUE*));
memset(&right_node_217, 0, sizeof(struct sNode*));
right_value294 = (void*)0;
memset(&right_value_218, 0, sizeof(struct CVALUE*));
memset(&type_219, 0, sizeof(struct sType*));
memset(&fun_name_220, 0, sizeof(char*));
memset(&calling_fun_221, 0, sizeof(_Bool));
right_value295 = (void*)0;
memset(&come_value_222, 0, sizeof(struct CVALUE*));
right_value296 = (void*)0;
right_value297 = (void*)0;
    # 1185 "13op.c"
    left_node_215=self->mLeft;
    # 1191 "13op.c"
    # 1187 "13op.c"
    if(_if_conditional266=!node_compile(left_node_215,info),    _if_conditional266) {
        # 1188 "13op.c"
        __result180__ = (_Bool)0;
        return __result180__;
    }
    # 1191 "13op.c"
    left_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value293,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1192 "13op.c"
    dec_stack_ptr(1,info);
    # 1194 "13op.c"
    right_node_217=self->mRight;
    # 1200 "13op.c"
    # 1196 "13op.c"
    if(_if_conditional267=!node_compile(right_node_217,info),    _if_conditional267) {
        # 1197 "13op.c"
        __result181__ = (_Bool)0;
        come_call_finalizer3(left_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result181__;
    }
    # 1200 "13op.c"
    right_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value294,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1201 "13op.c"
    dec_stack_ptr(1,info);
    # 1203 "13op.c"
    type_219=(struct sType*)come_increment_ref_count(left_value_216->type);
    # 1205 "13op.c"
    fun_name_220="operator_equals";
    # 1206 "13op.c"
    # 1214 "13op.c"
    # 1207 "13op.c"
    if(self->mQuote) {
        # 1208 "13op.c"
        calling_fun_221=(_Bool)0;
    }
    else {
        # 1211 "13op.c"
        calling_fun_221=operator_overload_fun(type_219,fun_name_220,left_value_216,right_value_218,(_Bool)0,info);
    }
    # 1227 "13op.c"
    # 1214 "13op.c"
    if(_if_conditional269=!calling_fun_221,    _if_conditional269) {
        # 1215 "13op.c"
        come_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1215, "CVALUE"))));
        come_call_finalizer3(right_value295,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1217 "13op.c"
        __dec_obj127=come_value_222->c_value;
        come_value_222->c_value=(char*)come_increment_ref_count(((char*)(right_value296=xsprintf("%s==%s",left_value_216->c_value,right_value_218->c_value))));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1218 "13op.c"
        __dec_obj128=come_value_222->type;
        come_value_222->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(left_value_216->type))));
        come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1219 "13op.c"
        come_value_222->type->mHeap=(_Bool)0;
        # 1220 "13op.c"
        come_value_222->var=((void*)0);
        # 1222 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_222->c_value);
        # 1224 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_222));
        come_call_finalizer3(come_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1227 "13op.c"
    __result182__ = (_Bool)1;
    come_call_finalizer3(left_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result182__;
    come_call_finalizer3(left_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value298;
char* __dec_obj129;
void* right_value299;
struct sNode* __dec_obj130;
void* right_value300;
struct sNode* __dec_obj131;
struct sNotEq2Node* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
    # 1239 "13op.c"
    self->sline=info->sline;
    # 1240 "13op.c"
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1242 "13op.c"
    self->mQuote=quote;
    # 1243 "13op.c"
    __dec_obj130=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNode_clone(left))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1244 "13op.c"
    __dec_obj131=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=sNode_clone(right))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1247 "13op.c"
    __result183__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result183__;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEq2Node_terminated(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1249 "13op.c"
    __result184__ = (_Bool)0;
    return __result184__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__;
void* right_value301;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
    # 1254 "13op.c"
    __result185__ = __result_obj__ = ((char*)(right_value301=__builtin_string("sNotEq2Node")));
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result185__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_223;
_Bool _if_conditional273;
_Bool __result186__;
void* right_value302;
struct CVALUE* left_value_224;
struct sNode* right_node_225;
_Bool _if_conditional274;
_Bool __result187__;
void* right_value303;
struct CVALUE* right_value_226;
struct sType* type_227;
char* fun_name_228;
_Bool calling_fun_229;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value304;
struct CVALUE* come_value_230;
void* right_value305;
char* __dec_obj132;
void* right_value306;
struct sType* __dec_obj133;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_223, 0, sizeof(struct sNode*));
right_value302 = (void*)0;
memset(&left_value_224, 0, sizeof(struct CVALUE*));
memset(&right_node_225, 0, sizeof(struct sNode*));
right_value303 = (void*)0;
memset(&right_value_226, 0, sizeof(struct CVALUE*));
memset(&type_227, 0, sizeof(struct sType*));
memset(&fun_name_228, 0, sizeof(char*));
memset(&calling_fun_229, 0, sizeof(_Bool));
right_value304 = (void*)0;
memset(&come_value_230, 0, sizeof(struct CVALUE*));
right_value305 = (void*)0;
right_value306 = (void*)0;
    # 1260 "13op.c"
    left_node_223=self->mLeft;
    # 1266 "13op.c"
    # 1262 "13op.c"
    if(_if_conditional273=!node_compile(left_node_223,info),    _if_conditional273) {
        # 1263 "13op.c"
        __result186__ = (_Bool)0;
        return __result186__;
    }
    # 1266 "13op.c"
    left_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1267 "13op.c"
    dec_stack_ptr(1,info);
    # 1269 "13op.c"
    right_node_225=self->mRight;
    # 1275 "13op.c"
    # 1271 "13op.c"
    if(_if_conditional274=!node_compile(right_node_225,info),    _if_conditional274) {
        # 1272 "13op.c"
        __result187__ = (_Bool)0;
        come_call_finalizer3(left_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    # 1275 "13op.c"
    right_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value303=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value303,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1276 "13op.c"
    dec_stack_ptr(1,info);
    # 1278 "13op.c"
    type_227=(struct sType*)come_increment_ref_count(left_value_224->type);
    # 1280 "13op.c"
    fun_name_228="operator_not_equals";
    # 1281 "13op.c"
    # 1289 "13op.c"
    # 1282 "13op.c"
    if(self->mQuote) {
        # 1283 "13op.c"
        calling_fun_229=(_Bool)0;
    }
    else {
        # 1286 "13op.c"
        calling_fun_229=operator_overload_fun(type_227,fun_name_228,left_value_224,right_value_226,(_Bool)0,info);
    }
    # 1302 "13op.c"
    # 1289 "13op.c"
    if(_if_conditional276=!calling_fun_229,    _if_conditional276) {
        # 1290 "13op.c"
        come_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1290, "CVALUE"))));
        come_call_finalizer3(right_value304,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1292 "13op.c"
        __dec_obj132=come_value_230->c_value;
        come_value_230->c_value=(char*)come_increment_ref_count(((char*)(right_value305=xsprintf("%s!=%s",left_value_224->c_value,right_value_226->c_value))));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1293 "13op.c"
        __dec_obj133=come_value_230->type;
        come_value_230->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(left_value_224->type))));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1294 "13op.c"
        come_value_230->type->mHeap=(_Bool)0;
        # 1295 "13op.c"
        come_value_230->var=((void*)0);
        # 1297 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_230->c_value);
        # 1299 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_230));
        come_call_finalizer3(come_value_230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1302 "13op.c"
    __result188__ = (_Bool)1;
    come_call_finalizer3(left_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_227,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result188__;
    come_call_finalizer3(left_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_227,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value307;
char* __dec_obj134;
void* right_value308;
struct sNode* __dec_obj135;
void* right_value309;
struct sNode* __dec_obj136;
struct sAndNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
    # 1314 "13op.c"
    self->sline=info->sline;
    # 1315 "13op.c"
    __dec_obj134=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(info->sname))));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1317 "13op.c"
    self->mQuote=quote;
    # 1318 "13op.c"
    __dec_obj135=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(left))));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1319 "13op.c"
    __dec_obj136=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(right))));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1322 "13op.c"
    __result189__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result189__;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndNode_terminated(struct sAndNode* self){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1324 "13op.c"
    __result190__ = (_Bool)0;
    return __result190__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__;
void* right_value310;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
    # 1329 "13op.c"
    __result191__ = __result_obj__ = ((char*)(right_value310=__builtin_string("sAndNode")));
    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result191__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_231;
_Bool _if_conditional280;
_Bool __result192__;
void* right_value311;
struct CVALUE* left_value_232;
struct sNode* right_node_233;
_Bool _if_conditional281;
_Bool __result193__;
void* right_value312;
struct CVALUE* right_value_234;
struct sType* type_235;
char* fun_name_236;
_Bool calling_fun_237;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value313;
struct CVALUE* come_value_238;
void* right_value314;
char* __dec_obj137;
void* right_value315;
struct sType* __dec_obj138;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_231, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
memset(&left_value_232, 0, sizeof(struct CVALUE*));
memset(&right_node_233, 0, sizeof(struct sNode*));
right_value312 = (void*)0;
memset(&right_value_234, 0, sizeof(struct CVALUE*));
memset(&type_235, 0, sizeof(struct sType*));
memset(&fun_name_236, 0, sizeof(char*));
memset(&calling_fun_237, 0, sizeof(_Bool));
right_value313 = (void*)0;
memset(&come_value_238, 0, sizeof(struct CVALUE*));
right_value314 = (void*)0;
right_value315 = (void*)0;
    # 1335 "13op.c"
    left_node_231=self->mLeft;
    # 1341 "13op.c"
    # 1337 "13op.c"
    if(_if_conditional280=!node_compile(left_node_231,info),    _if_conditional280) {
        # 1338 "13op.c"
        __result192__ = (_Bool)0;
        return __result192__;
    }
    # 1341 "13op.c"
    left_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value311,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1342 "13op.c"
    dec_stack_ptr(1,info);
    # 1344 "13op.c"
    right_node_233=self->mRight;
    # 1350 "13op.c"
    # 1346 "13op.c"
    if(_if_conditional281=!node_compile(right_node_233,info),    _if_conditional281) {
        # 1347 "13op.c"
        __result193__ = (_Bool)0;
        come_call_finalizer3(left_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result193__;
    }
    # 1350 "13op.c"
    right_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value312,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1351 "13op.c"
    dec_stack_ptr(1,info);
    # 1353 "13op.c"
    type_235=(struct sType*)come_increment_ref_count(left_value_232->type);
    # 1355 "13op.c"
    fun_name_236="operator_and";
    # 1356 "13op.c"
    # 1365 "13op.c"
    # 1357 "13op.c"
    if(self->mQuote) {
        # 1358 "13op.c"
        calling_fun_237=(_Bool)0;
    }
    else {
        # 1361 "13op.c"
        calling_fun_237=operator_overload_fun(type_235,fun_name_236,left_value_232,right_value_234,(_Bool)0,info);
    }
    # 1378 "13op.c"
    # 1365 "13op.c"
    if(_if_conditional283=!calling_fun_237,    _if_conditional283) {
        # 1366 "13op.c"
        come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value313=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1366, "CVALUE"))));
        come_call_finalizer3(right_value313,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1368 "13op.c"
        __dec_obj137=come_value_238->c_value;
        come_value_238->c_value=(char*)come_increment_ref_count(((char*)(right_value314=xsprintf("%s&%s",left_value_232->c_value,right_value_234->c_value))));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1369 "13op.c"
        __dec_obj138=come_value_238->type;
        come_value_238->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value315=sType_clone(left_value_232->type))));
        come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value315,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1370 "13op.c"
        come_value_238->type->mHeap=(_Bool)0;
        # 1371 "13op.c"
        come_value_238->var=((void*)0);
        # 1373 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_238->c_value);
        # 1375 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_238));
        come_call_finalizer3(come_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1378 "13op.c"
    __result194__ = (_Bool)1;
    come_call_finalizer3(left_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_235,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result194__;
    come_call_finalizer3(left_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_235,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value316;
char* __dec_obj139;
void* right_value317;
struct sNode* __dec_obj140;
void* right_value318;
struct sNode* __dec_obj141;
struct sXOrNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
    # 1390 "13op.c"
    self->sline=info->sline;
    # 1391 "13op.c"
    __dec_obj139=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(info->sname))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1393 "13op.c"
    self->mQuote=quote;
    # 1394 "13op.c"
    __dec_obj140=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(left))));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1395 "13op.c"
    __dec_obj141=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(right))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1398 "13op.c"
    __result195__ = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result195__;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXOrNode_terminated(struct sXOrNode* self){
void* __result_obj__;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1400 "13op.c"
    __result196__ = (_Bool)0;
    return __result196__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__;
void* right_value319;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value319 = (void*)0;
    # 1405 "13op.c"
    __result197__ = __result_obj__ = ((char*)(right_value319=__builtin_string("sXOrNode")));
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result197__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_239;
_Bool _if_conditional287;
_Bool __result198__;
void* right_value320;
struct CVALUE* left_value_240;
struct sNode* right_node_241;
_Bool _if_conditional288;
_Bool __result199__;
void* right_value321;
struct CVALUE* right_value_242;
struct sType* type_243;
char* fun_name_244;
_Bool calling_fun_245;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value322;
struct CVALUE* come_value_246;
void* right_value323;
char* __dec_obj142;
void* right_value324;
struct sType* __dec_obj143;
_Bool __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_239, 0, sizeof(struct sNode*));
right_value320 = (void*)0;
memset(&left_value_240, 0, sizeof(struct CVALUE*));
memset(&right_node_241, 0, sizeof(struct sNode*));
right_value321 = (void*)0;
memset(&right_value_242, 0, sizeof(struct CVALUE*));
memset(&type_243, 0, sizeof(struct sType*));
memset(&fun_name_244, 0, sizeof(char*));
memset(&calling_fun_245, 0, sizeof(_Bool));
right_value322 = (void*)0;
memset(&come_value_246, 0, sizeof(struct CVALUE*));
right_value323 = (void*)0;
right_value324 = (void*)0;
    # 1411 "13op.c"
    left_node_239=self->mLeft;
    # 1417 "13op.c"
    # 1413 "13op.c"
    if(_if_conditional287=!node_compile(left_node_239,info),    _if_conditional287) {
        # 1414 "13op.c"
        __result198__ = (_Bool)0;
        return __result198__;
    }
    # 1417 "13op.c"
    left_value_240=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value320,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1418 "13op.c"
    dec_stack_ptr(1,info);
    # 1420 "13op.c"
    right_node_241=self->mRight;
    # 1426 "13op.c"
    # 1422 "13op.c"
    if(_if_conditional288=!node_compile(right_node_241,info),    _if_conditional288) {
        # 1423 "13op.c"
        __result199__ = (_Bool)0;
        come_call_finalizer3(left_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result199__;
    }
    # 1426 "13op.c"
    right_value_242=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1427 "13op.c"
    dec_stack_ptr(1,info);
    # 1429 "13op.c"
    type_243=(struct sType*)come_increment_ref_count(left_value_240->type);
    # 1431 "13op.c"
    fun_name_244="operator_xor";
    # 1432 "13op.c"
    # 1440 "13op.c"
    # 1433 "13op.c"
    if(self->mQuote) {
        # 1434 "13op.c"
        calling_fun_245=(_Bool)0;
    }
    else {
        # 1437 "13op.c"
        calling_fun_245=operator_overload_fun(type_243,fun_name_244,left_value_240,right_value_242,(_Bool)0,info);
    }
    # 1453 "13op.c"
    # 1440 "13op.c"
    if(_if_conditional290=!calling_fun_245,    _if_conditional290) {
        # 1441 "13op.c"
        come_value_246=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1441, "CVALUE"))));
        come_call_finalizer3(right_value322,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1443 "13op.c"
        __dec_obj142=come_value_246->c_value;
        come_value_246->c_value=(char*)come_increment_ref_count(((char*)(right_value323=xsprintf("%s^%s",left_value_240->c_value,right_value_242->c_value))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1444 "13op.c"
        __dec_obj143=come_value_246->type;
        come_value_246->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(left_value_240->type))));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1445 "13op.c"
        come_value_246->type->mHeap=(_Bool)0;
        # 1446 "13op.c"
        come_value_246->var=((void*)0);
        # 1448 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_246->c_value);
        # 1450 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_246));
        come_call_finalizer3(come_value_246,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1453 "13op.c"
    __result200__ = (_Bool)1;
    come_call_finalizer3(left_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result200__;
    come_call_finalizer3(left_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value325;
char* __dec_obj144;
void* right_value326;
struct sNode* __dec_obj145;
void* right_value327;
struct sNode* __dec_obj146;
struct sOrNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
    # 1465 "13op.c"
    self->sline=info->sline;
    # 1466 "13op.c"
    __dec_obj144=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value325=__builtin_string(info->sname))));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1468 "13op.c"
    self->mQuote=quote;
    # 1469 "13op.c"
    __dec_obj145=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1470 "13op.c"
    __dec_obj146=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=sNode_clone(right))));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1473 "13op.c"
    __result201__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result201__;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrNode_terminated(struct sOrNode* self){
void* __result_obj__;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1475 "13op.c"
    __result202__ = (_Bool)0;
    return __result202__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__;
void* right_value328;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
    # 1480 "13op.c"
    __result203__ = __result_obj__ = ((char*)(right_value328=__builtin_string("sOrNode")));
    right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result203__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_247;
_Bool _if_conditional294;
_Bool __result204__;
void* right_value329;
struct CVALUE* left_value_248;
struct sNode* right_node_249;
_Bool _if_conditional295;
_Bool __result205__;
void* right_value330;
struct CVALUE* right_value_250;
struct sType* type_251;
char* fun_name_252;
_Bool calling_fun_253;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value331;
struct CVALUE* come_value_254;
void* right_value332;
char* __dec_obj147;
void* right_value333;
struct sType* __dec_obj148;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_247, 0, sizeof(struct sNode*));
right_value329 = (void*)0;
memset(&left_value_248, 0, sizeof(struct CVALUE*));
memset(&right_node_249, 0, sizeof(struct sNode*));
right_value330 = (void*)0;
memset(&right_value_250, 0, sizeof(struct CVALUE*));
memset(&type_251, 0, sizeof(struct sType*));
memset(&fun_name_252, 0, sizeof(char*));
memset(&calling_fun_253, 0, sizeof(_Bool));
right_value331 = (void*)0;
memset(&come_value_254, 0, sizeof(struct CVALUE*));
right_value332 = (void*)0;
right_value333 = (void*)0;
    # 1486 "13op.c"
    left_node_247=self->mLeft;
    # 1492 "13op.c"
    # 1488 "13op.c"
    if(_if_conditional294=!node_compile(left_node_247,info),    _if_conditional294) {
        # 1489 "13op.c"
        __result204__ = (_Bool)0;
        return __result204__;
    }
    # 1492 "13op.c"
    left_value_248=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value329,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1493 "13op.c"
    dec_stack_ptr(1,info);
    # 1495 "13op.c"
    right_node_249=self->mRight;
    # 1501 "13op.c"
    # 1497 "13op.c"
    if(_if_conditional295=!node_compile(right_node_249,info),    _if_conditional295) {
        # 1498 "13op.c"
        __result205__ = (_Bool)0;
        come_call_finalizer3(left_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result205__;
    }
    # 1501 "13op.c"
    right_value_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value330,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1502 "13op.c"
    dec_stack_ptr(1,info);
    # 1504 "13op.c"
    type_251=(struct sType*)come_increment_ref_count(left_value_248->type);
    # 1506 "13op.c"
    fun_name_252="operator_or";
    # 1507 "13op.c"
    # 1516 "13op.c"
    # 1508 "13op.c"
    if(self->mQuote) {
        # 1509 "13op.c"
        calling_fun_253=(_Bool)0;
    }
    else {
        # 1512 "13op.c"
        calling_fun_253=operator_overload_fun(type_251,fun_name_252,left_value_248,right_value_250,(_Bool)0,info);
    }
    # 1529 "13op.c"
    # 1516 "13op.c"
    if(_if_conditional297=!calling_fun_253,    _if_conditional297) {
        # 1517 "13op.c"
        come_value_254=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1517, "CVALUE"))));
        come_call_finalizer3(right_value331,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1519 "13op.c"
        __dec_obj147=come_value_254->c_value;
        come_value_254->c_value=(char*)come_increment_ref_count(((char*)(right_value332=xsprintf("%s|%s",left_value_248->c_value,right_value_250->c_value))));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1520 "13op.c"
        __dec_obj148=come_value_254->type;
        come_value_254->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(left_value_248->type))));
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value333,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1521 "13op.c"
        come_value_254->type->mHeap=(_Bool)0;
        # 1522 "13op.c"
        come_value_254->var=((void*)0);
        # 1524 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_254->c_value);
        # 1526 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_254));
        come_call_finalizer3(come_value_254,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1529 "13op.c"
    __result206__ = (_Bool)1;
    come_call_finalizer3(left_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_251,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result206__;
    come_call_finalizer3(left_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_251,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value334;
char* __dec_obj149;
void* right_value335;
struct sNode* __dec_obj150;
void* right_value336;
struct sNode* __dec_obj151;
struct sAndAndNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
    # 1541 "13op.c"
    self->sline=info->sline;
    # 1542 "13op.c"
    __dec_obj149=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(info->sname))));
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1544 "13op.c"
    self->mQuote=quote;
    # 1545 "13op.c"
    __dec_obj150=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=sNode_clone(left))));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1546 "13op.c"
    __dec_obj151=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(right))));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1549 "13op.c"
    __result207__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result207__;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndAndNode_terminated(struct sAndAndNode* self){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1551 "13op.c"
    __result208__ = (_Bool)0;
    return __result208__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__;
void* right_value337;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
    # 1556 "13op.c"
    __result209__ = __result_obj__ = ((char*)(right_value337=__builtin_string("sAndAndNode")));
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result209__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_255;
_Bool _if_conditional301;
_Bool __result210__;
void* right_value338;
struct CVALUE* left_value_256;
struct sNode* right_node_257;
_Bool _if_conditional302;
_Bool __result211__;
void* right_value339;
struct CVALUE* right_value_258;
struct sType* type_259;
char* fun_name_260;
_Bool calling_fun_261;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value340;
struct CVALUE* come_value_262;
void* right_value341;
char* __dec_obj152;
void* right_value342;
struct sType* __dec_obj153;
_Bool __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_255, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
memset(&left_value_256, 0, sizeof(struct CVALUE*));
memset(&right_node_257, 0, sizeof(struct sNode*));
right_value339 = (void*)0;
memset(&right_value_258, 0, sizeof(struct CVALUE*));
memset(&type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&calling_fun_261, 0, sizeof(_Bool));
right_value340 = (void*)0;
memset(&come_value_262, 0, sizeof(struct CVALUE*));
right_value341 = (void*)0;
right_value342 = (void*)0;
    # 1562 "13op.c"
    left_node_255=self->mLeft;
    # 1568 "13op.c"
    # 1564 "13op.c"
    if(_if_conditional301=!node_compile(left_node_255,info),    _if_conditional301) {
        # 1565 "13op.c"
        __result210__ = (_Bool)0;
        return __result210__;
    }
    # 1568 "13op.c"
    left_value_256=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value338,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1569 "13op.c"
    dec_stack_ptr(1,info);
    # 1571 "13op.c"
    right_node_257=self->mRight;
    # 1577 "13op.c"
    # 1573 "13op.c"
    if(_if_conditional302=!node_compile(right_node_257,info),    _if_conditional302) {
        # 1574 "13op.c"
        __result211__ = (_Bool)0;
        come_call_finalizer3(left_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result211__;
    }
    # 1577 "13op.c"
    right_value_258=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value339,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1578 "13op.c"
    dec_stack_ptr(1,info);
    # 1580 "13op.c"
    type_259=(struct sType*)come_increment_ref_count(left_value_256->type);
    # 1582 "13op.c"
    fun_name_260="operator_andand";
    # 1583 "13op.c"
    # 1592 "13op.c"
    # 1584 "13op.c"
    if(self->mQuote) {
        # 1585 "13op.c"
        calling_fun_261=(_Bool)0;
    }
    else {
        # 1588 "13op.c"
        calling_fun_261=operator_overload_fun(type_259,fun_name_260,left_value_256,right_value_258,(_Bool)0,info);
    }
    # 1605 "13op.c"
    # 1592 "13op.c"
    if(_if_conditional304=!calling_fun_261,    _if_conditional304) {
        # 1593 "13op.c"
        come_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value340=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1593, "CVALUE"))));
        come_call_finalizer3(right_value340,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1595 "13op.c"
        __dec_obj152=come_value_262->c_value;
        come_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value341=xsprintf("%s&&%s",left_value_256->c_value,right_value_258->c_value))));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1596 "13op.c"
        __dec_obj153=come_value_262->type;
        come_value_262->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(left_value_256->type))));
        come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1597 "13op.c"
        come_value_262->type->mHeap=(_Bool)0;
        # 1598 "13op.c"
        come_value_262->var=left_value_256->var;
        # 1600 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_262->c_value);
        # 1602 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_262));
        come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1605 "13op.c"
    __result212__ = (_Bool)1;
    come_call_finalizer3(left_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_258,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result212__;
    come_call_finalizer3(left_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_258,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value343;
char* __dec_obj154;
void* right_value344;
struct sNode* __dec_obj155;
void* right_value345;
struct sNode* __dec_obj156;
struct sOrOrNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
    # 1617 "13op.c"
    self->sline=info->sline;
    # 1618 "13op.c"
    __dec_obj154=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string(info->sname))));
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1620 "13op.c"
    self->mQuote=quote;
    # 1621 "13op.c"
    __dec_obj155=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=sNode_clone(left))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1622 "13op.c"
    __dec_obj156=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNode_clone(right))));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1625 "13op.c"
    __result213__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result213__;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrOrNode_terminated(struct sOrOrNode* self){
void* __result_obj__;
_Bool __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1627 "13op.c"
    __result214__ = (_Bool)0;
    return __result214__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__;
void* right_value346;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value346 = (void*)0;
    # 1632 "13op.c"
    __result215__ = __result_obj__ = ((char*)(right_value346=__builtin_string("sOrOrNode")));
    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result215__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_263;
_Bool _if_conditional308;
_Bool __result216__;
void* right_value347;
struct CVALUE* left_value_264;
struct sNode* right_node_265;
_Bool _if_conditional309;
_Bool __result217__;
void* right_value348;
struct CVALUE* right_value_266;
struct sType* type_267;
char* fun_name_268;
_Bool calling_fun_269;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value349;
struct CVALUE* come_value_270;
void* right_value350;
char* __dec_obj157;
void* right_value351;
struct sType* __dec_obj158;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_263, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
memset(&left_value_264, 0, sizeof(struct CVALUE*));
memset(&right_node_265, 0, sizeof(struct sNode*));
right_value348 = (void*)0;
memset(&right_value_266, 0, sizeof(struct CVALUE*));
memset(&type_267, 0, sizeof(struct sType*));
memset(&fun_name_268, 0, sizeof(char*));
memset(&calling_fun_269, 0, sizeof(_Bool));
right_value349 = (void*)0;
memset(&come_value_270, 0, sizeof(struct CVALUE*));
right_value350 = (void*)0;
right_value351 = (void*)0;
    # 1638 "13op.c"
    left_node_263=self->mLeft;
    # 1644 "13op.c"
    # 1640 "13op.c"
    if(_if_conditional308=!node_compile(left_node_263,info),    _if_conditional308) {
        # 1641 "13op.c"
        __result216__ = (_Bool)0;
        return __result216__;
    }
    # 1644 "13op.c"
    left_value_264=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value347=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value347,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1645 "13op.c"
    dec_stack_ptr(1,info);
    # 1647 "13op.c"
    right_node_265=self->mRight;
    # 1653 "13op.c"
    # 1649 "13op.c"
    if(_if_conditional309=!node_compile(right_node_265,info),    _if_conditional309) {
        # 1650 "13op.c"
        __result217__ = (_Bool)0;
        come_call_finalizer3(left_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result217__;
    }
    # 1653 "13op.c"
    right_value_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value348=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value348,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1654 "13op.c"
    dec_stack_ptr(1,info);
    # 1656 "13op.c"
    type_267=(struct sType*)come_increment_ref_count(left_value_264->type);
    # 1658 "13op.c"
    fun_name_268="operator_oror";
    # 1659 "13op.c"
    # 1667 "13op.c"
    # 1660 "13op.c"
    if(self->mQuote) {
        # 1661 "13op.c"
        calling_fun_269=(_Bool)0;
    }
    else {
        # 1664 "13op.c"
        calling_fun_269=operator_overload_fun(type_267,fun_name_268,left_value_264,right_value_266,(_Bool)0,info);
    }
    # 1680 "13op.c"
    # 1667 "13op.c"
    if(_if_conditional311=!calling_fun_269,    _if_conditional311) {
        # 1668 "13op.c"
        come_value_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value349=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1668, "CVALUE"))));
        come_call_finalizer3(right_value349,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1670 "13op.c"
        __dec_obj157=come_value_270->c_value;
        come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value350=xsprintf("%s||%s",left_value_264->c_value,right_value_266->c_value))));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1671 "13op.c"
        __dec_obj158=come_value_270->type;
        come_value_270->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(left_value_264->type))));
        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value351,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1672 "13op.c"
        come_value_270->type->mHeap=(_Bool)0;
        # 1673 "13op.c"
        come_value_270->var=left_value_264->var;
        # 1675 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_270->c_value);
        # 1677 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_270));
        come_call_finalizer3(come_value_270,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1680 "13op.c"
    __result218__ = (_Bool)1;
    come_call_finalizer3(left_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_266,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result218__;
    come_call_finalizer3(left_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_266,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value352;
char* __dec_obj159;
void* right_value353;
struct sNode* __dec_obj160;
void* right_value354;
struct sNode* __dec_obj161;
struct sCommaNode* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
    # 1691 "13op.c"
    self->sline=info->sline;
    # 1692 "13op.c"
    __dec_obj159=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value352=__builtin_string(info->sname))));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1694 "13op.c"
    __dec_obj160=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=sNode_clone(left))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1695 "13op.c"
    __dec_obj161=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(right))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1698 "13op.c"
    __result219__ = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result219__;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCommaNode_terminated(struct sCommaNode* self){
void* __result_obj__;
_Bool __result220__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1700 "13op.c"
    __result220__ = (_Bool)0;
    return __result220__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__;
void* right_value355;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
    # 1705 "13op.c"
    __result221__ = __result_obj__ = ((char*)(right_value355=__builtin_string("sCommaNode")));
    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result221__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_271;
_Bool _if_conditional315;
_Bool __result222__;
void* right_value356;
struct CVALUE* left_value_272;
struct sNode* right_node_273;
_Bool _if_conditional316;
_Bool __result223__;
void* right_value357;
struct CVALUE* right_value_274;
void* right_value358;
struct CVALUE* come_value_275;
void* right_value359;
char* __dec_obj162;
void* right_value360;
struct sType* __dec_obj163;
_Bool __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_271, 0, sizeof(struct sNode*));
right_value356 = (void*)0;
memset(&left_value_272, 0, sizeof(struct CVALUE*));
memset(&right_node_273, 0, sizeof(struct sNode*));
right_value357 = (void*)0;
memset(&right_value_274, 0, sizeof(struct CVALUE*));
right_value358 = (void*)0;
memset(&come_value_275, 0, sizeof(struct CVALUE*));
right_value359 = (void*)0;
right_value360 = (void*)0;
    # 1711 "13op.c"
    left_node_271=self->mLeft;
    # 1717 "13op.c"
    # 1713 "13op.c"
    if(_if_conditional315=!node_compile(left_node_271,info),    _if_conditional315) {
        # 1714 "13op.c"
        __result222__ = (_Bool)0;
        return __result222__;
    }
    # 1717 "13op.c"
    left_value_272=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value356=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value356,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1718 "13op.c"
    dec_stack_ptr(1,info);
    # 1720 "13op.c"
    right_node_273=self->mRight;
    # 1726 "13op.c"
    # 1722 "13op.c"
    if(_if_conditional316=!node_compile(right_node_273,info),    _if_conditional316) {
        # 1723 "13op.c"
        __result223__ = (_Bool)0;
        come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result223__;
    }
    # 1726 "13op.c"
    right_value_274=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value357=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value357,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1727 "13op.c"
    dec_stack_ptr(1,info);
    # 1729 "13op.c"
    come_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value358=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1729, "CVALUE"))));
    come_call_finalizer3(right_value358,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1731 "13op.c"
    __dec_obj162=come_value_275->c_value;
    come_value_275->c_value=(char*)come_increment_ref_count(((char*)(right_value359=xsprintf("%s,%s",left_value_272->c_value,right_value_274->c_value))));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1732 "13op.c"
    __dec_obj163=come_value_275->type;
    come_value_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_clone(left_value_272->type))));
    come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value360,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1733 "13op.c"
    come_value_275->var=((void*)0);
    # 1735 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_275->c_value);
    # 1737 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
    # 1739 "13op.c"
    __result224__ = (_Bool)1;
    come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result224__;
    come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value361;
char* __dec_obj164;
void* right_value362;
struct sNode* __dec_obj165;
void* right_value363;
struct sNode* __dec_obj166;
void* right_value364;
struct sNode* __dec_obj167;
struct sConditionalNode* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
    # 1751 "13op.c"
    self->sline=info->sline;
    # 1752 "13op.c"
    __dec_obj164=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value361=__builtin_string(info->sname))));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1754 "13op.c"
    __dec_obj165=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=sNode_clone(value1))));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1755 "13op.c"
    __dec_obj166=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=sNode_clone(value2))));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1756 "13op.c"
    __dec_obj167=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=sNode_clone(value3))));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1759 "13op.c"
    __result225__ = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result225__;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sConditionalNode_terminated(struct sConditionalNode* self){
void* __result_obj__;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1761 "13op.c"
    __result226__ = (_Bool)0;
    return __result226__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__;
void* right_value365;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
    # 1766 "13op.c"
    __result227__ = __result_obj__ = ((char*)(right_value365=__builtin_string("sConditionalNode")));
    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result227__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value1_276;
_Bool _if_conditional321;
_Bool __result228__;
void* right_value366;
struct CVALUE* value1_value_277;
struct sNode* value2_278;
_Bool _if_conditional322;
_Bool __result229__;
void* right_value367;
struct CVALUE* value2_value_279;
struct sNode* value3_280;
_Bool _if_conditional323;
_Bool __result230__;
void* right_value368;
struct CVALUE* value3_value_281;
void* right_value369;
struct CVALUE* come_value_282;
void* right_value370;
char* __dec_obj168;
void* right_value371;
struct sType* __dec_obj169;
_Bool __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_276, 0, sizeof(struct sNode*));
right_value366 = (void*)0;
memset(&value1_value_277, 0, sizeof(struct CVALUE*));
memset(&value2_278, 0, sizeof(struct sNode*));
right_value367 = (void*)0;
memset(&value2_value_279, 0, sizeof(struct CVALUE*));
memset(&value3_280, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
memset(&value3_value_281, 0, sizeof(struct CVALUE*));
right_value369 = (void*)0;
memset(&come_value_282, 0, sizeof(struct CVALUE*));
right_value370 = (void*)0;
right_value371 = (void*)0;
    # 1772 "13op.c"
    value1_276=self->mValue1;
    # 1778 "13op.c"
    # 1774 "13op.c"
    if(_if_conditional321=!node_compile(value1_276,info),    _if_conditional321) {
        # 1775 "13op.c"
        __result228__ = (_Bool)0;
        return __result228__;
    }
    # 1778 "13op.c"
    value1_value_277=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value366=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value366,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1779 "13op.c"
    dec_stack_ptr(1,info);
    # 1781 "13op.c"
    value2_278=self->mValue2;
    # 1787 "13op.c"
    # 1783 "13op.c"
    if(_if_conditional322=!node_compile(value2_278,info),    _if_conditional322) {
        # 1784 "13op.c"
        __result229__ = (_Bool)0;
        come_call_finalizer3(value1_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result229__;
    }
    # 1787 "13op.c"
    value2_value_279=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value367=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value367,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1788 "13op.c"
    dec_stack_ptr(1,info);
    # 1790 "13op.c"
    value3_280=self->mValue3;
    # 1796 "13op.c"
    # 1792 "13op.c"
    if(_if_conditional323=!node_compile(value3_280,info),    _if_conditional323) {
        # 1793 "13op.c"
        __result230__ = (_Bool)0;
        come_call_finalizer3(value1_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result230__;
    }
    # 1796 "13op.c"
    value3_value_281=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value368=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value368,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1797 "13op.c"
    dec_stack_ptr(1,info);
    # 1799 "13op.c"
    come_value_282=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value369=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1799, "CVALUE"))));
    come_call_finalizer3(right_value369,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1801 "13op.c"
    __dec_obj168=come_value_282->c_value;
    come_value_282->c_value=(char*)come_increment_ref_count(((char*)(right_value370=xsprintf("%s?%s:%s",value1_value_277->c_value,value2_value_279->c_value,value3_value_281->c_value))));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1802 "13op.c"
    __dec_obj169=come_value_282->type;
    come_value_282->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_clone(value1_value_277->type))));
    come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value371,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1803 "13op.c"
    come_value_282->var=((void*)0);
    # 1805 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_282->c_value);
    # 1807 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_282));
    # 1809 "13op.c"
    __result231__ = (_Bool)1;
    come_call_finalizer3(value1_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_281,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result231__;
    come_call_finalizer3(value1_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_281,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value372;
struct sNode* node_283;
_Bool _while_condtional19;
_Bool _if_conditional324;
void* right_value373;
struct sNode* right_284;
void* right_value374;
void* right_value375;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value380;
struct sNode* __result234__;
_Bool _if_conditional334;
void* right_value381;
struct sNode* right_286;
void* right_value382;
void* right_value383;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value388;
struct sNode* __result237__;
_Bool _if_conditional344;
void* right_value389;
struct sNode* right_288;
void* right_value390;
void* right_value391;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value396;
struct sNode* __result240__;
_Bool _if_conditional354;
void* right_value397;
struct sNode* right_290;
void* right_value398;
void* right_value399;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value404;
struct sNode* __result243__;
_Bool _if_conditional364;
void* right_value405;
struct sNode* right_292;
void* right_value406;
void* right_value407;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value412;
struct sNode* __result246__;
_Bool _if_conditional374;
void* right_value413;
struct sNode* right_294;
void* right_value414;
void* right_value415;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value420;
struct sNode* __result249__;
struct sNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value372 = (void*)0;
memset(&node_283, 0, sizeof(struct sNode*));
right_value373 = (void*)0;
memset(&right_284, 0, sizeof(struct sNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&right_286, 0, sizeof(struct sNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&right_288, 0, sizeof(struct sNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&right_290, 0, sizeof(struct sNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&right_292, 0, sizeof(struct sNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
memset(&right_294, 0, sizeof(struct sNode*));
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value420 = (void*)0;
    # 1815 "13op.c"
    node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=expression_node_v99(info))));
    if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1819 "13op.c"
    parse_sharp_v5(info);
    # 1873 "13op.c"
    while(_while_condtional19=*info->p,    _while_condtional19) {
        # 1871 "13op.c"
        # 1820 "13op.c"
        if(_if_conditional324=!node_283->terminated(node_283->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional324) {
            # 1821 "13op.c"
            info->p++;
            # 1822 "13op.c"
            skip_spaces_and_lf(info);
            # 1824 "13op.c"
            right_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=mult_exp(info))));
            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1826 "13op.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1826, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value375=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value374=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1826, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_284),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result234__ = __result_obj__ = ((struct sNode*)(right_value380=_inf_value3));
            if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value374,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value375,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result234__;
            if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1871 "13op.c"
            # 1828 "13op.c"
            if(_if_conditional334=*info->p==47&&*(info->p+1)!=61,            _if_conditional334) {
                # 1829 "13op.c"
                info->p++;
                # 1830 "13op.c"
                skip_spaces_and_lf(info);
                # 1832 "13op.c"
                right_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=mult_exp(info))));
                if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1834 "13op.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1834, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value383=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value382=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1834, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_286),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result237__ = __result_obj__ = ((struct sNode*)(right_value388=_inf_value4));
                if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value382,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value383,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value388) { right_value388 = come_decrement_ref_count2(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result237__;
                if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1871 "13op.c"
                # 1836 "13op.c"
                if(_if_conditional344=*info->p==37&&*(info->p+1)!=61,                _if_conditional344) {
                    # 1837 "13op.c"
                    info->p++;
                    # 1838 "13op.c"
                    skip_spaces_and_lf(info);
                    # 1840 "13op.c"
                    right_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=expression_node_v99(info))));
                    if(right_value389) { right_value389 = come_decrement_ref_count2(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1842 "13op.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1842, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value391=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value390=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1842, "sModNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_288),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result240__ = __result_obj__ = ((struct sNode*)(right_value396=_inf_value5));
                    if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value390,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value391,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result240__;
                    if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1871 "13op.c"
                    # 1844 "13op.c"
                    if(_if_conditional354=!node_283->terminated(node_283->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional354) {
                        # 1845 "13op.c"
                        info->p+=2;
                        # 1846 "13op.c"
                        skip_spaces_and_lf(info);
                        # 1848 "13op.c"
                        right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=mult_exp(info))));
                        if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1850 "13op.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1850, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value399=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value398=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1850, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_290),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result243__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value6));
                        if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value398,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value399,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result243__;
                        if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1871 "13op.c"
                        # 1852 "13op.c"
                        if(_if_conditional364=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional364) {
                            # 1853 "13op.c"
                            info->p+=2;
                            # 1854 "13op.c"
                            skip_spaces_and_lf(info);
                            # 1856 "13op.c"
                            right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=mult_exp(info))));
                            if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1858 "13op.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1858, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value407=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value406=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1858, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_292),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result246__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value7));
                            if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value406,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value407,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result246__;
                            if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1871 "13op.c"
                            # 1860 "13op.c"
                            if(_if_conditional374=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional374) {
                                # 1861 "13op.c"
                                info->p+=2;
                                # 1862 "13op.c"
                                skip_spaces_and_lf(info);
                                # 1864 "13op.c"
                                right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=expression_node_v99(info))));
                                if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1866 "13op.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1866, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value415=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value414=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1866, "sModNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_294),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result249__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value8));
                                if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value414,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value415,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result249__;
                                if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 1869 "13op.c"
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    # 1873 "13op.c"
    parse_sharp_v5(info);
    # 1875 "13op.c"
    __result250__ = __result_obj__ = node_283;
    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result250__;
    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sMultNode_finalize"
                            # 0 "sMultNode_finalize"
                            if(_if_conditional355=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional355) {
                                # 0 "sMultNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sMultNode_finalize"
                            # 1 "sMultNode_finalize"
                            if(_if_conditional356=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional356) {
                                # 1 "sMultNode_finalize"
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sMultNode_finalize"
                            # 2 "sMultNode_finalize"
                            if(_if_conditional357=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional357) {
                                # 2 "sMultNode_finalize"
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional358;
struct sMultNode* __result241__;
void* right_value400;
struct sMultNode* result_291;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value401;
char* __dec_obj179;
_Bool _if_conditional361;
void* right_value402;
struct sNode* __dec_obj180;
_Bool _if_conditional362;
void* right_value403;
struct sNode* __dec_obj181;
_Bool _if_conditional363;
struct sMultNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
memset(&result_291, 0, sizeof(struct sMultNode*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
                            # 3 "sMultNode_clone"
                            # 2 "sMultNode_clone"
                            if(_if_conditional358=self==(void*)0,                            _if_conditional358) {
                                # 2 "sMultNode_clone"
                                __result241__ = __result_obj__ = (void*)0;
                                return __result241__;
                            }
                            # 3 "sMultNode_clone"
                            result_291=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value400=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"))));
                            come_call_finalizer3(right_value400,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sMultNode_clone"
                            # 4 "sMultNode_clone"
                            if(_if_conditional359=self!=((void*)0),                            _if_conditional359) {
                                # 4 "sMultNode_clone"
                                result_291->sline=self->sline;
                            }
                            # 6 "sMultNode_clone"
                            # 5 "sMultNode_clone"
                            if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional360) {
                                # 5 "sMultNode_clone"
                                __dec_obj179=result_291->sname;
                                result_291->sname=(char*)come_increment_ref_count(((char*)(right_value401=string_clone(self->sname))));
                                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sMultNode_clone"
                            # 6 "sMultNode_clone"
                            if(_if_conditional361=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional361) {
                                # 6 "sMultNode_clone"
                                __dec_obj180=result_291->mLeft;
                                result_291->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(self->mLeft))));
                                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 8 "sMultNode_clone"
                            # 7 "sMultNode_clone"
                            if(_if_conditional362=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional362) {
                                # 7 "sMultNode_clone"
                                __dec_obj181=result_291->mRight;
                                result_291->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNode_clone(self->mRight))));
                                if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 9 "sMultNode_clone"
                            # 8 "sMultNode_clone"
                            if(_if_conditional363=self!=((void*)0),                            _if_conditional363) {
                                # 8 "sMultNode_clone"
                                result_291->mQuote=self->mQuote;
                            }
                            # 9 "sMultNode_clone"
                            __result242__ = __result_obj__ = result_291;
                            come_call_finalizer3(result_291,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result242__;
                            come_call_finalizer3(result_291,sMultNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sDivNode_finalize"
                                # 0 "sDivNode_finalize"
                                if(_if_conditional365=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional365) {
                                    # 0 "sDivNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sDivNode_finalize"
                                # 1 "sDivNode_finalize"
                                if(_if_conditional366=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional366) {
                                    # 1 "sDivNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sDivNode_finalize"
                                # 2 "sDivNode_finalize"
                                if(_if_conditional367=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional367) {
                                    # 2 "sDivNode_finalize"
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional368;
struct sDivNode* __result244__;
void* right_value408;
struct sDivNode* result_293;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value409;
char* __dec_obj182;
_Bool _if_conditional371;
void* right_value410;
struct sNode* __dec_obj183;
_Bool _if_conditional372;
void* right_value411;
struct sNode* __dec_obj184;
_Bool _if_conditional373;
struct sDivNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value408 = (void*)0;
memset(&result_293, 0, sizeof(struct sDivNode*));
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
                                # 3 "sDivNode_clone"
                                # 2 "sDivNode_clone"
                                if(_if_conditional368=self==(void*)0,                                _if_conditional368) {
                                    # 2 "sDivNode_clone"
                                    __result244__ = __result_obj__ = (void*)0;
                                    return __result244__;
                                }
                                # 3 "sDivNode_clone"
                                result_293=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value408=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"))));
                                come_call_finalizer3(right_value408,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sDivNode_clone"
                                # 4 "sDivNode_clone"
                                if(_if_conditional369=self!=((void*)0),                                _if_conditional369) {
                                    # 4 "sDivNode_clone"
                                    result_293->sline=self->sline;
                                }
                                # 6 "sDivNode_clone"
                                # 5 "sDivNode_clone"
                                if(_if_conditional370=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional370) {
                                    # 5 "sDivNode_clone"
                                    __dec_obj182=result_293->sname;
                                    result_293->sname=(char*)come_increment_ref_count(((char*)(right_value409=string_clone(self->sname))));
                                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sDivNode_clone"
                                # 6 "sDivNode_clone"
                                if(_if_conditional371=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional371) {
                                    # 6 "sDivNode_clone"
                                    __dec_obj183=result_293->mLeft;
                                    result_293->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=sNode_clone(self->mLeft))));
                                    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 8 "sDivNode_clone"
                                # 7 "sDivNode_clone"
                                if(_if_conditional372=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional372) {
                                    # 7 "sDivNode_clone"
                                    __dec_obj184=result_293->mRight;
                                    result_293->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=sNode_clone(self->mRight))));
                                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 9 "sDivNode_clone"
                                # 8 "sDivNode_clone"
                                if(_if_conditional373=self!=((void*)0),                                _if_conditional373) {
                                    # 8 "sDivNode_clone"
                                    result_293->mQuote=self->mQuote;
                                }
                                # 9 "sDivNode_clone"
                                __result245__ = __result_obj__ = result_293;
                                come_call_finalizer3(result_293,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result245__;
                                come_call_finalizer3(result_293,sDivNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sModNode_finalize"
                                    # 0 "sModNode_finalize"
                                    if(_if_conditional375=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional375) {
                                        # 0 "sModNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sModNode_finalize"
                                    # 1 "sModNode_finalize"
                                    if(_if_conditional376=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional376) {
                                        # 1 "sModNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sModNode_finalize"
                                    # 2 "sModNode_finalize"
                                    if(_if_conditional377=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional377) {
                                        # 2 "sModNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional378;
struct sModNode* __result247__;
void* right_value416;
struct sModNode* result_295;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value417;
char* __dec_obj185;
_Bool _if_conditional381;
void* right_value418;
struct sNode* __dec_obj186;
_Bool _if_conditional382;
void* right_value419;
struct sNode* __dec_obj187;
_Bool _if_conditional383;
struct sModNode* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value416 = (void*)0;
memset(&result_295, 0, sizeof(struct sModNode*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
                                    # 3 "sModNode_clone"
                                    # 2 "sModNode_clone"
                                    if(_if_conditional378=self==(void*)0,                                    _if_conditional378) {
                                        # 2 "sModNode_clone"
                                        __result247__ = __result_obj__ = (void*)0;
                                        return __result247__;
                                    }
                                    # 3 "sModNode_clone"
                                    result_295=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value416=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"))));
                                    come_call_finalizer3(right_value416,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sModNode_clone"
                                    # 4 "sModNode_clone"
                                    if(_if_conditional379=self!=((void*)0),                                    _if_conditional379) {
                                        # 4 "sModNode_clone"
                                        result_295->sline=self->sline;
                                    }
                                    # 6 "sModNode_clone"
                                    # 5 "sModNode_clone"
                                    if(_if_conditional380=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional380) {
                                        # 5 "sModNode_clone"
                                        __dec_obj185=result_295->sname;
                                        result_295->sname=(char*)come_increment_ref_count(((char*)(right_value417=string_clone(self->sname))));
                                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sModNode_clone"
                                    # 6 "sModNode_clone"
                                    if(_if_conditional381=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional381) {
                                        # 6 "sModNode_clone"
                                        __dec_obj186=result_295->mLeft;
                                        result_295->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=sNode_clone(self->mLeft))));
                                        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sModNode_clone"
                                    # 7 "sModNode_clone"
                                    if(_if_conditional382=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional382) {
                                        # 7 "sModNode_clone"
                                        __dec_obj187=result_295->mRight;
                                        result_295->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=sNode_clone(self->mRight))));
                                        if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 9 "sModNode_clone"
                                    # 8 "sModNode_clone"
                                    if(_if_conditional383=self!=((void*)0),                                    _if_conditional383) {
                                        # 8 "sModNode_clone"
                                        result_295->mQuote=self->mQuote;
                                    }
                                    # 9 "sModNode_clone"
                                    __result248__ = __result_obj__ = result_295;
                                    come_call_finalizer3(result_295,sModNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result248__;
                                    come_call_finalizer3(result_295,sModNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value421;
struct sNode* node_296;
_Bool _while_condtional20;
_Bool _if_conditional384;
void* right_value422;
struct sNode* right_297;
void* right_value423;
void* right_value424;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value429;
struct sNode* __result253__;
_Bool _if_conditional394;
void* right_value430;
struct sNode* right_299;
void* right_value431;
void* right_value432;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value437;
struct sNode* __result256__;
_Bool _if_conditional404;
void* right_value438;
struct sNode* right_301;
void* right_value439;
void* right_value440;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value445;
struct sNode* __result259__;
_Bool _if_conditional414;
void* right_value446;
struct sNode* right_303;
void* right_value447;
void* right_value448;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value453;
struct sNode* __result262__;
struct sNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value421 = (void*)0;
memset(&node_296, 0, sizeof(struct sNode*));
right_value422 = (void*)0;
memset(&right_297, 0, sizeof(struct sNode*));
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&right_299, 0, sizeof(struct sNode*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&right_301, 0, sizeof(struct sNode*));
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
memset(&right_303, 0, sizeof(struct sNode*));
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value453 = (void*)0;
    # 1880 "13op.c"
    node_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=mult_exp(info))));
    if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1884 "13op.c"
    parse_sharp_v5(info);
    # 1926 "13op.c"
    while(_while_condtional20=*info->p,    _while_condtional20) {
        # 1924 "13op.c"
        # 1885 "13op.c"
        if(_if_conditional384=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional384) {
            # 1887 "13op.c"
            info->p++;
            # 1888 "13op.c"
            skip_spaces_and_lf(info);
            # 1890 "13op.c"
            right_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=add_exp(info))));
            if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1892 "13op.c"
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1892, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value424=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value423=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1892, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_296),(struct sNode*)come_increment_ref_count(right_297),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result253__ = __result_obj__ = ((struct sNode*)(right_value429=_inf_value9));
            if(right_297) { right_297 = come_decrement_ref_count2(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value423,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value424,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result253__;
            if(right_297) { right_297 = come_decrement_ref_count2(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1924 "13op.c"
            # 1894 "13op.c"
            if(_if_conditional394=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional394) {
                # 1896 "13op.c"
                info->p++;
                # 1897 "13op.c"
                skip_spaces_and_lf(info);
                # 1899 "13op.c"
                right_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=add_exp(info))));
                if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1901 "13op.c"
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1901, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value432=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value431=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1901, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_296),(struct sNode*)come_increment_ref_count(right_299),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result256__ = __result_obj__ = ((struct sNode*)(right_value437=_inf_value10));
                if(right_299) { right_299 = come_decrement_ref_count2(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value431,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value432,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result256__;
                if(right_299) { right_299 = come_decrement_ref_count2(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1924 "13op.c"
                # 1903 "13op.c"
                if(_if_conditional404=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional404) {
                    # 1905 "13op.c"
                    info->p+=2;
                    # 1906 "13op.c"
                    skip_spaces_and_lf(info);
                    # 1908 "13op.c"
                    right_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=add_exp(info))));
                    if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1910 "13op.c"
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1910, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value440=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value439=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1910, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_296),(struct sNode*)come_increment_ref_count(right_301),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sNodeBase_sline;
                    _inf_value11->sname=(void*)sNodeBase_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result259__ = __result_obj__ = ((struct sNode*)(right_value445=_inf_value11));
                    if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value439,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value440,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result259__;
                    if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1924 "13op.c"
                    # 1912 "13op.c"
                    if(_if_conditional414=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional414) {
                        # 1914 "13op.c"
                        info->p+=2;
                        # 1915 "13op.c"
                        skip_spaces_and_lf(info);
                        # 1917 "13op.c"
                        right_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=add_exp(info))));
                        if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1919 "13op.c"
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1919, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value448=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value447=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1919, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_296),(struct sNode*)come_increment_ref_count(right_303),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sNodeBase_sline;
                        _inf_value12->sname=(void*)sNodeBase_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result262__ = __result_obj__ = ((struct sNode*)(right_value453=_inf_value12));
                        if(right_303) { right_303 = come_decrement_ref_count2(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value447,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value448,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result262__;
                        if(right_303) { right_303 = come_decrement_ref_count2(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1922 "13op.c"
                        break;
                    }
                }
            }
        }
    }
    # 1926 "13op.c"
    parse_sharp_v5(info);
    # 1928 "13op.c"
    __result263__ = __result_obj__ = node_296;
    if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result263__;
    if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sAddNode_finalize"
                        # 0 "sAddNode_finalize"
                        if(_if_conditional405=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional405) {
                            # 0 "sAddNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sAddNode_finalize"
                        # 1 "sAddNode_finalize"
                        if(_if_conditional406=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional406) {
                            # 1 "sAddNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sAddNode_finalize"
                        # 2 "sAddNode_finalize"
                        if(_if_conditional407=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional407) {
                            # 2 "sAddNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional408;
struct sAddNode* __result257__;
void* right_value441;
struct sAddNode* result_302;
_Bool _if_conditional409;
_Bool _if_conditional410;
void* right_value442;
char* __dec_obj194;
_Bool _if_conditional411;
void* right_value443;
struct sNode* __dec_obj195;
_Bool _if_conditional412;
void* right_value444;
struct sNode* __dec_obj196;
_Bool _if_conditional413;
struct sAddNode* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
right_value441 = (void*)0;
memset(&result_302, 0, sizeof(struct sAddNode*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
                        # 3 "sAddNode_clone"
                        # 2 "sAddNode_clone"
                        if(_if_conditional408=self==(void*)0,                        _if_conditional408) {
                            # 2 "sAddNode_clone"
                            __result257__ = __result_obj__ = (void*)0;
                            return __result257__;
                        }
                        # 3 "sAddNode_clone"
                        result_302=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value441=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                        come_call_finalizer3(right_value441,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sAddNode_clone"
                        # 4 "sAddNode_clone"
                        if(_if_conditional409=self!=((void*)0),                        _if_conditional409) {
                            # 4 "sAddNode_clone"
                            result_302->sline=self->sline;
                        }
                        # 6 "sAddNode_clone"
                        # 5 "sAddNode_clone"
                        if(_if_conditional410=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional410) {
                            # 5 "sAddNode_clone"
                            __dec_obj194=result_302->sname;
                            result_302->sname=(char*)come_increment_ref_count(((char*)(right_value442=string_clone(self->sname))));
                            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value442 = come_decrement_ref_count2(right_value442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sAddNode_clone"
                        # 6 "sAddNode_clone"
                        if(_if_conditional411=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional411) {
                            # 6 "sAddNode_clone"
                            __dec_obj195=result_302->mLeft;
                            result_302->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=sNode_clone(self->mLeft))));
                            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sAddNode_clone"
                        # 7 "sAddNode_clone"
                        if(_if_conditional412=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional412) {
                            # 7 "sAddNode_clone"
                            __dec_obj196=result_302->mRight;
                            result_302->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(self->mRight))));
                            if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sAddNode_clone"
                        # 8 "sAddNode_clone"
                        if(_if_conditional413=self!=((void*)0),                        _if_conditional413) {
                            # 8 "sAddNode_clone"
                            result_302->mQuote=self->mQuote;
                        }
                        # 9 "sAddNode_clone"
                        __result258__ = __result_obj__ = result_302;
                        come_call_finalizer3(result_302,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result258__;
                        come_call_finalizer3(result_302,sAddNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sSubNode_finalize"
                            # 0 "sSubNode_finalize"
                            if(_if_conditional415=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional415) {
                                # 0 "sSubNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sSubNode_finalize"
                            # 1 "sSubNode_finalize"
                            if(_if_conditional416=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional416) {
                                # 1 "sSubNode_finalize"
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sSubNode_finalize"
                            # 2 "sSubNode_finalize"
                            if(_if_conditional417=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional417) {
                                # 2 "sSubNode_finalize"
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional418;
struct sSubNode* __result260__;
void* right_value449;
struct sSubNode* result_304;
_Bool _if_conditional419;
_Bool _if_conditional420;
void* right_value450;
char* __dec_obj197;
_Bool _if_conditional421;
void* right_value451;
struct sNode* __dec_obj198;
_Bool _if_conditional422;
void* right_value452;
struct sNode* __dec_obj199;
_Bool _if_conditional423;
struct sSubNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value449 = (void*)0;
memset(&result_304, 0, sizeof(struct sSubNode*));
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
                            # 3 "sSubNode_clone"
                            # 2 "sSubNode_clone"
                            if(_if_conditional418=self==(void*)0,                            _if_conditional418) {
                                # 2 "sSubNode_clone"
                                __result260__ = __result_obj__ = (void*)0;
                                return __result260__;
                            }
                            # 3 "sSubNode_clone"
                            result_304=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value449=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                            come_call_finalizer3(right_value449,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sSubNode_clone"
                            # 4 "sSubNode_clone"
                            if(_if_conditional419=self!=((void*)0),                            _if_conditional419) {
                                # 4 "sSubNode_clone"
                                result_304->sline=self->sline;
                            }
                            # 6 "sSubNode_clone"
                            # 5 "sSubNode_clone"
                            if(_if_conditional420=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional420) {
                                # 5 "sSubNode_clone"
                                __dec_obj197=result_304->sname;
                                result_304->sname=(char*)come_increment_ref_count(((char*)(right_value450=string_clone(self->sname))));
                                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sSubNode_clone"
                            # 6 "sSubNode_clone"
                            if(_if_conditional421=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional421) {
                                # 6 "sSubNode_clone"
                                __dec_obj198=result_304->mLeft;
                                result_304->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=sNode_clone(self->mLeft))));
                                if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 8 "sSubNode_clone"
                            # 7 "sSubNode_clone"
                            if(_if_conditional422=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional422) {
                                # 7 "sSubNode_clone"
                                __dec_obj199=result_304->mRight;
                                result_304->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=sNode_clone(self->mRight))));
                                if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 9 "sSubNode_clone"
                            # 8 "sSubNode_clone"
                            if(_if_conditional423=self!=((void*)0),                            _if_conditional423) {
                                # 8 "sSubNode_clone"
                                result_304->mQuote=self->mQuote;
                            }
                            # 9 "sSubNode_clone"
                            __result261__ = __result_obj__ = result_304;
                            come_call_finalizer3(result_304,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result261__;
                            come_call_finalizer3(result_304,sSubNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value454;
struct sNode* node_305;
_Bool _while_condtional21;
_Bool _if_conditional424;
void* right_value455;
struct sNode* right_306;
void* right_value456;
void* right_value457;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value462;
struct sNode* __result266__;
_Bool _if_conditional434;
void* right_value463;
struct sNode* right_308;
void* right_value464;
void* right_value465;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value470;
struct sNode* __result269__;
_Bool _if_conditional444;
void* right_value471;
struct sNode* right_310;
void* right_value472;
void* right_value473;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value478;
struct sNode* __result272__;
_Bool _if_conditional454;
void* right_value479;
struct sNode* right_312;
void* right_value480;
void* right_value481;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value486;
struct sNode* __result275__;
struct sNode* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
memset(&node_305, 0, sizeof(struct sNode*));
right_value455 = (void*)0;
memset(&right_306, 0, sizeof(struct sNode*));
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
memset(&right_308, 0, sizeof(struct sNode*));
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
memset(&right_310, 0, sizeof(struct sNode*));
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&right_312, 0, sizeof(struct sNode*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value486 = (void*)0;
    # 1933 "13op.c"
    parse_sharp_v5(info);
    # 1935 "13op.c"
    node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=add_exp(info))));
    if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1939 "13op.c"
    parse_sharp_v5(info);
    # 1977 "13op.c"
    while(_while_condtional21=*info->p,    _while_condtional21) {
        # 1975 "13op.c"
        # 1940 "13op.c"
        if(_if_conditional424=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional424) {
            # 1941 "13op.c"
            info->p+=2;
            # 1942 "13op.c"
            skip_spaces_and_lf(info);
            # 1944 "13op.c"
            right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=shift_exp(info))));
            if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1946 "13op.c"
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1946, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value457=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value456=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1946, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_306),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result266__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value13));
            if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value456,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value457,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result266__;
            if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1975 "13op.c"
            # 1948 "13op.c"
            if(_if_conditional434=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional434) {
                # 1949 "13op.c"
                info->p+=2;
                # 1950 "13op.c"
                skip_spaces_and_lf(info);
                # 1952 "13op.c"
                right_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=shift_exp(info))));
                if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1954 "13op.c"
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1954, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value465=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value464=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1954, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_308),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result269__ = __result_obj__ = ((struct sNode*)(right_value470=_inf_value14));
                if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value464,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value465,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result269__;
                if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1975 "13op.c"
                # 1956 "13op.c"
                if(_if_conditional444=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional444) {
                    # 1957 "13op.c"
                    info->p+=3;
                    # 1958 "13op.c"
                    skip_spaces_and_lf(info);
                    # 1960 "13op.c"
                    right_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value471=shift_exp(info))));
                    if(right_value471) { right_value471 = come_decrement_ref_count2(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1962 "13op.c"
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1962, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value473=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value472=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1962, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_310),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sNodeBase_sline;
                    _inf_value15->sname=(void*)sNodeBase_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result272__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value15));
                    if(right_310) { right_310 = come_decrement_ref_count2(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value472,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value473,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result272__;
                    if(right_310) { right_310 = come_decrement_ref_count2(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1975 "13op.c"
                    # 1964 "13op.c"
                    if(_if_conditional454=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional454) {
                        # 1965 "13op.c"
                        info->p+=3;
                        # 1966 "13op.c"
                        skip_spaces_and_lf(info);
                        # 1968 "13op.c"
                        right_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=shift_exp(info))));
                        if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1970 "13op.c"
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1970, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value481=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value480=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1970, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_312),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sNodeBase_sline;
                        _inf_value16->sname=(void*)sNodeBase_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result275__ = __result_obj__ = ((struct sNode*)(right_value486=_inf_value16));
                        if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value480,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value481,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value486) { right_value486 = come_decrement_ref_count2(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result275__;
                        if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1973 "13op.c"
                        break;
                    }
                }
            }
        }
    }
    # 1977 "13op.c"
    parse_sharp_v5(info);
    # 1979 "13op.c"
    __result276__ = __result_obj__ = node_305;
    if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result276__;
    if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLShiftNode_finalize"
                        # 0 "sLShiftNode_finalize"
                        if(_if_conditional445=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional445) {
                            # 0 "sLShiftNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sLShiftNode_finalize"
                        # 1 "sLShiftNode_finalize"
                        if(_if_conditional446=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional446) {
                            # 1 "sLShiftNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sLShiftNode_finalize"
                        # 2 "sLShiftNode_finalize"
                        if(_if_conditional447=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional447) {
                            # 2 "sLShiftNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional448;
struct sLShiftNode* __result270__;
void* right_value474;
struct sLShiftNode* result_311;
_Bool _if_conditional449;
_Bool _if_conditional450;
void* right_value475;
char* __dec_obj206;
_Bool _if_conditional451;
void* right_value476;
struct sNode* __dec_obj207;
_Bool _if_conditional452;
void* right_value477;
struct sNode* __dec_obj208;
_Bool _if_conditional453;
struct sLShiftNode* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
right_value474 = (void*)0;
memset(&result_311, 0, sizeof(struct sLShiftNode*));
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
                        # 3 "sLShiftNode_clone"
                        # 2 "sLShiftNode_clone"
                        if(_if_conditional448=self==(void*)0,                        _if_conditional448) {
                            # 2 "sLShiftNode_clone"
                            __result270__ = __result_obj__ = (void*)0;
                            return __result270__;
                        }
                        # 3 "sLShiftNode_clone"
                        result_311=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value474=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"))));
                        come_call_finalizer3(right_value474,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLShiftNode_clone"
                        # 4 "sLShiftNode_clone"
                        if(_if_conditional449=self!=((void*)0),                        _if_conditional449) {
                            # 4 "sLShiftNode_clone"
                            result_311->sline=self->sline;
                        }
                        # 6 "sLShiftNode_clone"
                        # 5 "sLShiftNode_clone"
                        if(_if_conditional450=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional450) {
                            # 5 "sLShiftNode_clone"
                            __dec_obj206=result_311->sname;
                            result_311->sname=(char*)come_increment_ref_count(((char*)(right_value475=string_clone(self->sname))));
                            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value475 = come_decrement_ref_count2(right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sLShiftNode_clone"
                        # 6 "sLShiftNode_clone"
                        if(_if_conditional451=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional451) {
                            # 6 "sLShiftNode_clone"
                            __dec_obj207=result_311->mLeft;
                            result_311->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=sNode_clone(self->mLeft))));
                            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sLShiftNode_clone"
                        # 7 "sLShiftNode_clone"
                        if(_if_conditional452=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional452) {
                            # 7 "sLShiftNode_clone"
                            __dec_obj208=result_311->mRight;
                            result_311->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value477=sNode_clone(self->mRight))));
                            if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sLShiftNode_clone"
                        # 8 "sLShiftNode_clone"
                        if(_if_conditional453=self!=((void*)0),                        _if_conditional453) {
                            # 8 "sLShiftNode_clone"
                            result_311->mQuote=self->mQuote;
                        }
                        # 9 "sLShiftNode_clone"
                        __result271__ = __result_obj__ = result_311;
                        come_call_finalizer3(result_311,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result271__;
                        come_call_finalizer3(result_311,sLShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sRShiftNode_finalize"
                            # 0 "sRShiftNode_finalize"
                            if(_if_conditional455=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional455) {
                                # 0 "sRShiftNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sRShiftNode_finalize"
                            # 1 "sRShiftNode_finalize"
                            if(_if_conditional456=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional456) {
                                # 1 "sRShiftNode_finalize"
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sRShiftNode_finalize"
                            # 2 "sRShiftNode_finalize"
                            if(_if_conditional457=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional457) {
                                # 2 "sRShiftNode_finalize"
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional458;
struct sRShiftNode* __result273__;
void* right_value482;
struct sRShiftNode* result_313;
_Bool _if_conditional459;
_Bool _if_conditional460;
void* right_value483;
char* __dec_obj209;
_Bool _if_conditional461;
void* right_value484;
struct sNode* __dec_obj210;
_Bool _if_conditional462;
void* right_value485;
struct sNode* __dec_obj211;
_Bool _if_conditional463;
struct sRShiftNode* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value482 = (void*)0;
memset(&result_313, 0, sizeof(struct sRShiftNode*));
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
                            # 3 "sRShiftNode_clone"
                            # 2 "sRShiftNode_clone"
                            if(_if_conditional458=self==(void*)0,                            _if_conditional458) {
                                # 2 "sRShiftNode_clone"
                                __result273__ = __result_obj__ = (void*)0;
                                return __result273__;
                            }
                            # 3 "sRShiftNode_clone"
                            result_313=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value482=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"))));
                            come_call_finalizer3(right_value482,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sRShiftNode_clone"
                            # 4 "sRShiftNode_clone"
                            if(_if_conditional459=self!=((void*)0),                            _if_conditional459) {
                                # 4 "sRShiftNode_clone"
                                result_313->sline=self->sline;
                            }
                            # 6 "sRShiftNode_clone"
                            # 5 "sRShiftNode_clone"
                            if(_if_conditional460=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional460) {
                                # 5 "sRShiftNode_clone"
                                __dec_obj209=result_313->sname;
                                result_313->sname=(char*)come_increment_ref_count(((char*)(right_value483=string_clone(self->sname))));
                                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sRShiftNode_clone"
                            # 6 "sRShiftNode_clone"
                            if(_if_conditional461=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional461) {
                                # 6 "sRShiftNode_clone"
                                __dec_obj210=result_313->mLeft;
                                result_313->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=sNode_clone(self->mLeft))));
                                if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value484) { right_value484 = come_decrement_ref_count2(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 8 "sRShiftNode_clone"
                            # 7 "sRShiftNode_clone"
                            if(_if_conditional462=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional462) {
                                # 7 "sRShiftNode_clone"
                                __dec_obj211=result_313->mRight;
                                result_313->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value485=sNode_clone(self->mRight))));
                                if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 9 "sRShiftNode_clone"
                            # 8 "sRShiftNode_clone"
                            if(_if_conditional463=self!=((void*)0),                            _if_conditional463) {
                                # 8 "sRShiftNode_clone"
                                result_313->mQuote=self->mQuote;
                            }
                            # 9 "sRShiftNode_clone"
                            __result274__ = __result_obj__ = result_313;
                            come_call_finalizer3(result_313,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result274__;
                            come_call_finalizer3(result_313,sRShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value487;
struct sNode* node_314;
_Bool _while_condtional22;
_Bool _if_conditional464;
void* right_value488;
struct sNode* right_315;
void* right_value489;
void* right_value490;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value495;
struct sNode* __result279__;
_Bool _if_conditional474;
void* right_value496;
struct sNode* right_317;
void* right_value497;
void* right_value498;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value503;
struct sNode* __result282__;
_Bool _if_conditional484;
void* right_value504;
struct sNode* right_319;
void* right_value505;
void* right_value506;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value511;
struct sNode* __result285__;
_Bool _if_conditional494;
void* right_value512;
struct sNode* right_321;
void* right_value513;
void* right_value514;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value519;
struct sNode* __result288__;
_Bool _if_conditional504;
void* right_value520;
struct sNode* right_323;
void* right_value521;
void* right_value522;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value527;
struct sNode* __result291__;
_Bool _if_conditional514;
void* right_value528;
struct sNode* right_325;
void* right_value529;
void* right_value530;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value535;
struct sNode* __result294__;
_Bool _if_conditional524;
void* right_value536;
struct sNode* right_327;
void* right_value537;
void* right_value538;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value543;
struct sNode* __result297__;
_Bool _if_conditional534;
void* right_value544;
struct sNode* right_329;
void* right_value545;
void* right_value546;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value551;
struct sNode* __result300__;
struct sNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value487 = (void*)0;
memset(&node_314, 0, sizeof(struct sNode*));
right_value488 = (void*)0;
memset(&right_315, 0, sizeof(struct sNode*));
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
memset(&right_317, 0, sizeof(struct sNode*));
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&right_319, 0, sizeof(struct sNode*));
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value511 = (void*)0;
right_value512 = (void*)0;
memset(&right_321, 0, sizeof(struct sNode*));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
memset(&right_323, 0, sizeof(struct sNode*));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
memset(&right_325, 0, sizeof(struct sNode*));
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&right_327, 0, sizeof(struct sNode*));
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
memset(&right_329, 0, sizeof(struct sNode*));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value551 = (void*)0;
    # 1984 "13op.c"
    parse_sharp_v5(info);
    # 1986 "13op.c"
    node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value487=shift_exp(info))));
    if(right_value487) { right_value487 = come_decrement_ref_count2(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1990 "13op.c"
    parse_sharp_v5(info);
    # 2060 "13op.c"
    while(_while_condtional22=*info->p,    _while_condtional22) {
        # 2058 "13op.c"
        # 1991 "13op.c"
        if(_if_conditional464=*info->p==62&&*(info->p+1)==61,        _if_conditional464) {
            # 1992 "13op.c"
            info->p+=2;
            # 1993 "13op.c"
            skip_spaces_and_lf(info);
            # 1995 "13op.c"
            right_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value488=shift_exp(info))));
            if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1997 "13op.c"
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1997, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value490=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value489=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1997, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_315),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result279__ = __result_obj__ = ((struct sNode*)(right_value495=_inf_value17));
            if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value489,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value490,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value495) { right_value495 = come_decrement_ref_count2(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result279__;
            if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2058 "13op.c"
            # 1999 "13op.c"
            if(_if_conditional474=*info->p==60&&*(info->p+1)==61,            _if_conditional474) {
                # 2000 "13op.c"
                info->p+=2;
                # 2001 "13op.c"
                skip_spaces_and_lf(info);
                # 2003 "13op.c"
                right_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value496=shift_exp(info))));
                if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2005 "13op.c"
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2005, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value498=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value497=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2005, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sNodeBase_sline;
                _inf_value18->sname=(void*)sNodeBase_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result282__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value18));
                if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value497,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value498,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result282__;
                if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2058 "13op.c"
                # 2007 "13op.c"
                if(_if_conditional484=*info->p==62&&*(info->p+1)!=62,                _if_conditional484) {
                    # 2008 "13op.c"
                    info->p++;
                    # 2009 "13op.c"
                    skip_spaces_and_lf(info);
                    # 2011 "13op.c"
                    right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=shift_exp(info))));
                    if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 2013 "13op.c"
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2013, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value506=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value505=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2013, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_319),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sNodeBase_sline;
                    _inf_value19->sname=(void*)sNodeBase_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result285__ = __result_obj__ = ((struct sNode*)(right_value511=_inf_value19));
                    if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value505,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value506,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result285__;
                    if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2058 "13op.c"
                    # 2015 "13op.c"
                    if(_if_conditional494=*info->p==60&&*(info->p+1)!=60,                    _if_conditional494) {
                        # 2016 "13op.c"
                        info->p++;
                        # 2017 "13op.c"
                        skip_spaces_and_lf(info);
                        # 2019 "13op.c"
                        right_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=shift_exp(info))));
                        if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 2021 "13op.c"
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2021, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value514=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value513=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2021, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_321),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sNodeBase_sline;
                        _inf_value20->sname=(void*)sNodeBase_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result288__ = __result_obj__ = ((struct sNode*)(right_value519=_inf_value20));
                        if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value513,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value514,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result288__;
                        if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2058 "13op.c"
                        # 2023 "13op.c"
                        if(_if_conditional504=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional504) {
                            # 2024 "13op.c"
                            info->p+=3;
                            # 2025 "13op.c"
                            skip_spaces_and_lf(info);
                            # 2027 "13op.c"
                            right_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=shift_exp(info))));
                            if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2029 "13op.c"
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2029, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value522=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value521=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2029, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_323),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sNodeBase_sline;
                            _inf_value21->sname=(void*)sNodeBase_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result291__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value21));
                            if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value521,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value522,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value527) { right_value527 = come_decrement_ref_count2(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result291__;
                            if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 2058 "13op.c"
                            # 2031 "13op.c"
                            if(_if_conditional514=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional514) {
                                # 2032 "13op.c"
                                info->p+=3;
                                # 2033 "13op.c"
                                skip_spaces_and_lf(info);
                                # 2035 "13op.c"
                                right_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=shift_exp(info))));
                                if(right_value528) { right_value528 = come_decrement_ref_count2(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 2037 "13op.c"
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2037, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value530=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value529=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2037, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_325),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sNodeBase_sline;
                                _inf_value22->sname=(void*)sNodeBase_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result294__ = __result_obj__ = ((struct sNode*)(right_value535=_inf_value22));
                                if(right_325) { right_325 = come_decrement_ref_count2(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value529,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value530,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value535) { right_value535 = come_decrement_ref_count2(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result294__;
                                if(right_325) { right_325 = come_decrement_ref_count2(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 2058 "13op.c"
                                # 2039 "13op.c"
                                if(_if_conditional524=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional524) {
                                    # 2040 "13op.c"
                                    info->p+=2;
                                    # 2041 "13op.c"
                                    skip_spaces_and_lf(info);
                                    # 2043 "13op.c"
                                    right_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=shift_exp(info))));
                                    if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 2045 "13op.c"
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2045, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value538=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value537=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2045, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_327),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sNodeBase_sline;
                                    _inf_value23->sname=(void*)sNodeBase_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result297__ = __result_obj__ = ((struct sNode*)(right_value543=_inf_value23));
                                    if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value537,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value538,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result297__;
                                    if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 2058 "13op.c"
                                    # 2047 "13op.c"
                                    if(_if_conditional534=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional534) {
                                        # 2048 "13op.c"
                                        info->p+=2;
                                        # 2049 "13op.c"
                                        skip_spaces_and_lf(info);
                                        # 2051 "13op.c"
                                        right_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value544=shift_exp(info))));
                                        if(right_value544) { right_value544 = come_decrement_ref_count2(right_value544, ((struct sNode*)right_value544)->finalize, ((struct sNode*)right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 2053 "13op.c"
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2053, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value546=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value545=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2053, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_329),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sNodeBase_sline;
                                        _inf_value24->sname=(void*)sNodeBase_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result300__ = __result_obj__ = ((struct sNode*)(right_value551=_inf_value24));
                                        if(right_329) { right_329 = come_decrement_ref_count2(right_329, ((struct sNode*)right_329)->finalize, ((struct sNode*)right_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value545,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value546,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value551) { right_value551 = come_decrement_ref_count2(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result300__;
                                        if(right_329) { right_329 = come_decrement_ref_count2(right_329, ((struct sNode*)right_329)->finalize, ((struct sNode*)right_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 2056 "13op.c"
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
    # 2060 "13op.c"
    parse_sharp_v5(info);
    # 2062 "13op.c"
    __result301__ = __result_obj__ = node_314;
    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result301__;
    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool _if_conditional507;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sGtEqNode_finalize"
                                # 0 "sGtEqNode_finalize"
                                if(_if_conditional505=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional505) {
                                    # 0 "sGtEqNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sGtEqNode_finalize"
                                # 1 "sGtEqNode_finalize"
                                if(_if_conditional506=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional506) {
                                    # 1 "sGtEqNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sGtEqNode_finalize"
                                # 2 "sGtEqNode_finalize"
                                if(_if_conditional507=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional507) {
                                    # 2 "sGtEqNode_finalize"
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional508;
struct sGtEqNode* __result289__;
void* right_value523;
struct sGtEqNode* result_324;
_Bool _if_conditional509;
_Bool _if_conditional510;
void* right_value524;
char* __dec_obj224;
_Bool _if_conditional511;
void* right_value525;
struct sNode* __dec_obj225;
_Bool _if_conditional512;
void* right_value526;
struct sNode* __dec_obj226;
_Bool _if_conditional513;
struct sGtEqNode* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
right_value523 = (void*)0;
memset(&result_324, 0, sizeof(struct sGtEqNode*));
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
                                # 3 "sGtEqNode_clone"
                                # 2 "sGtEqNode_clone"
                                if(_if_conditional508=self==(void*)0,                                _if_conditional508) {
                                    # 2 "sGtEqNode_clone"
                                    __result289__ = __result_obj__ = (void*)0;
                                    return __result289__;
                                }
                                # 3 "sGtEqNode_clone"
                                result_324=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value523=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"))));
                                come_call_finalizer3(right_value523,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sGtEqNode_clone"
                                # 4 "sGtEqNode_clone"
                                if(_if_conditional509=self!=((void*)0),                                _if_conditional509) {
                                    # 4 "sGtEqNode_clone"
                                    result_324->sline=self->sline;
                                }
                                # 6 "sGtEqNode_clone"
                                # 5 "sGtEqNode_clone"
                                if(_if_conditional510=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional510) {
                                    # 5 "sGtEqNode_clone"
                                    __dec_obj224=result_324->sname;
                                    result_324->sname=(char*)come_increment_ref_count(((char*)(right_value524=string_clone(self->sname))));
                                    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sGtEqNode_clone"
                                # 6 "sGtEqNode_clone"
                                if(_if_conditional511=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional511) {
                                    # 6 "sGtEqNode_clone"
                                    __dec_obj225=result_324->mLeft;
                                    result_324->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=sNode_clone(self->mLeft))));
                                    if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 8 "sGtEqNode_clone"
                                # 7 "sGtEqNode_clone"
                                if(_if_conditional512=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional512) {
                                    # 7 "sGtEqNode_clone"
                                    __dec_obj226=result_324->mRight;
                                    result_324->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value526=sNode_clone(self->mRight))));
                                    if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 9 "sGtEqNode_clone"
                                # 8 "sGtEqNode_clone"
                                if(_if_conditional513=self!=((void*)0),                                _if_conditional513) {
                                    # 8 "sGtEqNode_clone"
                                    result_324->mQuote=self->mQuote;
                                }
                                # 9 "sGtEqNode_clone"
                                __result290__ = __result_obj__ = result_324;
                                come_call_finalizer3(result_324,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result290__;
                                come_call_finalizer3(result_324,sGtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sLtEqNode_finalize"
                                    # 0 "sLtEqNode_finalize"
                                    if(_if_conditional515=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional515) {
                                        # 0 "sLtEqNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sLtEqNode_finalize"
                                    # 1 "sLtEqNode_finalize"
                                    if(_if_conditional516=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional516) {
                                        # 1 "sLtEqNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sLtEqNode_finalize"
                                    # 2 "sLtEqNode_finalize"
                                    if(_if_conditional517=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional517) {
                                        # 2 "sLtEqNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional518;
struct sLtEqNode* __result292__;
void* right_value531;
struct sLtEqNode* result_326;
_Bool _if_conditional519;
_Bool _if_conditional520;
void* right_value532;
char* __dec_obj227;
_Bool _if_conditional521;
void* right_value533;
struct sNode* __dec_obj228;
_Bool _if_conditional522;
void* right_value534;
struct sNode* __dec_obj229;
_Bool _if_conditional523;
struct sLtEqNode* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
right_value531 = (void*)0;
memset(&result_326, 0, sizeof(struct sLtEqNode*));
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
                                    # 3 "sLtEqNode_clone"
                                    # 2 "sLtEqNode_clone"
                                    if(_if_conditional518=self==(void*)0,                                    _if_conditional518) {
                                        # 2 "sLtEqNode_clone"
                                        __result292__ = __result_obj__ = (void*)0;
                                        return __result292__;
                                    }
                                    # 3 "sLtEqNode_clone"
                                    result_326=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value531=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"))));
                                    come_call_finalizer3(right_value531,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sLtEqNode_clone"
                                    # 4 "sLtEqNode_clone"
                                    if(_if_conditional519=self!=((void*)0),                                    _if_conditional519) {
                                        # 4 "sLtEqNode_clone"
                                        result_326->sline=self->sline;
                                    }
                                    # 6 "sLtEqNode_clone"
                                    # 5 "sLtEqNode_clone"
                                    if(_if_conditional520=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional520) {
                                        # 5 "sLtEqNode_clone"
                                        __dec_obj227=result_326->sname;
                                        result_326->sname=(char*)come_increment_ref_count(((char*)(right_value532=string_clone(self->sname))));
                                        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sLtEqNode_clone"
                                    # 6 "sLtEqNode_clone"
                                    if(_if_conditional521=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional521) {
                                        # 6 "sLtEqNode_clone"
                                        __dec_obj228=result_326->mLeft;
                                        result_326->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value533=sNode_clone(self->mLeft))));
                                        if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sLtEqNode_clone"
                                    # 7 "sLtEqNode_clone"
                                    if(_if_conditional522=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional522) {
                                        # 7 "sLtEqNode_clone"
                                        __dec_obj229=result_326->mRight;
                                        result_326->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value534=sNode_clone(self->mRight))));
                                        if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value534) { right_value534 = come_decrement_ref_count2(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 9 "sLtEqNode_clone"
                                    # 8 "sLtEqNode_clone"
                                    if(_if_conditional523=self!=((void*)0),                                    _if_conditional523) {
                                        # 8 "sLtEqNode_clone"
                                        result_326->mQuote=self->mQuote;
                                    }
                                    # 9 "sLtEqNode_clone"
                                    __result293__ = __result_obj__ = result_326;
                                    come_call_finalizer3(result_326,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result293__;
                                    come_call_finalizer3(result_326,sLtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional525;
_Bool _if_conditional526;
_Bool _if_conditional527;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sGtNode_finalize"
                                        # 0 "sGtNode_finalize"
                                        if(_if_conditional525=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional525) {
                                            # 0 "sGtNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sGtNode_finalize"
                                        # 1 "sGtNode_finalize"
                                        if(_if_conditional526=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional526) {
                                            # 1 "sGtNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sGtNode_finalize"
                                        # 2 "sGtNode_finalize"
                                        if(_if_conditional527=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional527) {
                                            # 2 "sGtNode_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional528;
struct sGtNode* __result295__;
void* right_value539;
struct sGtNode* result_328;
_Bool _if_conditional529;
_Bool _if_conditional530;
void* right_value540;
char* __dec_obj230;
_Bool _if_conditional531;
void* right_value541;
struct sNode* __dec_obj231;
_Bool _if_conditional532;
void* right_value542;
struct sNode* __dec_obj232;
_Bool _if_conditional533;
struct sGtNode* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
right_value539 = (void*)0;
memset(&result_328, 0, sizeof(struct sGtNode*));
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
                                        # 3 "sGtNode_clone"
                                        # 2 "sGtNode_clone"
                                        if(_if_conditional528=self==(void*)0,                                        _if_conditional528) {
                                            # 2 "sGtNode_clone"
                                            __result295__ = __result_obj__ = (void*)0;
                                            return __result295__;
                                        }
                                        # 3 "sGtNode_clone"
                                        result_328=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value539=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"))));
                                        come_call_finalizer3(right_value539,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sGtNode_clone"
                                        # 4 "sGtNode_clone"
                                        if(_if_conditional529=self!=((void*)0),                                        _if_conditional529) {
                                            # 4 "sGtNode_clone"
                                            result_328->sline=self->sline;
                                        }
                                        # 6 "sGtNode_clone"
                                        # 5 "sGtNode_clone"
                                        if(_if_conditional530=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional530) {
                                            # 5 "sGtNode_clone"
                                            __dec_obj230=result_328->sname;
                                            result_328->sname=(char*)come_increment_ref_count(((char*)(right_value540=string_clone(self->sname))));
                                            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sGtNode_clone"
                                        # 6 "sGtNode_clone"
                                        if(_if_conditional531=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional531) {
                                            # 6 "sGtNode_clone"
                                            __dec_obj231=result_328->mLeft;
                                            result_328->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value541=sNode_clone(self->mLeft))));
                                            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 8 "sGtNode_clone"
                                        # 7 "sGtNode_clone"
                                        if(_if_conditional532=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional532) {
                                            # 7 "sGtNode_clone"
                                            __dec_obj232=result_328->mRight;
                                            result_328->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=sNode_clone(self->mRight))));
                                            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 9 "sGtNode_clone"
                                        # 8 "sGtNode_clone"
                                        if(_if_conditional533=self!=((void*)0),                                        _if_conditional533) {
                                            # 8 "sGtNode_clone"
                                            result_328->mQuote=self->mQuote;
                                        }
                                        # 9 "sGtNode_clone"
                                        __result296__ = __result_obj__ = result_328;
                                        come_call_finalizer3(result_328,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result296__;
                                        come_call_finalizer3(result_328,sGtNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional535;
_Bool _if_conditional536;
_Bool _if_conditional537;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sLtNode_finalize"
                                            # 0 "sLtNode_finalize"
                                            if(_if_conditional535=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional535) {
                                                # 0 "sLtNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sLtNode_finalize"
                                            # 1 "sLtNode_finalize"
                                            if(_if_conditional536=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional536) {
                                                # 1 "sLtNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sLtNode_finalize"
                                            # 2 "sLtNode_finalize"
                                            if(_if_conditional537=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional537) {
                                                # 2 "sLtNode_finalize"
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional538;
struct sLtNode* __result298__;
void* right_value547;
struct sLtNode* result_330;
_Bool _if_conditional539;
_Bool _if_conditional540;
void* right_value548;
char* __dec_obj233;
_Bool _if_conditional541;
void* right_value549;
struct sNode* __dec_obj234;
_Bool _if_conditional542;
void* right_value550;
struct sNode* __dec_obj235;
_Bool _if_conditional543;
struct sLtNode* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
right_value547 = (void*)0;
memset(&result_330, 0, sizeof(struct sLtNode*));
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
                                            # 3 "sLtNode_clone"
                                            # 2 "sLtNode_clone"
                                            if(_if_conditional538=self==(void*)0,                                            _if_conditional538) {
                                                # 2 "sLtNode_clone"
                                                __result298__ = __result_obj__ = (void*)0;
                                                return __result298__;
                                            }
                                            # 3 "sLtNode_clone"
                                            result_330=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value547=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"))));
                                            come_call_finalizer3(right_value547,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sLtNode_clone"
                                            # 4 "sLtNode_clone"
                                            if(_if_conditional539=self!=((void*)0),                                            _if_conditional539) {
                                                # 4 "sLtNode_clone"
                                                result_330->sline=self->sline;
                                            }
                                            # 6 "sLtNode_clone"
                                            # 5 "sLtNode_clone"
                                            if(_if_conditional540=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional540) {
                                                # 5 "sLtNode_clone"
                                                __dec_obj233=result_330->sname;
                                                result_330->sname=(char*)come_increment_ref_count(((char*)(right_value548=string_clone(self->sname))));
                                                __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sLtNode_clone"
                                            # 6 "sLtNode_clone"
                                            if(_if_conditional541=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional541) {
                                                # 6 "sLtNode_clone"
                                                __dec_obj234=result_330->mLeft;
                                                result_330->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=sNode_clone(self->mLeft))));
                                                if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 8 "sLtNode_clone"
                                            # 7 "sLtNode_clone"
                                            if(_if_conditional542=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional542) {
                                                # 7 "sLtNode_clone"
                                                __dec_obj235=result_330->mRight;
                                                result_330->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value550=sNode_clone(self->mRight))));
                                                if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value550) { right_value550 = come_decrement_ref_count2(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 9 "sLtNode_clone"
                                            # 8 "sLtNode_clone"
                                            if(_if_conditional543=self!=((void*)0),                                            _if_conditional543) {
                                                # 8 "sLtNode_clone"
                                                result_330->mQuote=self->mQuote;
                                            }
                                            # 9 "sLtNode_clone"
                                            __result299__ = __result_obj__ = result_330;
                                            come_call_finalizer3(result_330,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result299__;
                                            come_call_finalizer3(result_330,sLtNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value552;
struct sNode* node_331;
_Bool _while_condtional23;
_Bool _if_conditional544;
void* right_value553;
struct sNode* right_332;
void* right_value554;
void* right_value555;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value560;
struct sNode* __result304__;
_Bool _if_conditional554;
void* right_value561;
struct sNode* right_334;
void* right_value562;
void* right_value563;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value568;
struct sNode* __result307__;
_Bool _if_conditional564;
void* right_value569;
struct sNode* right_336;
void* right_value570;
void* right_value571;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value576;
struct sNode* __result310__;
_Bool _if_conditional574;
void* right_value577;
struct sNode* right_338;
void* right_value578;
void* right_value579;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value584;
struct sNode* __result313__;
_Bool _if_conditional584;
void* right_value585;
struct sNode* right_340;
void* right_value586;
void* right_value587;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value592;
struct sNode* __result316__;
_Bool _if_conditional594;
void* right_value593;
struct sNode* right_342;
void* right_value594;
void* right_value595;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value600;
struct sNode* __result319__;
_Bool _if_conditional604;
void* right_value601;
struct sNode* right_344;
void* right_value602;
void* right_value603;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value608;
struct sNode* __result322__;
_Bool _if_conditional614;
void* right_value609;
struct sNode* right_346;
void* right_value610;
void* right_value611;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value616;
struct sNode* __result325__;
struct sNode* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value552 = (void*)0;
memset(&node_331, 0, sizeof(struct sNode*));
right_value553 = (void*)0;
memset(&right_332, 0, sizeof(struct sNode*));
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value560 = (void*)0;
right_value561 = (void*)0;
memset(&right_334, 0, sizeof(struct sNode*));
right_value562 = (void*)0;
right_value563 = (void*)0;
right_value568 = (void*)0;
right_value569 = (void*)0;
memset(&right_336, 0, sizeof(struct sNode*));
right_value570 = (void*)0;
right_value571 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&right_338, 0, sizeof(struct sNode*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
memset(&right_340, 0, sizeof(struct sNode*));
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&right_342, 0, sizeof(struct sNode*));
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
memset(&right_344, 0, sizeof(struct sNode*));
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
memset(&right_346, 0, sizeof(struct sNode*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value616 = (void*)0;
    # 2067 "13op.c"
    parse_sharp_v5(info);
    # 2069 "13op.c"
    node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value552=comparison_exp(info))));
    if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2073 "13op.c"
    parse_sharp_v5(info);
    # 2143 "13op.c"
    while(_while_condtional23=*info->p,    _while_condtional23) {
        # 2141 "13op.c"
        # 2074 "13op.c"
        if(_if_conditional544=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional544) {
            # 2075 "13op.c"
            info->p+=3;
            # 2076 "13op.c"
            skip_spaces_and_lf(info);
            # 2078 "13op.c"
            right_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value553=eq_exp(info))));
            if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2080 "13op.c"
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2080, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value555=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value554=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2080, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_332),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result304__ = __result_obj__ = ((struct sNode*)(right_value560=_inf_value25));
            if(right_332) { right_332 = come_decrement_ref_count2(right_332, ((struct sNode*)right_332)->finalize, ((struct sNode*)right_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value554,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value555,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result304__;
            if(right_332) { right_332 = come_decrement_ref_count2(right_332, ((struct sNode*)right_332)->finalize, ((struct sNode*)right_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2141 "13op.c"
            # 2082 "13op.c"
            if(_if_conditional554=*info->p==61&&*(info->p+1)==61,            _if_conditional554) {
                # 2083 "13op.c"
                info->p+=2;
                # 2084 "13op.c"
                skip_spaces_and_lf(info);
                # 2086 "13op.c"
                right_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=eq_exp(info))));
                if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2088 "13op.c"
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2088, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value563=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value562=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2088, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_334),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sNodeBase_sline;
                _inf_value26->sname=(void*)sNodeBase_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result307__ = __result_obj__ = ((struct sNode*)(right_value568=_inf_value26));
                if(right_334) { right_334 = come_decrement_ref_count2(right_334, ((struct sNode*)right_334)->finalize, ((struct sNode*)right_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value562,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value563,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value568) { right_value568 = come_decrement_ref_count2(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result307__;
                if(right_334) { right_334 = come_decrement_ref_count2(right_334, ((struct sNode*)right_334)->finalize, ((struct sNode*)right_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2141 "13op.c"
                # 2090 "13op.c"
                if(_if_conditional564=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional564) {
                    # 2091 "13op.c"
                    info->p+=3;
                    # 2092 "13op.c"
                    skip_spaces_and_lf(info);
                    # 2094 "13op.c"
                    right_336=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=eq_exp(info))));
                    if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 2096 "13op.c"
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2096, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value571=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value570=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2096, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_336),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNodeBase_sline;
                    _inf_value27->sname=(void*)sNodeBase_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result310__ = __result_obj__ = ((struct sNode*)(right_value576=_inf_value27));
                    if(right_336) { right_336 = come_decrement_ref_count2(right_336, ((struct sNode*)right_336)->finalize, ((struct sNode*)right_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value570,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value571,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result310__;
                    if(right_336) { right_336 = come_decrement_ref_count2(right_336, ((struct sNode*)right_336)->finalize, ((struct sNode*)right_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2141 "13op.c"
                    # 2098 "13op.c"
                    if(_if_conditional574=*info->p==33&&*(info->p+1)==61,                    _if_conditional574) {
                        # 2099 "13op.c"
                        info->p+=2;
                        # 2100 "13op.c"
                        skip_spaces_and_lf(info);
                        # 2102 "13op.c"
                        right_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=eq_exp(info))));
                        if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 2104 "13op.c"
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2104, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value579=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value578=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2104, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_338),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNodeBase_sline;
                        _inf_value28->sname=(void*)sNodeBase_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result313__ = __result_obj__ = ((struct sNode*)(right_value584=_inf_value28));
                        if(right_338) { right_338 = come_decrement_ref_count2(right_338, ((struct sNode*)right_338)->finalize, ((struct sNode*)right_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value578,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value579,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result313__;
                        if(right_338) { right_338 = come_decrement_ref_count2(right_338, ((struct sNode*)right_338)->finalize, ((struct sNode*)right_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2141 "13op.c"
                        # 2106 "13op.c"
                        if(_if_conditional584=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional584) {
                            # 2107 "13op.c"
                            info->p+=4;
                            # 2108 "13op.c"
                            skip_spaces_and_lf(info);
                            # 2110 "13op.c"
                            right_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=eq_exp(info))));
                            if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2112 "13op.c"
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2112, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value587=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value586=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2112, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_340),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sNodeBase_sline;
                            _inf_value29->sname=(void*)sNodeBase_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result316__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value29));
                            if(right_340) { right_340 = come_decrement_ref_count2(right_340, ((struct sNode*)right_340)->finalize, ((struct sNode*)right_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value586,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value587,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result316__;
                            if(right_340) { right_340 = come_decrement_ref_count2(right_340, ((struct sNode*)right_340)->finalize, ((struct sNode*)right_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 2141 "13op.c"
                            # 2114 "13op.c"
                            if(_if_conditional594=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional594) {
                                # 2115 "13op.c"
                                info->p+=3;
                                # 2116 "13op.c"
                                skip_spaces_and_lf(info);
                                # 2118 "13op.c"
                                right_342=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=eq_exp(info))));
                                if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 2120 "13op.c"
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2120, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value595=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value594=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2120, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_342),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sNodeBase_sline;
                                _inf_value30->sname=(void*)sNodeBase_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result319__ = __result_obj__ = ((struct sNode*)(right_value600=_inf_value30));
                                if(right_342) { right_342 = come_decrement_ref_count2(right_342, ((struct sNode*)right_342)->finalize, ((struct sNode*)right_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value594,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value595,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value600) { right_value600 = come_decrement_ref_count2(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result319__;
                                if(right_342) { right_342 = come_decrement_ref_count2(right_342, ((struct sNode*)right_342)->finalize, ((struct sNode*)right_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 2141 "13op.c"
                                # 2122 "13op.c"
                                if(_if_conditional604=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional604) {
                                    # 2123 "13op.c"
                                    info->p+=4;
                                    # 2124 "13op.c"
                                    skip_spaces_and_lf(info);
                                    # 2126 "13op.c"
                                    right_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value601=eq_exp(info))));
                                    if(right_value601) { right_value601 = come_decrement_ref_count2(right_value601, ((struct sNode*)right_value601)->finalize, ((struct sNode*)right_value601)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 2128 "13op.c"
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2128, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value603=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value602=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2128, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_344),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNodeBase_sline;
                                    _inf_value31->sname=(void*)sNodeBase_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result322__ = __result_obj__ = ((struct sNode*)(right_value608=_inf_value31));
                                    if(right_344) { right_344 = come_decrement_ref_count2(right_344, ((struct sNode*)right_344)->finalize, ((struct sNode*)right_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value602,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value603,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value608) { right_value608 = come_decrement_ref_count2(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result322__;
                                    if(right_344) { right_344 = come_decrement_ref_count2(right_344, ((struct sNode*)right_344)->finalize, ((struct sNode*)right_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 2141 "13op.c"
                                    # 2130 "13op.c"
                                    if(_if_conditional614=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional614) {
                                        # 2131 "13op.c"
                                        info->p+=3;
                                        # 2132 "13op.c"
                                        skip_spaces_and_lf(info);
                                        # 2134 "13op.c"
                                        right_346=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value609=eq_exp(info))));
                                        if(right_value609) { right_value609 = come_decrement_ref_count2(right_value609, ((struct sNode*)right_value609)->finalize, ((struct sNode*)right_value609)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 2136 "13op.c"
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2136, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value611=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value610=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2136, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(right_346),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNodeBase_sline;
                                        _inf_value32->sname=(void*)sNodeBase_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result325__ = __result_obj__ = ((struct sNode*)(right_value616=_inf_value32));
                                        if(right_346) { right_346 = come_decrement_ref_count2(right_346, ((struct sNode*)right_346)->finalize, ((struct sNode*)right_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value610,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value611,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value616) { right_value616 = come_decrement_ref_count2(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result325__;
                                        if(right_346) { right_346 = come_decrement_ref_count2(right_346, ((struct sNode*)right_346)->finalize, ((struct sNode*)right_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 2139 "13op.c"
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
    # 2143 "13op.c"
    parse_sharp_v5(info);
    # 2145 "13op.c"
    __result326__ = __result_obj__ = node_331;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result326__;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional585;
_Bool _if_conditional586;
_Bool _if_conditional587;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sEq2Node_finalize"
                                # 0 "sEq2Node_finalize"
                                if(_if_conditional585=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional585) {
                                    # 0 "sEq2Node_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sEq2Node_finalize"
                                # 1 "sEq2Node_finalize"
                                if(_if_conditional586=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional586) {
                                    # 1 "sEq2Node_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sEq2Node_finalize"
                                # 2 "sEq2Node_finalize"
                                if(_if_conditional587=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional587) {
                                    # 2 "sEq2Node_finalize"
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional588;
struct sEq2Node* __result314__;
void* right_value588;
struct sEq2Node* result_341;
_Bool _if_conditional589;
_Bool _if_conditional590;
void* right_value589;
char* __dec_obj248;
_Bool _if_conditional591;
void* right_value590;
struct sNode* __dec_obj249;
_Bool _if_conditional592;
void* right_value591;
struct sNode* __dec_obj250;
_Bool _if_conditional593;
struct sEq2Node* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
right_value588 = (void*)0;
memset(&result_341, 0, sizeof(struct sEq2Node*));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
                                # 3 "sEq2Node_clone"
                                # 2 "sEq2Node_clone"
                                if(_if_conditional588=self==(void*)0,                                _if_conditional588) {
                                    # 2 "sEq2Node_clone"
                                    __result314__ = __result_obj__ = (void*)0;
                                    return __result314__;
                                }
                                # 3 "sEq2Node_clone"
                                result_341=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value588=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"))));
                                come_call_finalizer3(right_value588,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sEq2Node_clone"
                                # 4 "sEq2Node_clone"
                                if(_if_conditional589=self!=((void*)0),                                _if_conditional589) {
                                    # 4 "sEq2Node_clone"
                                    result_341->sline=self->sline;
                                }
                                # 6 "sEq2Node_clone"
                                # 5 "sEq2Node_clone"
                                if(_if_conditional590=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional590) {
                                    # 5 "sEq2Node_clone"
                                    __dec_obj248=result_341->sname;
                                    result_341->sname=(char*)come_increment_ref_count(((char*)(right_value589=string_clone(self->sname))));
                                    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value589 = come_decrement_ref_count2(right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sEq2Node_clone"
                                # 6 "sEq2Node_clone"
                                if(_if_conditional591=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional591) {
                                    # 6 "sEq2Node_clone"
                                    __dec_obj249=result_341->mLeft;
                                    result_341->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value590=sNode_clone(self->mLeft))));
                                    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value590) { right_value590 = come_decrement_ref_count2(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 8 "sEq2Node_clone"
                                # 7 "sEq2Node_clone"
                                if(_if_conditional592=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional592) {
                                    # 7 "sEq2Node_clone"
                                    __dec_obj250=result_341->mRight;
                                    result_341->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value591=sNode_clone(self->mRight))));
                                    if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value591) { right_value591 = come_decrement_ref_count2(right_value591, ((struct sNode*)right_value591)->finalize, ((struct sNode*)right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 9 "sEq2Node_clone"
                                # 8 "sEq2Node_clone"
                                if(_if_conditional593=self!=((void*)0),                                _if_conditional593) {
                                    # 8 "sEq2Node_clone"
                                    result_341->mQuote=self->mQuote;
                                }
                                # 9 "sEq2Node_clone"
                                __result315__ = __result_obj__ = result_341;
                                come_call_finalizer3(result_341,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                return __result315__;
                                come_call_finalizer3(result_341,sEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional595;
_Bool _if_conditional596;
_Bool _if_conditional597;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sEqNode_finalize"
                                    # 0 "sEqNode_finalize"
                                    if(_if_conditional595=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional595) {
                                        # 0 "sEqNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sEqNode_finalize"
                                    # 1 "sEqNode_finalize"
                                    if(_if_conditional596=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional596) {
                                        # 1 "sEqNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sEqNode_finalize"
                                    # 2 "sEqNode_finalize"
                                    if(_if_conditional597=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional597) {
                                        # 2 "sEqNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional598;
struct sEqNode* __result317__;
void* right_value596;
struct sEqNode* result_343;
_Bool _if_conditional599;
_Bool _if_conditional600;
void* right_value597;
char* __dec_obj251;
_Bool _if_conditional601;
void* right_value598;
struct sNode* __dec_obj252;
_Bool _if_conditional602;
void* right_value599;
struct sNode* __dec_obj253;
_Bool _if_conditional603;
struct sEqNode* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value596 = (void*)0;
memset(&result_343, 0, sizeof(struct sEqNode*));
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
                                    # 3 "sEqNode_clone"
                                    # 2 "sEqNode_clone"
                                    if(_if_conditional598=self==(void*)0,                                    _if_conditional598) {
                                        # 2 "sEqNode_clone"
                                        __result317__ = __result_obj__ = (void*)0;
                                        return __result317__;
                                    }
                                    # 3 "sEqNode_clone"
                                    result_343=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value596=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"))));
                                    come_call_finalizer3(right_value596,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sEqNode_clone"
                                    # 4 "sEqNode_clone"
                                    if(_if_conditional599=self!=((void*)0),                                    _if_conditional599) {
                                        # 4 "sEqNode_clone"
                                        result_343->sline=self->sline;
                                    }
                                    # 6 "sEqNode_clone"
                                    # 5 "sEqNode_clone"
                                    if(_if_conditional600=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional600) {
                                        # 5 "sEqNode_clone"
                                        __dec_obj251=result_343->sname;
                                        result_343->sname=(char*)come_increment_ref_count(((char*)(right_value597=string_clone(self->sname))));
                                        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value597 = come_decrement_ref_count2(right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sEqNode_clone"
                                    # 6 "sEqNode_clone"
                                    if(_if_conditional601=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional601) {
                                        # 6 "sEqNode_clone"
                                        __dec_obj252=result_343->mLeft;
                                        result_343->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value598=sNode_clone(self->mLeft))));
                                        if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value598) { right_value598 = come_decrement_ref_count2(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sEqNode_clone"
                                    # 7 "sEqNode_clone"
                                    if(_if_conditional602=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional602) {
                                        # 7 "sEqNode_clone"
                                        __dec_obj253=result_343->mRight;
                                        result_343->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value599=sNode_clone(self->mRight))));
                                        if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 9 "sEqNode_clone"
                                    # 8 "sEqNode_clone"
                                    if(_if_conditional603=self!=((void*)0),                                    _if_conditional603) {
                                        # 8 "sEqNode_clone"
                                        result_343->mQuote=self->mQuote;
                                    }
                                    # 9 "sEqNode_clone"
                                    __result318__ = __result_obj__ = result_343;
                                    come_call_finalizer3(result_343,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result318__;
                                    come_call_finalizer3(result_343,sEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional605;
_Bool _if_conditional606;
_Bool _if_conditional607;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sNotEq2Node_finalize"
                                        # 0 "sNotEq2Node_finalize"
                                        if(_if_conditional605=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional605) {
                                            # 0 "sNotEq2Node_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sNotEq2Node_finalize"
                                        # 1 "sNotEq2Node_finalize"
                                        if(_if_conditional606=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional606) {
                                            # 1 "sNotEq2Node_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sNotEq2Node_finalize"
                                        # 2 "sNotEq2Node_finalize"
                                        if(_if_conditional607=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional607) {
                                            # 2 "sNotEq2Node_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional608;
struct sNotEq2Node* __result320__;
void* right_value604;
struct sNotEq2Node* result_345;
_Bool _if_conditional609;
_Bool _if_conditional610;
void* right_value605;
char* __dec_obj254;
_Bool _if_conditional611;
void* right_value606;
struct sNode* __dec_obj255;
_Bool _if_conditional612;
void* right_value607;
struct sNode* __dec_obj256;
_Bool _if_conditional613;
struct sNotEq2Node* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
right_value604 = (void*)0;
memset(&result_345, 0, sizeof(struct sNotEq2Node*));
right_value605 = (void*)0;
right_value606 = (void*)0;
right_value607 = (void*)0;
                                        # 3 "sNotEq2Node_clone"
                                        # 2 "sNotEq2Node_clone"
                                        if(_if_conditional608=self==(void*)0,                                        _if_conditional608) {
                                            # 2 "sNotEq2Node_clone"
                                            __result320__ = __result_obj__ = (void*)0;
                                            return __result320__;
                                        }
                                        # 3 "sNotEq2Node_clone"
                                        result_345=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value604=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"))));
                                        come_call_finalizer3(right_value604,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sNotEq2Node_clone"
                                        # 4 "sNotEq2Node_clone"
                                        if(_if_conditional609=self!=((void*)0),                                        _if_conditional609) {
                                            # 4 "sNotEq2Node_clone"
                                            result_345->sline=self->sline;
                                        }
                                        # 6 "sNotEq2Node_clone"
                                        # 5 "sNotEq2Node_clone"
                                        if(_if_conditional610=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional610) {
                                            # 5 "sNotEq2Node_clone"
                                            __dec_obj254=result_345->sname;
                                            result_345->sname=(char*)come_increment_ref_count(((char*)(right_value605=string_clone(self->sname))));
                                            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value605 = come_decrement_ref_count2(right_value605, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sNotEq2Node_clone"
                                        # 6 "sNotEq2Node_clone"
                                        if(_if_conditional611=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional611) {
                                            # 6 "sNotEq2Node_clone"
                                            __dec_obj255=result_345->mLeft;
                                            result_345->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value606=sNode_clone(self->mLeft))));
                                            if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 8 "sNotEq2Node_clone"
                                        # 7 "sNotEq2Node_clone"
                                        if(_if_conditional612=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional612) {
                                            # 7 "sNotEq2Node_clone"
                                            __dec_obj256=result_345->mRight;
                                            result_345->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value607=sNode_clone(self->mRight))));
                                            if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value607) { right_value607 = come_decrement_ref_count2(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 9 "sNotEq2Node_clone"
                                        # 8 "sNotEq2Node_clone"
                                        if(_if_conditional613=self!=((void*)0),                                        _if_conditional613) {
                                            # 8 "sNotEq2Node_clone"
                                            result_345->mQuote=self->mQuote;
                                        }
                                        # 9 "sNotEq2Node_clone"
                                        __result321__ = __result_obj__ = result_345;
                                        come_call_finalizer3(result_345,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result321__;
                                        come_call_finalizer3(result_345,sNotEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional615;
_Bool _if_conditional616;
_Bool _if_conditional617;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sNotEqNode_finalize"
                                            # 0 "sNotEqNode_finalize"
                                            if(_if_conditional615=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional615) {
                                                # 0 "sNotEqNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sNotEqNode_finalize"
                                            # 1 "sNotEqNode_finalize"
                                            if(_if_conditional616=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional616) {
                                                # 1 "sNotEqNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sNotEqNode_finalize"
                                            # 2 "sNotEqNode_finalize"
                                            if(_if_conditional617=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional617) {
                                                # 2 "sNotEqNode_finalize"
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional618;
struct sNotEqNode* __result323__;
void* right_value612;
struct sNotEqNode* result_347;
_Bool _if_conditional619;
_Bool _if_conditional620;
void* right_value613;
char* __dec_obj257;
_Bool _if_conditional621;
void* right_value614;
struct sNode* __dec_obj258;
_Bool _if_conditional622;
void* right_value615;
struct sNode* __dec_obj259;
_Bool _if_conditional623;
struct sNotEqNode* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
right_value612 = (void*)0;
memset(&result_347, 0, sizeof(struct sNotEqNode*));
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
                                            # 3 "sNotEqNode_clone"
                                            # 2 "sNotEqNode_clone"
                                            if(_if_conditional618=self==(void*)0,                                            _if_conditional618) {
                                                # 2 "sNotEqNode_clone"
                                                __result323__ = __result_obj__ = (void*)0;
                                                return __result323__;
                                            }
                                            # 3 "sNotEqNode_clone"
                                            result_347=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value612=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"))));
                                            come_call_finalizer3(right_value612,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sNotEqNode_clone"
                                            # 4 "sNotEqNode_clone"
                                            if(_if_conditional619=self!=((void*)0),                                            _if_conditional619) {
                                                # 4 "sNotEqNode_clone"
                                                result_347->sline=self->sline;
                                            }
                                            # 6 "sNotEqNode_clone"
                                            # 5 "sNotEqNode_clone"
                                            if(_if_conditional620=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional620) {
                                                # 5 "sNotEqNode_clone"
                                                __dec_obj257=result_347->sname;
                                                result_347->sname=(char*)come_increment_ref_count(((char*)(right_value613=string_clone(self->sname))));
                                                __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sNotEqNode_clone"
                                            # 6 "sNotEqNode_clone"
                                            if(_if_conditional621=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional621) {
                                                # 6 "sNotEqNode_clone"
                                                __dec_obj258=result_347->mLeft;
                                                result_347->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value614=sNode_clone(self->mLeft))));
                                                if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value614) { right_value614 = come_decrement_ref_count2(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 8 "sNotEqNode_clone"
                                            # 7 "sNotEqNode_clone"
                                            if(_if_conditional622=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional622) {
                                                # 7 "sNotEqNode_clone"
                                                __dec_obj259=result_347->mRight;
                                                result_347->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=sNode_clone(self->mRight))));
                                                if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 9 "sNotEqNode_clone"
                                            # 8 "sNotEqNode_clone"
                                            if(_if_conditional623=self!=((void*)0),                                            _if_conditional623) {
                                                # 8 "sNotEqNode_clone"
                                                result_347->mQuote=self->mQuote;
                                            }
                                            # 9 "sNotEqNode_clone"
                                            __result324__ = __result_obj__ = result_347;
                                            come_call_finalizer3(result_347,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result324__;
                                            come_call_finalizer3(result_347,sNotEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value617;
struct sNode* node_348;
_Bool _while_condtional24;
_Bool _if_conditional624;
void* right_value618;
struct sNode* right_349;
void* right_value619;
void* right_value620;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value625;
struct sNode* __result329__;
_Bool _if_conditional634;
void* right_value626;
struct sNode* right_351;
void* right_value627;
void* right_value628;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value633;
struct sNode* __result332__;
struct sNode* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
right_value617 = (void*)0;
memset(&node_348, 0, sizeof(struct sNode*));
right_value618 = (void*)0;
memset(&right_349, 0, sizeof(struct sNode*));
right_value619 = (void*)0;
right_value620 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
memset(&right_351, 0, sizeof(struct sNode*));
right_value627 = (void*)0;
right_value628 = (void*)0;
right_value633 = (void*)0;
    # 2150 "13op.c"
    parse_sharp_v5(info);
    # 2152 "13op.c"
    node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=eq_exp(info))));
    if(right_value617) { right_value617 = come_decrement_ref_count2(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2154 "13op.c"
    parse_sharp_v5(info);
    # 2178 "13op.c"
    while(_while_condtional24=*info->p,    _while_condtional24) {
        # 2176 "13op.c"
        # 2157 "13op.c"
        if(_if_conditional624=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional624) {
            # 2158 "13op.c"
            info->p++;
            # 2159 "13op.c"
            skip_spaces_and_lf(info);
            # 2161 "13op.c"
            right_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value618=and_exp(info))));
            if(right_value618) { right_value618 = come_decrement_ref_count2(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2163 "13op.c"
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2163, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value620=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value619=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2163, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_348),(struct sNode*)come_increment_ref_count(right_349),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result329__ = __result_obj__ = ((struct sNode*)(right_value625=_inf_value33));
            if(right_349) { right_349 = come_decrement_ref_count2(right_349, ((struct sNode*)right_349)->finalize, ((struct sNode*)right_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value619,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value620,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result329__;
            if(right_349) { right_349 = come_decrement_ref_count2(right_349, ((struct sNode*)right_349)->finalize, ((struct sNode*)right_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2176 "13op.c"
            # 2165 "13op.c"
            if(_if_conditional634=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional634) {
                # 2166 "13op.c"
                info->p+=2;
                # 2167 "13op.c"
                skip_spaces_and_lf(info);
                # 2169 "13op.c"
                right_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=and_exp(info))));
                if(right_value626) { right_value626 = come_decrement_ref_count2(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2171 "13op.c"
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2171, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value628=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value627=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2171, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_348),(struct sNode*)come_increment_ref_count(right_351),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sNodeBase_sline;
                _inf_value34->sname=(void*)sNodeBase_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result332__ = __result_obj__ = ((struct sNode*)(right_value633=_inf_value34));
                if(right_351) { right_351 = come_decrement_ref_count2(right_351, ((struct sNode*)right_351)->finalize, ((struct sNode*)right_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value627,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value628,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value633) { right_value633 = come_decrement_ref_count2(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result332__;
                if(right_351) { right_351 = come_decrement_ref_count2(right_351, ((struct sNode*)right_351)->finalize, ((struct sNode*)right_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2174 "13op.c"
                break;
            }
        }
    }
    # 2178 "13op.c"
    parse_sharp_v5(info);
    # 2180 "13op.c"
    __result333__ = __result_obj__ = node_348;
    if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result333__;
    if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional635;
_Bool _if_conditional636;
_Bool _if_conditional637;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sAndNode_finalize"
                    # 0 "sAndNode_finalize"
                    if(_if_conditional635=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional635) {
                        # 0 "sAndNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sAndNode_finalize"
                    # 1 "sAndNode_finalize"
                    if(_if_conditional636=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional636) {
                        # 1 "sAndNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sAndNode_finalize"
                    # 2 "sAndNode_finalize"
                    if(_if_conditional637=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional637) {
                        # 2 "sAndNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional638;
struct sAndNode* __result330__;
void* right_value629;
struct sAndNode* result_352;
_Bool _if_conditional639;
_Bool _if_conditional640;
void* right_value630;
char* __dec_obj263;
_Bool _if_conditional641;
void* right_value631;
struct sNode* __dec_obj264;
_Bool _if_conditional642;
void* right_value632;
struct sNode* __dec_obj265;
_Bool _if_conditional643;
struct sAndNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
right_value629 = (void*)0;
memset(&result_352, 0, sizeof(struct sAndNode*));
right_value630 = (void*)0;
right_value631 = (void*)0;
right_value632 = (void*)0;
                    # 3 "sAndNode_clone"
                    # 2 "sAndNode_clone"
                    if(_if_conditional638=self==(void*)0,                    _if_conditional638) {
                        # 2 "sAndNode_clone"
                        __result330__ = __result_obj__ = (void*)0;
                        return __result330__;
                    }
                    # 3 "sAndNode_clone"
                    result_352=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value629=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"))));
                    come_call_finalizer3(right_value629,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sAndNode_clone"
                    # 4 "sAndNode_clone"
                    if(_if_conditional639=self!=((void*)0),                    _if_conditional639) {
                        # 4 "sAndNode_clone"
                        result_352->sline=self->sline;
                    }
                    # 6 "sAndNode_clone"
                    # 5 "sAndNode_clone"
                    if(_if_conditional640=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional640) {
                        # 5 "sAndNode_clone"
                        __dec_obj263=result_352->sname;
                        result_352->sname=(char*)come_increment_ref_count(((char*)(right_value630=string_clone(self->sname))));
                        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sAndNode_clone"
                    # 6 "sAndNode_clone"
                    if(_if_conditional641=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional641) {
                        # 6 "sAndNode_clone"
                        __dec_obj264=result_352->mLeft;
                        result_352->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value631=sNode_clone(self->mLeft))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value631) { right_value631 = come_decrement_ref_count2(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 8 "sAndNode_clone"
                    # 7 "sAndNode_clone"
                    if(_if_conditional642=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional642) {
                        # 7 "sAndNode_clone"
                        __dec_obj265=result_352->mRight;
                        result_352->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value632=sNode_clone(self->mRight))));
                        if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value632) { right_value632 = come_decrement_ref_count2(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 9 "sAndNode_clone"
                    # 8 "sAndNode_clone"
                    if(_if_conditional643=self!=((void*)0),                    _if_conditional643) {
                        # 8 "sAndNode_clone"
                        result_352->mQuote=self->mQuote;
                    }
                    # 9 "sAndNode_clone"
                    __result331__ = __result_obj__ = result_352;
                    come_call_finalizer3(result_352,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result331__;
                    come_call_finalizer3(result_352,sAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value634;
struct sNode* node_353;
_Bool _while_condtional25;
_Bool _if_conditional644;
void* right_value635;
struct sNode* right_354;
void* right_value636;
void* right_value637;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value642;
struct sNode* __result336__;
_Bool _if_conditional654;
void* right_value643;
struct sNode* right_356;
void* right_value644;
void* right_value645;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value650;
struct sNode* __result339__;
struct sNode* __result340__;
memset(&__result_obj__, 0, sizeof(void*));
right_value634 = (void*)0;
memset(&node_353, 0, sizeof(struct sNode*));
right_value635 = (void*)0;
memset(&right_354, 0, sizeof(struct sNode*));
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value642 = (void*)0;
right_value643 = (void*)0;
memset(&right_356, 0, sizeof(struct sNode*));
right_value644 = (void*)0;
right_value645 = (void*)0;
right_value650 = (void*)0;
    # 2185 "13op.c"
    parse_sharp_v5(info);
    # 2187 "13op.c"
    node_353=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value634=and_exp(info))));
    if(right_value634) { right_value634 = come_decrement_ref_count2(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2189 "13op.c"
    parse_sharp_v5(info);
    # 2213 "13op.c"
    while(_while_condtional25=*info->p,    _while_condtional25) {
        # 2211 "13op.c"
        # 2192 "13op.c"
        if(_if_conditional644=*info->p==94&&*(info->p+1)!=61,        _if_conditional644) {
            # 2193 "13op.c"
            info->p++;
            # 2194 "13op.c"
            skip_spaces_and_lf(info);
            # 2196 "13op.c"
            right_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=xor_exp(info))));
            if(right_value635) { right_value635 = come_decrement_ref_count2(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2198 "13op.c"
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2198, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value637=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value636=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2198, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_353),(struct sNode*)come_increment_ref_count(right_354),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result336__ = __result_obj__ = ((struct sNode*)(right_value642=_inf_value35));
            if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value636,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value637,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result336__;
            if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2211 "13op.c"
            # 2200 "13op.c"
            if(_if_conditional654=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional654) {
                # 2201 "13op.c"
                info->p+=2;
                # 2202 "13op.c"
                skip_spaces_and_lf(info);
                # 2204 "13op.c"
                right_356=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value643=xor_exp(info))));
                if(right_value643) { right_value643 = come_decrement_ref_count2(right_value643, ((struct sNode*)right_value643)->finalize, ((struct sNode*)right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2206 "13op.c"
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2206, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value645=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value644=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2206, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_353),(struct sNode*)come_increment_ref_count(right_356),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sNodeBase_sline;
                _inf_value36->sname=(void*)sNodeBase_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result339__ = __result_obj__ = ((struct sNode*)(right_value650=_inf_value36));
                if(right_356) { right_356 = come_decrement_ref_count2(right_356, ((struct sNode*)right_356)->finalize, ((struct sNode*)right_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value644,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value645,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value650) { right_value650 = come_decrement_ref_count2(right_value650, ((struct sNode*)right_value650)->finalize, ((struct sNode*)right_value650)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result339__;
                if(right_356) { right_356 = come_decrement_ref_count2(right_356, ((struct sNode*)right_356)->finalize, ((struct sNode*)right_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2209 "13op.c"
                break;
            }
        }
    }
    # 2213 "13op.c"
    parse_sharp_v5(info);
    # 2215 "13op.c"
    __result340__ = __result_obj__ = node_353;
    if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result340__;
    if(node_353) { node_353 = come_decrement_ref_count2(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional655;
_Bool _if_conditional656;
_Bool _if_conditional657;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sXOrNode_finalize"
                    # 0 "sXOrNode_finalize"
                    if(_if_conditional655=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional655) {
                        # 0 "sXOrNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sXOrNode_finalize"
                    # 1 "sXOrNode_finalize"
                    if(_if_conditional656=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional656) {
                        # 1 "sXOrNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sXOrNode_finalize"
                    # 2 "sXOrNode_finalize"
                    if(_if_conditional657=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional657) {
                        # 2 "sXOrNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional658;
struct sXOrNode* __result337__;
void* right_value646;
struct sXOrNode* result_357;
_Bool _if_conditional659;
_Bool _if_conditional660;
void* right_value647;
char* __dec_obj269;
_Bool _if_conditional661;
void* right_value648;
struct sNode* __dec_obj270;
_Bool _if_conditional662;
void* right_value649;
struct sNode* __dec_obj271;
_Bool _if_conditional663;
struct sXOrNode* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value646 = (void*)0;
memset(&result_357, 0, sizeof(struct sXOrNode*));
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value649 = (void*)0;
                    # 3 "sXOrNode_clone"
                    # 2 "sXOrNode_clone"
                    if(_if_conditional658=self==(void*)0,                    _if_conditional658) {
                        # 2 "sXOrNode_clone"
                        __result337__ = __result_obj__ = (void*)0;
                        return __result337__;
                    }
                    # 3 "sXOrNode_clone"
                    result_357=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value646=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"))));
                    come_call_finalizer3(right_value646,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sXOrNode_clone"
                    # 4 "sXOrNode_clone"
                    if(_if_conditional659=self!=((void*)0),                    _if_conditional659) {
                        # 4 "sXOrNode_clone"
                        result_357->sline=self->sline;
                    }
                    # 6 "sXOrNode_clone"
                    # 5 "sXOrNode_clone"
                    if(_if_conditional660=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional660) {
                        # 5 "sXOrNode_clone"
                        __dec_obj269=result_357->sname;
                        result_357->sname=(char*)come_increment_ref_count(((char*)(right_value647=string_clone(self->sname))));
                        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sXOrNode_clone"
                    # 6 "sXOrNode_clone"
                    if(_if_conditional661=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional661) {
                        # 6 "sXOrNode_clone"
                        __dec_obj270=result_357->mLeft;
                        result_357->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value648=sNode_clone(self->mLeft))));
                        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value648) { right_value648 = come_decrement_ref_count2(right_value648, ((struct sNode*)right_value648)->finalize, ((struct sNode*)right_value648)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 8 "sXOrNode_clone"
                    # 7 "sXOrNode_clone"
                    if(_if_conditional662=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional662) {
                        # 7 "sXOrNode_clone"
                        __dec_obj271=result_357->mRight;
                        result_357->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value649=sNode_clone(self->mRight))));
                        if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value649) { right_value649 = come_decrement_ref_count2(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 9 "sXOrNode_clone"
                    # 8 "sXOrNode_clone"
                    if(_if_conditional663=self!=((void*)0),                    _if_conditional663) {
                        # 8 "sXOrNode_clone"
                        result_357->mQuote=self->mQuote;
                    }
                    # 9 "sXOrNode_clone"
                    __result338__ = __result_obj__ = result_357;
                    come_call_finalizer3(result_357,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result338__;
                    come_call_finalizer3(result_357,sXOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value651;
struct sNode* node_358;
_Bool _while_condtional26;
_Bool _if_conditional664;
void* right_value652;
struct sNode* right_359;
void* right_value653;
void* right_value654;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value659;
struct sNode* __result343__;
_Bool _if_conditional674;
void* right_value660;
struct sNode* right_361;
void* right_value661;
void* right_value662;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value667;
struct sNode* __result346__;
struct sNode* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value651 = (void*)0;
memset(&node_358, 0, sizeof(struct sNode*));
right_value652 = (void*)0;
memset(&right_359, 0, sizeof(struct sNode*));
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value659 = (void*)0;
right_value660 = (void*)0;
memset(&right_361, 0, sizeof(struct sNode*));
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value667 = (void*)0;
    # 2220 "13op.c"
    parse_sharp_v5(info);
    # 2222 "13op.c"
    node_358=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value651=xor_exp(info))));
    if(right_value651) { right_value651 = come_decrement_ref_count2(right_value651, ((struct sNode*)right_value651)->finalize, ((struct sNode*)right_value651)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2224 "13op.c"
    parse_sharp_v5(info);
    # 2248 "13op.c"
    while(_while_condtional26=*info->p,    _while_condtional26) {
        # 2246 "13op.c"
        # 2227 "13op.c"
        if(_if_conditional664=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional664) {
            # 2228 "13op.c"
            info->p++;
            # 2229 "13op.c"
            skip_spaces_and_lf(info);
            # 2231 "13op.c"
            right_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value652=or_exp(info))));
            if(right_value652) { right_value652 = come_decrement_ref_count2(right_value652, ((struct sNode*)right_value652)->finalize, ((struct sNode*)right_value652)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2233 "13op.c"
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2233, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value654=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value653=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2233, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_359),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result343__ = __result_obj__ = ((struct sNode*)(right_value659=_inf_value37));
            if(right_359) { right_359 = come_decrement_ref_count2(right_359, ((struct sNode*)right_359)->finalize, ((struct sNode*)right_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value653,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value654,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result343__;
            if(right_359) { right_359 = come_decrement_ref_count2(right_359, ((struct sNode*)right_359)->finalize, ((struct sNode*)right_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2246 "13op.c"
            # 2235 "13op.c"
            if(_if_conditional674=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional674) {
                # 2236 "13op.c"
                info->p+=2;
                # 2237 "13op.c"
                skip_spaces_and_lf(info);
                # 2239 "13op.c"
                right_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=or_exp(info))));
                if(right_value660) { right_value660 = come_decrement_ref_count2(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2241 "13op.c"
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2241, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value662=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value661=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2241, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_358),(struct sNode*)come_increment_ref_count(right_361),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sNodeBase_sline;
                _inf_value38->sname=(void*)sNodeBase_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result346__ = __result_obj__ = ((struct sNode*)(right_value667=_inf_value38));
                if(right_361) { right_361 = come_decrement_ref_count2(right_361, ((struct sNode*)right_361)->finalize, ((struct sNode*)right_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value661,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value662,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value667) { right_value667 = come_decrement_ref_count2(right_value667, ((struct sNode*)right_value667)->finalize, ((struct sNode*)right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result346__;
                if(right_361) { right_361 = come_decrement_ref_count2(right_361, ((struct sNode*)right_361)->finalize, ((struct sNode*)right_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2244 "13op.c"
                break;
            }
        }
    }
    # 2248 "13op.c"
    parse_sharp_v5(info);
    # 2250 "13op.c"
    __result347__ = __result_obj__ = node_358;
    if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result347__;
    if(node_358) { node_358 = come_decrement_ref_count2(node_358, ((struct sNode*)node_358)->finalize, ((struct sNode*)node_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional675;
_Bool _if_conditional676;
_Bool _if_conditional677;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sOrNode_finalize"
                    # 0 "sOrNode_finalize"
                    if(_if_conditional675=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional675) {
                        # 0 "sOrNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sOrNode_finalize"
                    # 1 "sOrNode_finalize"
                    if(_if_conditional676=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional676) {
                        # 1 "sOrNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sOrNode_finalize"
                    # 2 "sOrNode_finalize"
                    if(_if_conditional677=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional677) {
                        # 2 "sOrNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional678;
struct sOrNode* __result344__;
void* right_value663;
struct sOrNode* result_362;
_Bool _if_conditional679;
_Bool _if_conditional680;
void* right_value664;
char* __dec_obj275;
_Bool _if_conditional681;
void* right_value665;
struct sNode* __dec_obj276;
_Bool _if_conditional682;
void* right_value666;
struct sNode* __dec_obj277;
_Bool _if_conditional683;
struct sOrNode* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value663 = (void*)0;
memset(&result_362, 0, sizeof(struct sOrNode*));
right_value664 = (void*)0;
right_value665 = (void*)0;
right_value666 = (void*)0;
                    # 3 "sOrNode_clone"
                    # 2 "sOrNode_clone"
                    if(_if_conditional678=self==(void*)0,                    _if_conditional678) {
                        # 2 "sOrNode_clone"
                        __result344__ = __result_obj__ = (void*)0;
                        return __result344__;
                    }
                    # 3 "sOrNode_clone"
                    result_362=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value663=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"))));
                    come_call_finalizer3(right_value663,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sOrNode_clone"
                    # 4 "sOrNode_clone"
                    if(_if_conditional679=self!=((void*)0),                    _if_conditional679) {
                        # 4 "sOrNode_clone"
                        result_362->sline=self->sline;
                    }
                    # 6 "sOrNode_clone"
                    # 5 "sOrNode_clone"
                    if(_if_conditional680=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional680) {
                        # 5 "sOrNode_clone"
                        __dec_obj275=result_362->sname;
                        result_362->sname=(char*)come_increment_ref_count(((char*)(right_value664=string_clone(self->sname))));
                        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value664 = come_decrement_ref_count2(right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sOrNode_clone"
                    # 6 "sOrNode_clone"
                    if(_if_conditional681=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional681) {
                        # 6 "sOrNode_clone"
                        __dec_obj276=result_362->mLeft;
                        result_362->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value665=sNode_clone(self->mLeft))));
                        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value665) { right_value665 = come_decrement_ref_count2(right_value665, ((struct sNode*)right_value665)->finalize, ((struct sNode*)right_value665)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 8 "sOrNode_clone"
                    # 7 "sOrNode_clone"
                    if(_if_conditional682=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional682) {
                        # 7 "sOrNode_clone"
                        __dec_obj277=result_362->mRight;
                        result_362->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value666=sNode_clone(self->mRight))));
                        if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value666) { right_value666 = come_decrement_ref_count2(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 9 "sOrNode_clone"
                    # 8 "sOrNode_clone"
                    if(_if_conditional683=self!=((void*)0),                    _if_conditional683) {
                        # 8 "sOrNode_clone"
                        result_362->mQuote=self->mQuote;
                    }
                    # 9 "sOrNode_clone"
                    __result345__ = __result_obj__ = result_362;
                    come_call_finalizer3(result_362,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result345__;
                    come_call_finalizer3(result_362,sOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value668;
struct sNode* node_363;
_Bool _while_condtional27;
_Bool _if_conditional684;
void* right_value669;
struct sNode* right_364;
void* right_value670;
void* right_value671;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value676;
struct sNode* __result350__;
_Bool _if_conditional694;
void* right_value677;
struct sNode* right_366;
void* right_value678;
void* right_value679;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value684;
struct sNode* __result353__;
struct sNode* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
right_value668 = (void*)0;
memset(&node_363, 0, sizeof(struct sNode*));
right_value669 = (void*)0;
memset(&right_364, 0, sizeof(struct sNode*));
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value676 = (void*)0;
right_value677 = (void*)0;
memset(&right_366, 0, sizeof(struct sNode*));
right_value678 = (void*)0;
right_value679 = (void*)0;
right_value684 = (void*)0;
    # 2255 "13op.c"
    parse_sharp_v5(info);
    # 2257 "13op.c"
    node_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value668=or_exp(info))));
    if(right_value668) { right_value668 = come_decrement_ref_count2(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2259 "13op.c"
    parse_sharp_v5(info);
    # 2283 "13op.c"
    while(_while_condtional27=*info->p,    _while_condtional27) {
        # 2281 "13op.c"
        # 2262 "13op.c"
        if(_if_conditional684=*info->p==38&&*(info->p+1)==38,        _if_conditional684) {
            # 2263 "13op.c"
            info->p+=2;
            # 2264 "13op.c"
            skip_spaces_and_lf(info);
            # 2266 "13op.c"
            right_364=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value669=andand_exp(info))));
            if(right_value669) { right_value669 = come_decrement_ref_count2(right_value669, ((struct sNode*)right_value669)->finalize, ((struct sNode*)right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2268 "13op.c"
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2268, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value671=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value670=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2268, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_363),(struct sNode*)come_increment_ref_count(right_364),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result350__ = __result_obj__ = ((struct sNode*)(right_value676=_inf_value39));
            if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_363) { node_363 = come_decrement_ref_count2(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value670,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value671,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value676) { right_value676 = come_decrement_ref_count2(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result350__;
            if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2281 "13op.c"
            # 2270 "13op.c"
            if(_if_conditional694=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional694) {
                # 2271 "13op.c"
                info->p+=3;
                # 2272 "13op.c"
                skip_spaces_and_lf(info);
                # 2274 "13op.c"
                right_366=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value677=andand_exp(info))));
                if(right_value677) { right_value677 = come_decrement_ref_count2(right_value677, ((struct sNode*)right_value677)->finalize, ((struct sNode*)right_value677)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2276 "13op.c"
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2276, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value679=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value678=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2276, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_363),(struct sNode*)come_increment_ref_count(right_366),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sNodeBase_sline;
                _inf_value40->sname=(void*)sNodeBase_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result353__ = __result_obj__ = ((struct sNode*)(right_value684=_inf_value40));
                if(right_366) { right_366 = come_decrement_ref_count2(right_366, ((struct sNode*)right_366)->finalize, ((struct sNode*)right_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_363) { node_363 = come_decrement_ref_count2(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value678,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value679,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value684) { right_value684 = come_decrement_ref_count2(right_value684, ((struct sNode*)right_value684)->finalize, ((struct sNode*)right_value684)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result353__;
                if(right_366) { right_366 = come_decrement_ref_count2(right_366, ((struct sNode*)right_366)->finalize, ((struct sNode*)right_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2279 "13op.c"
                break;
            }
        }
    }
    # 2283 "13op.c"
    parse_sharp_v5(info);
    # 2285 "13op.c"
    __result354__ = __result_obj__ = node_363;
    if(node_363) { node_363 = come_decrement_ref_count2(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result354__;
    if(node_363) { node_363 = come_decrement_ref_count2(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional695;
_Bool _if_conditional696;
_Bool _if_conditional697;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sAndAndNode_finalize"
                    # 0 "sAndAndNode_finalize"
                    if(_if_conditional695=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional695) {
                        # 0 "sAndAndNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sAndAndNode_finalize"
                    # 1 "sAndAndNode_finalize"
                    if(_if_conditional696=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional696) {
                        # 1 "sAndAndNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sAndAndNode_finalize"
                    # 2 "sAndAndNode_finalize"
                    if(_if_conditional697=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional697) {
                        # 2 "sAndAndNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional698;
struct sAndAndNode* __result351__;
void* right_value680;
struct sAndAndNode* result_367;
_Bool _if_conditional699;
_Bool _if_conditional700;
void* right_value681;
char* __dec_obj281;
_Bool _if_conditional701;
void* right_value682;
struct sNode* __dec_obj282;
_Bool _if_conditional702;
void* right_value683;
struct sNode* __dec_obj283;
_Bool _if_conditional703;
struct sAndAndNode* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value680 = (void*)0;
memset(&result_367, 0, sizeof(struct sAndAndNode*));
right_value681 = (void*)0;
right_value682 = (void*)0;
right_value683 = (void*)0;
                    # 3 "sAndAndNode_clone"
                    # 2 "sAndAndNode_clone"
                    if(_if_conditional698=self==(void*)0,                    _if_conditional698) {
                        # 2 "sAndAndNode_clone"
                        __result351__ = __result_obj__ = (void*)0;
                        return __result351__;
                    }
                    # 3 "sAndAndNode_clone"
                    result_367=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value680=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"))));
                    come_call_finalizer3(right_value680,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sAndAndNode_clone"
                    # 4 "sAndAndNode_clone"
                    if(_if_conditional699=self!=((void*)0),                    _if_conditional699) {
                        # 4 "sAndAndNode_clone"
                        result_367->sline=self->sline;
                    }
                    # 6 "sAndAndNode_clone"
                    # 5 "sAndAndNode_clone"
                    if(_if_conditional700=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional700) {
                        # 5 "sAndAndNode_clone"
                        __dec_obj281=result_367->sname;
                        result_367->sname=(char*)come_increment_ref_count(((char*)(right_value681=string_clone(self->sname))));
                        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sAndAndNode_clone"
                    # 6 "sAndAndNode_clone"
                    if(_if_conditional701=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional701) {
                        # 6 "sAndAndNode_clone"
                        __dec_obj282=result_367->mLeft;
                        result_367->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value682=sNode_clone(self->mLeft))));
                        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value682) { right_value682 = come_decrement_ref_count2(right_value682, ((struct sNode*)right_value682)->finalize, ((struct sNode*)right_value682)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 8 "sAndAndNode_clone"
                    # 7 "sAndAndNode_clone"
                    if(_if_conditional702=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional702) {
                        # 7 "sAndAndNode_clone"
                        __dec_obj283=result_367->mRight;
                        result_367->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=sNode_clone(self->mRight))));
                        if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value683) { right_value683 = come_decrement_ref_count2(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 9 "sAndAndNode_clone"
                    # 8 "sAndAndNode_clone"
                    if(_if_conditional703=self!=((void*)0),                    _if_conditional703) {
                        # 8 "sAndAndNode_clone"
                        result_367->mQuote=self->mQuote;
                    }
                    # 9 "sAndAndNode_clone"
                    __result352__ = __result_obj__ = result_367;
                    come_call_finalizer3(result_367,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result352__;
                    come_call_finalizer3(result_367,sAndAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value685;
struct sNode* node_368;
_Bool _while_condtional28;
_Bool _if_conditional704;
void* right_value686;
struct sNode* right_369;
void* right_value687;
void* right_value688;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value693;
struct sNode* __result357__;
_Bool _if_conditional714;
void* right_value694;
struct sNode* right_371;
void* right_value695;
void* right_value696;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value701;
struct sNode* __result360__;
struct sNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value685 = (void*)0;
memset(&node_368, 0, sizeof(struct sNode*));
right_value686 = (void*)0;
memset(&right_369, 0, sizeof(struct sNode*));
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value693 = (void*)0;
right_value694 = (void*)0;
memset(&right_371, 0, sizeof(struct sNode*));
right_value695 = (void*)0;
right_value696 = (void*)0;
right_value701 = (void*)0;
    # 2290 "13op.c"
    parse_sharp_v5(info);
    # 2292 "13op.c"
    node_368=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value685=andand_exp(info))));
    if(right_value685) { right_value685 = come_decrement_ref_count2(right_value685, ((struct sNode*)right_value685)->finalize, ((struct sNode*)right_value685)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2294 "13op.c"
    parse_sharp_v5(info);
    # 2318 "13op.c"
    while(_while_condtional28=*info->p,    _while_condtional28) {
        # 2316 "13op.c"
        # 2297 "13op.c"
        if(_if_conditional704=*info->p==124&&*(info->p+1)==124,        _if_conditional704) {
            # 2298 "13op.c"
            info->p+=2;
            # 2299 "13op.c"
            skip_spaces_and_lf(info);
            # 2301 "13op.c"
            right_369=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value686=oror_exp(info))));
            if(right_value686) { right_value686 = come_decrement_ref_count2(right_value686, ((struct sNode*)right_value686)->finalize, ((struct sNode*)right_value686)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2303 "13op.c"
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2303, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value688=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value687=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2303, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_368),(struct sNode*)come_increment_ref_count(right_369),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result357__ = __result_obj__ = ((struct sNode*)(right_value693=_inf_value41));
            if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_368) { node_368 = come_decrement_ref_count2(node_368, ((struct sNode*)node_368)->finalize, ((struct sNode*)node_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value687,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value688,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result357__;
            if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2316 "13op.c"
            # 2305 "13op.c"
            if(_if_conditional714=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional714) {
                # 2306 "13op.c"
                info->p+=3;
                # 2307 "13op.c"
                skip_spaces_and_lf(info);
                # 2309 "13op.c"
                right_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value694=oror_exp(info))));
                if(right_value694) { right_value694 = come_decrement_ref_count2(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2311 "13op.c"
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2311, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value696=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value695=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2311, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_368),(struct sNode*)come_increment_ref_count(right_371),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sNodeBase_sline;
                _inf_value42->sname=(void*)sNodeBase_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result360__ = __result_obj__ = ((struct sNode*)(right_value701=_inf_value42));
                if(right_371) { right_371 = come_decrement_ref_count2(right_371, ((struct sNode*)right_371)->finalize, ((struct sNode*)right_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_368) { node_368 = come_decrement_ref_count2(node_368, ((struct sNode*)node_368)->finalize, ((struct sNode*)node_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value695,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value696,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value701) { right_value701 = come_decrement_ref_count2(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result360__;
                if(right_371) { right_371 = come_decrement_ref_count2(right_371, ((struct sNode*)right_371)->finalize, ((struct sNode*)right_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2314 "13op.c"
                break;
            }
        }
    }
    # 2318 "13op.c"
    parse_sharp_v5(info);
    # 2320 "13op.c"
    __result361__ = __result_obj__ = node_368;
    if(node_368) { node_368 = come_decrement_ref_count2(node_368, ((struct sNode*)node_368)->finalize, ((struct sNode*)node_368)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result361__;
    if(node_368) { node_368 = come_decrement_ref_count2(node_368, ((struct sNode*)node_368)->finalize, ((struct sNode*)node_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional715;
_Bool _if_conditional716;
_Bool _if_conditional717;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sOrOrNode_finalize"
                    # 0 "sOrOrNode_finalize"
                    if(_if_conditional715=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional715) {
                        # 0 "sOrOrNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sOrOrNode_finalize"
                    # 1 "sOrOrNode_finalize"
                    if(_if_conditional716=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional716) {
                        # 1 "sOrOrNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sOrOrNode_finalize"
                    # 2 "sOrOrNode_finalize"
                    if(_if_conditional717=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional717) {
                        # 2 "sOrOrNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional718;
struct sOrOrNode* __result358__;
void* right_value697;
struct sOrOrNode* result_372;
_Bool _if_conditional719;
_Bool _if_conditional720;
void* right_value698;
char* __dec_obj287;
_Bool _if_conditional721;
void* right_value699;
struct sNode* __dec_obj288;
_Bool _if_conditional722;
void* right_value700;
struct sNode* __dec_obj289;
_Bool _if_conditional723;
struct sOrOrNode* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value697 = (void*)0;
memset(&result_372, 0, sizeof(struct sOrOrNode*));
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value700 = (void*)0;
                    # 3 "sOrOrNode_clone"
                    # 2 "sOrOrNode_clone"
                    if(_if_conditional718=self==(void*)0,                    _if_conditional718) {
                        # 2 "sOrOrNode_clone"
                        __result358__ = __result_obj__ = (void*)0;
                        return __result358__;
                    }
                    # 3 "sOrOrNode_clone"
                    result_372=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value697=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"))));
                    come_call_finalizer3(right_value697,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sOrOrNode_clone"
                    # 4 "sOrOrNode_clone"
                    if(_if_conditional719=self!=((void*)0),                    _if_conditional719) {
                        # 4 "sOrOrNode_clone"
                        result_372->sline=self->sline;
                    }
                    # 6 "sOrOrNode_clone"
                    # 5 "sOrOrNode_clone"
                    if(_if_conditional720=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional720) {
                        # 5 "sOrOrNode_clone"
                        __dec_obj287=result_372->sname;
                        result_372->sname=(char*)come_increment_ref_count(((char*)(right_value698=string_clone(self->sname))));
                        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sOrOrNode_clone"
                    # 6 "sOrOrNode_clone"
                    if(_if_conditional721=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional721) {
                        # 6 "sOrOrNode_clone"
                        __dec_obj288=result_372->mLeft;
                        result_372->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value699=sNode_clone(self->mLeft))));
                        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value699) { right_value699 = come_decrement_ref_count2(right_value699, ((struct sNode*)right_value699)->finalize, ((struct sNode*)right_value699)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 8 "sOrOrNode_clone"
                    # 7 "sOrOrNode_clone"
                    if(_if_conditional722=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional722) {
                        # 7 "sOrOrNode_clone"
                        __dec_obj289=result_372->mRight;
                        result_372->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value700=sNode_clone(self->mRight))));
                        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value700) { right_value700 = come_decrement_ref_count2(right_value700, ((struct sNode*)right_value700)->finalize, ((struct sNode*)right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 9 "sOrOrNode_clone"
                    # 8 "sOrOrNode_clone"
                    if(_if_conditional723=self!=((void*)0),                    _if_conditional723) {
                        # 8 "sOrOrNode_clone"
                        result_372->mQuote=self->mQuote;
                    }
                    # 9 "sOrOrNode_clone"
                    __result359__ = __result_obj__ = result_372;
                    come_call_finalizer3(result_372,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result359__;
                    come_call_finalizer3(result_372,sOrOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value702;
struct sNode* node_373;
_Bool _while_condtional29;
_Bool _if_conditional724;
void* right_value703;
struct sNode* node2_374;
void* right_value704;
void* right_value705;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value710;
struct sNode* __result364__;
struct sNode* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value702 = (void*)0;
memset(&node_373, 0, sizeof(struct sNode*));
right_value703 = (void*)0;
memset(&node2_374, 0, sizeof(struct sNode*));
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value710 = (void*)0;
    # 2325 "13op.c"
    parse_sharp_v5(info);
    # 2327 "13op.c"
    node_373=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value702=oror_exp(info))));
    if(right_value702) { right_value702 = come_decrement_ref_count2(right_value702, ((struct sNode*)right_value702)->finalize, ((struct sNode*)right_value702)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2329 "13op.c"
    parse_sharp_v5(info);
    # 2345 "13op.c"
    while(_while_condtional29=*info->p,    _while_condtional29) {
        # 2343 "13op.c"
        # 2332 "13op.c"
        if(_if_conditional724=!info->no_comma&&*info->p==44,        _if_conditional724) {
            # 2333 "13op.c"
            info->p++;
            # 2334 "13op.c"
            skip_spaces_and_lf(info);
            # 2336 "13op.c"
            node2_374=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value703=oror_exp(info))));
            if(right_value703) { right_value703 = come_decrement_ref_count2(right_value703, ((struct sNode*)right_value703)->finalize, ((struct sNode*)right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2338 "13op.c"
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2338, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value705=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value704=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2338, "sCommaNode")))),(struct sNode*)come_increment_ref_count(node_373),(struct sNode*)come_increment_ref_count(node2_374),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result364__ = __result_obj__ = ((struct sNode*)(right_value710=_inf_value43));
            if(node2_374) { node2_374 = come_decrement_ref_count2(node2_374, ((struct sNode*)node2_374)->finalize, ((struct sNode*)node2_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_373) { node_373 = come_decrement_ref_count2(node_373, ((struct sNode*)node_373)->finalize, ((struct sNode*)node_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value704,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value705,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value710) { right_value710 = come_decrement_ref_count2(right_value710, ((struct sNode*)right_value710)->finalize, ((struct sNode*)right_value710)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result364__;
            if(node2_374) { node2_374 = come_decrement_ref_count2(node2_374, ((struct sNode*)node2_374)->finalize, ((struct sNode*)node2_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2341 "13op.c"
            break;
        }
    }
    # 2345 "13op.c"
    parse_sharp_v5(info);
    # 2347 "13op.c"
    __result365__ = __result_obj__ = node_373;
    if(node_373) { node_373 = come_decrement_ref_count2(node_373, ((struct sNode*)node_373)->finalize, ((struct sNode*)node_373)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result365__;
    if(node_373) { node_373 = come_decrement_ref_count2(node_373, ((struct sNode*)node_373)->finalize, ((struct sNode*)node_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional725;
_Bool _if_conditional726;
_Bool _if_conditional727;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sCommaNode_finalize"
                # 0 "sCommaNode_finalize"
                if(_if_conditional725=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional725) {
                    # 0 "sCommaNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sCommaNode_finalize"
                # 1 "sCommaNode_finalize"
                if(_if_conditional726=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional726) {
                    # 1 "sCommaNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sCommaNode_finalize"
                # 2 "sCommaNode_finalize"
                if(_if_conditional727=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional727) {
                    # 2 "sCommaNode_finalize"
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional728;
struct sCommaNode* __result362__;
void* right_value706;
struct sCommaNode* result_375;
_Bool _if_conditional729;
_Bool _if_conditional730;
void* right_value707;
char* __dec_obj290;
_Bool _if_conditional731;
void* right_value708;
struct sNode* __dec_obj291;
_Bool _if_conditional732;
void* right_value709;
struct sNode* __dec_obj292;
struct sCommaNode* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value706 = (void*)0;
memset(&result_375, 0, sizeof(struct sCommaNode*));
right_value707 = (void*)0;
right_value708 = (void*)0;
right_value709 = (void*)0;
                # 3 "sCommaNode_clone"
                # 2 "sCommaNode_clone"
                if(_if_conditional728=self==(void*)0,                _if_conditional728) {
                    # 2 "sCommaNode_clone"
                    __result362__ = __result_obj__ = (void*)0;
                    return __result362__;
                }
                # 3 "sCommaNode_clone"
                result_375=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value706=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"))));
                come_call_finalizer3(right_value706,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sCommaNode_clone"
                # 4 "sCommaNode_clone"
                if(_if_conditional729=self!=((void*)0),                _if_conditional729) {
                    # 4 "sCommaNode_clone"
                    result_375->sline=self->sline;
                }
                # 6 "sCommaNode_clone"
                # 5 "sCommaNode_clone"
                if(_if_conditional730=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional730) {
                    # 5 "sCommaNode_clone"
                    __dec_obj290=result_375->sname;
                    result_375->sname=(char*)come_increment_ref_count(((char*)(right_value707=string_clone(self->sname))));
                    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sCommaNode_clone"
                # 6 "sCommaNode_clone"
                if(_if_conditional731=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional731) {
                    # 6 "sCommaNode_clone"
                    __dec_obj291=result_375->mLeft;
                    result_375->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value708=sNode_clone(self->mLeft))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value708) { right_value708 = come_decrement_ref_count2(right_value708, ((struct sNode*)right_value708)->finalize, ((struct sNode*)right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sCommaNode_clone"
                # 7 "sCommaNode_clone"
                if(_if_conditional732=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional732) {
                    # 7 "sCommaNode_clone"
                    __dec_obj292=result_375->mRight;
                    result_375->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value709=sNode_clone(self->mRight))));
                    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value709) { right_value709 = come_decrement_ref_count2(right_value709, ((struct sNode*)right_value709)->finalize, ((struct sNode*)right_value709)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sCommaNode_clone"
                __result363__ = __result_obj__ = result_375;
                come_call_finalizer3(result_375,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result363__;
                come_call_finalizer3(result_375,sCommaNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value711;
struct sNode* node_376;
_Bool _while_condtional30;
_Bool _if_conditional733;
struct sNode* value1_377;
_Bool _if_conditional734;
void* right_value712;
void* right_value713;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value716;
struct sNode* __dec_obj294;
void* right_value717;
struct sNode* __dec_obj295;
void* right_value718;
struct sNode* value2_379;
void* right_value719;
void* right_value720;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value726;
struct sNode* __result370__;
struct sNode* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value711 = (void*)0;
memset(&node_376, 0, sizeof(struct sNode*));
memset(&value1_377, 0, sizeof(struct sNode*));
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value716 = (void*)0;
right_value717 = (void*)0;
right_value718 = (void*)0;
memset(&value2_379, 0, sizeof(struct sNode*));
right_value719 = (void*)0;
right_value720 = (void*)0;
right_value726 = (void*)0;
    # 2352 "13op.c"
    parse_sharp_v5(info);
    # 2354 "13op.c"
    node_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value711=comma_exp(info))));
    if(right_value711) { right_value711 = come_decrement_ref_count2(right_value711, ((struct sNode*)right_value711)->finalize, ((struct sNode*)right_value711)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2356 "13op.c"
    parse_sharp_v5(info);
    # 2388 "13op.c"
    while(_while_condtional30=*info->p,    _while_condtional30) {
        # 2386 "13op.c"
        # 2359 "13op.c"
        if(_if_conditional733=*info->p==63,        _if_conditional733) {
            # 2360 "13op.c"
            info->p++;
            # 2361 "13op.c"
            skip_spaces_and_lf(info);
            # 2363 "13op.c"
            parse_sharp_v5(info);
            # 2365 "13op.c"
            # 2373 "13op.c"
            # 2366 "13op.c"
            if(_if_conditional734=*info->p==58,            _if_conditional734) {
                # 2367 "13op.c"
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2367, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value713=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value712=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2367, "sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj294=value1_377;
                value1_377=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value716=_inf_value44)));
                if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer3(right_value712,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value713,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value716) { right_value716 = come_decrement_ref_count2(right_value716, ((struct sNode*)right_value716)->finalize, ((struct sNode*)right_value716)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                # 2370 "13op.c"
                __dec_obj295=value1_377;
                value1_377=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value717=comma_exp(info))));
                if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value717) { right_value717 = come_decrement_ref_count2(right_value717, ((struct sNode*)right_value717)->finalize, ((struct sNode*)right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 2373 "13op.c"
            parse_sharp_v5(info);
            # 2375 "13op.c"
            expected_next_character(58,info);
            # 2377 "13op.c"
            value2_379=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value718=comma_exp(info))));
            if(right_value718) { right_value718 = come_decrement_ref_count2(right_value718, ((struct sNode*)right_value718)->finalize, ((struct sNode*)right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2379 "13op.c"
            parse_sharp_v5(info);
            # 2381 "13op.c"
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2381, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value720=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value719=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2381, "sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_376),(struct sNode*)come_increment_ref_count(value1_377),(struct sNode*)come_increment_ref_count(value2_379),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result370__ = __result_obj__ = ((struct sNode*)(right_value726=_inf_value45));
            if(value1_377) { value1_377 = come_decrement_ref_count2(value1_377, ((struct sNode*)value1_377)->finalize, ((struct sNode*)value1_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_379) { value2_379 = come_decrement_ref_count2(value2_379, ((struct sNode*)value2_379)->finalize, ((struct sNode*)value2_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value719,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value720,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value726) { right_value726 = come_decrement_ref_count2(right_value726, ((struct sNode*)right_value726)->finalize, ((struct sNode*)right_value726)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result370__;
            if(value1_377) { value1_377 = come_decrement_ref_count2(value1_377, ((struct sNode*)value1_377)->finalize, ((struct sNode*)value1_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_379) { value2_379 = come_decrement_ref_count2(value2_379, ((struct sNode*)value2_379)->finalize, ((struct sNode*)value2_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2384 "13op.c"
            break;
        }
    }
    # 2388 "13op.c"
    parse_sharp_v5(info);
    # 2390 "13op.c"
    __result371__ = __result_obj__ = node_376;
    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result371__;
    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional739;
_Bool _if_conditional740;
_Bool _if_conditional741;
_Bool _if_conditional742;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sConditionalNode_finalize"
                # 0 "sConditionalNode_finalize"
                if(_if_conditional739=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional739) {
                    # 0 "sConditionalNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sConditionalNode_finalize"
                # 1 "sConditionalNode_finalize"
                if(_if_conditional740=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional740) {
                    # 1 "sConditionalNode_finalize"
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sConditionalNode_finalize"
                # 2 "sConditionalNode_finalize"
                if(_if_conditional741=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional741) {
                    # 2 "sConditionalNode_finalize"
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 4 "sConditionalNode_finalize"
                # 3 "sConditionalNode_finalize"
                if(_if_conditional742=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional742) {
                    # 3 "sConditionalNode_finalize"
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional743;
struct sConditionalNode* __result368__;
void* right_value721;
struct sConditionalNode* result_380;
_Bool _if_conditional744;
_Bool _if_conditional745;
void* right_value722;
char* __dec_obj296;
_Bool _if_conditional746;
void* right_value723;
struct sNode* __dec_obj297;
_Bool _if_conditional747;
void* right_value724;
struct sNode* __dec_obj298;
_Bool _if_conditional748;
void* right_value725;
struct sNode* __dec_obj299;
struct sConditionalNode* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value721 = (void*)0;
memset(&result_380, 0, sizeof(struct sConditionalNode*));
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value725 = (void*)0;
                # 3 "sConditionalNode_clone"
                # 2 "sConditionalNode_clone"
                if(_if_conditional743=self==(void*)0,                _if_conditional743) {
                    # 2 "sConditionalNode_clone"
                    __result368__ = __result_obj__ = (void*)0;
                    return __result368__;
                }
                # 3 "sConditionalNode_clone"
                result_380=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value721=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"))));
                come_call_finalizer3(right_value721,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sConditionalNode_clone"
                # 4 "sConditionalNode_clone"
                if(_if_conditional744=self!=((void*)0),                _if_conditional744) {
                    # 4 "sConditionalNode_clone"
                    result_380->sline=self->sline;
                }
                # 6 "sConditionalNode_clone"
                # 5 "sConditionalNode_clone"
                if(_if_conditional745=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional745) {
                    # 5 "sConditionalNode_clone"
                    __dec_obj296=result_380->sname;
                    result_380->sname=(char*)come_increment_ref_count(((char*)(right_value722=string_clone(self->sname))));
                    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sConditionalNode_clone"
                # 6 "sConditionalNode_clone"
                if(_if_conditional746=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional746) {
                    # 6 "sConditionalNode_clone"
                    __dec_obj297=result_380->mValue1;
                    result_380->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value723=sNode_clone(self->mValue1))));
                    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value723) { right_value723 = come_decrement_ref_count2(right_value723, ((struct sNode*)right_value723)->finalize, ((struct sNode*)right_value723)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sConditionalNode_clone"
                # 7 "sConditionalNode_clone"
                if(_if_conditional747=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional747) {
                    # 7 "sConditionalNode_clone"
                    __dec_obj298=result_380->mValue2;
                    result_380->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value724=sNode_clone(self->mValue2))));
                    if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value724) { right_value724 = come_decrement_ref_count2(right_value724, ((struct sNode*)right_value724)->finalize, ((struct sNode*)right_value724)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 9 "sConditionalNode_clone"
                # 8 "sConditionalNode_clone"
                if(_if_conditional748=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional748) {
                    # 8 "sConditionalNode_clone"
                    __dec_obj299=result_380->mValue3;
                    result_380->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value725=sNode_clone(self->mValue3))));
                    if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value725) { right_value725 = come_decrement_ref_count2(right_value725, ((struct sNode*)right_value725)->finalize, ((struct sNode*)right_value725)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 9 "sConditionalNode_clone"
                __result369__ = __result_obj__ = result_380;
                come_call_finalizer3(result_380,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result369__;
                come_call_finalizer3(result_380,sConditionalNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value727;
struct sNode* node_381;
struct sNode* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
right_value727 = (void*)0;
memset(&node_381, 0, sizeof(struct sNode*));
    # 2395 "13op.c"
    parse_sharp_v5(info);
    # 2397 "13op.c"
    node_381=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value727=conditional_exp(info))));
    if(right_value727) { right_value727 = come_decrement_ref_count2(right_value727, ((struct sNode*)right_value727)->finalize, ((struct sNode*)right_value727)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2399 "13op.c"
    __result372__ = __result_obj__ = node_381;
    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result372__;
    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional749;
void* right_value728;
void* right_value729;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value732;
struct sNode* __result375__;
_Bool _if_conditional754;
void* right_value733;
void* right_value734;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value737;
struct sNode* __result378__;
void* right_value738;
struct sNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
right_value728 = (void*)0;
right_value729 = (void*)0;
right_value732 = (void*)0;
right_value733 = (void*)0;
right_value734 = (void*)0;
right_value737 = (void*)0;
right_value738 = (void*)0;
    # 2411 "13op.c"
    # 2404 "13op.c"
    if(_if_conditional749=charp_operator_equals(buf,"null"),    _if_conditional749) {
        # 2405 "13op.c"
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2405, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value729=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value728=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2405, "sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result375__ = __result_obj__ = ((struct sNode*)(right_value732=_inf_value46));
        come_call_finalizer3(right_value728,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value729,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value732) { right_value732 = come_decrement_ref_count2(right_value732, ((struct sNode*)right_value732)->finalize, ((struct sNode*)right_value732)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result375__;
    }
    else {
        # 2411 "13op.c"
        # 2407 "13op.c"
        if(_if_conditional754=charp_operator_equals(buf,"nil"),        _if_conditional754) {
            # 2408 "13op.c"
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2408, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value734=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value733=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2408, "sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNodeBase_sline;
            _inf_value47->sname=(void*)sNodeBase_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result378__ = __result_obj__ = ((struct sNode*)(right_value737=_inf_value47));
            come_call_finalizer3(right_value733,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value734,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value737) { right_value737 = come_decrement_ref_count2(right_value737, ((struct sNode*)right_value737)->finalize, ((struct sNode*)right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result378__;
        }
    }
    # 2411 "13op.c"
    __result379__ = __result_obj__ = ((struct sNode*)(right_value738=string_node_v12(buf,head,head_sline,info)));
    if(right_value738) { right_value738 = come_decrement_ref_count2(right_value738, ((struct sNode*)right_value738)->finalize, ((struct sNode*)right_value738)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result379__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional750;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sNullNode_finalize"
            # 0 "sNullNode_finalize"
            if(_if_conditional750=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional750) {
                # 0 "sNullNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional751;
struct sNullNode* __result373__;
void* right_value730;
struct sNullNode* result_382;
_Bool _if_conditional752;
_Bool _if_conditional753;
void* right_value731;
char* __dec_obj300;
struct sNullNode* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value730 = (void*)0;
memset(&result_382, 0, sizeof(struct sNullNode*));
right_value731 = (void*)0;
            # 3 "sNullNode_clone"
            # 2 "sNullNode_clone"
            if(_if_conditional751=self==(void*)0,            _if_conditional751) {
                # 2 "sNullNode_clone"
                __result373__ = __result_obj__ = (void*)0;
                return __result373__;
            }
            # 3 "sNullNode_clone"
            result_382=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value730=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"))));
            come_call_finalizer3(right_value730,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sNullNode_clone"
            # 4 "sNullNode_clone"
            if(_if_conditional752=self!=((void*)0),            _if_conditional752) {
                # 4 "sNullNode_clone"
                result_382->sline=self->sline;
            }
            # 6 "sNullNode_clone"
            # 5 "sNullNode_clone"
            if(_if_conditional753=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional753) {
                # 5 "sNullNode_clone"
                __dec_obj300=result_382->sname;
                result_382->sname=(char*)come_increment_ref_count(((char*)(right_value731=string_clone(self->sname))));
                __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value731 = come_decrement_ref_count2(right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sNullNode_clone"
            __result374__ = __result_obj__ = result_382;
            come_call_finalizer3(result_382,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result374__;
            come_call_finalizer3(result_382,sNullNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional755;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sNilNode_finalize"
                # 0 "sNilNode_finalize"
                if(_if_conditional755=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional755) {
                    # 0 "sNilNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional756;
struct sNilNode* __result376__;
void* right_value735;
struct sNilNode* result_383;
_Bool _if_conditional757;
_Bool _if_conditional758;
void* right_value736;
char* __dec_obj301;
struct sNilNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
right_value735 = (void*)0;
memset(&result_383, 0, sizeof(struct sNilNode*));
right_value736 = (void*)0;
                # 3 "sNilNode_clone"
                # 2 "sNilNode_clone"
                if(_if_conditional756=self==(void*)0,                _if_conditional756) {
                    # 2 "sNilNode_clone"
                    __result376__ = __result_obj__ = (void*)0;
                    return __result376__;
                }
                # 3 "sNilNode_clone"
                result_383=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value735=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"))));
                come_call_finalizer3(right_value735,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sNilNode_clone"
                # 4 "sNilNode_clone"
                if(_if_conditional757=self!=((void*)0),                _if_conditional757) {
                    # 4 "sNilNode_clone"
                    result_383->sline=self->sline;
                }
                # 6 "sNilNode_clone"
                # 5 "sNilNode_clone"
                if(_if_conditional758=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional758) {
                    # 5 "sNilNode_clone"
                    __dec_obj301=result_383->sname;
                    result_383->sname=(char*)come_increment_ref_count(((char*)(right_value736=string_clone(self->sname))));
                    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value736 = come_decrement_ref_count2(right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sNilNode_clone"
                __result377__ = __result_obj__ = result_383;
                come_call_finalizer3(result_383,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result377__;
                come_call_finalizer3(result_383,sNilNode_finalize, 0, 0, 0, 0, (void*)0);
}

