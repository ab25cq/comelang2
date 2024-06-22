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
struct sRefferenceNode
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sDerefferenceNode
{
    int sline;
    char* sname;
    struct sNode* value;
    _Bool mQuote;
};
struct sLogicalDenial
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sReverseNode
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sMinusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sPlusPlusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sMinusMinusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sNormalBlock
{
    int sline;
    char* sname;
    struct sBlock* mBlock;
};
struct sComplement
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sParenNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
};
struct sCastNode
{
    int sline;
    char* sname;
    struct sType* mType;
    struct sNode* mLeft;
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

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

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

struct sNode* expression_node_v97(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* expression_node_v96(struct sInfo* info);

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

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);

_Bool sRefferenceNode_terminated(struct sRefferenceNode* self);

char* sRefferenceNode_kind(struct sRefferenceNode* self);

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);

_Bool sDerefferenceNode_terminated(struct sDerefferenceNode* self);

char* sDerefferenceNode_kind(struct sDerefferenceNode* self);

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);

_Bool sLogicalDenial_terminated(struct sLogicalDenial* self);

char* sLogicalDenial_kind(struct sLogicalDenial* self);

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

_Bool sReverseNode_terminated(struct sReverseNode* self);

char* sReverseNode_kind(struct sReverseNode* self);

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusNode2_terminated(struct sMinusNode2* self);

char* sMinusNode2_kind(struct sMinusNode2* self);

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sPlusPlusNode2_terminated(struct sPlusPlusNode2* self);

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusMinusNode2_terminated(struct sMinusMinusNode2* self);

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self);

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info);

_Bool sNormalBlock_terminated(struct sNormalBlock* self);

char* sNormalBlock_kind(struct sNormalBlock* self);

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);

static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);

_Bool sComplement_terminated(struct sComplement* self);

char* sComplement_kind(struct sComplement* self);

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);

_Bool sParenNode_terminated(struct sParenNode* self);

char* sParenNode_kind(struct sParenNode* self);

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);

_Bool sCastNode_terminated(struct sCastNode* self);

char* sCastNode_kind(struct sCastNode* self);

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

static void sNormalBlock_finalize(struct sNormalBlock* self);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sLogicalDenial_finalize(struct sLogicalDenial* self);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static void sMinusNode2_finalize(struct sMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static void sComplement_finalize(struct sComplement* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
static void sReverseNode_finalize(struct sReverseNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sCastNode_finalize(struct sCastNode* self);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
static void sParenNode_finalize(struct sParenNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
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










struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj12;
void* right_value79;
char* __dec_obj13;
struct sRefferenceNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 9 "05pre_op.c"
    __dec_obj12=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    # 10 "05pre_op.c"
    self->sline=info->sline;
    # 11 "05pre_op.c"
    __dec_obj13=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 14 "05pre_op.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result52__;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRefferenceNode_terminated(struct sRefferenceNode* self){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 16 "05pre_op.c"
    __result53__ = (_Bool)0;
    return __result53__;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 21 "05pre_op.c"
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sRefferenceNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_47;
_Bool _if_conditional21;
_Bool __result55__;
void* right_value81;
struct CVALUE* left_value_48;
void* right_value82;
struct CVALUE* come_value_55;
void* right_value83;
char* __dec_obj14;
void* right_value119;
struct sType* __dec_obj38;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_47, 0, sizeof(struct sNode*));
right_value81 = (void*)0;
memset(&left_value_48, 0, sizeof(struct CVALUE*));
right_value82 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value119 = (void*)0;
    # 26 "05pre_op.c"
    value_47=self->value;
    # 32 "05pre_op.c"
    # 28 "05pre_op.c"
    if(_if_conditional21=!node_compile(value_47,info),    _if_conditional21) {
        # 29 "05pre_op.c"
        __result55__ = (_Bool)0;
        return __result55__;
    }
    # 32 "05pre_op.c"
    left_value_48=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value81,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 33 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 35 "05pre_op.c"
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 35, "CVALUE"))));
    come_call_finalizer3(right_value82,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 37 "05pre_op.c"
    __dec_obj14=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("&%s",left_value_48->c_value))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 38 "05pre_op.c"
    __dec_obj38=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(left_value_48->type))));
    come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value119,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 39 "05pre_op.c"
    come_value_55->type->mPointerNum++;
    # 40 "05pre_op.c"
    come_value_55->var=((void*)0);
    # 42 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    # 44 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    # 46 "05pre_op.c"
    __result75__ = (_Bool)1;
    come_call_finalizer3(left_value_48,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(left_value_48,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional22=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional22) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional23=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional23) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
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
                if(_if_conditional24=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional24) {
                    # 0 "sType_finalize"
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional26=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional26) {
                    # 1 "sType_finalize"
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional28) {
                    # 2 "sType_finalize"
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sType_finalize"
                # 3 "sType_finalize"
                if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional29) {
                    # 3 "sType_finalize"
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sType_finalize"
                # 4 "sType_finalize"
                if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional30) {
                    # 4 "sType_finalize"
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional31=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional31) {
                    # 5 "sType_finalize"
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional33) {
                    # 6 "sType_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional34=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional34) {
                    # 7 "sType_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional36=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional36) {
                    # 8 "sType_finalize"
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sType_finalize"
                # 9 "sType_finalize"
                if(_if_conditional37=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional37) {
                    # 9 "sType_finalize"
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 11 "sType_finalize"
                # 10 "sType_finalize"
                if(_if_conditional38=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional38) {
                    # 10 "sType_finalize"
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 12 "sType_finalize"
                # 11 "sType_finalize"
                if(_if_conditional39=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional39) {
                    # 11 "sType_finalize"
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sType_finalize"
                # 12 "sType_finalize"
                if(_if_conditional40=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional40) {
                    # 12 "sType_finalize"
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_49;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sTypeph*));
                        # 114 "./neo-c.h"
                        it_49=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional7=it_49!=((void*)0),                        _while_condtional7) {
                            # 116 "./neo-c.h"
                            prev_it_50=it_49;
                            # 117 "./neo-c.h"
                            it_49=it_49->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional25) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypephp_finalize"
                        # 0 "tuple1$1sTypephp_finalize"
                        if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional27) {
                            # 0 "tuple1$1sTypephp_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_51;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sNodeph*));
                        # 114 "./neo-c.h"
                        it_51=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional8=it_51!=((void*)0),                        _while_condtional8) {
                            # 116 "./neo-c.h"
                            prev_it_52=it_51;
                            # 117 "./neo-c.h"
                            it_51=it_51->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sNodephp_finalize"
                                # 0 "list_item$1sNodephp_finalize"
                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional32) {
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                        # 114 "./neo-c.h"
                        it_53=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional9=it_53!=((void*)0),                        _while_condtional9) {
                            # 116 "./neo-c.h"
                            prev_it_54=it_53;
                            # 117 "./neo-c.h"
                            it_53=it_53->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional35=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional35) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sType* __result56__;
void* right_value84;
struct sType* result_56;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value91;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value94;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional51;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional52;
void* right_value96;
char* __dec_obj22;
_Bool _if_conditional53;
void* right_value97;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional54;
void* right_value105;
struct list$1sNodeph* __dec_obj27;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value106;
struct list$1sTypeph* __dec_obj28;
_Bool _if_conditional69;
void* right_value113;
struct list$1charph* __dec_obj32;
_Bool _if_conditional73;
void* right_value114;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value115;
struct sNode* __dec_obj34;
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
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value116;
struct sNode* __dec_obj35;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value117;
char* __dec_obj36;
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
void* right_value118;
char* __dec_obj37;
_Bool _if_conditional114;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&result_56, 0, sizeof(struct sType*));
right_value91 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional41=self==(void*)0,        _if_conditional41) {
            # 2 "sType_clone"
            __result56__ = __result_obj__ = (void*)0;
            return __result56__;
        }
        # 3 "sType_clone"
        result_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value84,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional42=self!=((void*)0),        _if_conditional42) {
            # 4 "sType_clone"
            result_56->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional43=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional43) {
            # 5 "sType_clone"
            __dec_obj18=result_56->mMultipleTypes;
            result_56->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj18,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional47) {
            # 6 "sType_clone"
            __dec_obj20=result_56->mNoSolvedGenericsType;
            result_56->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional51=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional51) {
            # 7 "sType_clone"
            __dec_obj21=result_56->mOriginalLoadVarType;
            result_56->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj21,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value95,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional52) {
            # 8 "sType_clone"
            __dec_obj22=result_56->mGenericsName;
            result_56->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mGenericsName))));
            __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional53=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional53) {
            # 9 "sType_clone"
            __dec_obj23=result_56->mGenericsTypes;
            result_56->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value97,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional54=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional54) {
            # 10 "sType_clone"
            __dec_obj27=result_56->mArrayNum;
            result_56->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value105=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value105,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 11 "sType_clone"
            result_56->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional68) {
            # 12 "sType_clone"
            __dec_obj28=result_56->mParamTypes;
            result_56->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value106=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value106,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional69=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional69) {
            # 13 "sType_clone"
            __dec_obj32=result_56->mParamNames;
            result_56->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value113=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value113,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional73=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional73) {
            # 14 "sType_clone"
            __dec_obj33=result_56->mResultType;
            result_56->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value114=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value114,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 15 "sType_clone"
            result_56->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional75=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional75) {
            # 16 "sType_clone"
            __dec_obj34=result_56->mAlignas;
            result_56->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(self->mAlignas))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 17 "sType_clone"
            result_56->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 18 "sType_clone"
            result_56->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 19 "sType_clone"
            result_56->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 20 "sType_clone"
            result_56->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 21 "sType_clone"
            result_56->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 22 "sType_clone"
            result_56->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 23 "sType_clone"
            result_56->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 24 "sType_clone"
            result_56->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 25 "sType_clone"
            result_56->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 26 "sType_clone"
            result_56->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 27 "sType_clone"
            result_56->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 28 "sType_clone"
            result_56->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 29 "sType_clone"
            result_56->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 30 "sType_clone"
            result_56->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 31 "sType_clone"
            result_56->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 32 "sType_clone"
            result_56->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 33 "sType_clone"
            result_56->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 34 "sType_clone"
            result_56->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 35 "sType_clone"
            result_56->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 36 "sType_clone"
            result_56->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 37 "sType_clone"
            result_56->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 38 "sType_clone"
            result_56->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 39 "sType_clone"
            result_56->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 40 "sType_clone"
            result_56->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional100=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional100) {
            # 41 "sType_clone"
            __dec_obj35=result_56->mSizeNum;
            result_56->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(self->mSizeNum))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 42 "sType_clone"
            result_56->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 43 "sType_clone"
            result_56->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional103=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional103) {
            # 44 "sType_clone"
            __dec_obj36=result_56->mOriginalTypeName;
            result_56->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mOriginalTypeName))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 45 "sType_clone"
            result_56->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 46 "sType_clone"
            result_56->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 47 "sType_clone"
            result_56->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 48 "sType_clone"
            result_56->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 49 "sType_clone"
            result_56->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 50 "sType_clone"
            result_56->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 51 "sType_clone"
            result_56->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 52 "sType_clone"
            result_56->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            # 53 "sType_clone"
            result_56->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional113=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional113) {
            # 54 "sType_clone"
            __dec_obj37=result_56->mAsmName;
            result_56->mAsmName=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->mAsmName))));
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            # 55 "sType_clone"
            result_56->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result73__ = __result_obj__ = result_56;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct list$1sTypeph* __result57__;
void* right_value85;
void* right_value86;
struct list$1sTypeph* result_57;
struct list_item$1sTypeph* it_58;
_Bool _while_condtional10;
void* right_value90;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
right_value90 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional44=self==((void*)0),                _if_conditional44) {
                    # 131 "./neo-c.h"
                    __result57__ = __result_obj__ = ((void*)0);
                    return __result57__;
                }
                # 133 "./neo-c.h"
                result_57=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value85=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value85,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_58=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional10=it_58!=((void*)0),                _while_condtional10) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(it_58->item)))));
                    come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_58=it_58->next;
                }
                # 142 "./neo-c.h"
                __result60__ = __result_obj__ = result_57;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result58__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result58__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional45;
void* right_value87;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj15;
_Bool _if_conditional46;
void* right_value88;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj16;
void* right_value89;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj17;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional45=self->len==0,                        _if_conditional45) {
                            # 147 "./neo-c.h"
                            litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_59->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_59->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj15=litem_59->item;
                            litem_59->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_59;
                            # 154 "./neo-c.h"
                            self->head=litem_59;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional46=self->len==1,                            _if_conditional46) {
                                # 157 "./neo-c.h"
                                litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_60->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_60->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj16=litem_60->item;
                                litem_60->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_60;
                                # 164 "./neo-c.h"
                                self->head->next=litem_60;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_61->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_61->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj17=litem_61->item;
                                litem_61->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_61;
                                # 174 "./neo-c.h"
                                self->tail=litem_61;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result59__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result59__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_62;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_63;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_63, 0, sizeof(struct list_item$1sTypeph*));
                # 114 "./neo-c.h"
                it_62=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional11=it_62!=((void*)0),                _while_condtional11) {
                    # 116 "./neo-c.h"
                    prev_it_63=it_62;
                    # 117 "./neo-c.h"
                    it_62=it_62->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_63,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
struct tuple1$1sTypeph* __result61__;
void* right_value92;
struct tuple1$1sTypeph* result_64;
_Bool _if_conditional50;
void* right_value93;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&result_64, 0, sizeof(struct tuple1$1sTypeph*));
right_value93 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional48=self==(void*)0,                _if_conditional48) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result61__ = __result_obj__ = (void*)0;
                    return __result61__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_64=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value92,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional50=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional50) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj19=result_64->v1;
                    result_64->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value93,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result62__ = __result_obj__ = result_64;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional49) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1sNodeph* __result63__;
void* right_value98;
void* right_value99;
struct list$1sNodeph* result_65;
struct list_item$1sNodeph* it_66;
_Bool _while_condtional12;
void* right_value104;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&result_65, 0, sizeof(struct list$1sNodeph*));
memset(&it_66, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional55=self==((void*)0),                _if_conditional55) {
                    # 131 "./neo-c.h"
                    __result63__ = __result_obj__ = ((void*)0);
                    return __result63__;
                }
                # 133 "./neo-c.h"
                result_65=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value99=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value98=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value98,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value99,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_66=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional12=it_66!=((void*)0),                _while_condtional12) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_65,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=sNode_clone(it_66->item)))));
                    if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_66=it_66->next;
                }
                # 142 "./neo-c.h"
                __result68__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result64__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result64__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value100;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj24;
_Bool _if_conditional57;
void* right_value101;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj25;
void* right_value102;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj26;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional56=self->len==0,                        _if_conditional56) {
                            # 147 "./neo-c.h"
                            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_67->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_67->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj24=litem_67->item;
                            litem_67->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "./neo-c.h"
                            self->tail=litem_67;
                            # 154 "./neo-c.h"
                            self->head=litem_67;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional57=self->len==1,                            _if_conditional57) {
                                # 157 "./neo-c.h"
                                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_68->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_68->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj25=litem_68->item;
                                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_68;
                                # 164 "./neo-c.h"
                                self->head->next=litem_68;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_69->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_69->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj26=litem_69->item;
                                litem_69->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail->next=litem_69;
                                # 174 "./neo-c.h"
                                self->tail=litem_69;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result65__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result65__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional58;
struct sNode* __result66__;
void* right_value103;
struct sNode* result_70;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
struct sNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&result_70, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional58=self==(void*)0,                        _if_conditional58) {
                            # 2 "sNode_clone"
                            __result66__ = __result_obj__ = (void*)0;
                            return __result66__;
                        }
                        # 3 "sNode_clone"
                        result_70=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional59) {
                            # 4 "sNode_clone"
                            result_70->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 5 "sNode_clone"
                            result_70->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 6 "sNode_clone"
                            result_70->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            # 7 "sNode_clone"
                            result_70->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            # 8 "sNode_clone"
                            result_70->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            # 9 "sNode_clone"
                            result_70->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            # 10 "sNode_clone"
                            result_70->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional66=self!=((void*)0),                        _if_conditional66) {
                            # 11 "sNode_clone"
                            result_70->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result67__ = __result_obj__ = result_70;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result67__;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_71;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sNodeph*));
                # 114 "./neo-c.h"
                it_71=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional13=it_71!=((void*)0),                _while_condtional13) {
                    # 116 "./neo-c.h"
                    prev_it_72=it_71;
                    # 117 "./neo-c.h"
                    it_71=it_71->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional70;
struct list$1charph* __result69__;
void* right_value107;
void* right_value108;
struct list$1charph* result_73;
struct list_item$1charph* it_74;
_Bool _while_condtional14;
void* right_value112;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1charph*));
memset(&it_74, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional70=self==((void*)0),                _if_conditional70) {
                    # 131 "./neo-c.h"
                    __result69__ = __result_obj__ = ((void*)0);
                    return __result69__;
                }
                # 133 "./neo-c.h"
                result_73=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value107,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_74=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional14=it_74!=((void*)0),                _while_condtional14) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_73,(char*)come_increment_ref_count(((char*)(right_value112=string_clone(it_74->item)))));
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_74=it_74->next;
                }
                # 142 "./neo-c.h"
                __result72__ = __result_obj__ = result_73;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result72__;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result70__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional71;
void* right_value109;
struct list_item$1charph* litem_75;
char* __dec_obj29;
_Bool _if_conditional72;
void* right_value110;
struct list_item$1charph* litem_76;
char* __dec_obj30;
void* right_value111;
struct list_item$1charph* litem_77;
char* __dec_obj31;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional71=self->len==0,                        _if_conditional71) {
                            # 147 "./neo-c.h"
                            litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_75->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_75->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj29=litem_75->item;
                            litem_75->item=(char*)come_increment_ref_count(item);
                            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_75;
                            # 154 "./neo-c.h"
                            self->head=litem_75;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional72=self->len==1,                            _if_conditional72) {
                                # 157 "./neo-c.h"
                                litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_76->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_76->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj30=litem_76->item;
                                litem_76->item=(char*)come_increment_ref_count(item);
                                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_76;
                                # 164 "./neo-c.h"
                                self->head->next=litem_76;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_77->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_77->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj31=litem_77->item;
                                litem_77->item=(char*)come_increment_ref_count(item);
                                __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_77;
                                # 174 "./neo-c.h"
                                self->tail=litem_77;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result71__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result71__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_78;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_79;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_78, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1charph*));
                # 114 "./neo-c.h"
                it_78=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional15=it_78!=((void*)0),                _while_condtional15) {
                    # 116 "./neo-c.h"
                    prev_it_79=it_78;
                    # 117 "./neo-c.h"
                    it_78=it_78->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional115;
void* right_value120;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj39;
_Bool _if_conditional117;
void* right_value121;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj40;
void* right_value122;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj41;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1CVALUEph*));
right_value121 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1CVALUEph*));
right_value122 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional115=self->len==0,        _if_conditional115) {
            # 217 "./neo-c.h"
            litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value120=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value120,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_80->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_80->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj39=litem_80->item;
            litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_80;
            # 224 "./neo-c.h"
            self->head=litem_80;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional117=self->len==1,            _if_conditional117) {
                # 227 "./neo-c.h"
                litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value121=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value121,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_81->prev=self->head;
                # 230 "./neo-c.h"
                litem_81->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj40=litem_81->item;
                litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_81;
                # 234 "./neo-c.h"
                self->head->next=litem_81;
            }
            else {
                # 237 "./neo-c.h"
                litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value122=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value122,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_82->prev=self->tail;
                # 240 "./neo-c.h"
                litem_82->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj41=litem_82->item;
                litem_82->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_82;
                # 244 "./neo-c.h"
                self->tail=litem_82;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result74__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional116=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional116) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj42;
void* right_value123;
char* __dec_obj43;
struct sDerefferenceNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    # 57 "05pre_op.c"
    __dec_obj42=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
    # 58 "05pre_op.c"
    self->sline=info->sline;
    # 59 "05pre_op.c"
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 60 "05pre_op.c"
    self->mQuote=quote;
    # 63 "05pre_op.c"
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result76__;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDerefferenceNode_terminated(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 65 "05pre_op.c"
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __result_obj__;
void* right_value124;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    # 70 "05pre_op.c"
    __result78__ = __result_obj__ = ((char*)(right_value124=__builtin_string("sDerefferenceNode")));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_83;
_Bool _if_conditional120;
_Bool __result79__;
void* right_value125;
struct CVALUE* left_value_84;
_Bool _if_conditional121;
void* right_value126;
_Bool _if_conditional122;
void* right_value127;
void* right_value128;
char* __dec_obj44;
char* p_85;
char* p2_86;
_Bool _while_condtional16;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value129;
void* right_value130;
struct buffer* buf_87;
void* right_value131;
void* right_value132;
struct buffer* buf2_88;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
char* __dec_obj45;
struct sType* type_89;
char* fun_name_90;
_Bool calling_fun_91;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value137;
struct CVALUE* come_value_92;
void* right_value138;
char* __dec_obj46;
void* right_value139;
struct sType* __dec_obj47;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_83, 0, sizeof(struct sNode*));
right_value125 = (void*)0;
memset(&left_value_84, 0, sizeof(struct CVALUE*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&p_85, 0, sizeof(char*));
memset(&p2_86, 0, sizeof(char*));
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&buf_87, 0, sizeof(struct buffer*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&buf2_88, 0, sizeof(struct buffer*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&type_89, 0, sizeof(struct sType*));
memset(&fun_name_90, 0, sizeof(char*));
memset(&calling_fun_91, 0, sizeof(_Bool));
right_value137 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value138 = (void*)0;
right_value139 = (void*)0;
    # 75 "05pre_op.c"
    value_83=self->value;
    # 81 "05pre_op.c"
    # 77 "05pre_op.c"
    if(_if_conditional120=!node_compile(value_83,info),    _if_conditional120) {
        # 78 "05pre_op.c"
        __result79__ = (_Bool)0;
        return __result79__;
    }
    # 81 "05pre_op.c"
    left_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value125,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 82 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 118 "05pre_op.c"
    # 84 "05pre_op.c"
    if(gComeDebug) {
        # 116 "05pre_op.c"
        # 85 "05pre_op.c"
        if(_if_conditional122=string_operator_not_equals(((char*)(right_value126=value_83->kind(value_83->_protocol_obj))),"sExpEqualNode"),        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional122) {
            # 86 "05pre_op.c"
            __dec_obj44=left_value_84->c_value;
            left_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value127=make_type_name_string(left_value_84->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_84->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 89 "05pre_op.c"
            p_85=left_value_84->c_value;
            # 90 "05pre_op.c"
            p2_86=((void*)0);
            # 101 "05pre_op.c"
            while(_while_condtional16=*p_85,            _while_condtional16) {
                # 99 "05pre_op.c"
                # 92 "05pre_op.c"
                if(_if_conditional123=*p_85==61,                _if_conditional123) {
                    # 93 "05pre_op.c"
                    p2_86=p_85;
                    # 94 "05pre_op.c"
                    break;
                }
                else {
                    # 97 "05pre_op.c"
                    p_85++;
                }
            }
            # 106 "05pre_op.c"
            # 101 "05pre_op.c"
            if(_if_conditional124=p2_86==((void*)0),            _if_conditional124) {
                # 102 "05pre_op.c"
                err_msg(info,"unexpected error in debugging to dereffrence and to assign");
                # 103 "05pre_op.c"
                exit(2);
            }
            # 106 "05pre_op.c"
            p_85=left_value_84->c_value;
            # 108 "05pre_op.c"
            buf_87=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value129=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 108, "buffer"))))))));
            come_call_finalizer3(right_value129,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value130,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 109 "05pre_op.c"
            buffer_append(buf_87,p_85,p2_86-p_85);
            # 111 "05pre_op.c"
            buf2_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value132=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 111, "buffer"))))))));
            come_call_finalizer3(right_value131,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value132,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 112 "05pre_op.c"
            buffer_append(buf2_88,p2_86,p_85+strlen(p_85)-p2_86);
            # 114 "05pre_op.c"
            __dec_obj45=left_value_84->c_value;
            left_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value136=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))%s",((char*)(right_value133=make_type_name_string(left_value_84->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),((char*)(right_value134=buffer_to_string(buf_87))),info->sname,info->sline,gComeDebugStackFrameID++,((char*)(right_value135=buffer_to_string(buf2_88)))))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(buf_87,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_88,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 118 "05pre_op.c"
    type_89=(struct sType*)come_increment_ref_count(left_value_84->type);
    # 120 "05pre_op.c"
    fun_name_90="operator_derefference";
    # 122 "05pre_op.c"
    # 130 "05pre_op.c"
    # 123 "05pre_op.c"
    if(self->mQuote) {
        # 124 "05pre_op.c"
        calling_fun_91=(_Bool)0;
    }
    else {
        # 127 "05pre_op.c"
        calling_fun_91=operator_overload_fun_self(type_89,fun_name_90,left_value_84,info);
    }
    # 143 "05pre_op.c"
    # 130 "05pre_op.c"
    if(_if_conditional126=!calling_fun_91,    _if_conditional126) {
        # 131 "05pre_op.c"
        come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 131, "CVALUE"))));
        come_call_finalizer3(right_value137,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 133 "05pre_op.c"
        __dec_obj46=come_value_92->c_value;
        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value138=xsprintf("*%s",left_value_84->c_value))));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 134 "05pre_op.c"
        __dec_obj47=come_value_92->type;
        come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(left_value_84->type))));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "05pre_op.c"
        come_value_92->type->mPointerNum--;
        # 136 "05pre_op.c"
        come_value_92->var=((void*)0);
        # 138 "05pre_op.c"
        add_come_last_code(info,"%s;\n",come_value_92->c_value);
        # 140 "05pre_op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
        come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 143 "05pre_op.c"
    __result80__ = (_Bool)1;
    come_call_finalizer3(left_value_84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_89,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(left_value_84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_89,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj48;
void* right_value140;
char* __dec_obj49;
struct sLogicalDenial* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
    # 153 "05pre_op.c"
    __dec_obj48=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    # 155 "05pre_op.c"
    self->sline=info->sline;
    # 156 "05pre_op.c"
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 159 "05pre_op.c"
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result81__;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLogicalDenial_terminated(struct sLogicalDenial* self){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    # 161 "05pre_op.c"
    __result82__ = (_Bool)0;
    return __result82__;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __result_obj__;
void* right_value141;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    # 166 "05pre_op.c"
    __result83__ = __result_obj__ = ((char*)(right_value141=__builtin_string("sLogicalDenial")));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional129;
_Bool __result84__;
void* right_value142;
struct CVALUE* come_value_93;
void* right_value143;
struct CVALUE* come_value2_94;
void* right_value144;
char* __dec_obj50;
void* right_value145;
struct sType* __dec_obj51;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&come_value_93, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
memset(&come_value2_94, 0, sizeof(struct CVALUE*));
right_value144 = (void*)0;
right_value145 = (void*)0;
    # 175 "05pre_op.c"
    # 171 "05pre_op.c"
    if(_if_conditional129=!node_compile(self->value,info),    _if_conditional129) {
        # 172 "05pre_op.c"
        __result84__ = (_Bool)0;
        return __result84__;
    }
    # 175 "05pre_op.c"
    come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value142,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 176 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 178 "05pre_op.c"
    come_value2_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 178, "CVALUE"))));
    come_call_finalizer3(right_value143,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 180 "05pre_op.c"
    __dec_obj50=come_value2_94->c_value;
    come_value2_94->c_value=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("!%s",come_value_93->c_value))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 181 "05pre_op.c"
    __dec_obj51=come_value2_94->type;
    come_value2_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(come_value_93->type))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 182 "05pre_op.c"
    come_value2_94->var=((void*)0);
    # 184 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_94));
    # 186 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_94->c_value);
    # 188 "05pre_op.c"
    __result85__ = (_Bool)1;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj52;
void* right_value146;
char* __dec_obj53;
struct sReverseNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    # 198 "05pre_op.c"
    __dec_obj52=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    # 199 "05pre_op.c"
    self->sline=info->sline;
    # 200 "05pre_op.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 203 "05pre_op.c"
    __result86__ = __result_obj__ = self;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result86__;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sReverseNode_terminated(struct sReverseNode* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    # 205 "05pre_op.c"
    __result87__ = (_Bool)0;
    return __result87__;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __result_obj__;
void* right_value147;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    # 210 "05pre_op.c"
    __result88__ = __result_obj__ = ((char*)(right_value147=__builtin_string("sReverseNode")));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_95;
_Bool _if_conditional132;
_Bool __result89__;
void* right_value148;
struct CVALUE* left_value_96;
void* right_value149;
struct CVALUE* come_value_97;
void* right_value150;
char* __dec_obj54;
void* right_value151;
struct sType* __dec_obj55;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_95, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&left_value_96, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
memset(&come_value_97, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    # 215 "05pre_op.c"
    value_95=self->value;
    # 221 "05pre_op.c"
    # 217 "05pre_op.c"
    if(_if_conditional132=!node_compile(value_95,info),    _if_conditional132) {
        # 218 "05pre_op.c"
        __result89__ = (_Bool)0;
        return __result89__;
    }
    # 221 "05pre_op.c"
    left_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 222 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 224 "05pre_op.c"
    come_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 224, "CVALUE"))));
    come_call_finalizer3(right_value149,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 226 "05pre_op.c"
    __dec_obj54=come_value_97->c_value;
    come_value_97->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("!%s",left_value_96->c_value))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 227 "05pre_op.c"
    __dec_obj55=come_value_97->type;
    come_value_97->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(left_value_96->type))));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 228 "05pre_op.c"
    come_value_97->type->mPointerNum--;
    # 229 "05pre_op.c"
    come_value_97->var=((void*)0);
    # 231 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_97->c_value);
    # 233 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_97));
    # 235 "05pre_op.c"
    __result90__ = (_Bool)1;
    come_call_finalizer3(left_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(left_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj56;
void* right_value152;
char* __dec_obj57;
struct sMinusNode2* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    # 245 "05pre_op.c"
    __dec_obj56=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    # 247 "05pre_op.c"
    self->sline=info->sline;
    # 248 "05pre_op.c"
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 251 "05pre_op.c"
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result91__;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusNode2_terminated(struct sMinusNode2* self){
void* __result_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    # 253 "05pre_op.c"
    __result92__ = (_Bool)0;
    return __result92__;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __result_obj__;
void* right_value153;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    # 258 "05pre_op.c"
    __result93__ = __result_obj__ = ((char*)(right_value153=__builtin_string("sMinusNode2")));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional135;
_Bool __result94__;
void* right_value154;
struct CVALUE* come_value_98;
void* right_value155;
struct CVALUE* come_value2_99;
void* right_value156;
char* __dec_obj58;
void* right_value157;
struct sType* __dec_obj59;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
memset(&come_value2_99, 0, sizeof(struct CVALUE*));
right_value156 = (void*)0;
right_value157 = (void*)0;
    # 267 "05pre_op.c"
    # 263 "05pre_op.c"
    if(_if_conditional135=!node_compile(self->value,info),    _if_conditional135) {
        # 264 "05pre_op.c"
        __result94__ = (_Bool)0;
        return __result94__;
    }
    # 267 "05pre_op.c"
    come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 268 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 270 "05pre_op.c"
    come_value2_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 270, "CVALUE"))));
    come_call_finalizer3(right_value155,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 272 "05pre_op.c"
    __dec_obj58=come_value2_99->c_value;
    come_value2_99->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("-%s",come_value_98->c_value))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 273 "05pre_op.c"
    __dec_obj59=come_value2_99->type;
    come_value2_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(come_value_98->type))));
    come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 274 "05pre_op.c"
    come_value2_99->var=((void*)0);
    # 276 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_99));
    # 278 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_99->c_value);
    # 280 "05pre_op.c"
    __result95__ = (_Bool)1;
    come_call_finalizer3(come_value_98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result95__;
    come_call_finalizer3(come_value_98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj60;
void* right_value158;
char* __dec_obj61;
struct sPlusPlusNode2* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    # 290 "05pre_op.c"
    __dec_obj60=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    # 292 "05pre_op.c"
    self->sline=info->sline;
    # 293 "05pre_op.c"
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 296 "05pre_op.c"
    __result96__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result96__;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusPlusNode2_terminated(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    # 298 "05pre_op.c"
    __result97__ = (_Bool)0;
    return __result97__;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __result_obj__;
void* right_value159;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    # 303 "05pre_op.c"
    __result98__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sPlusPlusNode2")));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional138;
_Bool __result99__;
void* right_value160;
struct CVALUE* come_value_100;
void* right_value161;
struct CVALUE* come_value2_101;
void* right_value162;
char* __dec_obj62;
void* right_value163;
struct sType* __dec_obj63;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value161 = (void*)0;
memset(&come_value2_101, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
right_value163 = (void*)0;
    # 312 "05pre_op.c"
    # 308 "05pre_op.c"
    if(_if_conditional138=!node_compile(self->value,info),    _if_conditional138) {
        # 309 "05pre_op.c"
        __result99__ = (_Bool)0;
        return __result99__;
    }
    # 312 "05pre_op.c"
    come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 313 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 315 "05pre_op.c"
    come_value2_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 315, "CVALUE"))));
    come_call_finalizer3(right_value161,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 317 "05pre_op.c"
    __dec_obj62=come_value2_101->c_value;
    come_value2_101->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("++%s",come_value_100->c_value))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 318 "05pre_op.c"
    __dec_obj63=come_value2_101->type;
    come_value2_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(come_value_100->type))));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 319 "05pre_op.c"
    come_value2_101->var=((void*)0);
    # 321 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_101));
    # 323 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_101->c_value);
    # 325 "05pre_op.c"
    __result100__ = (_Bool)1;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result100__;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj64;
void* right_value164;
char* __dec_obj65;
struct sMinusMinusNode2* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    # 335 "05pre_op.c"
    __dec_obj64=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    # 337 "05pre_op.c"
    self->sline=info->sline;
    # 338 "05pre_op.c"
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 341 "05pre_op.c"
    __result101__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result101__;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode2_terminated(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    # 343 "05pre_op.c"
    __result102__ = (_Bool)0;
    return __result102__;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __result_obj__;
void* right_value165;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    # 348 "05pre_op.c"
    __result103__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sMinusMinusNode2")));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional141;
_Bool __result104__;
void* right_value166;
struct CVALUE* come_value_102;
void* right_value167;
struct CVALUE* come_value2_103;
void* right_value168;
char* __dec_obj66;
void* right_value169;
struct sType* __dec_obj67;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
memset(&come_value2_103, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    # 357 "05pre_op.c"
    # 353 "05pre_op.c"
    if(_if_conditional141=!node_compile(self->value,info),    _if_conditional141) {
        # 354 "05pre_op.c"
        __result104__ = (_Bool)0;
        return __result104__;
    }
    # 357 "05pre_op.c"
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 358 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 360 "05pre_op.c"
    come_value2_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 360, "CVALUE"))));
    come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 362 "05pre_op.c"
    __dec_obj66=come_value2_103->c_value;
    come_value2_103->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("--%s",come_value_102->c_value))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 363 "05pre_op.c"
    __dec_obj67=come_value2_103->type;
    come_value2_103->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(come_value_102->type))));
    come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 364 "05pre_op.c"
    come_value2_103->var=((void*)0);
    # 366 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_103));
    # 368 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_103->c_value);
    # 370 "05pre_op.c"
    __result105__ = (_Bool)1;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value170;
char* __dec_obj68;
void* right_value191;
struct sBlock* __dec_obj74;
struct sNormalBlock* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
right_value191 = (void*)0;
    # 380 "05pre_op.c"
    self->sline=info->sline;
    # 381 "05pre_op.c"
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 383 "05pre_op.c"
    __dec_obj74=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value191=sBlock_clone(block))));
    come_call_finalizer3(__dec_obj74,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value191,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 386 "05pre_op.c"
    __result138__ = __result_obj__ = self;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result138__;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    # 388 "05pre_op.c"
    __result139__ = (_Bool)1;
    return __result139__;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __result_obj__;
void* right_value192;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    # 393 "05pre_op.c"
    __result140__ = __result_obj__ = ((char*)(right_value192=__builtin_string("sNormalBlock")));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_161;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_161, 0, sizeof(struct sBlock*));
    # 398 "05pre_op.c"
    block_161=self->mBlock;
    # 400 "05pre_op.c"
    add_come_code(info,"{\n");
    # 402 "05pre_op.c"
    transpile_block(block_161,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    # 404 "05pre_op.c"
    add_come_code(info,"}\n");
    # 406 "05pre_op.c"
    transpiler_clear_last_code(info);
    # 408 "05pre_op.c"
    __result141__ = (_Bool)1;
    return __result141__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional142;
struct sBlock* __result106__;
void* right_value171;
struct sBlock* result_104;
_Bool _if_conditional145;
void* right_value172;
struct list$1sNodeph* __dec_obj69;
_Bool _if_conditional146;
void* right_value190;
struct sVarTable* __dec_obj73;
struct sBlock* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&result_104, 0, sizeof(struct sBlock*));
right_value172 = (void*)0;
right_value190 = (void*)0;
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional142=self==(void*)0,        _if_conditional142) {
            # 2 "sBlock_clone"
            __result106__ = __result_obj__ = (void*)0;
            return __result106__;
        }
        # 3 "sBlock_clone"
        result_104=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value171=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value171,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional145=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional145) {
            # 4 "sBlock_clone"
            __dec_obj69=result_104->mNodes;
            result_104->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value172=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value172,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional146=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional146) {
            # 5 "sBlock_clone"
            __dec_obj73=result_104->mVarTable;
            result_104->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value190=sVarTable_clone(self->mVarTable))));
            come_call_finalizer3(__dec_obj73,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value190,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        __result137__ = __result_obj__ = result_104;
        come_call_finalizer3(result_104,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result137__;
        come_call_finalizer3(result_104,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sBlock_finalize"
            # 0 "sBlock_finalize"
            if(_if_conditional143=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional143) {
                # 0 "sBlock_finalize"
                come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sBlock_finalize"
            # 1 "sBlock_finalize"
            if(_if_conditional144=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional144) {
                # 1 "sBlock_finalize"
                come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional147;
struct sVarTable* __result107__;
void* right_value173;
struct sVarTable* result_105;
_Bool _if_conditional148;
void* right_value189;
struct map$2charphsVarph* __dec_obj72;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
struct sVarTable* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&result_105, 0, sizeof(struct sVarTable*));
right_value189 = (void*)0;
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional147=self==(void*)0,                _if_conditional147) {
                    # 2 "sVarTable_clone"
                    __result107__ = __result_obj__ = (void*)0;
                    return __result107__;
                }
                # 3 "sVarTable_clone"
                result_105=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value173=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value173,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional148=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional148) {
                    # 4 "sVarTable_clone"
                    __dec_obj72=result_105->mVars;
                    result_105->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value189=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer3(__dec_obj72,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value189,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional209=self!=((void*)0),                _if_conditional209) {
                    # 5 "sVarTable_clone"
                    result_105->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional210=self!=((void*)0),                _if_conditional210) {
                    # 6 "sVarTable_clone"
                    result_105->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional211=self!=((void*)0),                _if_conditional211) {
                    # 7 "sVarTable_clone"
                    result_105->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result136__ = __result_obj__ = result_105;
                come_call_finalizer3(result_105,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result136__;
                come_call_finalizer3(result_105,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional149;
struct map$2charphsVarph* __result108__;
void* right_value174;
void* right_value180;
struct map$2charphsVarph* result_111;
void* right_value181;
void* right_value182;
struct list$1charp* __dec_obj71;
char* it_114;
struct sVar* default_value_117;
struct sVar* it2_120;
struct map$2charphsVarph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
right_value180 = (void*)0;
memset(&result_111, 0, sizeof(struct map$2charphsVarph*));
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&it_114, 0, sizeof(char*));
memset(&default_value_117, 0, sizeof(struct sVar*));
memset(&it2_120, 0, sizeof(struct sVar*));
                        # 1156 "./neo-c.h"
                        # 1152 "./neo-c.h"
                        if(_if_conditional149=self==((void*)0),                        _if_conditional149) {
                            # 1153 "./neo-c.h"
                            __result108__ = __result_obj__ = ((void*)0);
                            return __result108__;
                        }
                        # 1156 "./neo-c.h"
                        result_111=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value180=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value174=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1156, "map$2charphsVarph"))))))));
                        come_call_finalizer3(right_value174,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value180,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1158 "./neo-c.h"
                        __dec_obj71=result_111->key_list;
                        result_111->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value182=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value181=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1158, "list$1charp"))))))));
                        come_call_finalizer3(__dec_obj71,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value181,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value182,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1169 "./neo-c.h"
                        for(                        it_114=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_114=map$2charphsVarph_next(self)                        ){
                            # 1161 "./neo-c.h"
                            # 1162 "./neo-c.h"
                            memset(&default_value_117,0,sizeof(struct sVar*));
                            # 1164 "./neo-c.h"
                            it2_120=map$2charphsVarph_at(self,it_114,default_value_117);
                            # 1166 "./neo-c.h"
                            map$2charphsVarph_insert2(result_111,it_114,it2_120);
                        }
                        # 1169 "./neo-c.h"
                        __result135__ = __result_obj__ = result_111;
                        come_call_finalizer3(result_111,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result135__;
                        come_call_finalizer3(result_111,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value175;
void* right_value176;
void* right_value177;
int i_106;
void* right_value178;
void* right_value179;
struct list$1charp* __dec_obj70;
struct map$2charphsVarph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&i_106, 0, sizeof(int));
right_value178 = (void*)0;
right_value179 = (void*)0;
                            # 1062 "./neo-c.h"
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value175=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
                            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1063 "./neo-c.h"
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value176=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1063, "sVar*%"))));
                            come_call_finalizer3(right_value176,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1064 "./neo-c.h"
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value177=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
                            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1071 "./neo-c.h"
                            for(                            i_106=0;                            i_106<128;                            i_106++                            ){
                                # 1068 "./neo-c.h"
                                self->item_existance[i_106]=(_Bool)0;
                            }
                            # 1071 "./neo-c.h"
                            self->size=128;
                            # 1072 "./neo-c.h"
                            self->len=0;
                            # 1074 "./neo-c.h"
                            __dec_obj70=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value179=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value178=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
                            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value178,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value179,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1076 "./neo-c.h"
                            self->it=0;
                            # 1078 "./neo-c.h"
                            __result110__ = __result_obj__ = self;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result110__;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional150=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional150) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional151=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional151) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional152=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional152) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional153=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional153) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 95 "./neo-c.h"
                                self->head=((void*)0);
                                # 96 "./neo-c.h"
                                self->tail=((void*)0);
                                # 97 "./neo-c.h"
                                self->len=0;
                                # 99 "./neo-c.h"
                                __result109__ = __result_obj__ = self;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                return __result109__;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_107;
_Bool _while_condtional17;
struct list_item$1charp* prev_it_108;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                                    # 114 "./neo-c.h"
                                    it_107=self->head;
                                    # 120 "./neo-c.h"
                                    while(_while_condtional17=it_107!=((void*)0),                                    _while_condtional17) {
                                        # 116 "./neo-c.h"
                                        prev_it_108=it_107;
                                        # 117 "./neo-c.h"
                                        it_107=it_107->next;
                                        # 118 "./neo-c.h"
                                        come_call_finalizer3(prev_it_108,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_109;
_Bool _if_conditional154;
_Bool _if_conditional155;
int i_110;
_Bool _if_conditional156;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_109, 0, sizeof(int));
memset(&i_110, 0, sizeof(int));
                                # 1112 "./neo-c.h"
                                for(                                i_109=0;                                i_109<self->size;                                i_109++                                ){
                                    # 1111 "./neo-c.h"
                                    # 1106 "./neo-c.h"
                                    if(_if_conditional154=self->item_existance[i_109],                                    _if_conditional154) {
                                        # 1110 "./neo-c.h"
                                        # 1107 "./neo-c.h"
                                        if(_if_conditional155=1,                                        _if_conditional155) {
                                            # 1108 "./neo-c.h"
                                            come_call_finalizer3(self->items[i_109],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                # 1112 "./neo-c.h"
                                come_free((char*)self->items);
                                # 1121 "./neo-c.h"
                                for(                                i_110=0;                                i_110<self->size;                                i_110++                                ){
                                    # 1120 "./neo-c.h"
                                    # 1115 "./neo-c.h"
                                    if(_if_conditional156=self->item_existance[i_110],                                    _if_conditional156) {
                                        # 1119 "./neo-c.h"
                                        # 1116 "./neo-c.h"
                                        if(_if_conditional157=1,                                        _if_conditional157) {
                                            # 1117 "./neo-c.h"
                                            self->keys[i_110] = come_decrement_ref_count2(self->keys[i_110], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                # 1121 "./neo-c.h"
                                come_free((char*)self->keys);
                                # 1123 "./neo-c.h"
                                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                # 1125 "./neo-c.h"
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional158;
char* result_112;
char* __result111__;
_Bool _if_conditional159;
char* __result112__;
char* result_113;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(char*));
memset(&result_113, 0, sizeof(char*));
                            # 1279 "./neo-c.h"
                            # 1274 "./neo-c.h"
                            if(_if_conditional158=self==((void*)0),                            _if_conditional158) {
                                # 1275 "./neo-c.h"
                                # 1276 "./neo-c.h"
                                memset(&result_112,0,sizeof(char*));
                                # 1277 "./neo-c.h"
                                __result111__ = __result_obj__ = result_112;
                                return __result111__;
                            }
                            # 1279 "./neo-c.h"
                            self->key_list->it=self->key_list->head;
                            # 1285 "./neo-c.h"
                            # 1281 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1282 "./neo-c.h"
                                __result112__ = __result_obj__ = self->key_list->it->item;
                                return __result112__;
                            }
                            # 1285 "./neo-c.h"
                            # 1286 "./neo-c.h"
                            memset(&result_113,0,sizeof(char*));
                            # 1287 "./neo-c.h"
                            __result113__ = __result_obj__ = result_113;
                            return __result113__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1308 "./neo-c.h"
                            __result114__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result114__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional160;
char* result_115;
char* __result115__;
_Bool _if_conditional161;
char* __result116__;
char* result_116;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(char*));
memset(&result_116, 0, sizeof(char*));
                            # 1296 "./neo-c.h"
                            # 1291 "./neo-c.h"
                            if(_if_conditional160=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional160) {
                                # 1292 "./neo-c.h"
                                # 1293 "./neo-c.h"
                                memset(&result_115,0,sizeof(char*));
                                # 1294 "./neo-c.h"
                                __result115__ = __result_obj__ = result_115;
                                return __result115__;
                            }
                            # 1296 "./neo-c.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1302 "./neo-c.h"
                            # 1298 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1299 "./neo-c.h"
                                __result116__ = __result_obj__ = self->key_list->it->item;
                                return __result116__;
                            }
                            # 1302 "./neo-c.h"
                            # 1303 "./neo-c.h"
                            memset(&result_116,0,sizeof(char*));
                            # 1304 "./neo-c.h"
                            __result117__ = __result_obj__ = result_116;
                            return __result117__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_118;
unsigned int it_119;
_Bool _while_condtional18;
_Bool _if_conditional162;
_Bool _if_conditional163;
struct sVar* __result118__;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sVar* __result119__;
struct sVar* __result120__;
struct sVar* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_118, 0, sizeof(unsigned int));
memset(&it_119, 0, sizeof(unsigned int));
                                # 1201 "./neo-c.h"
                                hash_118=string_get_hash_key(((char*)key))%self->size;
                                # 1202 "./neo-c.h"
                                it_119=hash_118;
                                # 1226 "./neo-c.h"
                                while(_while_condtional18=(_Bool)1,                                _while_condtional18) {
                                    # 1224 "./neo-c.h"
                                    # 1205 "./neo-c.h"
                                    if(_if_conditional162=self->item_existance[it_119],                                    _if_conditional162) {
                                        # 1212 "./neo-c.h"
                                        # 1207 "./neo-c.h"
                                        if(_if_conditional163=string_equals(self->keys[it_119],key),                                        _if_conditional163) {
                                            # 1209 "./neo-c.h"
                                            __result118__ = __result_obj__ = self->items[it_119];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result118__;
                                        }
                                        # 1212 "./neo-c.h"
                                        it_119++;
                                        # 1220 "./neo-c.h"
                                        # 1214 "./neo-c.h"
                                        if(_if_conditional164=it_119>=self->size,                                        _if_conditional164) {
                                            # 1215 "./neo-c.h"
                                            it_119=0;
                                        }
                                        else {
                                            # 1220 "./neo-c.h"
                                            # 1217 "./neo-c.h"
                                            if(_if_conditional165=it_119==hash_118,                                            _if_conditional165) {
                                                # 1218 "./neo-c.h"
                                                __result119__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result119__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1222 "./neo-c.h"
                                        __result120__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result120__;
                                    }
                                }
                                # 1226 "./neo-c.h"
                                __result121__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result121__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional166;
unsigned int hash_132;
int it_133;
_Bool _while_condtional20;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool same_key_exist_150;
char* it2_153;
_Bool _if_conditional201;
_Bool _if_conditional202;
struct map$2charphsVarph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_132, 0, sizeof(unsigned int));
memset(&it_133, 0, sizeof(int));
memset(&same_key_exist_150, 0, sizeof(_Bool));
memset(&it2_153, 0, sizeof(char*));
                                # 1445 "./neo-c.h"
                                # 1442 "./neo-c.h"
                                if(_if_conditional166=self->len*2>=self->size,                                _if_conditional166) {
                                    # 1443 "./neo-c.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1445 "./neo-c.h"
                                hash_132=string_get_hash_key(key)%self->size;
                                # 1446 "./neo-c.h"
                                it_133=hash_132;
                                # 1504 "./neo-c.h"
                                while(_while_condtional20=(_Bool)1,                                _while_condtional20) {
                                    # 1502 "./neo-c.h"
                                    # 1449 "./neo-c.h"
                                    if(_if_conditional170=self->item_existance[it_133],                                    _if_conditional170) {
                                        # 1472 "./neo-c.h"
                                        # 1451 "./neo-c.h"
                                        if(_if_conditional171=string_equals(self->keys[it_133],key),                                        _if_conditional171) {
                                            # 1462 "./neo-c.h"
                                            # 1453 "./neo-c.h"
                                            if(_if_conditional172=1,                                            _if_conditional172) {
                                                # 1454 "./neo-c.h"
                                                self->keys[it_133] = come_decrement_ref_count2(self->keys[it_133], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                # 1455 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_133]);
                                                # 1456 "./neo-c.h"
                                                self->keys[it_133]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1459 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_133]);
                                                # 1460 "./neo-c.h"
                                                self->keys[it_133]=key;
                                            }
                                            # 1469 "./neo-c.h"
                                            # 1462 "./neo-c.h"
                                            if(_if_conditional192=1,                                            _if_conditional192) {
                                                # 1463 "./neo-c.h"
                                                come_call_finalizer3(self->items[it_133],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                # 1464 "./neo-c.h"
                                                self->items[it_133]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1467 "./neo-c.h"
                                                self->items[it_133]=item;
                                            }
                                            # 1469 "./neo-c.h"
                                            break;
                                        }
                                        # 1472 "./neo-c.h"
                                        it_133++;
                                        # 1482 "./neo-c.h"
                                        # 1474 "./neo-c.h"
                                        if(_if_conditional193=it_133>=self->size,                                        _if_conditional193) {
                                            # 1475 "./neo-c.h"
                                            it_133=0;
                                        }
                                        else {
                                            # 1482 "./neo-c.h"
                                            # 1477 "./neo-c.h"
                                            if(_if_conditional194=it_133==hash_132,                                            _if_conditional194) {
                                                # 1478 "./neo-c.h"
                                                printf("unexpected error in map.insert\n");
                                                # 1479 "./neo-c.h"
                                                stackframe();
                                                # 1480 "./neo-c.h"
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        # 1484 "./neo-c.h"
                                        self->item_existance[it_133]=(_Bool)1;
                                        # 1491 "./neo-c.h"
                                        # 1485 "./neo-c.h"
                                        if(_if_conditional195=1,                                        _if_conditional195) {
                                            # 1486 "./neo-c.h"
                                            self->keys[it_133]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1489 "./neo-c.h"
                                            self->keys[it_133]=key;
                                        }
                                        # 1498 "./neo-c.h"
                                        # 1491 "./neo-c.h"
                                        if(_if_conditional196=1,                                        _if_conditional196) {
                                            # 1492 "./neo-c.h"
                                            self->items[it_133]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1495 "./neo-c.h"
                                            self->items[it_133]=item;
                                        }
                                        # 1498 "./neo-c.h"
                                        self->len++;
                                        # 1500 "./neo-c.h"
                                        break;
                                    }
                                }
                                # 1504 "./neo-c.h"
                                same_key_exist_150=(_Bool)0;
                                # 1512 "./neo-c.h"
                                for(                                it2_153=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_153=list$1charp_next(self->key_list)                                ){
                                    # 1510 "./neo-c.h"
                                    # 1507 "./neo-c.h"
                                    if(_if_conditional201=string_equals(it2_153,key),                                    _if_conditional201) {
                                        # 1508 "./neo-c.h"
                                        same_key_exist_150=(_Bool)1;
                                    }
                                }
                                # 1516 "./neo-c.h"
                                # 1512 "./neo-c.h"
                                if(_if_conditional202=!same_key_exist_150,                                _if_conditional202) {
                                    # 1513 "./neo-c.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1516 "./neo-c.h"
                                __result134__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result134__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_121;
void* right_value183;
char** keys_122;
void* right_value184;
struct sVar** items_123;
void* right_value185;
_Bool* item_existance_124;
int len_125;
char* it_126;
struct sVar* default_value_127;
struct sVar* it2_128;
unsigned int hash_129;
int n_130;
_Bool _while_condtional19;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct sVar* default_value_131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_121, 0, sizeof(int));
right_value183 = (void*)0;
memset(&keys_122, 0, sizeof(char**));
right_value184 = (void*)0;
memset(&items_123, 0, sizeof(struct sVar**));
right_value185 = (void*)0;
memset(&item_existance_124, 0, sizeof(_Bool*));
memset(&len_125, 0, sizeof(int));
memset(&it_126, 0, sizeof(char*));
memset(&default_value_127, 0, sizeof(struct sVar*));
memset(&it2_128, 0, sizeof(struct sVar*));
memset(&hash_129, 0, sizeof(unsigned int));
memset(&n_130, 0, sizeof(int));
memset(&default_value_131, 0, sizeof(struct sVar*));
                                        # 1312 "./neo-c.h"
                                        size_121=self->size*10;
                                        # 1313 "./neo-c.h"
                                        keys_122=(char**)come_increment_ref_count(((char**)(right_value183=(char**)come_calloc(1, sizeof(char*)*(1*(size_121)), "./neo-c.h", 1313, "char*%"))));
                                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1314 "./neo-c.h"
                                        items_123=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value184=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_121)), "./neo-c.h", 1314, "sVar*%"))));
                                        come_call_finalizer3(right_value184,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 1315 "./neo-c.h"
                                        item_existance_124=(_Bool*)come_increment_ref_count(((_Bool*)(right_value185=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_121)), "./neo-c.h", 1315, "bool"))));
                                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1317 "./neo-c.h"
                                        len_125=0;
                                        # 1352 "./neo-c.h"
                                        for(                                        it_126=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_126=map$2charphsVarph_next(self)                                        ){
                                            # 1320 "./neo-c.h"
                                            # 1321 "./neo-c.h"
                                            memset(&default_value_127,0,sizeof(struct sVar*));
                                            # 1322 "./neo-c.h"
                                            it2_128=map$2charphsVarph_at(self,it_126,default_value_127);
                                            # 1323 "./neo-c.h"
                                            hash_129=string_get_hash_key(it_126)%size_121;
                                            # 1324 "./neo-c.h"
                                            n_130=hash_129;
                                            # 1350 "./neo-c.h"
                                            while(_while_condtional19=(_Bool)1,                                            _while_condtional19) {
                                                # 1349 "./neo-c.h"
                                                # 1327 "./neo-c.h"
                                                if(_if_conditional167=item_existance_124[n_130],                                                _if_conditional167) {
                                                    # 1329 "./neo-c.h"
                                                    n_130++;
                                                    # 1339 "./neo-c.h"
                                                    # 1331 "./neo-c.h"
                                                    if(_if_conditional168=n_130>=size_121,                                                    _if_conditional168) {
                                                        # 1332 "./neo-c.h"
                                                        n_130=0;
                                                    }
                                                    else {
                                                        # 1339 "./neo-c.h"
                                                        # 1334 "./neo-c.h"
                                                        if(_if_conditional169=n_130==hash_129,                                                        _if_conditional169) {
                                                            # 1335 "./neo-c.h"
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            # 1336 "./neo-c.h"
                                                            stackframe();
                                                            # 1337 "./neo-c.h"
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 1341 "./neo-c.h"
                                                    item_existance_124[n_130]=(_Bool)1;
                                                    # 1342 "./neo-c.h"
                                                    keys_122[n_130]=it_126;
                                                    # 1343 "./neo-c.h"
                                                    # 1344 "./neo-c.h"
                                                    items_123[n_130]=map$2charphsVarph_at(self,it_126,default_value_131);
                                                    # 1346 "./neo-c.h"
                                                    len_125++;
                                                    # 1347 "./neo-c.h"
                                                    break;
                                                }
                                            }
                                        }
                                        # 1352 "./neo-c.h"
                                        come_free((char*)self->items);
                                        # 1353 "./neo-c.h"
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        # 1354 "./neo-c.h"
                                        come_free((char*)self->keys);
                                        # 1356 "./neo-c.h"
                                        self->keys=keys_122;
                                        # 1357 "./neo-c.h"
                                        self->items=items_123;
                                        # 1358 "./neo-c.h"
                                        self->item_existance=item_existance_124;
                                        # 1360 "./neo-c.h"
                                        self->size=size_121;
                                        # 1361 "./neo-c.h"
                                        self->len=len_125;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_134;
struct list_item$1charp* it_135;
_Bool _while_condtional21;
_Bool _if_conditional173;
struct list$1charp* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_134, 0, sizeof(int));
memset(&it_135, 0, sizeof(struct list_item$1charp*));
                                                    # 435 "./neo-c.h"
                                                    it2_134=0;
                                                    # 436 "./neo-c.h"
                                                    it_135=self->head;
                                                    # 447 "./neo-c.h"
                                                    while(_while_condtional21=it_135!=((void*)0),                                                    _while_condtional21) {
                                                        # 442 "./neo-c.h"
                                                        # 438 "./neo-c.h"
                                                        if(_if_conditional173=string_equals(it_135->item,item),                                                        _if_conditional173) {
                                                            # 439 "./neo-c.h"
                                                            list$1charp_delete(self,it2_134,it2_134+1);
                                                            # 440 "./neo-c.h"
                                                            break;
                                                        }
                                                        # 442 "./neo-c.h"
                                                        it2_134++;
                                                        # 444 "./neo-c.h"
                                                        it_135=it_135->next;
                                                    }
                                                    # 447 "./neo-c.h"
                                                    __result125__ = __result_obj__ = self;
                                                    return __result125__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
int tmp_136;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
struct list$1charp* __result122__;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct list_item$1charp* it_139;
int i_140;
_Bool _while_condtional23;
_Bool _if_conditional182;
struct list_item$1charp* prev_it_141;
_Bool _if_conditional183;
_Bool _if_conditional184;
struct list_item$1charp* it_142;
int i_143;
_Bool _while_condtional24;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct list_item$1charp* prev_it_144;
struct list_item$1charp* it_145;
struct list_item$1charp* head_prev_it_146;
struct list_item$1charp* tail_it_147;
int i_148;
_Bool _while_condtional25;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
struct list_item$1charp* prev_it_149;
_Bool _if_conditional190;
_Bool _if_conditional191;
struct list$1charp* __result124__;
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
                                                                # 454 "./neo-c.h"
                                                                # 451 "./neo-c.h"
                                                                if(_if_conditional174=head<0,                                                                _if_conditional174) {
                                                                    # 452 "./neo-c.h"
                                                                    head+=self->len;
                                                                }
                                                                # 458 "./neo-c.h"
                                                                # 454 "./neo-c.h"
                                                                if(_if_conditional175=tail<0,                                                                _if_conditional175) {
                                                                    # 455 "./neo-c.h"
                                                                    tail+=self->len+1;
                                                                }
                                                                # 464 "./neo-c.h"
                                                                # 458 "./neo-c.h"
                                                                if(_if_conditional176=head>tail,                                                                _if_conditional176) {
                                                                    # 459 "./neo-c.h"
                                                                    tmp_136=tail;
                                                                    # 460 "./neo-c.h"
                                                                    tail=head;
                                                                    # 461 "./neo-c.h"
                                                                    head=tmp_136;
                                                                }
                                                                # 468 "./neo-c.h"
                                                                # 464 "./neo-c.h"
                                                                if(_if_conditional177=head<0,                                                                _if_conditional177) {
                                                                    # 465 "./neo-c.h"
                                                                    head=0;
                                                                }
                                                                # 472 "./neo-c.h"
                                                                # 468 "./neo-c.h"
                                                                if(_if_conditional178=tail>self->len,                                                                _if_conditional178) {
                                                                    # 469 "./neo-c.h"
                                                                    tail=self->len;
                                                                }
                                                                # 476 "./neo-c.h"
                                                                # 472 "./neo-c.h"
                                                                if(_if_conditional179=head==tail,                                                                _if_conditional179) {
                                                                    # 473 "./neo-c.h"
                                                                    __result122__ = __result_obj__ = self;
                                                                    return __result122__;
                                                                }
                                                                # 571 "./neo-c.h"
                                                                # 476 "./neo-c.h"
                                                                if(_if_conditional180=head==0&&tail==self->len,                                                                _if_conditional180) {
                                                                    # 478 "./neo-c.h"
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    # 571 "./neo-c.h"
                                                                    # 480 "./neo-c.h"
                                                                    if(_if_conditional181=head==0,                                                                    _if_conditional181) {
                                                                        # 481 "./neo-c.h"
                                                                        it_139=self->head;
                                                                        # 482 "./neo-c.h"
                                                                        i_140=0;
                                                                        # 504 "./neo-c.h"
                                                                        while(_while_condtional23=it_139!=((void*)0),                                                                        _while_condtional23) {
                                                                            # 503 "./neo-c.h"
                                                                            # 484 "./neo-c.h"
                                                                            if(_if_conditional182=i_140<tail,                                                                            _if_conditional182) {
                                                                                # 485 "./neo-c.h"
                                                                                prev_it_141=it_139;
                                                                                # 487 "./neo-c.h"
                                                                                it_139=it_139->next;
                                                                                # 488 "./neo-c.h"
                                                                                i_140++;
                                                                                # 490 "./neo-c.h"
                                                                                come_call_finalizer3(prev_it_141,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                # 492 "./neo-c.h"
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                # 503 "./neo-c.h"
                                                                                # 494 "./neo-c.h"
                                                                                if(_if_conditional183=i_140==tail,                                                                                _if_conditional183) {
                                                                                    # 495 "./neo-c.h"
                                                                                    self->head=it_139;
                                                                                    # 496 "./neo-c.h"
                                                                                    self->head->prev=((void*)0);
                                                                                    # 497 "./neo-c.h"
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    # 500 "./neo-c.h"
                                                                                    it_139=it_139->next;
                                                                                    # 501 "./neo-c.h"
                                                                                    i_140++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 571 "./neo-c.h"
                                                                        # 505 "./neo-c.h"
                                                                        if(_if_conditional184=tail==self->len,                                                                        _if_conditional184) {
                                                                            # 506 "./neo-c.h"
                                                                            it_142=self->head;
                                                                            # 507 "./neo-c.h"
                                                                            i_143=0;
                                                                            # 529 "./neo-c.h"
                                                                            while(_while_condtional24=it_142!=((void*)0),                                                                            _while_condtional24) {
                                                                                # 514 "./neo-c.h"
                                                                                # 509 "./neo-c.h"
                                                                                if(_if_conditional185=i_143==head,                                                                                _if_conditional185) {
                                                                                    # 510 "./neo-c.h"
                                                                                    self->tail=it_142->prev;
                                                                                    # 511 "./neo-c.h"
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                # 528 "./neo-c.h"
                                                                                # 514 "./neo-c.h"
                                                                                if(_if_conditional186=i_143>=head,                                                                                _if_conditional186) {
                                                                                    # 515 "./neo-c.h"
                                                                                    prev_it_144=it_142;
                                                                                    # 517 "./neo-c.h"
                                                                                    it_142=it_142->next;
                                                                                    # 518 "./neo-c.h"
                                                                                    i_143++;
                                                                                    # 520 "./neo-c.h"
                                                                                    come_call_finalizer3(prev_it_144,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    # 522 "./neo-c.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 525 "./neo-c.h"
                                                                                    it_142=it_142->next;
                                                                                    # 526 "./neo-c.h"
                                                                                    i_143++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 531 "./neo-c.h"
                                                                            it_145=self->head;
                                                                            # 533 "./neo-c.h"
                                                                            head_prev_it_146=((void*)0);
                                                                            # 534 "./neo-c.h"
                                                                            tail_it_147=((void*)0);
                                                                            # 537 "./neo-c.h"
                                                                            i_148=0;
                                                                            # 563 "./neo-c.h"
                                                                            while(_while_condtional25=it_145!=((void*)0),                                                                            _while_condtional25) {
                                                                                # 542 "./neo-c.h"
                                                                                # 539 "./neo-c.h"
                                                                                if(_if_conditional187=i_148==head,                                                                                _if_conditional187) {
                                                                                    # 540 "./neo-c.h"
                                                                                    head_prev_it_146=it_145->prev;
                                                                                }
                                                                                # 546 "./neo-c.h"
                                                                                # 542 "./neo-c.h"
                                                                                if(_if_conditional188=i_148==tail,                                                                                _if_conditional188) {
                                                                                    # 543 "./neo-c.h"
                                                                                    tail_it_147=it_145;
                                                                                }
                                                                                # 561 "./neo-c.h"
                                                                                # 546 "./neo-c.h"
                                                                                if(_if_conditional189=i_148>=head&&i_148<tail,                                                                                _if_conditional189) {
                                                                                    # 548 "./neo-c.h"
                                                                                    prev_it_149=it_145;
                                                                                    # 550 "./neo-c.h"
                                                                                    it_145=it_145->next;
                                                                                    # 551 "./neo-c.h"
                                                                                    i_148++;
                                                                                    # 553 "./neo-c.h"
                                                                                    come_call_finalizer3(prev_it_149,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    # 555 "./neo-c.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 558 "./neo-c.h"
                                                                                    it_145=it_145->next;
                                                                                    # 559 "./neo-c.h"
                                                                                    i_148++;
                                                                                }
                                                                            }
                                                                            # 566 "./neo-c.h"
                                                                            # 563 "./neo-c.h"
                                                                            if(_if_conditional190=head_prev_it_146!=((void*)0),                                                                            _if_conditional190) {
                                                                                # 564 "./neo-c.h"
                                                                                head_prev_it_146->next=tail_it_147;
                                                                            }
                                                                            # 569 "./neo-c.h"
                                                                            # 566 "./neo-c.h"
                                                                            if(_if_conditional191=tail_it_147!=((void*)0),                                                                            _if_conditional191) {
                                                                                # 567 "./neo-c.h"
                                                                                tail_it_147->prev=head_prev_it_146;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                # 571 "./neo-c.h"
                                                                __result124__ = __result_obj__ = self;
                                                                return __result124__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_137;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_138;
struct list$1charp* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_138, 0, sizeof(struct list_item$1charp*));
                                                                        # 420 "./neo-c.h"
                                                                        it_137=self->head;
                                                                        # 427 "./neo-c.h"
                                                                        while(_while_condtional22=it_137!=((void*)0),                                                                        _while_condtional22) {
                                                                            # 422 "./neo-c.h"
                                                                            prev_it_138=it_137;
                                                                            # 423 "./neo-c.h"
                                                                            it_137=it_137->next;
                                                                            # 424 "./neo-c.h"
                                                                            come_call_finalizer3(prev_it_138,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 427 "./neo-c.h"
                                                                        self->head=((void*)0);
                                                                        # 428 "./neo-c.h"
                                                                        self->tail=((void*)0);
                                                                        # 430 "./neo-c.h"
                                                                        self->len=0;
                                                                        # 432 "./neo-c.h"
                                                                        __result123__ = __result_obj__ = self;
                                                                        return __result123__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional197;
char* result_151;
char* __result126__;
_Bool _if_conditional198;
char* __result127__;
char* result_152;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_151, 0, sizeof(char*));
memset(&result_152, 0, sizeof(char*));
                                    # 281 "./neo-c.h"
                                    # 276 "./neo-c.h"
                                    if(_if_conditional197=self==((void*)0),                                    _if_conditional197) {
                                        # 277 "./neo-c.h"
                                        # 278 "./neo-c.h"
                                        memset(&result_151,0,sizeof(char*));
                                        # 279 "./neo-c.h"
                                        __result126__ = __result_obj__ = result_151;
                                        return __result126__;
                                    }
                                    # 281 "./neo-c.h"
                                    self->it=self->head;
                                    # 287 "./neo-c.h"
                                    # 283 "./neo-c.h"
                                    if(self->it) {
                                        # 284 "./neo-c.h"
                                        __result127__ = __result_obj__ = self->it->item;
                                        return __result127__;
                                    }
                                    # 287 "./neo-c.h"
                                    # 288 "./neo-c.h"
                                    memset(&result_152,0,sizeof(char*));
                                    # 289 "./neo-c.h"
                                    __result128__ = __result_obj__ = result_152;
                                    return __result128__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 311 "./neo-c.h"
                                    __result129__ = self==((void*)0)||self->it==((void*)0);
                                    return __result129__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional199;
char* result_154;
char* __result130__;
_Bool _if_conditional200;
char* __result131__;
char* result_155;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_154, 0, sizeof(char*));
memset(&result_155, 0, sizeof(char*));
                                    # 299 "./neo-c.h"
                                    # 293 "./neo-c.h"
                                    if(_if_conditional199=self==((void*)0)||self->it==((void*)0),                                    _if_conditional199) {
                                        # 294 "./neo-c.h"
                                        # 295 "./neo-c.h"
                                        memset(&result_154,0,sizeof(char*));
                                        # 296 "./neo-c.h"
                                        __result130__ = __result_obj__ = result_154;
                                        return __result130__;
                                    }
                                    # 299 "./neo-c.h"
                                    self->it=self->it->next;
                                    # 305 "./neo-c.h"
                                    # 301 "./neo-c.h"
                                    if(self->it) {
                                        # 302 "./neo-c.h"
                                        __result131__ = __result_obj__ = self->it->item;
                                        return __result131__;
                                    }
                                    # 305 "./neo-c.h"
                                    # 306 "./neo-c.h"
                                    memset(&result_155,0,sizeof(char*));
                                    # 307 "./neo-c.h"
                                    __result132__ = __result_obj__ = result_155;
                                    return __result132__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional203;
void* right_value186;
struct list_item$1charp* litem_156;
_Bool _if_conditional204;
void* right_value187;
struct list_item$1charp* litem_157;
void* right_value188;
struct list_item$1charp* litem_158;
struct list$1charp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
right_value187 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
right_value188 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charp*));
                                        # 247 "./neo-c.h"
                                        # 216 "./neo-c.h"
                                        if(_if_conditional203=self->len==0,                                        _if_conditional203) {
                                            # 217 "./neo-c.h"
                                            litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value186=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                                            come_call_finalizer3(right_value186,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 219 "./neo-c.h"
                                            litem_156->prev=((void*)0);
                                            # 220 "./neo-c.h"
                                            litem_156->next=((void*)0);
                                            # 221 "./neo-c.h"
                                            litem_156->item=item;
                                            # 223 "./neo-c.h"
                                            self->tail=litem_156;
                                            # 224 "./neo-c.h"
                                            self->head=litem_156;
                                        }
                                        else {
                                            # 247 "./neo-c.h"
                                            # 226 "./neo-c.h"
                                            if(_if_conditional204=self->len==1,                                            _if_conditional204) {
                                                # 227 "./neo-c.h"
                                                litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value187=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                                                come_call_finalizer3(right_value187,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 229 "./neo-c.h"
                                                litem_157->prev=self->head;
                                                # 230 "./neo-c.h"
                                                litem_157->next=((void*)0);
                                                # 231 "./neo-c.h"
                                                litem_157->item=item;
                                                # 233 "./neo-c.h"
                                                self->tail=litem_157;
                                                # 234 "./neo-c.h"
                                                self->head->next=litem_157;
                                            }
                                            else {
                                                # 237 "./neo-c.h"
                                                litem_158=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value188=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                                                come_call_finalizer3(right_value188,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 239 "./neo-c.h"
                                                litem_158->prev=self->tail;
                                                # 240 "./neo-c.h"
                                                litem_158->next=((void*)0);
                                                # 241 "./neo-c.h"
                                                litem_158->item=item;
                                                # 243 "./neo-c.h"
                                                self->tail->next=litem_158;
                                                # 244 "./neo-c.h"
                                                self->tail=litem_158;
                                            }
                                        }
                                        # 247 "./neo-c.h"
                                        self->len++;
                                        # 249 "./neo-c.h"
                                        __result133__ = __result_obj__ = self;
                                        return __result133__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_159;
_Bool _if_conditional205;
_Bool _if_conditional206;
int i_160;
_Bool _if_conditional207;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_159, 0, sizeof(int));
memset(&i_160, 0, sizeof(int));
                        # 1112 "./neo-c.h"
                        for(                        i_159=0;                        i_159<self->size;                        i_159++                        ){
                            # 1111 "./neo-c.h"
                            # 1106 "./neo-c.h"
                            if(_if_conditional205=self->item_existance[i_159],                            _if_conditional205) {
                                # 1110 "./neo-c.h"
                                # 1107 "./neo-c.h"
                                if(_if_conditional206=1,                                _if_conditional206) {
                                    # 1108 "./neo-c.h"
                                    come_call_finalizer3(self->items[i_159],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        # 1112 "./neo-c.h"
                        come_free((char*)self->items);
                        # 1121 "./neo-c.h"
                        for(                        i_160=0;                        i_160<self->size;                        i_160++                        ){
                            # 1120 "./neo-c.h"
                            # 1115 "./neo-c.h"
                            if(_if_conditional207=self->item_existance[i_160],                            _if_conditional207) {
                                # 1119 "./neo-c.h"
                                # 1116 "./neo-c.h"
                                if(_if_conditional208=1,                                _if_conditional208) {
                                    # 1117 "./neo-c.h"
                                    self->keys[i_160] = come_decrement_ref_count2(self->keys[i_160], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        # 1121 "./neo-c.h"
                        come_free((char*)self->keys);
                        # 1123 "./neo-c.h"
                        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        # 1125 "./neo-c.h"
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj75;
void* right_value193;
char* __dec_obj76;
struct sComplement* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    # 418 "05pre_op.c"
    __dec_obj75=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    # 420 "05pre_op.c"
    self->sline=info->sline;
    # 421 "05pre_op.c"
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 424 "05pre_op.c"
    __result142__ = __result_obj__ = self;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result142__;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sComplement_terminated(struct sComplement* self){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    # 426 "05pre_op.c"
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sComplement_kind(struct sComplement* self){
void* __result_obj__;
void* right_value194;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    # 431 "05pre_op.c"
    __result144__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sComplement")));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result144__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional216;
_Bool __result145__;
void* right_value195;
struct CVALUE* come_value_162;
void* right_value196;
struct CVALUE* come_value2_163;
void* right_value197;
char* __dec_obj77;
void* right_value198;
struct sType* __dec_obj78;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
memset(&come_value2_163, 0, sizeof(struct CVALUE*));
right_value197 = (void*)0;
right_value198 = (void*)0;
    # 440 "05pre_op.c"
    # 436 "05pre_op.c"
    if(_if_conditional216=!node_compile(self->value,info),    _if_conditional216) {
        # 437 "05pre_op.c"
        __result145__ = (_Bool)0;
        return __result145__;
    }
    # 440 "05pre_op.c"
    come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 441 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 443 "05pre_op.c"
    come_value2_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 443, "CVALUE"))));
    come_call_finalizer3(right_value196,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 445 "05pre_op.c"
    __dec_obj77=come_value2_163->c_value;
    come_value2_163->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("~%s",come_value_162->c_value))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 446 "05pre_op.c"
    __dec_obj78=come_value2_163->type;
    come_value2_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(come_value_162->type))));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 447 "05pre_op.c"
    come_value2_163->var=((void*)0);
    # 449 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_163));
    # 451 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_163->c_value);
    # 453 "05pre_op.c"
    __result146__ = (_Bool)1;
    come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
    come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value199;
struct sNode* __dec_obj79;
void* right_value200;
char* __dec_obj80;
struct sParenNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
    # 463 "05pre_op.c"
    __dec_obj79=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(left))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value199) { right_value199 = come_decrement_ref_count2(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 464 "05pre_op.c"
    self->sline=info->sline;
    # 465 "05pre_op.c"
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(info->sname))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 468 "05pre_op.c"
    __result147__ = __result_obj__ = self;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result147__;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sParenNode_terminated(struct sParenNode* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    # 470 "05pre_op.c"
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sParenNode_kind(struct sParenNode* self){
void* __result_obj__;
void* right_value201;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    # 475 "05pre_op.c"
    __result149__ = __result_obj__ = ((char*)(right_value201=__builtin_string("sParenNode")));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_164;
_Bool _if_conditional219;
_Bool __result150__;
void* right_value202;
struct CVALUE* left_value_165;
void* right_value203;
struct CVALUE* come_value_166;
void* right_value204;
char* __dec_obj81;
void* right_value205;
struct sType* __dec_obj82;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_164, 0, sizeof(struct sNode*));
right_value202 = (void*)0;
memset(&left_value_165, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value204 = (void*)0;
right_value205 = (void*)0;
    # 480 "05pre_op.c"
    left_164=self->mLeft;
    # 486 "05pre_op.c"
    # 482 "05pre_op.c"
    if(_if_conditional219=!node_compile(left_164,info),    _if_conditional219) {
        # 483 "05pre_op.c"
        __result150__ = (_Bool)0;
        return __result150__;
    }
    # 486 "05pre_op.c"
    left_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 487 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 489 "05pre_op.c"
    come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 489, "CVALUE"))));
    come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 491 "05pre_op.c"
    __dec_obj81=come_value_166->c_value;
    come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("(%s)",left_value_165->c_value))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 492 "05pre_op.c"
    __dec_obj82=come_value_166->type;
    come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(left_value_165->type))));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 493 "05pre_op.c"
    come_value_166->var=((void*)0);
    # 495 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_166->c_value);
    # 497 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
    # 499 "05pre_op.c"
    __result151__ = (_Bool)1;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result151__;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value206;
struct sType* __dec_obj83;
void* right_value207;
struct sNode* __dec_obj84;
void* right_value208;
char* __dec_obj85;
struct sCastNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
    # 510 "05pre_op.c"
    __dec_obj83=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(type))));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 511 "05pre_op.c"
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value207=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 512 "05pre_op.c"
    self->sline=info->sline;
    # 513 "05pre_op.c"
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 516 "05pre_op.c"
    __result152__ = __result_obj__ = self;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result152__;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCastNode_terminated(struct sCastNode* self){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    # 518 "05pre_op.c"
    __result153__ = (_Bool)0;
    return __result153__;
}

char* sCastNode_kind(struct sCastNode* self){
void* __result_obj__;
void* right_value209;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    # 523 "05pre_op.c"
    __result154__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sCastNode")));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_167;
struct sNode* left_168;
_Bool _if_conditional223;
_Bool __result155__;
void* right_value210;
struct CVALUE* left_value_169;
void* right_value211;
void* right_value212;
struct sType* type2_170;
void* right_value213;
struct CVALUE* come_value_171;
void* right_value214;
void* right_value215;
char* __dec_obj86;
void* right_value216;
struct sType* __dec_obj87;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_167, 0, sizeof(struct sType*));
memset(&left_168, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&left_value_169, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&type2_170, 0, sizeof(struct sType*));
right_value213 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
    # 528 "05pre_op.c"
    type_167=self->mType;
    # 529 "05pre_op.c"
    left_168=self->mLeft;
    # 535 "05pre_op.c"
    # 531 "05pre_op.c"
    if(_if_conditional223=!node_compile(left_168,info),    _if_conditional223) {
        # 532 "05pre_op.c"
        __result155__ = (_Bool)0;
        return __result155__;
    }
    # 535 "05pre_op.c"
    left_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 536 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 538 "05pre_op.c"
    type2_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=solve_generics(((struct sType*)(right_value211=sType_clone(type_167))),info->generics_type,info))));
    come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 540 "05pre_op.c"
    come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 540, "CVALUE"))));
    come_call_finalizer3(right_value213,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 542 "05pre_op.c"
    cast_type(type2_170,left_value_169->type,left_value_169,info);
    # 544 "05pre_op.c"
    __dec_obj86=come_value_171->c_value;
    come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("(%s)%s",((char*)(right_value214=make_type_name_string(type2_170,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_169->c_value))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 545 "05pre_op.c"
    __dec_obj87=come_value_171->type;
    come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(type2_170))));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 546 "05pre_op.c"
    come_value_171->var=((void*)0);
    # 548 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_171->c_value);
    # 550 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
    # 552 "05pre_op.c"
    __result156__ = (_Bool)1;
    come_call_finalizer3(left_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_170,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
    come_call_finalizer3(left_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_170,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value217;
struct sBlock* block_172;
void* right_value218;
void* right_value219;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* right_value223;
struct sNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
memset(&block_172, 0, sizeof(struct sBlock*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value223 = (void*)0;
    # 558 "05pre_op.c"
    block_172=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value217=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value217,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 560 "05pre_op.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 560, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNormalBlock*)(right_value219=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value218=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 560, "sNormalBlock")))),block_172,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result159__ = __result_obj__ = ((struct sNode*)(right_value223=_inf_value1));
    come_call_finalizer3(block_172,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value218,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value219,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result159__;
    come_call_finalizer3(block_172,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sNormalBlock_finalize"
        # 0 "sNormalBlock_finalize"
        if(_if_conditional224=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional224) {
            # 0 "sNormalBlock_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sNormalBlock_finalize"
        # 1 "sNormalBlock_finalize"
        if(_if_conditional225=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional225) {
            # 1 "sNormalBlock_finalize"
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional226;
struct sNormalBlock* __result157__;
void* right_value220;
struct sNormalBlock* result_173;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value221;
char* __dec_obj88;
_Bool _if_conditional229;
void* right_value222;
struct sBlock* __dec_obj89;
struct sNormalBlock* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&result_173, 0, sizeof(struct sNormalBlock*));
right_value221 = (void*)0;
right_value222 = (void*)0;
        # 3 "sNormalBlock_clone"
        # 2 "sNormalBlock_clone"
        if(_if_conditional226=self==(void*)0,        _if_conditional226) {
            # 2 "sNormalBlock_clone"
            __result157__ = __result_obj__ = (void*)0;
            return __result157__;
        }
        # 3 "sNormalBlock_clone"
        result_173=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value220=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        come_call_finalizer3(right_value220,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sNormalBlock_clone"
        # 4 "sNormalBlock_clone"
        if(_if_conditional227=self!=((void*)0),        _if_conditional227) {
            # 4 "sNormalBlock_clone"
            result_173->sline=self->sline;
        }
        # 6 "sNormalBlock_clone"
        # 5 "sNormalBlock_clone"
        if(_if_conditional228=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional228) {
            # 5 "sNormalBlock_clone"
            __dec_obj88=result_173->sname;
            result_173->sname=(char*)come_increment_ref_count(((char*)(right_value221=string_clone(self->sname))));
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sNormalBlock_clone"
        # 6 "sNormalBlock_clone"
        if(_if_conditional229=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional229) {
            # 6 "sNormalBlock_clone"
            __dec_obj89=result_173->mBlock;
            result_173->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value222=sBlock_clone(self->mBlock))));
            come_call_finalizer3(__dec_obj89,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value222,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sNormalBlock_clone"
        __result158__ = __result_obj__ = result_173;
        come_call_finalizer3(result_173,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result158__;
        come_call_finalizer3(result_173,sNormalBlock_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value224;
void* right_value225;
void* right_value226;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* right_value230;
struct sNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value230 = (void*)0;
    # 565 "05pre_op.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 565, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLogicalDenial*)(right_value226=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value224=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 565, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(node)))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLogicalDenial_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result162__ = __result_obj__ = ((struct sNode*)(right_value230=_inf_value2));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(right_value224,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value226,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value230) { right_value230 = come_decrement_ref_count2(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result162__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool refference_175;
char* p_176;
int sline_177;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _while_condtional26;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value231;
struct sNode* __result163__;
_Bool _if_conditional241;
void* right_value232;
struct sNode* node_178;
void* right_value233;
void* right_value234;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value238;
struct sNode* __result166__;
_Bool _if_conditional248;
void* right_value239;
struct sNode* node_180;
void* right_value240;
void* right_value241;
struct sNode* _inf_value4;
struct sMinusMinusNode2* _inf_obj_value4;
void* right_value245;
struct sNode* __result169__;
_Bool _if_conditional255;
void* right_value246;
struct sNode* node_182;
void* right_value247;
void* right_value248;
struct sNode* _inf_value5;
struct sMinusNode2* _inf_obj_value5;
void* right_value252;
struct sNode* __result172__;
_Bool _if_conditional262;
void* right_value253;
struct sNode* node_184;
void* right_value254;
void* right_value255;
struct sNode* _inf_value6;
struct sPlusPlusNode2* _inf_obj_value6;
void* right_value259;
struct sNode* __result175__;
_Bool _if_conditional269;
void* right_value260;
struct sNode* node_186;
void* right_value261;
void* right_value262;
struct sNode* _inf_value7;
struct sComplement* _inf_obj_value7;
void* right_value266;
struct sNode* __result178__;
_Bool _if_conditional276;
void* right_value267;
struct sNode* node_188;
void* right_value268;
struct sNode* __dec_obj102;
struct sNode* __result179__;
_Bool _if_conditional277;
void* right_value269;
struct sNode* node_189;
void* right_value270;
struct sNode* __dec_obj103;
struct sNode* __result180__;
_Bool _if_conditional278;
void* right_value271;
struct sNode* node_190;
void* right_value272;
struct sNode* __dec_obj104;
struct sNode* __result181__;
_Bool _if_conditional279;
void* right_value273;
struct sNode* node_191;
void* right_value274;
struct sNode* __dec_obj105;
struct sNode* __result182__;
_Bool _if_conditional280;
_Bool quote_192;
_Bool _if_conditional281;
_Bool no_assign_193;
void* right_value275;
struct sNode* value_194;
void* right_value276;
void* right_value277;
struct sNode* _inf_value8;
struct sDerefferenceNode* _inf_obj_value8;
void* right_value281;
struct sNode* __result185__;
_Bool _if_conditional289;
void* right_value282;
struct sNode* value_196;
void* right_value283;
void* right_value284;
struct sNode* _inf_value9;
struct sRefferenceNode* _inf_obj_value9;
void* right_value288;
struct sNode* __result188__;
_Bool _if_conditional296;
void* right_value289;
struct sNode* value_198;
void* right_value290;
void* right_value291;
struct sNode* _inf_value10;
struct sReverseNode* _inf_obj_value10;
void* right_value295;
struct sNode* __result191__;
_Bool _if_conditional303;
_Bool cast_expression_flag_200;
char* p_201;
int sline_202;
void* right_value296;
char* word_203;
_Bool _if_conditional304;
void* right_value297;
char* __dec_obj112;
_Bool _if_conditional305;
_Bool tuple_expression_flag_204;
char* p_205;
int sline_206;
_Bool no_comma_207;
_Bool no_output_err_208;
_Bool no_output_come_code_209;
void* right_value298;
struct sNode* node_210;
void* right_value299;
struct sNode* node2_211;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value300;
struct sNode* node_212;
void* right_value301;
struct sNode* __dec_obj113;
struct sNode* __result192__;
_Bool _if_conditional308;
void* right_value302;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* type_213;
char* name_214;
_Bool err_215;
_Bool _if_conditional311;
void* right_value303;
struct sNode* node_216;
void* right_value304;
struct sNode* __dec_obj114;
void* right_value305;
void* right_value306;
struct sNode* _inf_value11;
struct sCastNode* _inf_obj_value11;
void* right_value311;
struct sNode* __result195__;
void* right_value312;
struct sNode* node_218;
void* right_value313;
void* right_value314;
struct sNode* _inf_value12;
struct sParenNode* _inf_obj_value12;
void* right_value318;
struct sNode* __dec_obj120;
void* right_value319;
struct sNode* __dec_obj121;
struct sNode* __result198__;
void* right_value320;
struct sNode* node_220;
void* right_value321;
struct sNode* __dec_obj122;
struct sNode* __result199__;
struct sNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_175, 0, sizeof(_Bool));
memset(&p_176, 0, sizeof(char*));
memset(&sline_177, 0, sizeof(int));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&node_178, 0, sizeof(struct sNode*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&node_180, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&node_182, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&node_184, 0, sizeof(struct sNode*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&node_186, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&node_188, 0, sizeof(struct sNode*));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&node_189, 0, sizeof(struct sNode*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&node_190, 0, sizeof(struct sNode*));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&node_191, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
memset(&quote_192, 0, sizeof(_Bool));
memset(&no_assign_193, 0, sizeof(_Bool));
right_value275 = (void*)0;
memset(&value_194, 0, sizeof(struct sNode*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&value_196, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&value_198, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value295 = (void*)0;
memset(&cast_expression_flag_200, 0, sizeof(_Bool));
memset(&p_201, 0, sizeof(char*));
memset(&sline_202, 0, sizeof(int));
right_value296 = (void*)0;
memset(&word_203, 0, sizeof(char*));
right_value297 = (void*)0;
memset(&tuple_expression_flag_204, 0, sizeof(_Bool));
memset(&p_205, 0, sizeof(char*));
memset(&sline_206, 0, sizeof(int));
memset(&no_comma_207, 0, sizeof(_Bool));
memset(&no_output_err_208, 0, sizeof(_Bool));
memset(&no_output_come_code_209, 0, sizeof(_Bool));
right_value298 = (void*)0;
memset(&node_210, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
memset(&node2_211, 0, sizeof(struct sNode*));
right_value300 = (void*)0;
memset(&node_212, 0, sizeof(struct sNode*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
right_value303 = (void*)0;
memset(&node_216, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&node_218, 0, sizeof(struct sNode*));
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&node_220, 0, sizeof(struct sNode*));
right_value321 = (void*)0;
    # 570 "05pre_op.c"
    skip_spaces_and_lf(info);
    # 572 "05pre_op.c"
    refference_175=(_Bool)0;
    # 600 "05pre_op.c"
    {
        # 574 "05pre_op.c"
        p_176=info->p;
        # 575 "05pre_op.c"
        sline_177=info->sline;
        # 596 "05pre_op.c"
        # 577 "05pre_op.c"
        if(_if_conditional236=*info->p==38,        _if_conditional236) {
            # 578 "05pre_op.c"
            info->p++;
            # 579 "05pre_op.c"
            skip_spaces_and_lf(info);
            # 594 "05pre_op.c"
            # 581 "05pre_op.c"
            if(_if_conditional237=xisalpha(*info->p)||*info->p==95,            _if_conditional237) {
                # 582 "05pre_op.c"
                refference_175=(_Bool)1;
            }
            else {
                # 594 "05pre_op.c"
                # 584 "05pre_op.c"
                if(_if_conditional238=*info->p==40,                _if_conditional238) {
                    # 590 "05pre_op.c"
                    while(_while_condtional26=*info->p==40,                    _while_condtional26) {
                        # 587 "05pre_op.c"
                        info->p++;
                        # 587 "05pre_op.c"
                        skip_spaces_and_lf(info);
                    }
                    # 593 "05pre_op.c"
                    # 590 "05pre_op.c"
                    if(_if_conditional239=xisalpha(*info->p)||*info->p==95,                    _if_conditional239) {
                        # 591 "05pre_op.c"
                        refference_175=(_Bool)1;
                    }
                }
            }
        }
        # 596 "05pre_op.c"
        info->p=p_176;
        # 597 "05pre_op.c"
        info->sline=sline_177;
    }
    # 600 "05pre_op.c"
    parse_sharp_v5(info);
    # 817 "05pre_op.c"
    # 602 "05pre_op.c"
    if(_if_conditional240=*info->p==123,    _if_conditional240) {
        # 603 "05pre_op.c"
        __result163__ = __result_obj__ = ((struct sNode*)(right_value231=parse_normal_block(info)));
        if(right_value231) { right_value231 = come_decrement_ref_count2(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result163__;
    }
    else {
        # 817 "05pre_op.c"
        # 605 "05pre_op.c"
        if(_if_conditional241=*info->p==33,        _if_conditional241) {
            # 606 "05pre_op.c"
            info->p++;
            # 607 "05pre_op.c"
            skip_spaces_and_lf(info);
            # 609 "05pre_op.c"
            node_178=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=expression_node_v99(info))));
            if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 611 "05pre_op.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 611, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value234=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value233=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 611, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_178),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLogicalDenial_finalize;
            _inf_value3->clone=(void*)sLogicalDenial_clone;
            _inf_value3->compile=(void*)sLogicalDenial_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sLogicalDenial_terminated;
            _inf_value3->kind=(void*)sLogicalDenial_kind;
            __result166__ = __result_obj__ = ((struct sNode*)(right_value238=_inf_value3));
            if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value233,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value234,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result166__;
            if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 817 "05pre_op.c"
            # 613 "05pre_op.c"
            if(_if_conditional248=*info->p==45&&*(info->p+1)==45,            _if_conditional248) {
                # 614 "05pre_op.c"
                info->p+=2;
                # 615 "05pre_op.c"
                skip_spaces_and_lf(info);
                # 617 "05pre_op.c"
                node_180=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=expression_node_v99(info))));
                if(right_value239) { right_value239 = come_decrement_ref_count2(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 619 "05pre_op.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 619, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value241=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value240=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 619, "sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_180),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value4->clone=(void*)sMinusMinusNode2_clone;
                _inf_value4->compile=(void*)sMinusMinusNode2_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sMinusMinusNode2_terminated;
                _inf_value4->kind=(void*)sMinusMinusNode2_kind;
                __result169__ = __result_obj__ = ((struct sNode*)(right_value245=_inf_value4));
                if(node_180) { node_180 = come_decrement_ref_count2(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value240,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value241,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result169__;
                if(node_180) { node_180 = come_decrement_ref_count2(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 817 "05pre_op.c"
                # 621 "05pre_op.c"
                if(_if_conditional255=*info->p==45,                _if_conditional255) {
                    # 622 "05pre_op.c"
                    info->p++;
                    # 623 "05pre_op.c"
                    skip_spaces_and_lf(info);
                    # 625 "05pre_op.c"
                    node_182=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=expression_node_v99(info))));
                    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 627 "05pre_op.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 627, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sMinusNode2*)(right_value248=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value247=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 627, "sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_182),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sMinusNode2_finalize;
                    _inf_value5->clone=(void*)sMinusNode2_clone;
                    _inf_value5->compile=(void*)sMinusNode2_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sMinusNode2_terminated;
                    _inf_value5->kind=(void*)sMinusNode2_kind;
                    __result172__ = __result_obj__ = ((struct sNode*)(right_value252=_inf_value5));
                    if(node_182) { node_182 = come_decrement_ref_count2(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value247,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value248,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result172__;
                    if(node_182) { node_182 = come_decrement_ref_count2(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 817 "05pre_op.c"
                    # 629 "05pre_op.c"
                    if(_if_conditional262=*info->p==43&&*(info->p+1)==43,                    _if_conditional262) {
                        # 630 "05pre_op.c"
                        info->p+=2;
                        # 631 "05pre_op.c"
                        skip_spaces_and_lf(info);
                        # 633 "05pre_op.c"
                        node_184=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=expression_node_v99(info))));
                        if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 635 "05pre_op.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 635, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value255=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value254=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 635, "sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_184),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value6->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value6->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sPlusPlusNode2_terminated;
                        _inf_value6->kind=(void*)sPlusPlusNode2_kind;
                        __result175__ = __result_obj__ = ((struct sNode*)(right_value259=_inf_value6));
                        if(node_184) { node_184 = come_decrement_ref_count2(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value254,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value255,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result175__;
                        if(node_184) { node_184 = come_decrement_ref_count2(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 817 "05pre_op.c"
                        # 637 "05pre_op.c"
                        if(_if_conditional269=*info->p==126,                        _if_conditional269) {
                            # 638 "05pre_op.c"
                            info->p++;
                            # 639 "05pre_op.c"
                            skip_spaces_and_lf(info);
                            # 641 "05pre_op.c"
                            node_186=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=expression_node_v99(info))));
                            if(right_value260) { right_value260 = come_decrement_ref_count2(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 643 "05pre_op.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 643, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sComplement*)(right_value262=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value261=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05pre_op.c", 643, "sComplement")))),(struct sNode*)come_increment_ref_count(node_186),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sComplement_finalize;
                            _inf_value7->clone=(void*)sComplement_clone;
                            _inf_value7->compile=(void*)sComplement_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sComplement_terminated;
                            _inf_value7->kind=(void*)sComplement_kind;
                            __result178__ = __result_obj__ = ((struct sNode*)(right_value266=_inf_value7));
                            if(node_186) { node_186 = come_decrement_ref_count2(node_186, ((struct sNode*)node_186)->finalize, ((struct sNode*)node_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value261,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value262,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result178__;
                            if(node_186) { node_186 = come_decrement_ref_count2(node_186, ((struct sNode*)node_186)->finalize, ((struct sNode*)node_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 817 "05pre_op.c"
                            # 647 "05pre_op.c"
                            if(_if_conditional276=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),                            _if_conditional276) {
                                # 648 "05pre_op.c"
                                info->p+=2;
                                # 650 "05pre_op.c"
                                node_188=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=get_hex_number((_Bool)0,info))));
                                if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 652 "05pre_op.c"
                                __dec_obj102=node_188;
                                node_188=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_188),info))));
                                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 654 "05pre_op.c"
                                __result179__ = __result_obj__ = node_188;
                                if(node_188) { node_188 = come_decrement_ref_count2(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result179__;
                                if(node_188) { node_188 = come_decrement_ref_count2(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 817 "05pre_op.c"
                                # 657 "05pre_op.c"
                                if(_if_conditional277=*info->p==48&&xisdigit(*(info->p+1)),                                _if_conditional277) {
                                    # 658 "05pre_op.c"
                                    info->p++;
                                    # 660 "05pre_op.c"
                                    node_189=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=get_oct_number(info))));
                                    if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 662 "05pre_op.c"
                                    __dec_obj103=node_189;
                                    node_189=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_189),info))));
                                    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 664 "05pre_op.c"
                                    __result180__ = __result_obj__ = node_189;
                                    if(node_189) { node_189 = come_decrement_ref_count2(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    return __result180__;
                                    if(node_189) { node_189 = come_decrement_ref_count2(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 817 "05pre_op.c"
                                    # 666 "05pre_op.c"
                                    if(_if_conditional278=xisdigit(*info->p),                                    _if_conditional278) {
                                        # 667 "05pre_op.c"
                                        node_190=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=get_number((_Bool)0,info))));
                                        if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 669 "05pre_op.c"
                                        __dec_obj104=node_190;
                                        node_190=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_190),info))));
                                        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 671 "05pre_op.c"
                                        __result181__ = __result_obj__ = node_190;
                                        if(node_190) { node_190 = come_decrement_ref_count2(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        return __result181__;
                                        if(node_190) { node_190 = come_decrement_ref_count2(node_190, ((struct sNode*)node_190)->finalize, ((struct sNode*)node_190)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 817 "05pre_op.c"
                                        # 673 "05pre_op.c"
                                        if(_if_conditional279=*info->p==45&&xisdigit(*(info->p+1)),                                        _if_conditional279) {
                                            # 674 "05pre_op.c"
                                            info->p++;
                                            # 676 "05pre_op.c"
                                            node_191=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=get_number((_Bool)1,info))));
                                            if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 678 "05pre_op.c"
                                            __dec_obj105=node_191;
                                            node_191=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_191),info))));
                                            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            # 680 "05pre_op.c"
                                            __result182__ = __result_obj__ = node_191;
                                            if(node_191) { node_191 = come_decrement_ref_count2(node_191, ((struct sNode*)node_191)->finalize, ((struct sNode*)node_191)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            return __result182__;
                                            if(node_191) { node_191 = come_decrement_ref_count2(node_191, ((struct sNode*)node_191)->finalize, ((struct sNode*)node_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            # 817 "05pre_op.c"
                                            # 682 "05pre_op.c"
                                            if(_if_conditional280=(*info->p==92&&*(info->p+1)==42)||*info->p==42,                                            _if_conditional280) {
                                                # 683 "05pre_op.c"
                                                # 695 "05pre_op.c"
                                                # 684 "05pre_op.c"
                                                if(_if_conditional281=*info->p==92,                                                _if_conditional281) {
                                                    # 685 "05pre_op.c"
                                                    info->p+=2;
                                                    # 686 "05pre_op.c"
                                                    skip_spaces_and_lf(info);
                                                    # 687 "05pre_op.c"
                                                    quote_192=(_Bool)1;
                                                }
                                                else {
                                                    # 690 "05pre_op.c"
                                                    info->p++;
                                                    # 691 "05pre_op.c"
                                                    skip_spaces_and_lf(info);
                                                    # 692 "05pre_op.c"
                                                    quote_192=(_Bool)0;
                                                }
                                                # 695 "05pre_op.c"
                                                no_assign_193=info->no_assign;
                                                # 696 "05pre_op.c"
                                                info->no_assign=(_Bool)1;
                                                # 697 "05pre_op.c"
                                                value_194=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=expression_node_v99(info))));
                                                if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 698 "05pre_op.c"
                                                info->no_assign=no_assign_193;
                                                # 701 "05pre_op.c"
                                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 701, "struct sNode");
                                                _inf_obj_value8=come_increment_ref_count(((struct sDerefferenceNode*)(right_value277=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value276=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 700, "sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_194),quote_192,info))));
                                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                                _inf_value8->finalize=(void*)sDerefferenceNode_finalize;
                                                _inf_value8->clone=(void*)sDerefferenceNode_clone;
                                                _inf_value8->compile=(void*)sDerefferenceNode_compile;
                                                _inf_value8->sline=(void*)sNodeBase_sline;
                                                _inf_value8->sname=(void*)sNodeBase_sname;
                                                _inf_value8->terminated=(void*)sDerefferenceNode_terminated;
                                                _inf_value8->kind=(void*)sDerefferenceNode_kind;
                                                __result185__ = __result_obj__ = ((struct sNode*)(right_value281=_inf_value8));
                                                if(value_194) { value_194 = come_decrement_ref_count2(value_194, ((struct sNode*)value_194)->finalize, ((struct sNode*)value_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(right_value276,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value277,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result185__;
                                                if(value_194) { value_194 = come_decrement_ref_count2(value_194, ((struct sNode*)value_194)->finalize, ((struct sNode*)value_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 817 "05pre_op.c"
                                                # 702 "05pre_op.c"
                                                if(_if_conditional289=*info->p==38&&refference_175,                                                _if_conditional289) {
                                                    # 703 "05pre_op.c"
                                                    info->p++;
                                                    # 704 "05pre_op.c"
                                                    skip_spaces_and_lf(info);
                                                    # 706 "05pre_op.c"
                                                    value_196=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=expression_node_v99(info))));
                                                    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 708 "05pre_op.c"
                                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 708, "struct sNode");
                                                    _inf_obj_value9=come_increment_ref_count(((struct sRefferenceNode*)(right_value284=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value283=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 708, "sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_196),info))));
                                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                                    _inf_value9->finalize=(void*)sRefferenceNode_finalize;
                                                    _inf_value9->clone=(void*)sRefferenceNode_clone;
                                                    _inf_value9->compile=(void*)sRefferenceNode_compile;
                                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                                    _inf_value9->terminated=(void*)sRefferenceNode_terminated;
                                                    _inf_value9->kind=(void*)sRefferenceNode_kind;
                                                    __result188__ = __result_obj__ = ((struct sNode*)(right_value288=_inf_value9));
                                                    if(value_196) { value_196 = come_decrement_ref_count2(value_196, ((struct sNode*)value_196)->finalize, ((struct sNode*)value_196)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value283,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value284,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result188__;
                                                    if(value_196) { value_196 = come_decrement_ref_count2(value_196, ((struct sNode*)value_196)->finalize, ((struct sNode*)value_196)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 817 "05pre_op.c"
                                                    # 710 "05pre_op.c"
                                                    if(_if_conditional296=*info->p==33,                                                    _if_conditional296) {
                                                        # 711 "05pre_op.c"
                                                        info->p++;
                                                        # 712 "05pre_op.c"
                                                        skip_spaces_and_lf(info);
                                                        # 714 "05pre_op.c"
                                                        value_198=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=expression_node_v99(info))));
                                                        if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 716 "05pre_op.c"
                                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 716, "struct sNode");
                                                        _inf_obj_value10=come_increment_ref_count(((struct sReverseNode*)(right_value291=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value290=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 716, "sReverseNode")))),(struct sNode*)come_increment_ref_count(value_198),info))));
                                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                                        _inf_value10->finalize=(void*)sReverseNode_finalize;
                                                        _inf_value10->clone=(void*)sReverseNode_clone;
                                                        _inf_value10->compile=(void*)sReverseNode_compile;
                                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                                        _inf_value10->terminated=(void*)sReverseNode_terminated;
                                                        _inf_value10->kind=(void*)sReverseNode_kind;
                                                        __result191__ = __result_obj__ = ((struct sNode*)(right_value295=_inf_value10));
                                                        if(value_198) { value_198 = come_decrement_ref_count2(value_198, ((struct sNode*)value_198)->finalize, ((struct sNode*)value_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer3(right_value290,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value291,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result191__;
                                                        if(value_198) { value_198 = come_decrement_ref_count2(value_198, ((struct sNode*)value_198)->finalize, ((struct sNode*)value_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        # 817 "05pre_op.c"
                                                        # 718 "05pre_op.c"
                                                        if(_if_conditional303=*info->p==40,                                                        _if_conditional303) {
                                                            # 719 "05pre_op.c"
                                                            info->p++;
                                                            # 720 "05pre_op.c"
                                                            skip_spaces_and_lf(info);
                                                            # 723 "05pre_op.c"
                                                            cast_expression_flag_200=(_Bool)0;
                                                            # 742 "05pre_op.c"
                                                            {
                                                                # 725 "05pre_op.c"
                                                                p_201=info->p;
                                                                # 726 "05pre_op.c"
                                                                sline_202=info->sline;
                                                                # 728 "05pre_op.c"
                                                                word_203=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(""))));
                                                                right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 733 "05pre_op.c"
                                                                # 729 "05pre_op.c"
                                                                if(_if_conditional304=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional304) {
                                                                    # 730 "05pre_op.c"
                                                                    __dec_obj112=word_203;
                                                                    word_203=(char*)come_increment_ref_count(((char*)(right_value297=parse_word(info))));
                                                                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                # 737 "05pre_op.c"
                                                                # 733 "05pre_op.c"
                                                                if(_if_conditional305=is_type_name(word_203,info),                                                                _if_conditional305) {
                                                                    # 734 "05pre_op.c"
                                                                    cast_expression_flag_200=(_Bool)1;
                                                                }
                                                                # 737 "05pre_op.c"
                                                                info->p=p_201;
                                                                # 738 "05pre_op.c"
                                                                info->sline=sline_202;
                                                                word_203 = come_decrement_ref_count2(word_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            # 742 "05pre_op.c"
                                                            tuple_expression_flag_204=(_Bool)0;
                                                            # 769 "05pre_op.c"
                                                            {
                                                                # 744 "05pre_op.c"
                                                                p_205=info->p;
                                                                # 745 "05pre_op.c"
                                                                sline_206=info->sline;
                                                                # 747 "05pre_op.c"
                                                                no_comma_207=info->no_comma;
                                                                # 748 "05pre_op.c"
                                                                info->no_comma=(_Bool)1;
                                                                # 749 "05pre_op.c"
                                                                no_output_err_208=info->no_output_err;
                                                                # 750 "05pre_op.c"
                                                                info->no_output_err=(_Bool)1;
                                                                # 751 "05pre_op.c"
                                                                no_output_come_code_209=info->no_output_come_code;
                                                                # 752 "05pre_op.c"
                                                                info->no_output_come_code=(_Bool)1;
                                                                # 754 "05pre_op.c"
                                                                node_210=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=expression_v13(info))));
                                                                if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 755 "05pre_op.c"
                                                                node2_211=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_210),info))));
                                                                if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 757 "05pre_op.c"
                                                                info->no_comma=no_comma_207;
                                                                # 758 "05pre_op.c"
                                                                info->no_output_err=no_output_err_208;
                                                                # 759 "05pre_op.c"
                                                                info->no_output_come_code=no_output_come_code_209;
                                                                # 765 "05pre_op.c"
                                                                # 761 "05pre_op.c"
                                                                if(_if_conditional306=*info->p==44,                                                                _if_conditional306) {
                                                                    # 762 "05pre_op.c"
                                                                    tuple_expression_flag_204=(_Bool)1;
                                                                }
                                                                # 765 "05pre_op.c"
                                                                info->p=p_205;
                                                                # 766 "05pre_op.c"
                                                                info->sline=sline_206;
                                                                if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                if(node2_211) { node2_211 = come_decrement_ref_count2(node2_211, ((struct sNode*)node2_211)->finalize, ((struct sNode*)node2_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            # 808 "05pre_op.c"
                                                            # 769 "05pre_op.c"
                                                            if(_if_conditional307=!gComeC&&tuple_expression_flag_204,                                                            _if_conditional307) {
                                                                # 770 "05pre_op.c"
                                                                node_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=parse_tuple(info))));
                                                                if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 772 "05pre_op.c"
                                                                __dec_obj113=node_212;
                                                                node_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_212),info))));
                                                                if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 774 "05pre_op.c"
                                                                __result192__ = __result_obj__ = node_212;
                                                                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                return __result192__;
                                                                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                # 808 "05pre_op.c"
                                                                # 776 "05pre_op.c"
                                                                if(cast_expression_flag_200) {
                                                                    # 777 "05pre_op.c"
                                                                    parse_sharp_v5(info);
                                                                    # 778 "05pre_op.c"
                                                                    multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value302=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                    type_213=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                                                                    name_214=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                                                                    err_215=multiple_assign_var1->v3;
                                                                    come_call_finalizer3(right_value302,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    # 785 "05pre_op.c"
                                                                    # 780 "05pre_op.c"
                                                                    if(_if_conditional311=!err_215,                                                                    _if_conditional311) {
                                                                        # 781 "05pre_op.c"
                                                                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                                        # 782 "05pre_op.c"
                                                                        exit(2);
                                                                    }
                                                                    # 785 "05pre_op.c"
                                                                    parse_sharp_v5(info);
                                                                    # 786 "05pre_op.c"
                                                                    expected_next_character(41,info);
                                                                    # 788 "05pre_op.c"
                                                                    node_216=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=expression_node_v99(info))));
                                                                    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    # 790 "05pre_op.c"
                                                                    __dec_obj114=node_216;
                                                                    node_216=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_216),info))));
                                                                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
                                                                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    # 792 "05pre_op.c"
                                                                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 792, "struct sNode");
                                                                    _inf_obj_value11=come_increment_ref_count(((struct sCastNode*)(right_value306=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value305=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 792, "sCastNode")))),type_213,node_216,info))));
                                                                    _inf_value11->_protocol_obj=_inf_obj_value11;
                                                                    _inf_value11->finalize=(void*)sCastNode_finalize;
                                                                    _inf_value11->clone=(void*)sCastNode_clone;
                                                                    _inf_value11->compile=(void*)sCastNode_compile;
                                                                    _inf_value11->sline=(void*)sNodeBase_sline;
                                                                    _inf_value11->sname=(void*)sNodeBase_sname;
                                                                    _inf_value11->terminated=(void*)sCastNode_terminated;
                                                                    _inf_value11->kind=(void*)sCastNode_kind;
                                                                    __result195__ = __result_obj__ = ((struct sNode*)(right_value311=_inf_value11));
                                                                    come_call_finalizer3(type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    come_call_finalizer3(right_value305,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer3(right_value306,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result195__;
                                                                    come_call_finalizer3(type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    # 795 "05pre_op.c"
                                                                    parse_sharp_v5(info);
                                                                    # 796 "05pre_op.c"
                                                                    node_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=expression_v13(info))));
                                                                    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    # 797 "05pre_op.c"
                                                                    parse_sharp_v5(info);
                                                                    # 799 "05pre_op.c"
                                                                    expected_next_character(41,info);
                                                                    # 800 "05pre_op.c"
                                                                    parse_sharp_v5(info);
                                                                    # 802 "05pre_op.c"
                                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 802, "struct sNode");
                                                                    _inf_obj_value12=come_increment_ref_count(((struct sParenNode*)(right_value314=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value313=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 802, "sParenNode")))),node_218,info))));
                                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                                    _inf_value12->finalize=(void*)sParenNode_finalize;
                                                                    _inf_value12->clone=(void*)sParenNode_clone;
                                                                    _inf_value12->compile=(void*)sParenNode_compile;
                                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                                    _inf_value12->terminated=(void*)sParenNode_terminated;
                                                                    _inf_value12->kind=(void*)sParenNode_kind;
                                                                    __dec_obj120=node_218;
                                                                    node_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=_inf_value12)));
                                                                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                                                                    come_call_finalizer3(right_value313,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer3(right_value314,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    # 804 "05pre_op.c"
                                                                    __dec_obj121=node_218;
                                                                    node_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_218),info))));
                                                                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
                                                                    if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    # 806 "05pre_op.c"
                                                                    __result198__ = __result_obj__ = node_218;
                                                                    if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    return __result198__;
                                                                    if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            # 810 "05pre_op.c"
                                                            node_220=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=expression_node_v97(info))));
                                                            if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            # 812 "05pre_op.c"
                                                            __dec_obj122=node_220;
                                                            node_220=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_220),info))));
                                                            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            # 814 "05pre_op.c"
                                                            __result199__ = __result_obj__ = node_220;
                                                            if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            return __result199__;
                                                            if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    # 817 "05pre_op.c"
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    # 818 "05pre_op.c"
    exit(2);
    # 820 "05pre_op.c"
    __result200__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result200__;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional242;
_Bool _if_conditional243;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sLogicalDenial_finalize"
                # 0 "sLogicalDenial_finalize"
                if(_if_conditional242=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional242) {
                    # 0 "sLogicalDenial_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sLogicalDenial_finalize"
                # 1 "sLogicalDenial_finalize"
                if(_if_conditional243=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional243) {
                    # 1 "sLogicalDenial_finalize"
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional244;
struct sLogicalDenial* __result164__;
void* right_value235;
struct sLogicalDenial* result_179;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value236;
char* __dec_obj92;
_Bool _if_conditional247;
void* right_value237;
struct sNode* __dec_obj93;
struct sLogicalDenial* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
memset(&result_179, 0, sizeof(struct sLogicalDenial*));
right_value236 = (void*)0;
right_value237 = (void*)0;
                # 3 "sLogicalDenial_clone"
                # 2 "sLogicalDenial_clone"
                if(_if_conditional244=self==(void*)0,                _if_conditional244) {
                    # 2 "sLogicalDenial_clone"
                    __result164__ = __result_obj__ = (void*)0;
                    return __result164__;
                }
                # 3 "sLogicalDenial_clone"
                result_179=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value235=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                come_call_finalizer3(right_value235,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sLogicalDenial_clone"
                # 4 "sLogicalDenial_clone"
                if(_if_conditional245=self!=((void*)0),                _if_conditional245) {
                    # 4 "sLogicalDenial_clone"
                    result_179->sline=self->sline;
                }
                # 6 "sLogicalDenial_clone"
                # 5 "sLogicalDenial_clone"
                if(_if_conditional246=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional246) {
                    # 5 "sLogicalDenial_clone"
                    __dec_obj92=result_179->sname;
                    result_179->sname=(char*)come_increment_ref_count(((char*)(right_value236=string_clone(self->sname))));
                    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sLogicalDenial_clone"
                # 6 "sLogicalDenial_clone"
                if(_if_conditional247=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional247) {
                    # 6 "sLogicalDenial_clone"
                    __dec_obj93=result_179->value;
                    result_179->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(self->value))));
                    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 7 "sLogicalDenial_clone"
                __result165__ = __result_obj__ = result_179;
                come_call_finalizer3(result_179,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
                return __result165__;
                come_call_finalizer3(result_179,sLogicalDenial_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sMinusMinusNode2_finalize"
                    # 0 "sMinusMinusNode2_finalize"
                    if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional249) {
                        # 0 "sMinusMinusNode2_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sMinusMinusNode2_finalize"
                    # 1 "sMinusMinusNode2_finalize"
                    if(_if_conditional250=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional250) {
                        # 1 "sMinusMinusNode2_finalize"
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional251;
struct sMinusMinusNode2* __result167__;
void* right_value242;
struct sMinusMinusNode2* result_181;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value243;
char* __dec_obj94;
_Bool _if_conditional254;
void* right_value244;
struct sNode* __dec_obj95;
struct sMinusMinusNode2* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
memset(&result_181, 0, sizeof(struct sMinusMinusNode2*));
right_value243 = (void*)0;
right_value244 = (void*)0;
                    # 3 "sMinusMinusNode2_clone"
                    # 2 "sMinusMinusNode2_clone"
                    if(_if_conditional251=self==(void*)0,                    _if_conditional251) {
                        # 2 "sMinusMinusNode2_clone"
                        __result167__ = __result_obj__ = (void*)0;
                        return __result167__;
                    }
                    # 3 "sMinusMinusNode2_clone"
                    result_181=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value242=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    come_call_finalizer3(right_value242,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sMinusMinusNode2_clone"
                    # 4 "sMinusMinusNode2_clone"
                    if(_if_conditional252=self!=((void*)0),                    _if_conditional252) {
                        # 4 "sMinusMinusNode2_clone"
                        result_181->sline=self->sline;
                    }
                    # 6 "sMinusMinusNode2_clone"
                    # 5 "sMinusMinusNode2_clone"
                    if(_if_conditional253=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional253) {
                        # 5 "sMinusMinusNode2_clone"
                        __dec_obj94=result_181->sname;
                        result_181->sname=(char*)come_increment_ref_count(((char*)(right_value243=string_clone(self->sname))));
                        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sMinusMinusNode2_clone"
                    # 6 "sMinusMinusNode2_clone"
                    if(_if_conditional254=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional254) {
                        # 6 "sMinusMinusNode2_clone"
                        __dec_obj95=result_181->value;
                        result_181->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(self->value))));
                        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sMinusMinusNode2_clone"
                    __result168__ = __result_obj__ = result_181;
                    come_call_finalizer3(result_181,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                    return __result168__;
                    come_call_finalizer3(result_181,sMinusMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sMinusNode2_finalize"
                        # 0 "sMinusNode2_finalize"
                        if(_if_conditional256=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional256) {
                            # 0 "sMinusNode2_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sMinusNode2_finalize"
                        # 1 "sMinusNode2_finalize"
                        if(_if_conditional257=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional257) {
                            # 1 "sMinusNode2_finalize"
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional258;
struct sMinusNode2* __result170__;
void* right_value249;
struct sMinusNode2* result_183;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value250;
char* __dec_obj96;
_Bool _if_conditional261;
void* right_value251;
struct sNode* __dec_obj97;
struct sMinusNode2* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value249 = (void*)0;
memset(&result_183, 0, sizeof(struct sMinusNode2*));
right_value250 = (void*)0;
right_value251 = (void*)0;
                        # 3 "sMinusNode2_clone"
                        # 2 "sMinusNode2_clone"
                        if(_if_conditional258=self==(void*)0,                        _if_conditional258) {
                            # 2 "sMinusNode2_clone"
                            __result170__ = __result_obj__ = (void*)0;
                            return __result170__;
                        }
                        # 3 "sMinusNode2_clone"
                        result_183=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value249=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        come_call_finalizer3(right_value249,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sMinusNode2_clone"
                        # 4 "sMinusNode2_clone"
                        if(_if_conditional259=self!=((void*)0),                        _if_conditional259) {
                            # 4 "sMinusNode2_clone"
                            result_183->sline=self->sline;
                        }
                        # 6 "sMinusNode2_clone"
                        # 5 "sMinusNode2_clone"
                        if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional260) {
                            # 5 "sMinusNode2_clone"
                            __dec_obj96=result_183->sname;
                            result_183->sname=(char*)come_increment_ref_count(((char*)(right_value250=string_clone(self->sname))));
                            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sMinusNode2_clone"
                        # 6 "sMinusNode2_clone"
                        if(_if_conditional261=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional261) {
                            # 6 "sMinusNode2_clone"
                            __dec_obj97=result_183->value;
                            result_183->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value251=sNode_clone(self->value))));
                            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value251) { right_value251 = come_decrement_ref_count2(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sMinusNode2_clone"
                        __result171__ = __result_obj__ = result_183;
                        come_call_finalizer3(result_183,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                        return __result171__;
                        come_call_finalizer3(result_183,sMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sPlusPlusNode2_finalize"
                            # 0 "sPlusPlusNode2_finalize"
                            if(_if_conditional263=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional263) {
                                # 0 "sPlusPlusNode2_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sPlusPlusNode2_finalize"
                            # 1 "sPlusPlusNode2_finalize"
                            if(_if_conditional264=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional264) {
                                # 1 "sPlusPlusNode2_finalize"
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional265;
struct sPlusPlusNode2* __result173__;
void* right_value256;
struct sPlusPlusNode2* result_185;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value257;
char* __dec_obj98;
_Bool _if_conditional268;
void* right_value258;
struct sNode* __dec_obj99;
struct sPlusPlusNode2* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
memset(&result_185, 0, sizeof(struct sPlusPlusNode2*));
right_value257 = (void*)0;
right_value258 = (void*)0;
                            # 3 "sPlusPlusNode2_clone"
                            # 2 "sPlusPlusNode2_clone"
                            if(_if_conditional265=self==(void*)0,                            _if_conditional265) {
                                # 2 "sPlusPlusNode2_clone"
                                __result173__ = __result_obj__ = (void*)0;
                                return __result173__;
                            }
                            # 3 "sPlusPlusNode2_clone"
                            result_185=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value256=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            come_call_finalizer3(right_value256,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sPlusPlusNode2_clone"
                            # 4 "sPlusPlusNode2_clone"
                            if(_if_conditional266=self!=((void*)0),                            _if_conditional266) {
                                # 4 "sPlusPlusNode2_clone"
                                result_185->sline=self->sline;
                            }
                            # 6 "sPlusPlusNode2_clone"
                            # 5 "sPlusPlusNode2_clone"
                            if(_if_conditional267=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional267) {
                                # 5 "sPlusPlusNode2_clone"
                                __dec_obj98=result_185->sname;
                                result_185->sname=(char*)come_increment_ref_count(((char*)(right_value257=string_clone(self->sname))));
                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sPlusPlusNode2_clone"
                            # 6 "sPlusPlusNode2_clone"
                            if(_if_conditional268=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional268) {
                                # 6 "sPlusPlusNode2_clone"
                                __dec_obj99=result_185->value;
                                result_185->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(self->value))));
                                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value258) { right_value258 = come_decrement_ref_count2(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sPlusPlusNode2_clone"
                            __result174__ = __result_obj__ = result_185;
                            come_call_finalizer3(result_185,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
                            return __result174__;
                            come_call_finalizer3(result_185,sPlusPlusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sComplement_finalize"
                                # 0 "sComplement_finalize"
                                if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional270) {
                                    # 0 "sComplement_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sComplement_finalize"
                                # 1 "sComplement_finalize"
                                if(_if_conditional271=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional271) {
                                    # 1 "sComplement_finalize"
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional272;
struct sComplement* __result176__;
void* right_value263;
struct sComplement* result_187;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value264;
char* __dec_obj100;
_Bool _if_conditional275;
void* right_value265;
struct sNode* __dec_obj101;
struct sComplement* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
memset(&result_187, 0, sizeof(struct sComplement*));
right_value264 = (void*)0;
right_value265 = (void*)0;
                                # 3 "sComplement_clone"
                                # 2 "sComplement_clone"
                                if(_if_conditional272=self==(void*)0,                                _if_conditional272) {
                                    # 2 "sComplement_clone"
                                    __result176__ = __result_obj__ = (void*)0;
                                    return __result176__;
                                }
                                # 3 "sComplement_clone"
                                result_187=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value263=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                come_call_finalizer3(right_value263,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sComplement_clone"
                                # 4 "sComplement_clone"
                                if(_if_conditional273=self!=((void*)0),                                _if_conditional273) {
                                    # 4 "sComplement_clone"
                                    result_187->sline=self->sline;
                                }
                                # 6 "sComplement_clone"
                                # 5 "sComplement_clone"
                                if(_if_conditional274=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional274) {
                                    # 5 "sComplement_clone"
                                    __dec_obj100=result_187->sname;
                                    result_187->sname=(char*)come_increment_ref_count(((char*)(right_value264=string_clone(self->sname))));
                                    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sComplement_clone"
                                # 6 "sComplement_clone"
                                if(_if_conditional275=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional275) {
                                    # 6 "sComplement_clone"
                                    __dec_obj101=result_187->value;
                                    result_187->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(self->value))));
                                    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sComplement_clone"
                                __result177__ = __result_obj__ = result_187;
                                come_call_finalizer3(result_187,sComplement_finalize, 0, 0, 1, 0, (void*)0);
                                return __result177__;
                                come_call_finalizer3(result_187,sComplement_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional282;
_Bool _if_conditional283;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "sDerefferenceNode_finalize"
                                                    # 0 "sDerefferenceNode_finalize"
                                                    if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional282) {
                                                        # 0 "sDerefferenceNode_finalize"
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 2 "sDerefferenceNode_finalize"
                                                    # 1 "sDerefferenceNode_finalize"
                                                    if(_if_conditional283=self!=((void*)0)&&self->value!=((void*)0),                                                    _if_conditional283) {
                                                        # 1 "sDerefferenceNode_finalize"
                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional284;
struct sDerefferenceNode* __result183__;
void* right_value278;
struct sDerefferenceNode* result_195;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value279;
char* __dec_obj106;
_Bool _if_conditional287;
void* right_value280;
struct sNode* __dec_obj107;
_Bool _if_conditional288;
struct sDerefferenceNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&result_195, 0, sizeof(struct sDerefferenceNode*));
right_value279 = (void*)0;
right_value280 = (void*)0;
                                                    # 3 "sDerefferenceNode_clone"
                                                    # 2 "sDerefferenceNode_clone"
                                                    if(_if_conditional284=self==(void*)0,                                                    _if_conditional284) {
                                                        # 2 "sDerefferenceNode_clone"
                                                        __result183__ = __result_obj__ = (void*)0;
                                                        return __result183__;
                                                    }
                                                    # 3 "sDerefferenceNode_clone"
                                                    result_195=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value278=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                                    come_call_finalizer3(right_value278,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 5 "sDerefferenceNode_clone"
                                                    # 4 "sDerefferenceNode_clone"
                                                    if(_if_conditional285=self!=((void*)0),                                                    _if_conditional285) {
                                                        # 4 "sDerefferenceNode_clone"
                                                        result_195->sline=self->sline;
                                                    }
                                                    # 6 "sDerefferenceNode_clone"
                                                    # 5 "sDerefferenceNode_clone"
                                                    if(_if_conditional286=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional286) {
                                                        # 5 "sDerefferenceNode_clone"
                                                        __dec_obj106=result_195->sname;
                                                        result_195->sname=(char*)come_increment_ref_count(((char*)(right_value279=string_clone(self->sname))));
                                                        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    # 7 "sDerefferenceNode_clone"
                                                    # 6 "sDerefferenceNode_clone"
                                                    if(_if_conditional287=self!=((void*)0)&&self->value!=((void*)0),                                                    _if_conditional287) {
                                                        # 6 "sDerefferenceNode_clone"
                                                        __dec_obj107=result_195->value;
                                                        result_195->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=sNode_clone(self->value))));
                                                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    # 8 "sDerefferenceNode_clone"
                                                    # 7 "sDerefferenceNode_clone"
                                                    if(_if_conditional288=self!=((void*)0),                                                    _if_conditional288) {
                                                        # 7 "sDerefferenceNode_clone"
                                                        result_195->mQuote=self->mQuote;
                                                    }
                                                    # 8 "sDerefferenceNode_clone"
                                                    __result184__ = __result_obj__ = result_195;
                                                    come_call_finalizer3(result_195,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result184__;
                                                    come_call_finalizer3(result_195,sDerefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sRefferenceNode_finalize"
                                                        # 0 "sRefferenceNode_finalize"
                                                        if(_if_conditional290=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional290) {
                                                            # 0 "sRefferenceNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sRefferenceNode_finalize"
                                                        # 1 "sRefferenceNode_finalize"
                                                        if(_if_conditional291=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional291) {
                                                            # 1 "sRefferenceNode_finalize"
                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional292;
struct sRefferenceNode* __result186__;
void* right_value285;
struct sRefferenceNode* result_197;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value286;
char* __dec_obj108;
_Bool _if_conditional295;
void* right_value287;
struct sNode* __dec_obj109;
struct sRefferenceNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
memset(&result_197, 0, sizeof(struct sRefferenceNode*));
right_value286 = (void*)0;
right_value287 = (void*)0;
                                                        # 3 "sRefferenceNode_clone"
                                                        # 2 "sRefferenceNode_clone"
                                                        if(_if_conditional292=self==(void*)0,                                                        _if_conditional292) {
                                                            # 2 "sRefferenceNode_clone"
                                                            __result186__ = __result_obj__ = (void*)0;
                                                            return __result186__;
                                                        }
                                                        # 3 "sRefferenceNode_clone"
                                                        result_197=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value285=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                                        come_call_finalizer3(right_value285,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sRefferenceNode_clone"
                                                        # 4 "sRefferenceNode_clone"
                                                        if(_if_conditional293=self!=((void*)0),                                                        _if_conditional293) {
                                                            # 4 "sRefferenceNode_clone"
                                                            result_197->sline=self->sline;
                                                        }
                                                        # 6 "sRefferenceNode_clone"
                                                        # 5 "sRefferenceNode_clone"
                                                        if(_if_conditional294=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional294) {
                                                            # 5 "sRefferenceNode_clone"
                                                            __dec_obj108=result_197->sname;
                                                            result_197->sname=(char*)come_increment_ref_count(((char*)(right_value286=string_clone(self->sname))));
                                                            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 7 "sRefferenceNode_clone"
                                                        # 6 "sRefferenceNode_clone"
                                                        if(_if_conditional295=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional295) {
                                                            # 6 "sRefferenceNode_clone"
                                                            __dec_obj109=result_197->value;
                                                            result_197->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(self->value))));
                                                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 7 "sRefferenceNode_clone"
                                                        __result187__ = __result_obj__ = result_197;
                                                        come_call_finalizer3(result_197,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result187__;
                                                        come_call_finalizer3(result_197,sRefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "sReverseNode_finalize"
                                                            # 0 "sReverseNode_finalize"
                                                            if(_if_conditional297=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional297) {
                                                                # 0 "sReverseNode_finalize"
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            # 2 "sReverseNode_finalize"
                                                            # 1 "sReverseNode_finalize"
                                                            if(_if_conditional298=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional298) {
                                                                # 1 "sReverseNode_finalize"
                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional299;
struct sReverseNode* __result189__;
void* right_value292;
struct sReverseNode* result_199;
_Bool _if_conditional300;
_Bool _if_conditional301;
void* right_value293;
char* __dec_obj110;
_Bool _if_conditional302;
void* right_value294;
struct sNode* __dec_obj111;
struct sReverseNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
memset(&result_199, 0, sizeof(struct sReverseNode*));
right_value293 = (void*)0;
right_value294 = (void*)0;
                                                            # 3 "sReverseNode_clone"
                                                            # 2 "sReverseNode_clone"
                                                            if(_if_conditional299=self==(void*)0,                                                            _if_conditional299) {
                                                                # 2 "sReverseNode_clone"
                                                                __result189__ = __result_obj__ = (void*)0;
                                                                return __result189__;
                                                            }
                                                            # 3 "sReverseNode_clone"
                                                            result_199=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value292=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                                            come_call_finalizer3(right_value292,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 5 "sReverseNode_clone"
                                                            # 4 "sReverseNode_clone"
                                                            if(_if_conditional300=self!=((void*)0),                                                            _if_conditional300) {
                                                                # 4 "sReverseNode_clone"
                                                                result_199->sline=self->sline;
                                                            }
                                                            # 6 "sReverseNode_clone"
                                                            # 5 "sReverseNode_clone"
                                                            if(_if_conditional301=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional301) {
                                                                # 5 "sReverseNode_clone"
                                                                __dec_obj110=result_199->sname;
                                                                result_199->sname=(char*)come_increment_ref_count(((char*)(right_value293=string_clone(self->sname))));
                                                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            # 7 "sReverseNode_clone"
                                                            # 6 "sReverseNode_clone"
                                                            if(_if_conditional302=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional302) {
                                                                # 6 "sReverseNode_clone"
                                                                __dec_obj111=result_199->value;
                                                                result_199->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(self->value))));
                                                                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            # 7 "sReverseNode_clone"
                                                            __result190__ = __result_obj__ = result_199;
                                                            come_call_finalizer3(result_199,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result190__;
                                                            come_call_finalizer3(result_199,sReverseNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "tuple3$3sTypephcharphboolp_finalize"
                                                                        # 0 "tuple3$3sTypephcharphboolp_finalize"
                                                                        if(_if_conditional309=self!=((void*)0)&&self->v1!=((void*)0),                                                                        _if_conditional309) {
                                                                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                                                                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "tuple3$3sTypephcharphboolp_finalize"
                                                                        # 1 "tuple3$3sTypephcharphboolp_finalize"
                                                                        if(_if_conditional310=self!=((void*)0)&&self->v2!=((void*)0),                                                                        _if_conditional310) {
                                                                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                                                                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "sCastNode_finalize"
                                                                        # 0 "sCastNode_finalize"
                                                                        if(_if_conditional312=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional312) {
                                                                            # 0 "sCastNode_finalize"
                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "sCastNode_finalize"
                                                                        # 1 "sCastNode_finalize"
                                                                        if(_if_conditional313=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional313) {
                                                                            # 1 "sCastNode_finalize"
                                                                            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 3 "sCastNode_finalize"
                                                                        # 2 "sCastNode_finalize"
                                                                        if(_if_conditional314=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                        _if_conditional314) {
                                                                            # 2 "sCastNode_finalize"
                                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional315;
struct sCastNode* __result193__;
void* right_value307;
struct sCastNode* result_217;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value308;
char* __dec_obj115;
_Bool _if_conditional318;
void* right_value309;
struct sType* __dec_obj116;
_Bool _if_conditional319;
void* right_value310;
struct sNode* __dec_obj117;
struct sCastNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
memset(&result_217, 0, sizeof(struct sCastNode*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
                                                                        # 3 "sCastNode_clone"
                                                                        # 2 "sCastNode_clone"
                                                                        if(_if_conditional315=self==(void*)0,                                                                        _if_conditional315) {
                                                                            # 2 "sCastNode_clone"
                                                                            __result193__ = __result_obj__ = (void*)0;
                                                                            return __result193__;
                                                                        }
                                                                        # 3 "sCastNode_clone"
                                                                        result_217=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value307=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                                        come_call_finalizer3(right_value307,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        # 5 "sCastNode_clone"
                                                                        # 4 "sCastNode_clone"
                                                                        if(_if_conditional316=self!=((void*)0),                                                                        _if_conditional316) {
                                                                            # 4 "sCastNode_clone"
                                                                            result_217->sline=self->sline;
                                                                        }
                                                                        # 6 "sCastNode_clone"
                                                                        # 5 "sCastNode_clone"
                                                                        if(_if_conditional317=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional317) {
                                                                            # 5 "sCastNode_clone"
                                                                            __dec_obj115=result_217->sname;
                                                                            result_217->sname=(char*)come_increment_ref_count(((char*)(right_value308=string_clone(self->sname))));
                                                                            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        # 7 "sCastNode_clone"
                                                                        # 6 "sCastNode_clone"
                                                                        if(_if_conditional318=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional318) {
                                                                            # 6 "sCastNode_clone"
                                                                            __dec_obj116=result_217->mType;
                                                                            result_217->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=sType_clone(self->mType))));
                                                                            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        # 8 "sCastNode_clone"
                                                                        # 7 "sCastNode_clone"
                                                                        if(_if_conditional319=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                        _if_conditional319) {
                                                                            # 7 "sCastNode_clone"
                                                                            __dec_obj117=result_217->mLeft;
                                                                            result_217->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=sNode_clone(self->mLeft))));
                                                                            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
                                                                            if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        }
                                                                        # 8 "sCastNode_clone"
                                                                        __result194__ = __result_obj__ = result_217;
                                                                        come_call_finalizer3(result_217,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result194__;
                                                                        come_call_finalizer3(result_217,sCastNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional320;
_Bool _if_conditional321;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        # 1 "sParenNode_finalize"
                                                                        # 0 "sParenNode_finalize"
                                                                        if(_if_conditional320=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional320) {
                                                                            # 0 "sParenNode_finalize"
                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 2 "sParenNode_finalize"
                                                                        # 1 "sParenNode_finalize"
                                                                        if(_if_conditional321=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                        _if_conditional321) {
                                                                            # 1 "sParenNode_finalize"
                                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional322;
struct sParenNode* __result196__;
void* right_value315;
struct sParenNode* result_219;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value316;
char* __dec_obj118;
_Bool _if_conditional325;
void* right_value317;
struct sNode* __dec_obj119;
struct sParenNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
memset(&result_219, 0, sizeof(struct sParenNode*));
right_value316 = (void*)0;
right_value317 = (void*)0;
                                                                        # 3 "sParenNode_clone"
                                                                        # 2 "sParenNode_clone"
                                                                        if(_if_conditional322=self==(void*)0,                                                                        _if_conditional322) {
                                                                            # 2 "sParenNode_clone"
                                                                            __result196__ = __result_obj__ = (void*)0;
                                                                            return __result196__;
                                                                        }
                                                                        # 3 "sParenNode_clone"
                                                                        result_219=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value315=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                                        come_call_finalizer3(right_value315,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        # 5 "sParenNode_clone"
                                                                        # 4 "sParenNode_clone"
                                                                        if(_if_conditional323=self!=((void*)0),                                                                        _if_conditional323) {
                                                                            # 4 "sParenNode_clone"
                                                                            result_219->sline=self->sline;
                                                                        }
                                                                        # 6 "sParenNode_clone"
                                                                        # 5 "sParenNode_clone"
                                                                        if(_if_conditional324=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional324) {
                                                                            # 5 "sParenNode_clone"
                                                                            __dec_obj118=result_219->sname;
                                                                            result_219->sname=(char*)come_increment_ref_count(((char*)(right_value316=string_clone(self->sname))));
                                                                            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        # 7 "sParenNode_clone"
                                                                        # 6 "sParenNode_clone"
                                                                        if(_if_conditional325=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                        _if_conditional325) {
                                                                            # 6 "sParenNode_clone"
                                                                            __dec_obj119=result_219->mLeft;
                                                                            result_219->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(self->mLeft))));
                                                                            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
                                                                            if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        }
                                                                        # 7 "sParenNode_clone"
                                                                        __result197__ = __result_obj__ = result_219;
                                                                        come_call_finalizer3(result_219,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result197__;
                                                                        come_call_finalizer3(result_219,sParenNode_finalize, 0, 0, 0, 0, (void*)0);
}

