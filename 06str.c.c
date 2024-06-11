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
struct sStrNode
{
    char* value;
    int sline;
    char* sname;
};
struct sSStringNode
{
    char* value;
    struct list$1sNodeph* exps;
    int sline;
    char* sname;
};
struct sCharNode
{
    int value;
    int sline;
    char* sname;
};
struct sWCharNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sWStringNode
{
    unsigned int* value;
    int sline;
    char* sname;
};
struct sRegexNode
{
    char* str;
    _Bool global;
    _Bool ignore_case;
    int sline;
    char* sname;
};
struct sListNode
{
    struct list$1sNodeph* list_elements;
    int sline;
    char* sname;
};
struct sTupleNode
{
    struct list$1sNodeph* tuple_elements;
    int sline;
    char* sname;
};
struct sMapNode
{
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

static char* double_quoted_string(char* str);
char* sStrNode_kind();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
int sStrNode_sline(struct sStrNode* self, struct sInfo* info);

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info);

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
_Bool sSStringNode_terminated();

char* sSStringNode_kind();

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info);

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info);

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated();

char* sCharNode_kind();

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

int sCharNode_sline(struct sCharNode* self, struct sInfo* info);

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info);

_Bool sWCharNode_terminated();

char* sWCharNode_kind();

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info);

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated();

char* sWStringNode_kind();

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info);

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated();

char* sRegexNode_kind();

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info);

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated();

char* sListNode_kind();

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
int sListNode_sline(struct sListNode* self, struct sInfo* info);

char* sListNode_sname(struct sListNode* self, struct sInfo* info);

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated();

char* sTupleNode_kind();

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info);

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info);

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated();

char* sMapNode_kind();

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
int sMapNode_sline(struct sMapNode* self, struct sInfo* info);

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value80;
char* __dec_obj13;
struct sStrNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    # 13 "06str.c"
    __dec_obj12=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(value))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 15 "06str.c"
    self->sline=sline;
    # 16 "06str.c"
    __dec_obj13=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(info->sname))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 18 "06str.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer2(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStrNode_terminated(){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 23 "06str.c"
    __result53__ = (_Bool)0;
    return __result53__;
}

static char* double_quoted_string(char* str){
void* __result_obj__;
void* right_value81;
void* right_value82;
struct buffer* buf_47;
char* p_48;
_Bool _while_condtional7;
_Bool _if_conditional21;
void* right_value83;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
memset(&p_48, 0, sizeof(char*));
right_value83 = (void*)0;
    # 28 "06str.c"
    buf_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value81=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 29 "06str.c"
    p_48=str;
    # 43 "06str.c"
    while(_while_condtional7=*p_48,    _while_condtional7) {
        # 41 "06str.c"
        # 31 "06str.c"
        if(_if_conditional21=*p_48==34,        _if_conditional21) {
            # 32 "06str.c"
            p_48++;
            # 34 "06str.c"
            buffer_append_char(buf_47,92);
            # 35 "06str.c"
            buffer_append_char(buf_47,34);
        }
        else {
            # 38 "06str.c"
            buffer_append_char(buf_47,*p_48);
            # 39 "06str.c"
            p_48++;
        }
    }
    # 43 "06str.c"
    __result54__ = __result_obj__ = ((char*)(right_value83=buffer_to_string(buf_47)));
    come_call_finalizer2(buffer_finalize,buf_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
    come_call_finalizer2(buffer_finalize,buf_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sStrNode_kind(){
void* __result_obj__;
void* right_value84;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    # 48 "06str.c"
    __result55__ = __result_obj__ = ((char*)(right_value84=__builtin_string("sStrNode")));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value85;
struct CVALUE* come_value_49;
void* right_value86;
char* __dec_obj14;
void* right_value87;
void* right_value88;
struct sType* __dec_obj15;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
    # 53 "06str.c"
    come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 55 "06str.c"
    __dec_obj14=come_value_49->c_value;
    come_value_49->c_value=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("\"%s\"",self->value))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 56 "06str.c"
    __dec_obj15=come_value_49->type;
    come_value_49->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value87=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 58 "06str.c"
    come_value_49->var=((void*)0);
    # 60 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_49));
    # 62 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_49->c_value);
    # 64 "06str.c"
    __result57__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result57__;
    come_call_finalizer2(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                    come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional26=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional26) {
                    # 1 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional28) {
                    # 2 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional31=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional31) {
                    # 5 "sType_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional33) {
                    # 6 "sType_finalize"
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional34=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional34) {
                    # 7 "sType_finalize"
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional36=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional36) {
                    # 8 "sType_finalize"
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_50;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sTypeph*));
                        # 123 "./neo-c.h"
                        it_50=self->head;
                        # 129 "./neo-c.h"
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            # 125 "./neo-c.h"
                            prev_it_51=it_50;
                            # 126 "./neo-c.h"
                            it_50=it_50->next;
                            # 127 "./neo-c.h"
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sNodeph*));
                        # 123 "./neo-c.h"
                        it_52=self->head;
                        # 129 "./neo-c.h"
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            # 125 "./neo-c.h"
                            prev_it_53=it_52;
                            # 126 "./neo-c.h"
                            it_52=it_52->next;
                            # 127 "./neo-c.h"
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_54;
_Bool _while_condtional10;
struct list_item$1charph* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charph*));
                        # 123 "./neo-c.h"
                        it_54=self->head;
                        # 129 "./neo-c.h"
                        while(_while_condtional10=it_54!=((void*)0),                        _while_condtional10) {
                            # 125 "./neo-c.h"
                            prev_it_55=it_54;
                            # 126 "./neo-c.h"
                            it_54=it_54->next;
                            # 127 "./neo-c.h"
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value89;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj16;
_Bool _if_conditional43;
void* right_value90;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj17;
void* right_value91;
struct list_item$1CVALUEph* litem_58;
struct CVALUE* __dec_obj18;
struct list$1CVALUEph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
right_value90 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
right_value91 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional41=self->len==0,        _if_conditional41) {
            # 226 "./neo-c.h"
            litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value89=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_56->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_56->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj16=litem_56->item;
            litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./neo-c.h"
            self->tail=litem_56;
            # 233 "./neo-c.h"
            self->head=litem_56;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional43=self->len==1,            _if_conditional43) {
                # 236 "./neo-c.h"
                litem_57=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_57->prev=self->head;
                # 239 "./neo-c.h"
                litem_57->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj17=litem_57->item;
                litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./neo-c.h"
                self->tail=litem_57;
                # 243 "./neo-c.h"
                self->head->next=litem_57;
            }
            else {
                # 246 "./neo-c.h"
                litem_58=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_58->prev=self->tail;
                # 249 "./neo-c.h"
                litem_58->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj18=litem_58->item;
                litem_58->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./neo-c.h"
                self->tail->next=litem_58;
                # 253 "./neo-c.h"
                self->tail=litem_58;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result56__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result56__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional42=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional42) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    # 69 "06str.c"
    __result58__ = self->sline;
    return __result58__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value92;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    # 74 "06str.c"
    __result59__ = __result_obj__ = ((char*)(right_value92=__builtin_string(self->sname)));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result59__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value93;
char* __dec_obj19;
void* right_value101;
struct list$1sNodeph* __dec_obj23;
void* right_value102;
char* __dec_obj24;
struct sSStringNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
    # 88 "06str.c"
    __dec_obj19=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 89 "06str.c"
    __dec_obj23=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=list$1sNodephp_clone(exps))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 91 "06str.c"
    self->sline=sline;
    # 92 "06str.c"
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 94 "06str.c"
    __result66__ = __result_obj__ = self;
    come_call_finalizer2(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result66__;
    come_call_finalizer2(sSStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,exps, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct list$1sNodeph* __result60__;
void* right_value94;
void* right_value95;
struct list$1sNodeph* result_59;
struct list_item$1sNodeph* it_60;
_Bool _while_condtional11;
void* right_value100;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_59, 0, sizeof(struct list$1sNodeph*));
memset(&it_60, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
        # 142 "./neo-c.h"
        # 139 "./neo-c.h"
        if(_if_conditional44=self==((void*)0),        _if_conditional44) {
            # 140 "./neo-c.h"
            __result60__ = __result_obj__ = ((void*)0);
            return __result60__;
        }
        # 142 "./neo-c.h"
        result_59=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./neo-c.h"
        it_60=self->head;
        # 151 "./neo-c.h"
        while(_while_condtional11=it_60!=((void*)0),        _while_condtional11) {
            # 146 "./neo-c.h"
            list$1sNodeph_add(result_59,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=sNode_clone(it_60->item)))));
            if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 148 "./neo-c.h"
            it_60=it_60->next;
        }
        # 151 "./neo-c.h"
        __result65__ = __result_obj__ = result_59;
        come_call_finalizer2(list$1sNodephp_finalize,result_59, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result65__;
        come_call_finalizer2(list$1sNodephp_finalize,result_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./neo-c.h"
            self->head=((void*)0);
            # 105 "./neo-c.h"
            self->tail=((void*)0);
            # 106 "./neo-c.h"
            self->len=0;
            # 108 "./neo-c.h"
            __result61__ = __result_obj__ = self;
            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result61__;
            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional45;
void* right_value96;
struct list_item$1sNodeph* litem_61;
struct sNode* __dec_obj20;
_Bool _if_conditional46;
void* right_value97;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj21;
void* right_value98;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
                # 186 "./neo-c.h"
                # 155 "./neo-c.h"
                if(_if_conditional45=self->len==0,                _if_conditional45) {
                    # 156 "./neo-c.h"
                    litem_61=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./neo-c.h"
                    litem_61->prev=((void*)0);
                    # 159 "./neo-c.h"
                    litem_61->next=((void*)0);
                    # 160 "./neo-c.h"
                    __dec_obj20=litem_61->item;
                    litem_61->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                    # 162 "./neo-c.h"
                    self->tail=litem_61;
                    # 163 "./neo-c.h"
                    self->head=litem_61;
                }
                else {
                    # 186 "./neo-c.h"
                    # 165 "./neo-c.h"
                    if(_if_conditional46=self->len==1,                    _if_conditional46) {
                        # 166 "./neo-c.h"
                        litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./neo-c.h"
                        litem_62->prev=self->head;
                        # 169 "./neo-c.h"
                        litem_62->next=((void*)0);
                        # 170 "./neo-c.h"
                        __dec_obj21=litem_62->item;
                        litem_62->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                        # 172 "./neo-c.h"
                        self->tail=litem_62;
                        # 173 "./neo-c.h"
                        self->head->next=litem_62;
                    }
                    else {
                        # 176 "./neo-c.h"
                        litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./neo-c.h"
                        litem_63->prev=self->tail;
                        # 179 "./neo-c.h"
                        litem_63->next=((void*)0);
                        # 180 "./neo-c.h"
                        __dec_obj22=litem_63->item;
                        litem_63->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                        # 182 "./neo-c.h"
                        self->tail->next=litem_63;
                        # 183 "./neo-c.h"
                        self->tail=litem_63;
                    }
                }
                # 186 "./neo-c.h"
                self->len++;
                # 188 "./neo-c.h"
                __result62__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result62__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional47;
struct sNode* __result63__;
void* right_value99;
struct sNode* result_64;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&result_64, 0, sizeof(struct sNode*));
                # 3 "sNode_clone"
                # 2 "sNode_clone"
                if(_if_conditional47=self==(void*)0,                _if_conditional47) {
                    # 2 "sNode_clone"
                    __result63__ = __result_obj__ = (void*)0;
                    return __result63__;
                }
                # 3 "sNode_clone"
                result_64=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 5 "sNode_clone"
                # 4 "sNode_clone"
                if(_if_conditional48=self!=((void*)0)&&self->clone!=((void*)0),                _if_conditional48) {
                    # 4 "sNode_clone"
                    result_64->_protocol_obj=self->clone(self->_protocol_obj);
                }
                # 6 "sNode_clone"
                # 5 "sNode_clone"
                if(_if_conditional49=self!=((void*)0),                _if_conditional49) {
                    # 5 "sNode_clone"
                    result_64->finalize=self->finalize;
                }
                # 7 "sNode_clone"
                # 6 "sNode_clone"
                if(_if_conditional50=self!=((void*)0),                _if_conditional50) {
                    # 6 "sNode_clone"
                    result_64->clone=self->clone;
                }
                # 8 "sNode_clone"
                # 7 "sNode_clone"
                if(_if_conditional51=self!=((void*)0),                _if_conditional51) {
                    # 7 "sNode_clone"
                    result_64->compile=self->compile;
                }
                # 9 "sNode_clone"
                # 8 "sNode_clone"
                if(_if_conditional52=self!=((void*)0),                _if_conditional52) {
                    # 8 "sNode_clone"
                    result_64->sline=self->sline;
                }
                # 10 "sNode_clone"
                # 9 "sNode_clone"
                if(_if_conditional53=self!=((void*)0),                _if_conditional53) {
                    # 9 "sNode_clone"
                    result_64->sname=self->sname;
                }
                # 11 "sNode_clone"
                # 10 "sNode_clone"
                if(_if_conditional54=self!=((void*)0),                _if_conditional54) {
                    # 10 "sNode_clone"
                    result_64->terminated=self->terminated;
                }
                # 12 "sNode_clone"
                # 11 "sNode_clone"
                if(_if_conditional55=self!=((void*)0),                _if_conditional55) {
                    # 11 "sNode_clone"
                    result_64->kind=self->kind;
                }
                # 12 "sNode_clone"
                __result64__ = __result_obj__ = result_64;
                if(result_64) { result_64 = come_decrement_ref_count2(result_64, ((struct sNode*)result_64)->finalize, ((struct sNode*)result_64)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result64__;
                if(result_64) { result_64 = come_decrement_ref_count2(result_64, ((struct sNode*)result_64)->finalize, ((struct sNode*)result_64)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sSStringNode_terminated(){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    # 99 "06str.c"
    __result67__ = (_Bool)0;
    return __result67__;
}

char* sSStringNode_kind(){
void* __result_obj__;
void* right_value103;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
    # 104 "06str.c"
    __result68__ = __result_obj__ = ((char*)(right_value103=__builtin_string("sSStringNode")));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value104;
struct CVALUE* come_value_65;
void* right_value105;
void* right_value106;
struct buffer* buf_66;
_Bool _if_conditional60;
struct list$1sNodeph* o2_saved_67;
struct sNode* it_70;
_Bool _if_conditional65;
_Bool __result78__;
void* right_value107;
struct CVALUE* come_value_73;
void* right_value108;
char* method_name_74;
_Bool _if_conditional85;
struct sType* obj_type_77;
_Bool _if_conditional87;
struct sType* obj_type2_78;
void* right_value109;
void* right_value110;
char* __dec_obj25;
void* right_value111;
void* right_value112;
struct buffer* buf2_79;
void* right_value113;
void* right_value114;
struct sType* type_80;
void* right_value115;
void* right_value116;
char* c_value_81;
void* right_value117;
void* right_value118;
struct sType* type2_82;
void* right_value119;
char* __dec_obj26;
void* right_value120;
char* __dec_obj27;
void* right_value149;
struct sType* __dec_obj48;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&buf_66, 0, sizeof(struct buffer*));
memset(&o2_saved_67, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct sNode*));
right_value107 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value108 = (void*)0;
memset(&method_name_74, 0, sizeof(char*));
memset(&obj_type_77, 0, sizeof(struct sType*));
memset(&obj_type2_78, 0, sizeof(struct sType*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&buf2_79, 0, sizeof(struct buffer*));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&type_80, 0, sizeof(struct sType*));
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&c_value_81, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&type2_82, 0, sizeof(struct sType*));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value149 = (void*)0;
    # 109 "06str.c"
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 111 "06str.c"
    buf_66=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value106=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 113 "06str.c"
    buffer_append_str(buf_66,"xsprintf(\"");
    # 114 "06str.c"
    buffer_append_str(buf_66,self->value);
    # 115 "06str.c"
    buffer_append_str(buf_66,"\"");
    # 157 "06str.c"
    # 117 "06str.c"
    if(_if_conditional60=list$1sNodeph_length(self->exps)>0,    _if_conditional60) {
        # 155 "06str.c"
        for(        o2_saved_67=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_70=list$1sNodeph_begin((o2_saved_67));        !list$1sNodeph_end((o2_saved_67));        it_70=list$1sNodeph_next((o2_saved_67))        ){
            # 123 "06str.c"
            # 119 "06str.c"
            if(_if_conditional65=!node_compile(it_70,info),            _if_conditional65) {
                # 120 "06str.c"
                __result78__ = (_Bool)0;
                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,buf_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result78__;
            }
            # 123 "06str.c"
            come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 124 "06str.c"
            dec_stack_ptr(1,info);
            # 126 "06str.c"
            method_name_74=(char*)come_increment_ref_count(((char*)(right_value108=create_method_name(come_value_73->type,(_Bool)0,"to_string",info,(_Bool)1))));
            right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 140 "06str.c"
            # 128 "06str.c"
            if(_if_conditional85=map$2charphsFunph_at(info->funcs,method_name_74,((void*)0))==((void*)0),            _if_conditional85) {
                # 129 "06str.c"
                obj_type_77=come_value_73->type->mNoSolvedGenericsType->v1;
                # 138 "06str.c"
                # 130 "06str.c"
                if(_if_conditional87=obj_type_77&&list$1sTypeph_length(obj_type_77->mGenericsTypes)>0,                _if_conditional87) {
                    # 131 "06str.c"
                    obj_type2_78=come_value_73->type;
                    # 132 "06str.c"
                    __dec_obj25=method_name_74;
                    method_name_74=(char*)come_increment_ref_count(((char*)(right_value110=make_generics_function(obj_type2_78,(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string("to_string")))),info,(_Bool)1))));
                    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 135 "06str.c"
                    err_msg(info,"require to_string implementation(%s)",come_value_73->type->mClass->mName);
                    # 136 "06str.c"
                    exit(1);
                }
            }
            # 140 "06str.c"
            buf2_79=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value112=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value111=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 142 "06str.c"
            buffer_append_str(buf2_79,method_name_74);
            # 143 "06str.c"
            buffer_append_str(buf2_79,"(");
            # 144 "06str.c"
            buffer_append_str(buf2_79,come_value_73->c_value);
            # 145 "06str.c"
            buffer_append_str(buf2_79,")");
            # 147 "06str.c"
            type_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147, "sType")))),"char*",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "06str.c"
            type_80->mHeap=(_Bool)1;
            # 150 "06str.c"
            c_value_81=(char*)come_increment_ref_count(((char*)(right_value116=append_object_to_right_values(((char*)(right_value115=buffer_to_string(buf2_79))),(struct sType*)come_increment_ref_count(type_80),info))));
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 152 "06str.c"
            buffer_append_str(buf_66,",");
            # 153 "06str.c"
            buffer_append_str(buf_66,c_value_81);
            come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            method_name_74 = come_decrement_ref_count2(method_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf2_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            c_value_81 = come_decrement_ref_count2(c_value_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 157 "06str.c"
    buffer_append_str(buf_66,")");
    # 159 "06str.c"
    type2_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 160 "06str.c"
    type2_82->mHeap=(_Bool)1;
    # 162 "06str.c"
    __dec_obj26=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value119=buffer_to_string(buf_66))));
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 163 "06str.c"
    __dec_obj27=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value120=append_object_to_right_values(come_value_65->c_value,(struct sType*)come_increment_ref_count(type2_82),info))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 164 "06str.c"
    __dec_obj48=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(type2_82))));
    come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 165 "06str.c"
    come_value_65->var=((void*)0);
    # 167 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    # 169 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    # 171 "06str.c"
    __result97__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional59;
int __result69__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional59=self==((void*)0),        _if_conditional59) {
            # 365 "./neo-c.h"
            __result69__ = 0;
            return __result69__;
        }
        # 367 "./neo-c.h"
        __result70__ = self->len;
        return __result70__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional61;
struct sNode* result_68;
struct sNode* __result71__;
_Bool _if_conditional62;
struct sNode* __result72__;
struct sNode* result_69;
struct sNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional61=self==((void*)0),            _if_conditional61) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_68,0,sizeof(struct sNode*));
                # 288 "./neo-c.h"
                __result71__ = __result_obj__ = result_68;
                return __result71__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result72__ = __result_obj__ = self->it->item;
                return __result72__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_69,0,sizeof(struct sNode*));
            # 298 "./neo-c.h"
            __result73__ = __result_obj__ = result_69;
            return __result73__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result74__ = self==((void*)0)||self->it==((void*)0);
            return __result74__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional63;
struct sNode* result_71;
struct sNode* __result75__;
_Bool _if_conditional64;
struct sNode* __result76__;
struct sNode* result_72;
struct sNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct sNode*));
memset(&result_72, 0, sizeof(struct sNode*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional63=self==((void*)0)||self->it==((void*)0),            _if_conditional63) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_71,0,sizeof(struct sNode*));
                # 305 "./neo-c.h"
                __result75__ = __result_obj__ = result_71;
                return __result75__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result76__ = __result_obj__ = self->it->item;
                return __result76__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_72,0,sizeof(struct sNode*));
            # 316 "./neo-c.h"
            __result77__ = __result_obj__ = result_72;
            return __result77__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sFun* __result79__;
_Bool _if_conditional83;
_Bool _if_conditional84;
struct sFun* __result80__;
struct sFun* __result81__;
struct sFun* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
                # 1226 "./neo-c.h"
                hash_75=string_get_hash_key(((char*)key))%self->size;
                # 1227 "./neo-c.h"
                it_76=hash_75;
                # 1251 "./neo-c.h"
                while(_while_condtional12=(_Bool)1,                _while_condtional12) {
                    # 1249 "./neo-c.h"
                    # 1230 "./neo-c.h"
                    if(_if_conditional66=self->item_existance[it_76],                    _if_conditional66) {
                        # 1237 "./neo-c.h"
                        # 1232 "./neo-c.h"
                        if(_if_conditional67=string_equals(self->keys[it_76],key),                        _if_conditional67) {
                            # 1234 "./neo-c.h"
                            __result79__ = __result_obj__ = self->items[it_76];
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result79__;
                        }
                        # 1237 "./neo-c.h"
                        it_76++;
                        # 1245 "./neo-c.h"
                        # 1239 "./neo-c.h"
                        if(_if_conditional83=it_76>=self->size,                        _if_conditional83) {
                            # 1240 "./neo-c.h"
                            it_76=0;
                        }
                        else {
                            # 1245 "./neo-c.h"
                            # 1242 "./neo-c.h"
                            if(_if_conditional84=it_76==hash_75,                            _if_conditional84) {
                                # 1243 "./neo-c.h"
                                __result80__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result80__;
                            }
                        }
                    }
                    else {
                        # 1247 "./neo-c.h"
                        __result81__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                    }
                }
                # 1251 "./neo-c.h"
                __result82__ = __result_obj__ = default_value;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result82__;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional68=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional68) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional69=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional69) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional70=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional70) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional71=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional71) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional72=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional72) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional73=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional73) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional74=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional74) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional77=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional77) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional78=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional78) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional79=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional79) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional80=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional80) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional81=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional81) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional82=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional82) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional75;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional75=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional75) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional76=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional76) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional86;
int __result83__;
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 367 "./neo-c.h"
                    # 364 "./neo-c.h"
                    if(_if_conditional86=self==((void*)0),                    _if_conditional86) {
                        # 365 "./neo-c.h"
                        __result83__ = 0;
                        return __result83__;
                    }
                    # 367 "./neo-c.h"
                    __result84__ = self->len;
                    return __result84__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional88;
struct sType* __result85__;
void* right_value121;
struct sType* result_83;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value128;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional94;
void* right_value131;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional98;
void* right_value132;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional99;
void* right_value133;
char* __dec_obj35;
_Bool _if_conditional100;
void* right_value134;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional101;
void* right_value135;
struct list$1sNodeph* __dec_obj37;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value136;
struct list$1sTypeph* __dec_obj38;
_Bool _if_conditional104;
void* right_value143;
struct list$1charph* __dec_obj42;
_Bool _if_conditional108;
void* right_value144;
struct tuple1$1sTypeph* __dec_obj43;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value145;
struct sNode* __dec_obj44;
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
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value146;
struct sNode* __dec_obj45;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
void* right_value147;
char* __dec_obj46;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
void* right_value148;
char* __dec_obj47;
_Bool _if_conditional149;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&result_83, 0, sizeof(struct sType*));
right_value128 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional88=self==(void*)0,        _if_conditional88) {
            # 2 "sType_clone"
            __result85__ = __result_obj__ = (void*)0;
            return __result85__;
        }
        # 3 "sType_clone"
        result_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 4 "sType_clone"
            result_83->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional90=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional90) {
            # 5 "sType_clone"
            __dec_obj31=result_83->mMultipleTypes;
            result_83->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value128=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional94=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional94) {
            # 6 "sType_clone"
            __dec_obj33=result_83->mNoSolvedGenericsType;
            result_83->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value131=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional98=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional98) {
            # 7 "sType_clone"
            __dec_obj34=result_83->mOriginalLoadVarType;
            result_83->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value132=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional99=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional99) {
            # 8 "sType_clone"
            __dec_obj35=result_83->mGenericsName;
            result_83->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value133=string_clone(self->mGenericsName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional100=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional100) {
            # 9 "sType_clone"
            __dec_obj36=result_83->mGenericsTypes;
            result_83->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional101=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional101) {
            # 10 "sType_clone"
            __dec_obj37=result_83->mArrayNum;
            result_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value135=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 11 "sType_clone"
            result_83->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional103=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional103) {
            # 12 "sType_clone"
            __dec_obj38=result_83->mParamTypes;
            result_83->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value136=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional104=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional104) {
            # 13 "sType_clone"
            __dec_obj42=result_83->mParamNames;
            result_83->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value143=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional108=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional108) {
            # 14 "sType_clone"
            __dec_obj43=result_83->mResultType;
            result_83->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value144=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 15 "sType_clone"
            result_83->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional110=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional110) {
            # 16 "sType_clone"
            __dec_obj44=result_83->mAlignas;
            result_83->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(self->mAlignas))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 17 "sType_clone"
            result_83->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            # 18 "sType_clone"
            result_83->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            # 19 "sType_clone"
            result_83->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            # 20 "sType_clone"
            result_83->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            # 21 "sType_clone"
            result_83->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional116=self!=((void*)0),        _if_conditional116) {
            # 22 "sType_clone"
            result_83->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            # 23 "sType_clone"
            result_83->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            # 24 "sType_clone"
            result_83->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional119=self!=((void*)0),        _if_conditional119) {
            # 25 "sType_clone"
            result_83->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional120=self!=((void*)0),        _if_conditional120) {
            # 26 "sType_clone"
            result_83->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            # 27 "sType_clone"
            result_83->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            # 28 "sType_clone"
            result_83->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional123=self!=((void*)0),        _if_conditional123) {
            # 29 "sType_clone"
            result_83->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            # 30 "sType_clone"
            result_83->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional125=self!=((void*)0),        _if_conditional125) {
            # 31 "sType_clone"
            result_83->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            # 32 "sType_clone"
            result_83->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            # 33 "sType_clone"
            result_83->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            # 34 "sType_clone"
            result_83->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional129=self!=((void*)0),        _if_conditional129) {
            # 35 "sType_clone"
            result_83->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            # 36 "sType_clone"
            result_83->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional131=self!=((void*)0),        _if_conditional131) {
            # 37 "sType_clone"
            result_83->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional132=self!=((void*)0),        _if_conditional132) {
            # 38 "sType_clone"
            result_83->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional133=self!=((void*)0),        _if_conditional133) {
            # 39 "sType_clone"
            result_83->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional134=self!=((void*)0),        _if_conditional134) {
            # 40 "sType_clone"
            result_83->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional135=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional135) {
            # 41 "sType_clone"
            __dec_obj45=result_83->mSizeNum;
            result_83->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=sNode_clone(self->mSizeNum))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional136=self!=((void*)0),        _if_conditional136) {
            # 42 "sType_clone"
            result_83->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional137=self!=((void*)0),        _if_conditional137) {
            # 43 "sType_clone"
            result_83->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional138=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional138) {
            # 44 "sType_clone"
            __dec_obj46=result_83->mOriginalTypeName;
            result_83->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value147=string_clone(self->mOriginalTypeName))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional139=self!=((void*)0),        _if_conditional139) {
            # 45 "sType_clone"
            result_83->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional140=self!=((void*)0),        _if_conditional140) {
            # 46 "sType_clone"
            result_83->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional141=self!=((void*)0),        _if_conditional141) {
            # 47 "sType_clone"
            result_83->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional142=self!=((void*)0),        _if_conditional142) {
            # 48 "sType_clone"
            result_83->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional143=self!=((void*)0),        _if_conditional143) {
            # 49 "sType_clone"
            result_83->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional144=self!=((void*)0),        _if_conditional144) {
            # 50 "sType_clone"
            result_83->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional145=self!=((void*)0),        _if_conditional145) {
            # 51 "sType_clone"
            result_83->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional146=self!=((void*)0),        _if_conditional146) {
            # 52 "sType_clone"
            result_83->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional147=self!=((void*)0),        _if_conditional147) {
            # 53 "sType_clone"
            result_83->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional148=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional148) {
            # 54 "sType_clone"
            __dec_obj47=result_83->mAsmName;
            result_83->mAsmName=(char*)come_increment_ref_count(((char*)(right_value148=string_clone(self->mAsmName))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional149=self!=((void*)0),        _if_conditional149) {
            # 55 "sType_clone"
            result_83->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result96__ = __result_obj__ = result_83;
        come_call_finalizer2(sType_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result96__;
        come_call_finalizer2(sType_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional91;
struct list$1sTypeph* __result86__;
void* right_value122;
void* right_value123;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
_Bool _while_condtional13;
void* right_value127;
struct list$1sTypeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&result_84, 0, sizeof(struct list$1sTypeph*));
memset(&it_85, 0, sizeof(struct list_item$1sTypeph*));
right_value127 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional91=self==((void*)0),                _if_conditional91) {
                    # 140 "./neo-c.h"
                    __result86__ = __result_obj__ = ((void*)0);
                    return __result86__;
                }
                # 142 "./neo-c.h"
                result_84=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value123=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value122=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_85=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional13=it_85!=((void*)0),                _while_condtional13) {
                    # 146 "./neo-c.h"
                    list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(it_85->item)))));
                    come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_85=it_85->next;
                }
                # 151 "./neo-c.h"
                __result89__ = __result_obj__ = result_84;
                come_call_finalizer2(list$1sTypephp_finalize,result_84, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result89__;
                come_call_finalizer2(list$1sTypephp_finalize,result_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./neo-c.h"
                    self->head=((void*)0);
                    # 105 "./neo-c.h"
                    self->tail=((void*)0);
                    # 106 "./neo-c.h"
                    self->len=0;
                    # 108 "./neo-c.h"
                    __result87__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result87__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional92;
void* right_value124;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj28;
_Bool _if_conditional93;
void* right_value125;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj29;
void* right_value126;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj30;
struct list$1sTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
right_value125 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
right_value126 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional92=self->len==0,                        _if_conditional92) {
                            # 156 "./neo-c.h"
                            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_86->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_86->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj28=litem_86->item;
                            litem_86->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_86;
                            # 163 "./neo-c.h"
                            self->head=litem_86;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional93=self->len==1,                            _if_conditional93) {
                                # 166 "./neo-c.h"
                                litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_87->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_87->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj29=litem_87->item;
                                litem_87->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_87;
                                # 173 "./neo-c.h"
                                self->head->next=litem_87;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_88->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_88->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj30=litem_88->item;
                                litem_88->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_88;
                                # 183 "./neo-c.h"
                                self->tail=litem_88;
                            }
                        }
                        # 186 "./neo-c.h"
                        self->len++;
                        # 188 "./neo-c.h"
                        __result88__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result88__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct tuple1$1sTypeph* __result90__;
void* right_value129;
struct tuple1$1sTypeph* result_89;
_Bool _if_conditional97;
void* right_value130;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&result_89, 0, sizeof(struct tuple1$1sTypeph*));
right_value130 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional95=self==(void*)0,                _if_conditional95) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result90__ = __result_obj__ = (void*)0;
                    return __result90__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_89=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value129=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional97=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional97) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj32=result_89->v1;
                    result_89->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result91__ = __result_obj__ = result_89;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result91__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional96;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional96) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional105;
struct list$1charph* __result92__;
void* right_value137;
void* right_value138;
struct list$1charph* result_90;
struct list_item$1charph* it_91;
_Bool _while_condtional14;
void* right_value142;
struct list$1charph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&result_90, 0, sizeof(struct list$1charph*));
memset(&it_91, 0, sizeof(struct list_item$1charph*));
right_value142 = (void*)0;
                # 142 "./neo-c.h"
                # 139 "./neo-c.h"
                if(_if_conditional105=self==((void*)0),                _if_conditional105) {
                    # 140 "./neo-c.h"
                    __result92__ = __result_obj__ = ((void*)0);
                    return __result92__;
                }
                # 142 "./neo-c.h"
                result_90=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./neo-c.h"
                it_91=self->head;
                # 151 "./neo-c.h"
                while(_while_condtional14=it_91!=((void*)0),                _while_condtional14) {
                    # 146 "./neo-c.h"
                    list$1charph_add(result_90,(char*)come_increment_ref_count(((char*)(right_value142=string_clone(it_91->item)))));
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./neo-c.h"
                    it_91=it_91->next;
                }
                # 151 "./neo-c.h"
                __result95__ = __result_obj__ = result_90;
                come_call_finalizer2(list$1charphp_finalize,result_90, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result95__;
                come_call_finalizer2(list$1charphp_finalize,result_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional106;
void* right_value139;
struct list_item$1charph* litem_92;
char* __dec_obj39;
_Bool _if_conditional107;
void* right_value140;
struct list_item$1charph* litem_93;
char* __dec_obj40;
void* right_value141;
struct list_item$1charph* litem_94;
char* __dec_obj41;
struct list$1charph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1charph*));
right_value140 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1charph*));
right_value141 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1charph*));
                        # 186 "./neo-c.h"
                        # 155 "./neo-c.h"
                        if(_if_conditional106=self->len==0,                        _if_conditional106) {
                            # 156 "./neo-c.h"
                            litem_92=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value139=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./neo-c.h"
                            litem_92->prev=((void*)0);
                            # 159 "./neo-c.h"
                            litem_92->next=((void*)0);
                            # 160 "./neo-c.h"
                            __dec_obj39=litem_92->item;
                            litem_92->item=(char*)come_increment_ref_count(item);
                            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./neo-c.h"
                            self->tail=litem_92;
                            # 163 "./neo-c.h"
                            self->head=litem_92;
                        }
                        else {
                            # 186 "./neo-c.h"
                            # 165 "./neo-c.h"
                            if(_if_conditional107=self->len==1,                            _if_conditional107) {
                                # 166 "./neo-c.h"
                                litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value140=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./neo-c.h"
                                litem_93->prev=self->head;
                                # 169 "./neo-c.h"
                                litem_93->next=((void*)0);
                                # 170 "./neo-c.h"
                                __dec_obj40=litem_93->item;
                                litem_93->item=(char*)come_increment_ref_count(item);
                                __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./neo-c.h"
                                self->tail=litem_93;
                                # 173 "./neo-c.h"
                                self->head->next=litem_93;
                            }
                            else {
                                # 176 "./neo-c.h"
                                litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./neo-c.h"
                                litem_94->prev=self->tail;
                                # 179 "./neo-c.h"
                                litem_94->next=((void*)0);
                                # 180 "./neo-c.h"
                                __dec_obj41=litem_94->item;
                                litem_94->item=(char*)come_increment_ref_count(item);
                                __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./neo-c.h"
                                self->tail->next=litem_94;
                                # 183 "./neo-c.h"
                                self->tail=litem_94;
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

int sSStringNode_sline(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    # 176 "06str.c"
    __result98__ = self->sline;
    return __result98__;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    # 181 "06str.c"
    __result99__ = __result_obj__ = ((char*)(right_value150=__builtin_string(self->sname)));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value151;
char* __dec_obj49;
struct sCharNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    # 193 "06str.c"
    self->value=value;
    # 195 "06str.c"
    self->sline=info->sline;
    # 196 "06str.c"
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 198 "06str.c"
    __result100__ = __result_obj__ = self;
    come_call_finalizer2(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result100__;
    come_call_finalizer2(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    # 203 "06str.c"
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sCharNode_kind(){
void* __result_obj__;
void* right_value152;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    # 208 "06str.c"
    __result102__ = __result_obj__ = ((char*)(right_value152=__builtin_string("sCharNode")));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value153;
struct CVALUE* come_value_95;
void* right_value154;
char* __dec_obj50;
void* right_value155;
void* right_value156;
struct sType* __dec_obj51;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
    # 213 "06str.c"
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 215 "06str.c"
    __dec_obj50=come_value_95->c_value;
    come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%d",self->value))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 216 "06str.c"
    __dec_obj51=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216, "sType")))),"char",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 217 "06str.c"
    come_value_95->var=((void*)0);
    # 219 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    # 221 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_95->c_value);
    # 223 "06str.c"
    __result103__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result103__;
    come_call_finalizer2(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    # 228 "06str.c"
    __result104__ = self->sline;
    return __result104__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value157;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
    # 233 "06str.c"
    __result105__ = __result_obj__ = ((char*)(right_value157=__builtin_string(self->sname)));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value158;
char* __dec_obj52;
struct sWCharNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    # 245 "06str.c"
    self->value=value;
    # 247 "06str.c"
    self->sline=info->sline;
    # 248 "06str.c"
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 250 "06str.c"
    __result106__ = __result_obj__ = self;
    come_call_finalizer2(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 255 "06str.c"
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sWCharNode_kind(){
void* __result_obj__;
void* right_value159;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    # 260 "06str.c"
    __result108__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sWCharNode")));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value160;
struct CVALUE* come_value_96;
void* right_value161;
char* __dec_obj53;
void* right_value162;
void* right_value163;
struct sType* __dec_obj54;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&come_value_96, 0, sizeof(struct CVALUE*));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
    # 265 "06str.c"
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 267 "06str.c"
    __dec_obj53=come_value_96->c_value;
    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("L'%lc'",self->value))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 268 "06str.c"
    __dec_obj54=come_value_96->type;
    come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value162=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268, "sType")))),"wchar_t",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 269 "06str.c"
    come_value_96->var=((void*)0);
    # 271 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
    # 273 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_96->c_value);
    # 275 "06str.c"
    __result109__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result109__;
    come_call_finalizer2(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    # 280 "06str.c"
    __result110__ = self->sline;
    return __result110__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    # 285 "06str.c"
    __result111__ = __result_obj__ = ((char*)(right_value164=__builtin_string(self->sname)));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
unsigned int* __dec_obj55;
void* right_value165;
char* __dec_obj56;
struct sWStringNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    # 297 "06str.c"
    __dec_obj55=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 299 "06str.c"
    self->sline=sline;
    # 300 "06str.c"
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 302 "06str.c"
    __result112__ = __result_obj__ = self;
    come_call_finalizer2(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 307 "06str.c"
    __result113__ = (_Bool)0;
    return __result113__;
}

char* sWStringNode_kind(){
void* __result_obj__;
void* right_value166;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    # 312 "06str.c"
    __result114__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sWStringNode")));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value167;
struct CVALUE* come_value_97;
void* right_value168;
char* __dec_obj57;
void* right_value169;
void* right_value170;
struct sType* __dec_obj58;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&come_value_97, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
    # 317 "06str.c"
    come_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 319 "06str.c"
    __dec_obj57=come_value_97->c_value;
    come_value_97->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("L'%ls'",self->value))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 320 "06str.c"
    __dec_obj58=come_value_97->type;
    come_value_97->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320, "sType")))),"wchar_t*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 321 "06str.c"
    come_value_97->var=((void*)0);
    # 323 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_97));
    # 325 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_97->c_value);
    # 327 "06str.c"
    __result115__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result115__;
    come_call_finalizer2(CVALUE_finalize,come_value_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    # 332 "06str.c"
    __result116__ = self->sline;
    return __result116__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value171;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    # 337 "06str.c"
    __result117__ = __result_obj__ = ((char*)(right_value171=__builtin_string(self->sname)));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __dec_obj59;
void* right_value173;
char* __dec_obj60;
struct sRegexNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
right_value173 = (void*)0;
    # 352 "06str.c"
    __dec_obj59=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(str))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 353 "06str.c"
    self->global=global;
    # 354 "06str.c"
    self->ignore_case=ignore_case;
    # 356 "06str.c"
    self->sline=sline;
    # 357 "06str.c"
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(info->sname))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 359 "06str.c"
    __result118__ = __result_obj__ = self;
    come_call_finalizer2(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result118__;
    come_call_finalizer2(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    # 364 "06str.c"
    __result119__ = (_Bool)0;
    return __result119__;
}

char* sRegexNode_kind(){
void* __result_obj__;
void* right_value174;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
    # 369 "06str.c"
    __result120__ = __result_obj__ = ((char*)(right_value174=__builtin_string("sRegexNode")));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value175;
struct CVALUE* come_value_98;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
char* __dec_obj61;
void* right_value181;
void* right_value182;
struct sType* __dec_obj62;
void* right_value183;
char* __dec_obj63;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
    # 374 "06str.c"
    come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value175=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 376 "06str.c"
    __dec_obj61=come_value_98->c_value;
    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value176=__builtin_string("1"))):((char*)(right_value177=__builtin_string("0"))),self->global?((char*)(right_value178=__builtin_string("1"))):((char*)(right_value179=__builtin_string("0")))))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 377 "06str.c"
    __dec_obj62=come_value_98->type;
    come_value_98->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value181=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377, "sType")))),"come_regex",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 378 "06str.c"
    come_value_98->type->mPointerNum=1;
    # 379 "06str.c"
    come_value_98->type->mHeap=(_Bool)1;
    # 380 "06str.c"
    come_value_98->var=((void*)0);
    # 382 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_98));
    # 384 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_98->c_value);
    # 386 "06str.c"
    __dec_obj63=come_value_98->c_value;
    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value183=append_object_to_right_values(come_value_98->c_value,(struct sType*)come_increment_ref_count(come_value_98->type),info))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 388 "06str.c"
    __result121__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result121__;
    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 393 "06str.c"
    __result122__ = self->sline;
    return __result122__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value184;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
    # 398 "06str.c"
    __result123__ = __result_obj__ = ((char*)(right_value184=__builtin_string(self->sname)));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj64;
void* right_value185;
char* __dec_obj65;
struct sListNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    # 410 "06str.c"
    __dec_obj64=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 412 "06str.c"
    self->sline=info->sline;
    # 413 "06str.c"
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 415 "06str.c"
    __result124__ = __result_obj__ = self;
    come_call_finalizer2(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result124__;
    come_call_finalizer2(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    # 420 "06str.c"
    __result125__ = (_Bool)0;
    return __result125__;
}

char* sListNode_kind(){
void* __result_obj__;
void* right_value186;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    # 425 "06str.c"
    __result126__ = __result_obj__ = ((char*)(right_value186=__builtin_string("sListNode")));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* list_elements_99;
void* right_value187;
void* right_value188;
struct list$1CVALUEph* params_102;
struct sType* list_element_type_103;
struct list$1sNodeph* o2_saved_104;
struct sNode* it_105;
_Bool _if_conditional158;
_Bool __result128__;
void* right_value189;
struct CVALUE* come_value_106;
_Bool _if_conditional159;
void* right_value190;
void* right_value191;
struct sType* __dec_obj66;
void* right_value192;
struct sType* type_values_107;
void* right_value196;
static int list_value_num_111=0;
void* right_value197;
char* var_name_112;
void* right_value198;
struct sVar* var__113;
void* right_value199;
void* right_value200;
void* right_value201;
struct buffer* source_114;
int i_115;
struct list$1CVALUEph* o2_saved_116;
struct CVALUE* it_119;
_Bool _if_conditional167;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
struct sType* list_type_125;
void* right_value210;
void* right_value211;
struct sType* obj_type_129;
char* fun_name_130;
void* right_value212;
void* right_value213;
void* right_value214;
char* generics_fun_name_131;
struct sFun* fun_132;
_Bool _if_conditional172;
void* right_value215;
void* right_value216;
char* __dec_obj73;
_Bool _if_conditional173;
_Bool __result142__;
void* right_value217;
struct sType* result_type_133;
struct sType* type_134;
void* right_value218;
struct CVALUE* obj_value_135;
void* right_value219;
void* right_value220;
struct buffer* num_string_136;
void* right_value221;
struct sType* type2_137;
void* right_value222;
char* type_name_138;
void* right_value223;
void* right_value224;
char* __dec_obj74;
void* right_value225;
struct sType* type3_139;
void* right_value226;
struct sType* __dec_obj75;
void* right_value227;
char* __dec_obj76;
void* right_value228;
void* right_value229;
struct list$1CVALUEph* come_params_140;
_Bool _if_conditional176;
void* right_value230;
struct CVALUE* come_value2_144;
void* right_value231;
char* __dec_obj77;
struct sType* __dec_obj78;
void* right_value232;
struct CVALUE* come_value3_145;
void* right_value233;
char* __dec_obj79;
struct sType* __dec_obj80;
void* right_value234;
void* right_value235;
struct buffer* buf_146;
int j_147;
struct list$1CVALUEph* o2_saved_148;
struct CVALUE* it_149;
_Bool _if_conditional177;
void* right_value236;
struct CVALUE* come_value4_150;
void* right_value237;
char* __dec_obj81;
_Bool _if_conditional178;
void* right_value238;
void* right_value239;
char* __dec_obj82;
void* right_value240;
struct sType* __dec_obj83;
void* right_value241;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&list_elements_99, 0, sizeof(struct list$1sNodeph*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&params_102, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_103, 0, sizeof(struct sType*));
memset(&o2_saved_104, 0, sizeof(struct list$1sNodeph*));
memset(&it_105, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&type_values_107, 0, sizeof(struct sType*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&var_name_112, 0, sizeof(char*));
right_value198 = (void*)0;
memset(&var__113, 0, sizeof(struct sVar*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&source_114, 0, sizeof(struct buffer*));
memset(&i_115, 0, sizeof(int));
memset(&o2_saved_116, 0, sizeof(struct list$1CVALUEph*));
memset(&it_119, 0, sizeof(struct CVALUE*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&list_type_125, 0, sizeof(struct sType*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&obj_type_129, 0, sizeof(struct sType*));
memset(&fun_name_130, 0, sizeof(char*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&generics_fun_name_131, 0, sizeof(char*));
memset(&fun_132, 0, sizeof(struct sFun*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&result_type_133, 0, sizeof(struct sType*));
memset(&type_134, 0, sizeof(struct sType*));
right_value218 = (void*)0;
memset(&obj_value_135, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&num_string_136, 0, sizeof(struct buffer*));
right_value221 = (void*)0;
memset(&type2_137, 0, sizeof(struct sType*));
right_value222 = (void*)0;
memset(&type_name_138, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&type3_139, 0, sizeof(struct sType*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&come_params_140, 0, sizeof(struct list$1CVALUEph*));
right_value230 = (void*)0;
memset(&come_value2_144, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&come_value3_145, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&buf_146, 0, sizeof(struct buffer*));
memset(&j_147, 0, sizeof(int));
memset(&o2_saved_148, 0, sizeof(struct list$1CVALUEph*));
memset(&it_149, 0, sizeof(struct CVALUE*));
right_value236 = (void*)0;
memset(&come_value4_150, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
    # 430 "06str.c"
    list_elements_99=self->list_elements;
    # 432 "06str.c"
    params_102=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value188=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value187=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 433 "06str.c"
    list_element_type_103=((void*)0);
    # 452 "06str.c"
    for(    o2_saved_104=(list_elements_99),it_105=list$1sNodeph_begin((o2_saved_104));    !list$1sNodeph_end((o2_saved_104));    it_105=list$1sNodeph_next((o2_saved_104))    ){
        # 440 "06str.c"
        # 436 "06str.c"
        if(_if_conditional158=!node_compile(it_105,info),        _if_conditional158) {
            # 437 "06str.c"
            __result128__ = (_Bool)0;
            come_call_finalizer2(list$1CVALUEphp_finalize,params_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_element_type_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result128__;
        }
        # 440 "06str.c"
        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 441 "06str.c"
        dec_stack_ptr(1,info);
        # 447 "06str.c"
        # 443 "06str.c"
        if(list_element_type_103) {
            # 444 "06str.c"
            check_assign_type(((char*)(right_value190=xsprintf("invalid list element type"))),list_element_type_103,come_value_106->type,come_value_106,(_Bool)0,(_Bool)1,info);
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 447 "06str.c"
        list$1CVALUEph_push_back(params_102,(struct CVALUE*)come_increment_ref_count(come_value_106));
        # 449 "06str.c"
        __dec_obj66=list_element_type_103;
        list_element_type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(come_value_106->type))));
        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 452 "06str.c"
    type_values_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(list_element_type_103))));
    come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 453 "06str.c"
    list$1sNodeph_push_back(type_values_107->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=create_int_node(list$1CVALUEph_length(params_102),info)))));
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 454 "06str.c"
    type_values_107->mHeap=(_Bool)0;
    # 456 "06str.c"
    # 457 "06str.c"
    var_name_112=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("__list_values%d__",++list_value_num_111))));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 459 "06str.c"
    add_variable_to_table(var_name_112,(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type_values_107)))),info);
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 461 "06str.c"
    var__113=get_variable_from_table(info->lv_table,var_name_112);
    # 463 "06str.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value199=make_define_var(type_values_107,var__113->mCValueName,(_Bool)0,info))));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 465 "06str.c"
    source_114=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 465, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 467 "06str.c"
    buffer_append_str(source_114,"{");
    # 469 "06str.c"
    i_115=0;
    # 480 "06str.c"
    for(    o2_saved_116=(struct list$1CVALUEph*)come_increment_ref_count((params_102)),it_119=list$1CVALUEph_begin((o2_saved_116));    !list$1CVALUEph_end((o2_saved_116));    it_119=list$1CVALUEph_next((o2_saved_116))    ){
        # 477 "06str.c"
        # 471 "06str.c"
        if(list_element_type_103->mHeap) {
            # 472 "06str.c"
            buffer_append_str(source_114,((char*)(right_value202=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__113->mCValueName,i_115,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_102,i_115), "06str.c", 472, 0))->c_value))));
            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 475 "06str.c"
            buffer_append_str(source_114,((char*)(right_value203=xsprintf("%s[%d]=%s;\n",var__113->mCValueName,i_115,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_102,i_115), "06str.c", 475, 1))->c_value))));
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 477 "06str.c"
        i_115++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 480 "06str.c"
    buffer_append_str(source_114,"}");
    # 482 "06str.c"
    add_come_code(info,"%s",((char*)(right_value204=buffer_to_string(source_114))));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 484 "06str.c"
    list_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value205=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 484, "sType")))),"list",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 485 "06str.c"
    list$1sTypeph_push_back(list_type_125->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(list_element_type_103)))));
    come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 487 "06str.c"
    obj_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(list_type_125))));
    come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 488 "06str.c"
    fun_name_130="initialize_with_values";
    # 490 "06str.c"
    generics_fun_name_131=(char*)come_increment_ref_count(((char*)(right_value214=string_to_string(((char*)(right_value213=make_generics_function(obj_type_129,(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(fun_name_130)))),info,(_Bool)1)))))));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 492 "06str.c"
    fun_132=map$2charphsFunph_at(info->funcs,generics_fun_name_131,((void*)0));
    # 505 "06str.c"
    # 494 "06str.c"
    if(_if_conditional172=fun_132==((void*)0),    _if_conditional172) {
        # 495 "06str.c"
        __dec_obj73=generics_fun_name_131;
        generics_fun_name_131=(char*)come_increment_ref_count(((char*)(right_value216=create_method_name(obj_type_129,(_Bool)0,((char*)(right_value215=__builtin_string(fun_name_130))),info,(_Bool)1))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 497 "06str.c"
        fun_132=map$2charphsFunph_at(info->funcs,generics_fun_name_131,((void*)0));
        # 503 "06str.c"
        # 499 "06str.c"
        if(_if_conditional173=fun_132==((void*)0),        _if_conditional173) {
            # 500 "06str.c"
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_131,info->come_fun->mName);
            # 501 "06str.c"
            __result142__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,params_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_element_type_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_values_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_112 = come_decrement_ref_count2(var_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,list_type_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_131 = come_decrement_ref_count2(generics_fun_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result142__;
        }
    }
    # 505 "06str.c"
    result_type_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(fun_132->mResultType))));
    come_call_finalizer2(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 506 "06str.c"
    result_type_133->mStatic=(_Bool)0;
    # 508 "06str.c"
    type_134=list_type_125;
    # 510 "06str.c"
    obj_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 510, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 512 "06str.c"
    num_string_136=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value220=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value219=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 512, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 514 "06str.c"
    buffer_append_str(num_string_136,"1");
    # 516 "06str.c"
    type2_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=solve_generics(type_134,type_134,info))));
    come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 518 "06str.c"
    type_name_138=(char*)come_increment_ref_count(((char*)(right_value222=make_type_name_string(type2_137,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 520 "06str.c"
    __dec_obj74=obj_value_135->c_value;
    obj_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_138,type_name_138,((char*)(right_value223=buffer_to_string(num_string_136))),info->sname,info->sline,type_name_138))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 522 "06str.c"
    type3_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type2_137))));
    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 523 "06str.c"
    type3_139->mPointerNum++;
    # 524 "06str.c"
    type3_139->mHeap=(_Bool)1;
    # 525 "06str.c"
    type2_137->mHeap=(_Bool)1;
    # 526 "06str.c"
    __dec_obj75=obj_value_135->type;
    obj_value_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(type2_137))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 527 "06str.c"
    __dec_obj76=obj_value_135->c_value;
    obj_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value227=append_object_to_right_values(obj_value_135->c_value,(struct sType*)come_increment_ref_count(type3_139),info))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 528 "06str.c"
    obj_value_135->type->mPointerNum++;
    # 529 "06str.c"
    obj_value_135->var=((void*)0);
    # 531 "06str.c"
    come_params_140=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value229=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value228=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 531, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 536 "06str.c"
    # 533 "06str.c"
    if(_if_conditional176=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_132->mParamTypes,0), "06str.c", 533, 2))->mHeap&&obj_value_135->type->mHeap,    _if_conditional176) {
        # 534 "06str.c"
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_132->mParamTypes,0), "06str.c", 534, 3)),obj_value_135->type,obj_value_135,info);
    }
    # 536 "06str.c"
    list$1CVALUEph_push_back(come_params_140,(struct CVALUE*)come_increment_ref_count(obj_value_135));
    # 538 "06str.c"
    come_value2_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 538, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 540 "06str.c"
    __dec_obj77=come_value2_144->c_value;
    come_value2_144->c_value=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("%d",list$1CVALUEph_length(params_102)))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 541 "06str.c"
    __dec_obj78=come_value2_144->type;
    come_value2_144->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 542 "06str.c"
    come_value2_144->var=((void*)0);
    # 544 "06str.c"
    list$1CVALUEph_push_back(come_params_140,(struct CVALUE*)come_increment_ref_count(come_value2_144));
    # 546 "06str.c"
    come_value3_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 546, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 548 "06str.c"
    __dec_obj79=come_value3_145->c_value;
    come_value3_145->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s",var__113->mCValueName))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 549 "06str.c"
    __dec_obj80=come_value3_145->type;
    come_value3_145->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 550 "06str.c"
    come_value3_145->var=((void*)0);
    # 552 "06str.c"
    list$1CVALUEph_push_back(come_params_140,(struct CVALUE*)come_increment_ref_count(come_value3_145));
    # 554 "06str.c"
    buf_146=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 554, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 556 "06str.c"
    buffer_append_str(buf_146,generics_fun_name_131);
    # 557 "06str.c"
    buffer_append_str(buf_146,"(");
    # 559 "06str.c"
    j_147=0;
    # 569 "06str.c"
    for(    o2_saved_148=(struct list$1CVALUEph*)come_increment_ref_count((come_params_140)),it_149=list$1CVALUEph_begin((o2_saved_148));    !list$1CVALUEph_end((o2_saved_148));    it_149=list$1CVALUEph_next((o2_saved_148))    ){
        # 561 "06str.c"
        buffer_append_str(buf_146,it_149->c_value);
        # 567 "06str.c"
        # 563 "06str.c"
        if(_if_conditional177=j_147!=list$1CVALUEph_length(come_params_140)-1,        _if_conditional177) {
            # 564 "06str.c"
            buffer_append_str(buf_146,",");
        }
        # 567 "06str.c"
        j_147++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 569 "06str.c"
    buffer_append_str(buf_146,")");
    # 571 "06str.c"
    come_value4_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 571, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 573 "06str.c"
    __dec_obj81=come_value4_150->c_value;
    come_value4_150->c_value=(char*)come_increment_ref_count(((char*)(right_value237=buffer_to_string(buf_146))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 579 "06str.c"
    # 575 "06str.c"
    if(result_type_133->mHeap) {
        # 576 "06str.c"
        __dec_obj82=come_value4_150->c_value;
        come_value4_150->c_value=(char*)come_increment_ref_count(((char*)(right_value239=append_object_to_right_values(((char*)(right_value238=buffer_to_string(buf_146))),(struct sType*)come_increment_ref_count(result_type_133),info))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 579 "06str.c"
    __dec_obj83=come_value4_150->type;
    come_value4_150->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(result_type_133))));
    come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 580 "06str.c"
    come_value4_150->type->mStatic=(_Bool)0;
    # 581 "06str.c"
    come_value4_150->var=((void*)0);
    # 583 "06str.c"
    add_come_last_code(info,"%s;\n",((char*)(right_value241=buffer_to_string(buf_146))));
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 585 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_150));
    # 587 "06str.c"
    __result145__ = (_Bool)1;
    come_call_finalizer2(list$1CVALUEphp_finalize,params_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_element_type_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_values_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_112 = come_decrement_ref_count2(var_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_type_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_131 = come_decrement_ref_count2(generics_fun_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_138 = come_decrement_ref_count2(type_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(list$1CVALUEphp_finalize,params_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_element_type_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_values_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_112 = come_decrement_ref_count2(var_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,list_type_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_131 = come_decrement_ref_count2(generics_fun_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_138 = come_decrement_ref_count2(type_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./neo-c.h"
        self->head=((void*)0);
        # 105 "./neo-c.h"
        self->tail=((void*)0);
        # 106 "./neo-c.h"
        self->len=0;
        # 108 "./neo-c.h"
        __result127__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result127__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_100;
_Bool _while_condtional15;
struct list_item$1CVALUEph* prev_it_101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_100, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_101, 0, sizeof(struct list_item$1CVALUEph*));
            # 123 "./neo-c.h"
            it_100=self->head;
            # 129 "./neo-c.h"
            while(_while_condtional15=it_100!=((void*)0),            _while_condtional15) {
                # 125 "./neo-c.h"
                prev_it_101=it_100;
                # 126 "./neo-c.h"
                it_100=it_100->next;
                # 127 "./neo-c.h"
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value193;
struct list_item$1sNodeph* litem_108;
struct sNode* __dec_obj67;
_Bool _if_conditional161;
void* right_value194;
struct list_item$1sNodeph* litem_109;
struct sNode* __dec_obj68;
void* right_value195;
struct list_item$1sNodeph* litem_110;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1sNodeph*));
right_value194 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sNodeph*));
right_value195 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1sNodeph*));
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional160=self->len==0,        _if_conditional160) {
            # 226 "./neo-c.h"
            litem_108=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value193=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 226, "list_item$1sNodeph"))));
            come_call_finalizer2(list_item$1sNodephp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_108->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_108->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj67=litem_108->item;
            litem_108->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
            # 232 "./neo-c.h"
            self->tail=litem_108;
            # 233 "./neo-c.h"
            self->head=litem_108;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional161=self->len==1,            _if_conditional161) {
                # 236 "./neo-c.h"
                litem_109=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value194=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 236, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_109->prev=self->head;
                # 239 "./neo-c.h"
                litem_109->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj68=litem_109->item;
                litem_109->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                # 242 "./neo-c.h"
                self->tail=litem_109;
                # 243 "./neo-c.h"
                self->head->next=litem_109;
            }
            else {
                # 246 "./neo-c.h"
                litem_110=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value195=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 246, "list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_110->prev=self->tail;
                # 249 "./neo-c.h"
                litem_110->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj69=litem_110->item;
                litem_110->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                # 252 "./neo-c.h"
                self->tail->next=litem_110;
                # 253 "./neo-c.h"
                self->tail=litem_110;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result129__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result129__;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional162;
int __result130__;
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./neo-c.h"
        # 364 "./neo-c.h"
        if(_if_conditional162=self==((void*)0),        _if_conditional162) {
            # 365 "./neo-c.h"
            __result130__ = 0;
            return __result130__;
        }
        # 367 "./neo-c.h"
        __result131__ = self->len;
        return __result131__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional163;
struct CVALUE* result_117;
struct CVALUE* __result132__;
_Bool _if_conditional164;
struct CVALUE* __result133__;
struct CVALUE* result_118;
struct CVALUE* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(struct CVALUE*));
memset(&result_118, 0, sizeof(struct CVALUE*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional163=self==((void*)0),        _if_conditional163) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_117,0,sizeof(struct CVALUE*));
            # 288 "./neo-c.h"
            __result132__ = __result_obj__ = result_117;
            return __result132__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result133__ = __result_obj__ = self->it->item;
            return __result133__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_118,0,sizeof(struct CVALUE*));
        # 298 "./neo-c.h"
        __result134__ = __result_obj__ = result_118;
        return __result134__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result135__ = self==((void*)0)||self->it==((void*)0);
        return __result135__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional165;
struct CVALUE* result_120;
struct CVALUE* __result136__;
_Bool _if_conditional166;
struct CVALUE* __result137__;
struct CVALUE* result_121;
struct CVALUE* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct CVALUE*));
memset(&result_121, 0, sizeof(struct CVALUE*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional165=self==((void*)0)||self->it==((void*)0),        _if_conditional165) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_120,0,sizeof(struct CVALUE*));
            # 305 "./neo-c.h"
            __result136__ = __result_obj__ = result_120;
            return __result136__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_121,0,sizeof(struct CVALUE*));
        # 316 "./neo-c.h"
        __result138__ = __result_obj__ = result_121;
        return __result138__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional168;
struct list_item$1CVALUEph* it_122;
int i_123;
_Bool _while_condtional16;
_Bool _if_conditional169;
struct CVALUE* __result139__;
struct CVALUE* default_value_124;
struct CVALUE* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_122, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_123, 0, sizeof(int));
memset(&default_value_124, 0, sizeof(struct CVALUE*));
                # 686 "./neo-c.h"
                # 682 "./neo-c.h"
                if(_if_conditional168=position<0,                _if_conditional168) {
                    # 683 "./neo-c.h"
                    position+=self->len;
                }
                # 686 "./neo-c.h"
                it_122=self->head;
                # 687 "./neo-c.h"
                i_123=0;
                # 694 "./neo-c.h"
                while(_while_condtional16=it_122!=((void*)0),                _while_condtional16) {
                    # 692 "./neo-c.h"
                    # 689 "./neo-c.h"
                    if(_if_conditional169=position==i_123,                    _if_conditional169) {
                        # 690 "./neo-c.h"
                        __result139__ = __result_obj__ = it_122->item;
                        return __result139__;
                    }
                    # 692 "./neo-c.h"
                    it_122=it_122->next;
                    # 693 "./neo-c.h"
                    i_123++;
                }
                # 696 "./neo-c.h"
                # 697 "./neo-c.h"
                memset(&default_value_124,0,sizeof(struct CVALUE*));
                # 698 "./neo-c.h"
                __result140__ = __result_obj__ = default_value_124;
                come_call_finalizer2(CVALUE_finalize,default_value_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result140__;
                come_call_finalizer2(CVALUE_finalize,default_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional170;
void* right_value207;
struct list_item$1sTypeph* litem_126;
struct sType* __dec_obj70;
_Bool _if_conditional171;
void* right_value208;
struct list_item$1sTypeph* litem_127;
struct sType* __dec_obj71;
void* right_value209;
struct list_item$1sTypeph* litem_128;
struct sType* __dec_obj72;
struct list$1sTypeph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1sTypeph*));
right_value208 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1sTypeph*));
right_value209 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1sTypeph*));
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional170=self->len==0,        _if_conditional170) {
            # 226 "./neo-c.h"
            litem_126=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value207=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
            come_call_finalizer2(list_item$1sTypephp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_126->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_126->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj70=litem_126->item;
            litem_126->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./neo-c.h"
            self->tail=litem_126;
            # 233 "./neo-c.h"
            self->head=litem_126;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional171=self->len==1,            _if_conditional171) {
                # 236 "./neo-c.h"
                litem_127=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value208=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_127->prev=self->head;
                # 239 "./neo-c.h"
                litem_127->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj71=litem_127->item;
                litem_127->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./neo-c.h"
                self->tail=litem_127;
                # 243 "./neo-c.h"
                self->head->next=litem_127;
            }
            else {
                # 246 "./neo-c.h"
                litem_128=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value209=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_128->prev=self->tail;
                # 249 "./neo-c.h"
                litem_128->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj72=litem_128->item;
                litem_128->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./neo-c.h"
                self->tail->next=litem_128;
                # 253 "./neo-c.h"
                self->tail=litem_128;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result141__ = __result_obj__ = self;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result141__;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional174;
struct list_item$1sTypeph* it_141;
int i_142;
_Bool _while_condtional17;
_Bool _if_conditional175;
struct sType* __result143__;
struct sType* default_value_143;
struct sType* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_141, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_142, 0, sizeof(int));
memset(&default_value_143, 0, sizeof(struct sType*));
        # 686 "./neo-c.h"
        # 682 "./neo-c.h"
        if(_if_conditional174=position<0,        _if_conditional174) {
            # 683 "./neo-c.h"
            position+=self->len;
        }
        # 686 "./neo-c.h"
        it_141=self->head;
        # 687 "./neo-c.h"
        i_142=0;
        # 694 "./neo-c.h"
        while(_while_condtional17=it_141!=((void*)0),        _while_condtional17) {
            # 692 "./neo-c.h"
            # 689 "./neo-c.h"
            if(_if_conditional175=position==i_142,            _if_conditional175) {
                # 690 "./neo-c.h"
                __result143__ = __result_obj__ = it_141->item;
                return __result143__;
            }
            # 692 "./neo-c.h"
            it_141=it_141->next;
            # 693 "./neo-c.h"
            i_142++;
        }
        # 696 "./neo-c.h"
        # 697 "./neo-c.h"
        memset(&default_value_143,0,sizeof(struct sType*));
        # 698 "./neo-c.h"
        __result144__ = __result_obj__ = default_value_143;
        come_call_finalizer2(sType_finalize,default_value_143, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result144__;
        come_call_finalizer2(sType_finalize,default_value_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    # 592 "06str.c"
    __result146__ = self->sline;
    return __result146__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value242;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    # 597 "06str.c"
    __result147__ = __result_obj__ = ((char*)(right_value242=__builtin_string(self->sname)));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj84;
void* right_value243;
char* __dec_obj85;
struct sTupleNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
    # 609 "06str.c"
    __dec_obj84=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 611 "06str.c"
    self->sline=info->sline;
    # 612 "06str.c"
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 614 "06str.c"
    __result148__ = __result_obj__ = self;
    come_call_finalizer2(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result148__;
    come_call_finalizer2(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 619 "06str.c"
    __result149__ = (_Bool)0;
    return __result149__;
}

char* sTupleNode_kind(){
void* __result_obj__;
void* right_value244;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
    # 624 "06str.c"
    __result150__ = __result_obj__ = ((char*)(right_value244=__builtin_string("sTupleNode")));
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* tuple_elements_151;
void* right_value245;
void* right_value246;
struct list$1sTypeph* tuple_types_152;
void* right_value247;
void* right_value248;
struct list$1CVALUEph* tuple_values_153;
struct list$1sNodeph* o2_saved_154;
struct sNode* it_155;
_Bool _if_conditional181;
_Bool __result151__;
void* right_value249;
struct CVALUE* come_value_156;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
void* right_value257;
struct sType* type_158;
struct list$1sTypeph* o2_saved_159;
struct sType* it_162;
void* right_value258;
void* right_value259;
struct CVALUE* obj_value_165;
void* right_value260;
void* right_value261;
struct buffer* num_string_166;
void* right_value262;
struct sType* type2_167;
void* right_value263;
char* type_name_168;
void* right_value264;
void* right_value265;
char* __dec_obj88;
void* right_value266;
struct sType* type3_169;
void* right_value267;
struct sType* __dec_obj89;
void* right_value268;
char* __dec_obj90;
void* right_value269;
struct sType* obj_type_170;
char* fun_name_171;
void* right_value270;
void* right_value271;
void* right_value272;
char* generics_fun_name_172;
struct sFun* fun_173;
_Bool _if_conditional190;
void* right_value273;
void* right_value274;
char* __dec_obj91;
_Bool _if_conditional191;
_Bool __result161__;
void* right_value275;
struct sType* result_type_174;
void* right_value276;
void* right_value277;
struct list$1CVALUEph* come_params_175;
_Bool _if_conditional192;
int i_176;
struct list$1CVALUEph* o2_saved_177;
struct CVALUE* it_178;
void* right_value278;
struct CVALUE* come_value_179;
_Bool _if_conditional193;
void* right_value279;
void* right_value280;
struct buffer* buf_180;
int j_181;
struct list$1CVALUEph* o2_saved_182;
struct CVALUE* it_183;
_Bool _if_conditional194;
void* right_value281;
struct CVALUE* come_value2_184;
void* right_value282;
char* __dec_obj92;
_Bool _if_conditional195;
void* right_value283;
void* right_value284;
char* __dec_obj93;
void* right_value285;
struct sType* __dec_obj94;
void* right_value286;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tuple_elements_151, 0, sizeof(struct list$1sNodeph*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&tuple_types_152, 0, sizeof(struct list$1sTypeph*));
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&tuple_values_153, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_154, 0, sizeof(struct list$1sNodeph*));
memset(&it_155, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&type_158, 0, sizeof(struct sType*));
memset(&o2_saved_159, 0, sizeof(struct list$1sTypeph*));
memset(&it_162, 0, sizeof(struct sType*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&obj_value_165, 0, sizeof(struct CVALUE*));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&num_string_166, 0, sizeof(struct buffer*));
right_value262 = (void*)0;
memset(&type2_167, 0, sizeof(struct sType*));
right_value263 = (void*)0;
memset(&type_name_168, 0, sizeof(char*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&type3_169, 0, sizeof(struct sType*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&obj_type_170, 0, sizeof(struct sType*));
memset(&fun_name_171, 0, sizeof(char*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&generics_fun_name_172, 0, sizeof(char*));
memset(&fun_173, 0, sizeof(struct sFun*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&result_type_174, 0, sizeof(struct sType*));
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&come_params_175, 0, sizeof(struct list$1CVALUEph*));
memset(&i_176, 0, sizeof(int));
memset(&o2_saved_177, 0, sizeof(struct list$1CVALUEph*));
memset(&it_178, 0, sizeof(struct CVALUE*));
right_value278 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&buf_180, 0, sizeof(struct buffer*));
memset(&j_181, 0, sizeof(int));
memset(&o2_saved_182, 0, sizeof(struct list$1CVALUEph*));
memset(&it_183, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
memset(&come_value2_184, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
    # 629 "06str.c"
    tuple_elements_151=self->tuple_elements;
    # 630 "06str.c"
    tuple_types_152=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value246=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value245=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 630, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 631 "06str.c"
    tuple_values_153=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value248=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value247=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 631, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 645 "06str.c"
    for(    o2_saved_154=(tuple_elements_151),it_155=list$1sNodeph_begin((o2_saved_154));    !list$1sNodeph_end((o2_saved_154));    it_155=list$1sNodeph_next((o2_saved_154))    ){
        # 638 "06str.c"
        # 634 "06str.c"
        if(_if_conditional181=!node_compile(it_155,info),        _if_conditional181) {
            # 635 "06str.c"
            __result151__ = (_Bool)0;
            come_call_finalizer2(list$1sTypephp_finalize,tuple_types_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result151__;
        }
        # 638 "06str.c"
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 639 "06str.c"
        dec_stack_ptr(1,info);
        # 641 "06str.c"
        list$1CVALUEph_push_back(tuple_values_153,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=CVALUE_clone(come_value_156)))));
        come_call_finalizer2(CVALUE_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 642 "06str.c"
        list$1sTypeph_push_back(tuple_types_152,(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(come_value_156->type)))));
        come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 645 "06str.c"
    type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value255=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 645, "sType")))),((char*)(right_value256=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_152)))),(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 651 "06str.c"
    for(    o2_saved_159=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_152)),it_162=list$1sTypeph_begin((o2_saved_159));    !list$1sTypeph_end((o2_saved_159));    it_162=list$1sTypeph_next((o2_saved_159))    ){
        # 648 "06str.c"
        list$1sTypeph_push_back(type_158->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(it_162)))));
        come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 651 "06str.c"
    obj_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 651, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 653 "06str.c"
    num_string_166=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value261=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value260=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 653, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 655 "06str.c"
    buffer_append_str(num_string_166,"1");
    # 657 "06str.c"
    type2_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=solve_generics(type_158,type_158,info))));
    come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 659 "06str.c"
    type_name_168=(char*)come_increment_ref_count(((char*)(right_value263=make_type_name_string(type2_167,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 661 "06str.c"
    __dec_obj88=obj_value_165->c_value;
    obj_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_168,type_name_168,((char*)(right_value264=buffer_to_string(num_string_166))),info->sname,info->sline,type_name_168))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 663 "06str.c"
    type3_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(type2_167))));
    come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 664 "06str.c"
    type3_169->mPointerNum++;
    # 665 "06str.c"
    type3_169->mHeap=(_Bool)1;
    # 666 "06str.c"
    type2_167->mHeap=(_Bool)1;
    # 667 "06str.c"
    __dec_obj89=obj_value_165->type;
    obj_value_165->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_clone(type2_167))));
    come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 668 "06str.c"
    __dec_obj90=obj_value_165->c_value;
    obj_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value268=append_object_to_right_values(obj_value_165->c_value,(struct sType*)come_increment_ref_count(type3_169),info))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 669 "06str.c"
    obj_value_165->type->mPointerNum++;
    # 670 "06str.c"
    obj_value_165->var=((void*)0);
    # 672 "06str.c"
    obj_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(type2_167))));
    come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 673 "06str.c"
    fun_name_171="initialize";
    # 675 "06str.c"
    generics_fun_name_172=(char*)come_increment_ref_count(((char*)(right_value272=string_to_string(((char*)(right_value271=make_generics_function(obj_type_170,(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(fun_name_171)))),info,(_Bool)1)))))));
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 677 "06str.c"
    fun_173=map$2charphsFunph_at(info->funcs,generics_fun_name_172,((void*)0));
    # 690 "06str.c"
    # 679 "06str.c"
    if(_if_conditional190=fun_173==((void*)0),    _if_conditional190) {
        # 680 "06str.c"
        __dec_obj91=generics_fun_name_172;
        generics_fun_name_172=(char*)come_increment_ref_count(((char*)(right_value274=create_method_name(obj_type_170,(_Bool)0,((char*)(right_value273=__builtin_string(fun_name_171))),info,(_Bool)1))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 682 "06str.c"
        fun_173=map$2charphsFunph_at(info->funcs,generics_fun_name_172,((void*)0));
        # 688 "06str.c"
        # 684 "06str.c"
        if(_if_conditional191=fun_173==((void*)0),        _if_conditional191) {
            # 685 "06str.c"
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_172,info->come_fun->mName);
            # 686 "06str.c"
            __result161__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,tuple_types_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_168 = come_decrement_ref_count2(type_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type3_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_172 = come_decrement_ref_count2(generics_fun_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result161__;
        }
    }
    # 690 "06str.c"
    result_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(fun_173->mResultType))));
    come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 691 "06str.c"
    result_type_174->mStatic=(_Bool)0;
    # 693 "06str.c"
    come_params_175=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value277=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value276=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 693, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 698 "06str.c"
    # 695 "06str.c"
    if(_if_conditional192=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_173->mParamTypes,0), "06str.c", 695, 4))->mHeap&&obj_value_165->type->mHeap,    _if_conditional192) {
        # 696 "06str.c"
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_173->mParamTypes,0), "06str.c", 696, 5)),obj_value_165->type,obj_value_165,info);
    }
    # 698 "06str.c"
    list$1CVALUEph_push_back(come_params_175,(struct CVALUE*)come_increment_ref_count(obj_value_165));
    # 700 "06str.c"
    i_176=1;
    # 712 "06str.c"
    for(    o2_saved_177=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_153)),it_178=list$1CVALUEph_begin((o2_saved_177));    !list$1CVALUEph_end((o2_saved_177));    it_178=list$1CVALUEph_next((o2_saved_177))    ){
        # 702 "06str.c"
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=CVALUE_clone(it_178))));
        come_call_finalizer2(CVALUE_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 707 "06str.c"
        # 704 "06str.c"
        if(_if_conditional193=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_173->mParamTypes,i_176), "06str.c", 704, 6))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_173->mParamTypes,i_176), "06str.c", 704, 7))->mHeap&&come_value_179->type->mHeap,        _if_conditional193) {
            # 705 "06str.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_173->mParamTypes,i_176), "06str.c", 705, 8)),come_value_179->type,come_value_179,info);
        }
        # 707 "06str.c"
        list$1CVALUEph_push_back(come_params_175,(struct CVALUE*)come_increment_ref_count(come_value_179));
        # 709 "06str.c"
        i_176++;
        come_call_finalizer2(CVALUE_finalize,come_value_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 712 "06str.c"
    buf_180=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value280=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value279=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 712, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 714 "06str.c"
    buffer_append_str(buf_180,generics_fun_name_172);
    # 715 "06str.c"
    buffer_append_str(buf_180,"(");
    # 717 "06str.c"
    j_181=0;
    # 727 "06str.c"
    for(    o2_saved_182=(struct list$1CVALUEph*)come_increment_ref_count((come_params_175)),it_183=list$1CVALUEph_begin((o2_saved_182));    !list$1CVALUEph_end((o2_saved_182));    it_183=list$1CVALUEph_next((o2_saved_182))    ){
        # 719 "06str.c"
        buffer_append_str(buf_180,it_183->c_value);
        # 725 "06str.c"
        # 721 "06str.c"
        if(_if_conditional194=j_181!=list$1CVALUEph_length(come_params_175)-1,        _if_conditional194) {
            # 722 "06str.c"
            buffer_append_str(buf_180,",");
        }
        # 725 "06str.c"
        j_181++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 727 "06str.c"
    buffer_append_str(buf_180,")");
    # 729 "06str.c"
    come_value2_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 729, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 731 "06str.c"
    __dec_obj92=come_value2_184->c_value;
    come_value2_184->c_value=(char*)come_increment_ref_count(((char*)(right_value282=buffer_to_string(buf_180))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 737 "06str.c"
    # 733 "06str.c"
    if(result_type_174->mHeap) {
        # 734 "06str.c"
        __dec_obj93=come_value2_184->c_value;
        come_value2_184->c_value=(char*)come_increment_ref_count(((char*)(right_value284=append_object_to_right_values(((char*)(right_value283=buffer_to_string(buf_180))),(struct sType*)come_increment_ref_count(result_type_174),info))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 737 "06str.c"
    __dec_obj94=come_value2_184->type;
    come_value2_184->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(result_type_174))));
    come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 738 "06str.c"
    come_value2_184->type->mStatic=(_Bool)0;
    # 739 "06str.c"
    come_value2_184->var=((void*)0);
    # 741 "06str.c"
    add_come_last_code(info,"%s;\n",((char*)(right_value286=buffer_to_string(buf_180))));
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 743 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_184));
    # 745 "06str.c"
    __result162__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,tuple_types_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_168 = come_decrement_ref_count2(type_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_172 = come_decrement_ref_count2(generics_fun_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result162__;
    come_call_finalizer2(list$1sTypephp_finalize,tuple_types_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,tuple_values_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_168 = come_decrement_ref_count2(type_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_172 = come_decrement_ref_count2(generics_fun_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional182;
struct CVALUE* __result152__;
void* right_value250;
struct CVALUE* result_157;
_Bool _if_conditional183;
void* right_value251;
char* __dec_obj86;
_Bool _if_conditional184;
void* right_value252;
struct sType* __dec_obj87;
_Bool _if_conditional185;
struct CVALUE* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
memset(&result_157, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
            # 3 "CVALUE_clone"
            # 2 "CVALUE_clone"
            if(_if_conditional182=self==(void*)0,            _if_conditional182) {
                # 2 "CVALUE_clone"
                __result152__ = __result_obj__ = (void*)0;
                return __result152__;
            }
            # 3 "CVALUE_clone"
            result_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "CVALUE_clone"
            # 4 "CVALUE_clone"
            if(_if_conditional183=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional183) {
                # 4 "CVALUE_clone"
                __dec_obj86=result_157->c_value;
                result_157->c_value=(char*)come_increment_ref_count(((char*)(right_value251=string_clone(self->c_value))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "CVALUE_clone"
            # 5 "CVALUE_clone"
            if(_if_conditional184=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional184) {
                # 5 "CVALUE_clone"
                __dec_obj87=result_157->type;
                result_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(self->type))));
                come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "CVALUE_clone"
            # 6 "CVALUE_clone"
            if(_if_conditional185=self!=((void*)0),            _if_conditional185) {
                # 6 "CVALUE_clone"
                result_157->var=self->var;
            }
            # 7 "CVALUE_clone"
            __result153__ = __result_obj__ = result_157;
            come_call_finalizer2(CVALUE_finalize,result_157, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result153__;
            come_call_finalizer2(CVALUE_finalize,result_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional186;
struct sType* result_160;
struct sType* __result154__;
_Bool _if_conditional187;
struct sType* __result155__;
struct sType* result_161;
struct sType* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_160, 0, sizeof(struct sType*));
memset(&result_161, 0, sizeof(struct sType*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional186=self==((void*)0),        _if_conditional186) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_160,0,sizeof(struct sType*));
            # 288 "./neo-c.h"
            __result154__ = __result_obj__ = result_160;
            return __result154__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result155__ = __result_obj__ = self->it->item;
            return __result155__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_161,0,sizeof(struct sType*));
        # 298 "./neo-c.h"
        __result156__ = __result_obj__ = result_161;
        return __result156__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result157__ = self==((void*)0)||self->it==((void*)0);
        return __result157__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional188;
struct sType* result_163;
struct sType* __result158__;
_Bool _if_conditional189;
struct sType* __result159__;
struct sType* result_164;
struct sType* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sType*));
memset(&result_164, 0, sizeof(struct sType*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional188=self==((void*)0)||self->it==((void*)0),        _if_conditional188) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_163,0,sizeof(struct sType*));
            # 305 "./neo-c.h"
            __result158__ = __result_obj__ = result_163;
            return __result158__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result159__ = __result_obj__ = self->it->item;
            return __result159__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_164,0,sizeof(struct sType*));
        # 316 "./neo-c.h"
        __result160__ = __result_obj__ = result_164;
        return __result160__;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    # 750 "06str.c"
    __result163__ = self->sline;
    return __result163__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value287;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value287 = (void*)0;
    # 755 "06str.c"
    __result164__ = __result_obj__ = ((char*)(right_value287=__builtin_string(self->sname)));
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj95;
struct list$1sNodeph* __dec_obj96;
void* right_value288;
char* __dec_obj97;
struct sMapNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
    # 768 "06str.c"
    __dec_obj95=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 769 "06str.c"
    __dec_obj96=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 771 "06str.c"
    self->sline=info->sline;
    # 772 "06str.c"
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 774 "06str.c"
    __result165__ = __result_obj__ = self;
    come_call_finalizer2(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result165__;
    come_call_finalizer2(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 779 "06str.c"
    __result166__ = (_Bool)0;
    return __result166__;
}

char* sMapNode_kind(){
void* __result_obj__;
void* right_value289;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value289 = (void*)0;
    # 784 "06str.c"
    __result167__ = __result_obj__ = ((char*)(right_value289=__builtin_string("sMapNode")));
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* map_key_elements_185;
struct list$1sNodeph* map_elements_186;
void* right_value290;
void* right_value291;
struct list$1CVALUEph* key_params_187;
void* right_value292;
void* right_value293;
struct list$1CVALUEph* element_params_188;
struct sType* map_key_type_189;
struct sType* map_element_type_190;
int i_191;
struct sNode* key_elements_195;
struct sNode* elements_196;
_Bool _if_conditional201;
_Bool __result170__;
void* right_value294;
struct CVALUE* come_value_197;
_Bool _if_conditional202;
void* right_value295;
_Bool _if_conditional203;
_Bool __result171__;
void* right_value296;
struct CVALUE* come_value2_198;
_Bool _if_conditional204;
void* right_value297;
void* right_value298;
struct sType* __dec_obj98;
void* right_value299;
struct sType* __dec_obj99;
static int map_value_num_199=0;
void* right_value300;
struct sType* key_type_values_200;
void* right_value301;
void* right_value302;
char* var_name_201;
void* right_value303;
struct sVar* var__202;
void* right_value304;
void* right_value305;
struct sType* element_type_values_203;
void* right_value306;
void* right_value307;
char* var_name2_204;
void* right_value308;
struct sVar* var2__205;
void* right_value309;
void* right_value310;
void* right_value311;
struct buffer* source_206;
int i_207;
struct CVALUE* key_param_208;
struct CVALUE* element_param_209;
_Bool _if_conditional205;
void* right_value312;
void* right_value313;
_Bool _if_conditional206;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
struct sType* map_type_210;
void* right_value319;
void* right_value320;
void* right_value321;
struct sType* obj_type_211;
char* fun_name_212;
void* right_value322;
void* right_value323;
void* right_value324;
char* generics_fun_name_213;
struct sFun* fun_214;
_Bool _if_conditional207;
void* right_value325;
void* right_value326;
char* __dec_obj100;
_Bool _if_conditional208;
_Bool __result172__;
void* right_value327;
struct sType* result_type_215;
struct sType* type_216;
void* right_value328;
struct CVALUE* obj_value_217;
void* right_value329;
void* right_value330;
struct buffer* num_string_218;
void* right_value331;
struct sType* type2_219;
void* right_value332;
char* type_name_220;
void* right_value333;
void* right_value334;
char* __dec_obj101;
void* right_value335;
struct sType* type3_221;
void* right_value336;
struct sType* __dec_obj102;
void* right_value337;
char* __dec_obj103;
void* right_value338;
void* right_value339;
struct list$1CVALUEph* come_params_222;
_Bool _if_conditional209;
void* right_value340;
struct CVALUE* come_value2_223;
void* right_value341;
char* __dec_obj104;
struct sType* __dec_obj105;
void* right_value342;
struct CVALUE* come_value3_224;
void* right_value343;
char* __dec_obj106;
struct sType* __dec_obj107;
void* right_value344;
struct CVALUE* come_value4_225;
void* right_value345;
char* __dec_obj108;
struct sType* __dec_obj109;
void* right_value346;
void* right_value347;
struct buffer* buf_226;
int j_227;
struct list$1CVALUEph* o2_saved_228;
struct CVALUE* it_229;
_Bool _if_conditional210;
void* right_value348;
struct CVALUE* come_value5_230;
void* right_value349;
char* __dec_obj110;
_Bool _if_conditional211;
void* right_value350;
void* right_value351;
char* __dec_obj111;
void* right_value352;
struct sType* __dec_obj112;
void* right_value353;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&map_key_elements_185, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_186, 0, sizeof(struct list$1sNodeph*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&key_params_187, 0, sizeof(struct list$1CVALUEph*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&element_params_188, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_189, 0, sizeof(struct sType*));
memset(&map_element_type_190, 0, sizeof(struct sType*));
memset(&i_191, 0, sizeof(int));
memset(&key_elements_195, 0, sizeof(struct sNode*));
memset(&elements_196, 0, sizeof(struct sNode*));
right_value294 = (void*)0;
memset(&come_value_197, 0, sizeof(struct CVALUE*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&come_value2_198, 0, sizeof(struct CVALUE*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&key_type_values_200, 0, sizeof(struct sType*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&var_name_201, 0, sizeof(char*));
right_value303 = (void*)0;
memset(&var__202, 0, sizeof(struct sVar*));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&element_type_values_203, 0, sizeof(struct sType*));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&var_name2_204, 0, sizeof(char*));
right_value308 = (void*)0;
memset(&var2__205, 0, sizeof(struct sVar*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&source_206, 0, sizeof(struct buffer*));
memset(&i_207, 0, sizeof(int));
memset(&key_param_208, 0, sizeof(struct CVALUE*));
memset(&element_param_209, 0, sizeof(struct CVALUE*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&map_type_210, 0, sizeof(struct sType*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&obj_type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&generics_fun_name_213, 0, sizeof(char*));
memset(&fun_214, 0, sizeof(struct sFun*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&result_type_215, 0, sizeof(struct sType*));
memset(&type_216, 0, sizeof(struct sType*));
right_value328 = (void*)0;
memset(&obj_value_217, 0, sizeof(struct CVALUE*));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&num_string_218, 0, sizeof(struct buffer*));
right_value331 = (void*)0;
memset(&type2_219, 0, sizeof(struct sType*));
right_value332 = (void*)0;
memset(&type_name_220, 0, sizeof(char*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&type3_221, 0, sizeof(struct sType*));
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&come_params_222, 0, sizeof(struct list$1CVALUEph*));
right_value340 = (void*)0;
memset(&come_value2_223, 0, sizeof(struct CVALUE*));
right_value341 = (void*)0;
right_value342 = (void*)0;
memset(&come_value3_224, 0, sizeof(struct CVALUE*));
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&come_value4_225, 0, sizeof(struct CVALUE*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&buf_226, 0, sizeof(struct buffer*));
memset(&j_227, 0, sizeof(int));
memset(&o2_saved_228, 0, sizeof(struct list$1CVALUEph*));
memset(&it_229, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
memset(&come_value5_230, 0, sizeof(struct CVALUE*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
    # 789 "06str.c"
    map_key_elements_185=self->map_key_elements;
    # 790 "06str.c"
    map_elements_186=self->map_elements;
    # 792 "06str.c"
    key_params_187=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value291=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value290=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 792, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 793 "06str.c"
    element_params_188=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value293=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value292=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 793, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 794 "06str.c"
    map_key_type_189=((void*)0);
    # 795 "06str.c"
    map_element_type_190=((void*)0);
    # 831 "06str.c"
    for(    i_191=0;    i_191<list$1sNodeph_length(map_key_elements_185);    i_191++    ){
        # 798 "06str.c"
        key_elements_195=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_185,i_191), "06str.c", 798, 9));
        # 799 "06str.c"
        elements_196=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_186,i_191), "06str.c", 799, 10));
        # 805 "06str.c"
        # 801 "06str.c"
        if(_if_conditional201=!node_compile(key_elements_195,info),        _if_conditional201) {
            # 802 "06str.c"
            __result170__ = (_Bool)0;
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result170__;
        }
        # 805 "06str.c"
        come_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 806 "06str.c"
        dec_stack_ptr(1,info);
        # 812 "06str.c"
        # 808 "06str.c"
        if(map_key_type_189) {
            # 809 "06str.c"
            check_assign_type(((char*)(right_value295=xsprintf("invalid map key type"))),map_key_type_189,come_value_197->type,come_value_197,(_Bool)0,(_Bool)1,info);
            right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 812 "06str.c"
        list$1CVALUEph_push_back(key_params_187,(struct CVALUE*)come_increment_ref_count(come_value_197));
        # 818 "06str.c"
        # 814 "06str.c"
        if(_if_conditional203=!node_compile(elements_196,info),        _if_conditional203) {
            # 815 "06str.c"
            __result171__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,come_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result171__;
        }
        # 818 "06str.c"
        come_value2_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 819 "06str.c"
        dec_stack_ptr(1,info);
        # 825 "06str.c"
        # 821 "06str.c"
        if(map_element_type_190) {
            # 822 "06str.c"
            check_assign_type(((char*)(right_value297=xsprintf("invalid map element type"))),map_element_type_190,come_value2_198->type,come_value2_198,(_Bool)0,(_Bool)1,info);
            right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 825 "06str.c"
        list$1CVALUEph_push_back(element_params_188,(struct CVALUE*)come_increment_ref_count(come_value2_198));
        # 827 "06str.c"
        __dec_obj98=map_key_type_189;
        map_key_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value298=sType_clone(come_value_197->type))));
        come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 828 "06str.c"
        __dec_obj99=map_element_type_190;
        map_element_type_190=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_clone(come_value2_198->type))));
        come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 831 "06str.c"
    # 833 "06str.c"
    key_type_values_200=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_clone(map_key_type_189))));
    come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 834 "06str.c"
    list$1sNodeph_push_back(key_type_values_200->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=create_int_node(list$1CVALUEph_length(key_params_187),info)))));
    if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 835 "06str.c"
    key_type_values_200->mHeap=(_Bool)0;
    # 837 "06str.c"
    var_name_201=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("__map_keys%d__",++map_value_num_199))));
    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 839 "06str.c"
    add_variable_to_table(var_name_201,(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(key_type_values_200)))),info);
    come_call_finalizer2(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 841 "06str.c"
    var__202=get_variable_from_table(info->lv_table,var_name_201);
    # 843 "06str.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value304=make_define_var(key_type_values_200,var__202->mCValueName,(_Bool)0,info))));
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 845 "06str.c"
    element_type_values_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(map_element_type_190))));
    come_call_finalizer2(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 846 "06str.c"
    list$1sNodeph_push_back(element_type_values_203->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=create_int_node(list$1CVALUEph_length(element_params_188),info)))));
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 847 "06str.c"
    element_type_values_203->mHeap=(_Bool)0;
    # 849 "06str.c"
    var_name2_204=(char*)come_increment_ref_count(((char*)(right_value307=xsprintf("__map_element%d__",map_value_num_199))));
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 851 "06str.c"
    add_variable_to_table(var_name2_204,(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(element_type_values_203)))),info);
    come_call_finalizer2(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 853 "06str.c"
    var2__205=get_variable_from_table(info->lv_table,var_name2_204);
    # 855 "06str.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value309=make_define_var(element_type_values_203,var2__205->mCValueName,(_Bool)0,info))));
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 857 "06str.c"
    source_206=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value311=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value310=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 857, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 859 "06str.c"
    buffer_append_str(source_206,"{");
    # 880 "06str.c"
    for(    i_207=0;    i_207<list$1CVALUEph_length(key_params_187);    i_207++    ){
        # 862 "06str.c"
        key_param_208=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_187,i_207), "06str.c", 862, 11));
        # 863 "06str.c"
        element_param_209=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_188,i_207), "06str.c", 863, 12));
        # 872 "06str.c"
        # 865 "06str.c"
        if(map_key_type_189->mHeap) {
            # 866 "06str.c"
            buffer_append_str(source_206,((char*)(right_value312=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__202->mCValueName,i_207,key_param_208->c_value))));
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 869 "06str.c"
            buffer_append_str(source_206,((char*)(right_value313=xsprintf("%s[%d]=%s;\n",var__202->mCValueName,i_207,key_param_208->c_value))));
            right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 878 "06str.c"
        # 872 "06str.c"
        if(map_element_type_190->mHeap) {
            # 873 "06str.c"
            buffer_append_str(source_206,((char*)(right_value314=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__205->mCValueName,i_207,element_param_209->c_value))));
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 876 "06str.c"
            buffer_append_str(source_206,((char*)(right_value315=xsprintf("%s[%d]=%s;\n",var2__205->mCValueName,i_207,element_param_209->c_value))));
            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 880 "06str.c"
    buffer_append_str(source_206,"}");
    # 882 "06str.c"
    add_come_code(info,"%s",((char*)(right_value316=buffer_to_string(source_206))));
    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 884 "06str.c"
    map_type_210=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 884, "sType")))),"map",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 885 "06str.c"
    list$1sTypeph_push_back(map_type_210->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(map_key_type_189)))));
    come_call_finalizer2(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 886 "06str.c"
    list$1sTypeph_push_back(map_type_210->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(map_element_type_190)))));
    come_call_finalizer2(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 888 "06str.c"
    obj_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(map_type_210))));
    come_call_finalizer2(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 889 "06str.c"
    fun_name_212="initialize_with_values";
    # 891 "06str.c"
    generics_fun_name_213=(char*)come_increment_ref_count(((char*)(right_value324=string_to_string(((char*)(right_value323=make_generics_function(obj_type_211,(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string(fun_name_212)))),info,(_Bool)1)))))));
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 893 "06str.c"
    fun_214=map$2charphsFunph_at(info->funcs,generics_fun_name_213,((void*)0));
    # 906 "06str.c"
    # 895 "06str.c"
    if(_if_conditional207=fun_214==((void*)0),    _if_conditional207) {
        # 896 "06str.c"
        __dec_obj100=generics_fun_name_213;
        generics_fun_name_213=(char*)come_increment_ref_count(((char*)(right_value326=create_method_name(obj_type_211,(_Bool)0,((char*)(right_value325=__builtin_string(fun_name_212))),info,(_Bool)1))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 898 "06str.c"
        fun_214=map$2charphsFunph_at(info->funcs,generics_fun_name_213,((void*)0));
        # 904 "06str.c"
        # 900 "06str.c"
        if(_if_conditional208=fun_214==((void*)0),        _if_conditional208) {
            # 901 "06str.c"
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_213,info->come_fun->mName);
            # 902 "06str.c"
            __result172__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,key_params_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,element_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_key_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_element_type_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,key_type_values_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_201 = come_decrement_ref_count2(var_name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,element_type_values_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name2_204 = come_decrement_ref_count2(var_name2_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,map_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            generics_fun_name_213 = come_decrement_ref_count2(generics_fun_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result172__;
        }
    }
    # 906 "06str.c"
    result_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(fun_214->mResultType))));
    come_call_finalizer2(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 907 "06str.c"
    result_type_215->mStatic=(_Bool)0;
    # 909 "06str.c"
    type_216=map_type_210;
    # 911 "06str.c"
    obj_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 911, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 913 "06str.c"
    num_string_218=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value330=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value329=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 913, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 915 "06str.c"
    buffer_append_str(num_string_218,"1");
    # 917 "06str.c"
    type2_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=solve_generics(type_216,type_216,info))));
    come_call_finalizer2(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 919 "06str.c"
    type_name_220=(char*)come_increment_ref_count(((char*)(right_value332=make_type_name_string(type2_219,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 921 "06str.c"
    __dec_obj101=obj_value_217->c_value;
    obj_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value334=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_220,type_name_220,((char*)(right_value333=buffer_to_string(num_string_218))),info->sname,info->sline,type_name_220))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 923 "06str.c"
    type3_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(type2_219))));
    come_call_finalizer2(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 924 "06str.c"
    type3_221->mPointerNum++;
    # 925 "06str.c"
    type3_221->mHeap=(_Bool)1;
    # 926 "06str.c"
    type2_219->mHeap=(_Bool)1;
    # 927 "06str.c"
    __dec_obj102=obj_value_217->type;
    obj_value_217->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(type2_219))));
    come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 928 "06str.c"
    __dec_obj103=obj_value_217->c_value;
    obj_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value337=append_object_to_right_values(obj_value_217->c_value,(struct sType*)come_increment_ref_count(type3_221),info))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 929 "06str.c"
    obj_value_217->type->mPointerNum++;
    # 930 "06str.c"
    obj_value_217->var=((void*)0);
    # 932 "06str.c"
    come_params_222=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value339=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value338=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 932, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 937 "06str.c"
    # 934 "06str.c"
    if(_if_conditional209=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_214->mParamTypes,0), "06str.c", 934, 13))->mHeap&&obj_value_217->type->mHeap,    _if_conditional209) {
        # 935 "06str.c"
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_214->mParamTypes,0), "06str.c", 935, 14)),obj_value_217->type,obj_value_217,info);
    }
    # 937 "06str.c"
    list$1CVALUEph_push_back(come_params_222,(struct CVALUE*)come_increment_ref_count(obj_value_217));
    # 939 "06str.c"
    come_value2_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value340=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 939, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 941 "06str.c"
    __dec_obj104=come_value2_223->c_value;
    come_value2_223->c_value=(char*)come_increment_ref_count(((char*)(right_value341=xsprintf("%d",list$1CVALUEph_length(key_params_187)))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 942 "06str.c"
    __dec_obj105=come_value2_223->type;
    come_value2_223->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 943 "06str.c"
    come_value2_223->var=((void*)0);
    # 945 "06str.c"
    list$1CVALUEph_push_back(come_params_222,(struct CVALUE*)come_increment_ref_count(come_value2_223));
    # 947 "06str.c"
    come_value3_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value342=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 947, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 949 "06str.c"
    __dec_obj106=come_value3_224->c_value;
    come_value3_224->c_value=(char*)come_increment_ref_count(((char*)(right_value343=xsprintf("%s",var__202->mCValueName))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 950 "06str.c"
    __dec_obj107=come_value3_224->type;
    come_value3_224->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 951 "06str.c"
    come_value3_224->var=((void*)0);
    # 953 "06str.c"
    list$1CVALUEph_push_back(come_params_222,(struct CVALUE*)come_increment_ref_count(come_value3_224));
    # 955 "06str.c"
    come_value4_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value344=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 955, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 957 "06str.c"
    __dec_obj108=come_value4_225->c_value;
    come_value4_225->c_value=(char*)come_increment_ref_count(((char*)(right_value345=xsprintf("%s",var2__205->mCValueName))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 958 "06str.c"
    __dec_obj109=come_value4_225->type;
    come_value4_225->type=((void*)0);
    come_call_finalizer2(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 959 "06str.c"
    come_value4_225->var=((void*)0);
    # 961 "06str.c"
    list$1CVALUEph_push_back(come_params_222,(struct CVALUE*)come_increment_ref_count(come_value4_225));
    # 963 "06str.c"
    buf_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 963, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 965 "06str.c"
    buffer_append_str(buf_226,generics_fun_name_213);
    # 966 "06str.c"
    buffer_append_str(buf_226,"(");
    # 968 "06str.c"
    j_227=0;
    # 978 "06str.c"
    for(    o2_saved_228=(struct list$1CVALUEph*)come_increment_ref_count((come_params_222)),it_229=list$1CVALUEph_begin((o2_saved_228));    !list$1CVALUEph_end((o2_saved_228));    it_229=list$1CVALUEph_next((o2_saved_228))    ){
        # 970 "06str.c"
        buffer_append_str(buf_226,it_229->c_value);
        # 976 "06str.c"
        # 972 "06str.c"
        if(_if_conditional210=j_227!=list$1CVALUEph_length(come_params_222)-1,        _if_conditional210) {
            # 973 "06str.c"
            buffer_append_str(buf_226,",");
        }
        # 976 "06str.c"
        j_227++;
    }
    come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 978 "06str.c"
    buffer_append_str(buf_226,")");
    # 980 "06str.c"
    come_value5_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value348=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 980, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 982 "06str.c"
    __dec_obj110=come_value5_230->c_value;
    come_value5_230->c_value=(char*)come_increment_ref_count(((char*)(right_value349=buffer_to_string(buf_226))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 988 "06str.c"
    # 984 "06str.c"
    if(result_type_215->mHeap) {
        # 985 "06str.c"
        __dec_obj111=come_value5_230->c_value;
        come_value5_230->c_value=(char*)come_increment_ref_count(((char*)(right_value351=append_object_to_right_values(((char*)(right_value350=buffer_to_string(buf_226))),(struct sType*)come_increment_ref_count(result_type_215),info))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 988 "06str.c"
    __dec_obj112=come_value5_230->type;
    come_value5_230->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_clone(result_type_215))));
    come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 989 "06str.c"
    come_value5_230->type->mStatic=(_Bool)0;
    # 990 "06str.c"
    come_value5_230->var=((void*)0);
    # 992 "06str.c"
    add_come_last_code(info,"%s;\n",((char*)(right_value353=buffer_to_string(buf_226))));
    right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 994 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_230));
    # 996 "06str.c"
    __result173__ = (_Bool)1;
    come_call_finalizer2(list$1CVALUEphp_finalize,key_params_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,element_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_key_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_element_type_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,key_type_values_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_201 = come_decrement_ref_count2(var_name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,element_type_values_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_204 = come_decrement_ref_count2(var_name2_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_213 = come_decrement_ref_count2(generics_fun_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_220 = come_decrement_ref_count2(type_name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value5_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result173__;
    come_call_finalizer2(list$1CVALUEphp_finalize,key_params_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,element_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_key_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_element_type_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,key_type_values_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_201 = come_decrement_ref_count2(var_name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,element_type_values_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_204 = come_decrement_ref_count2(var_name2_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,map_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    generics_fun_name_213 = come_decrement_ref_count2(generics_fun_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_220 = come_decrement_ref_count2(type_name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value3_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value4_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value5_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional199;
struct list_item$1sNodeph* it_192;
int i_193;
_Bool _while_condtional18;
_Bool _if_conditional200;
struct sNode* __result168__;
struct sNode* default_value_194;
struct sNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_192, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_193, 0, sizeof(int));
memset(&default_value_194, 0, sizeof(struct sNode*));
            # 686 "./neo-c.h"
            # 682 "./neo-c.h"
            if(_if_conditional199=position<0,            _if_conditional199) {
                # 683 "./neo-c.h"
                position+=self->len;
            }
            # 686 "./neo-c.h"
            it_192=self->head;
            # 687 "./neo-c.h"
            i_193=0;
            # 694 "./neo-c.h"
            while(_while_condtional18=it_192!=((void*)0),            _while_condtional18) {
                # 692 "./neo-c.h"
                # 689 "./neo-c.h"
                if(_if_conditional200=position==i_193,                _if_conditional200) {
                    # 690 "./neo-c.h"
                    __result168__ = __result_obj__ = it_192->item;
                    return __result168__;
                }
                # 692 "./neo-c.h"
                it_192=it_192->next;
                # 693 "./neo-c.h"
                i_193++;
            }
            # 696 "./neo-c.h"
            # 697 "./neo-c.h"
            memset(&default_value_194,0,sizeof(struct sNode*));
            # 698 "./neo-c.h"
            __result169__ = __result_obj__ = default_value_194;
            if(default_value_194) { default_value_194 = come_decrement_ref_count2(default_value_194, ((struct sNode*)default_value_194)->finalize, ((struct sNode*)default_value_194)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result169__;
            if(default_value_194) { default_value_194 = come_decrement_ref_count2(default_value_194, ((struct sNode*)default_value_194)->finalize, ((struct sNode*)default_value_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1001 "06str.c"
    __result174__ = self->sline;
    return __result174__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value354;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
    # 1006 "06str.c"
    __result175__ = __result_obj__ = ((char*)(right_value354=__builtin_string(self->sname)));
    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional212;
int sline_231;
void* right_value355;
void* right_value356;
struct list$1sNodeph* exps_232;
void* right_value357;
void* right_value358;
struct buffer* value_233;
char* head_of_last_line_234;
_Bool _while_condtional19;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
int len_235;
_Bool _while_condtional20;
_Bool _if_conditional219;
_Bool _while_condtional21;
_Bool _if_conditional220;
void* right_value359;
struct sNode* exp_236;
_Bool _if_conditional221;
_Bool _if_conditional222;
int sline2_237;
_Bool _if_conditional223;
void* right_value360;
void* right_value361;
void* right_value362;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* right_value367;
struct sNode* __result178__;
_Bool _if_conditional232;
int sline_239;
void* right_value368;
void* right_value369;
struct buffer* value_240;
_Bool _while_condtional22;
_Bool _if_conditional233;
char* p_241;
int sline_242;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
int sline2_243;
_Bool _if_conditional238;
void* right_value370;
void* right_value371;
void* right_value372;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value376;
struct sNode* __result181__;
_Bool _if_conditional245;
int sline_245;
void* right_value377;
void* right_value378;
struct buffer* buf_246;
_Bool _while_condtional23;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool global_247;
_Bool ignore_case_248;
_Bool _while_condtional24;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value379;
void* right_value380;
void* right_value381;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* right_value385;
struct sNode* __result184__;
_Bool _if_conditional259;
int c_250;
_Bool _if_conditional260;
_Bool _if_conditional261;
int n_251;
_Bool _while_condtional25;
_Bool _if_conditional262;
int n_252;
_Bool _while_condtional26;
_Bool _while_condtional27;
unsigned long long int n_255;
_Bool _if_conditional263;
void* right_value386;
void* right_value387;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* right_value390;
struct sNode* __result187__;
_Bool _if_conditional269;
unsigned int c_257;
_Bool _if_conditional270;
_Bool _if_conditional271;
int n_258;
_Bool _while_condtional28;
_Bool _if_conditional272;
int n_259;
_Bool _while_condtional29;
_Bool _while_condtional30;
unsigned long long int n_262;
unsigned char p2_263;
_Bool _if_conditional273;
int size_264;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value391;
void* right_value392;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* right_value395;
struct sNode* __result190__;
_Bool _if_conditional282;
int sline_267;
void* right_value396;
void* right_value397;
struct buffer* value_268;
_Bool _while_condtional31;
_Bool _if_conditional283;
char* p_269;
int sline_270;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
int len_271;
int n_272;
_Bool _while_condtional32;
_Bool _if_conditional287;
_Bool _while_condtional33;
unsigned long int lont_275;
int n_276;
_Bool _if_conditional288;
int sline2_277;
_Bool _if_conditional289;
int len_278;
void* right_value398;
unsigned int* wstr_279;
char* str_280;
_Bool _if_conditional290;
void* right_value399;
void* right_value400;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* right_value404;
struct sNode* __result193__;
_Bool _if_conditional297;
int sline_282;
void* right_value405;
void* right_value406;
struct list$1sNodeph* exps_283;
void* right_value407;
void* right_value408;
struct buffer* value_284;
_Bool _while_condtional34;
_Bool _if_conditional298;
char* p_285;
int sline_286;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
void* right_value409;
struct sNode* exp_287;
char* p_288;
_Bool _while_condtional35;
_Bool _if_conditional302;
_Bool _if_conditional303;
int len_289;
_Bool _while_condtional36;
_Bool _if_conditional304;
_Bool _while_condtional37;
_Bool _if_conditional305;
void* right_value410;
struct sNode* exp_290;
_Bool _if_conditional306;
_Bool _if_conditional307;
int sline2_291;
_Bool _if_conditional308;
void* right_value411;
void* right_value412;
void* right_value413;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* right_value418;
struct sNode* __result196__;
_Bool _if_conditional317;
char* p_293;
_Bool no_comma_294;
void* right_value419;
struct sNode* node_295;
char* p2_296;
void* right_value420;
void* right_value421;
struct buffer* first_element_source_297;
void* right_value422;
void* right_value423;
struct list$1sNodeph* list_elements_298;
void* right_value424;
void* right_value425;
struct list$1sNodeph* map_keys_299;
void* right_value426;
void* right_value427;
struct list$1sNodeph* map_elements_300;
_Bool _if_conditional318;
_Bool no_comma_301;
void* right_value428;
struct sNode* node2_302;
_Bool _if_conditional319;
void* right_value429;
void* right_value430;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* right_value435;
struct sNode* __result199__;
_Bool _while_condtional38;
_Bool no_comma_304;
void* right_value436;
struct sNode* node2_305;
void* right_value437;
struct sNode* node3_306;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value438;
void* right_value439;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* right_value444;
struct sNode* __result202__;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _while_condtional39;
_Bool no_comma_308;
void* right_value445;
struct sNode* node2_309;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value446;
void* right_value447;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* right_value451;
struct sNode* __result205__;
void* right_value452;
struct sNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sline_231, 0, sizeof(int));
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&exps_232, 0, sizeof(struct list$1sNodeph*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&value_233, 0, sizeof(struct buffer*));
memset(&head_of_last_line_234, 0, sizeof(char*));
memset(&len_235, 0, sizeof(int));
right_value359 = (void*)0;
memset(&exp_236, 0, sizeof(struct sNode*));
memset(&sline2_237, 0, sizeof(int));
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value367 = (void*)0;
memset(&sline_239, 0, sizeof(int));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&value_240, 0, sizeof(struct buffer*));
memset(&p_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
memset(&sline2_243, 0, sizeof(int));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value376 = (void*)0;
memset(&sline_245, 0, sizeof(int));
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&buf_246, 0, sizeof(struct buffer*));
memset(&global_247, 0, sizeof(_Bool));
memset(&ignore_case_248, 0, sizeof(_Bool));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value385 = (void*)0;
memset(&c_250, 0, sizeof(int));
memset(&n_251, 0, sizeof(int));
memset(&n_252, 0, sizeof(int));
memset(&n_255, 0, sizeof(unsigned long long int));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value390 = (void*)0;
memset(&c_257, 0, sizeof(unsigned int));
memset(&n_258, 0, sizeof(int));
memset(&n_259, 0, sizeof(int));
memset(&n_262, 0, sizeof(unsigned long long int));
memset(&p2_263, 0, sizeof(unsigned char));
memset(&size_264, 0, sizeof(int));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value395 = (void*)0;
memset(&sline_267, 0, sizeof(int));
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&value_268, 0, sizeof(struct buffer*));
memset(&p_269, 0, sizeof(char*));
memset(&sline_270, 0, sizeof(int));
memset(&len_271, 0, sizeof(int));
memset(&n_272, 0, sizeof(int));
memset(&lont_275, 0, sizeof(unsigned long int));
memset(&n_276, 0, sizeof(int));
memset(&sline2_277, 0, sizeof(int));
memset(&len_278, 0, sizeof(int));
right_value398 = (void*)0;
memset(&wstr_279, 0, sizeof(unsigned int*));
memset(&str_280, 0, sizeof(char*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value404 = (void*)0;
memset(&sline_282, 0, sizeof(int));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&exps_283, 0, sizeof(struct list$1sNodeph*));
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&value_284, 0, sizeof(struct buffer*));
memset(&p_285, 0, sizeof(char*));
memset(&sline_286, 0, sizeof(int));
right_value409 = (void*)0;
memset(&exp_287, 0, sizeof(struct sNode*));
memset(&p_288, 0, sizeof(char*));
memset(&len_289, 0, sizeof(int));
right_value410 = (void*)0;
memset(&exp_290, 0, sizeof(struct sNode*));
memset(&sline2_291, 0, sizeof(int));
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value418 = (void*)0;
memset(&p_293, 0, sizeof(char*));
memset(&no_comma_294, 0, sizeof(_Bool));
right_value419 = (void*)0;
memset(&node_295, 0, sizeof(struct sNode*));
memset(&p2_296, 0, sizeof(char*));
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&first_element_source_297, 0, sizeof(struct buffer*));
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&list_elements_298, 0, sizeof(struct list$1sNodeph*));
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&map_keys_299, 0, sizeof(struct list$1sNodeph*));
right_value426 = (void*)0;
right_value427 = (void*)0;
memset(&map_elements_300, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_301, 0, sizeof(_Bool));
right_value428 = (void*)0;
memset(&node2_302, 0, sizeof(struct sNode*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value435 = (void*)0;
memset(&no_comma_304, 0, sizeof(_Bool));
right_value436 = (void*)0;
memset(&node2_305, 0, sizeof(struct sNode*));
right_value437 = (void*)0;
memset(&node3_306, 0, sizeof(struct sNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value444 = (void*)0;
memset(&no_comma_308, 0, sizeof(_Bool));
right_value445 = (void*)0;
memset(&node2_309, 0, sizeof(struct sNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
    # 1976 "06str.c"
    # 1012 "06str.c"
    if(_if_conditional212=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional212) {
        # 1013 "06str.c"
        info->p+=4;
        # 1014 "06str.c"
        info->sline++;
        # 1016 "06str.c"
        sline_231=info->sline;
        # 1018 "06str.c"
        exps_232=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value356=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value355=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1018, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodephp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1019 "06str.c"
        value_233=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value358=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value357=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1019, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1021 "06str.c"
        head_of_last_line_234=((void*)0);
        # 1166 "06str.c"
        while(_while_condtional19=1,        _while_condtional19) {
            # 1164 "06str.c"
            # 1025 "06str.c"
            if(_if_conditional213=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional213) {
                # 1030 "06str.c"
                # 1026 "06str.c"
                if(head_of_last_line_234) {
                    # 1027 "06str.c"
                    buffer_trim(value_233,info->p-head_of_last_line_234);
                }
                # 1030 "06str.c"
                info->p+=3;
                # 1032 "06str.c"
                skip_spaces_and_lf(info);
                # 1033 "06str.c"
                break;
            }
            else {
                # 1164 "06str.c"
                # 1035 "06str.c"
                if(_if_conditional215=*info->p==37,                _if_conditional215) {
                    # 1036 "06str.c"
                    buffer_append_char(value_233,37);
                    # 1037 "06str.c"
                    buffer_append_char(value_233,37);
                    # 1038 "06str.c"
                    info->p++;
                }
                else {
                    # 1164 "06str.c"
                    # 1040 "06str.c"
                    if(_if_conditional216=*info->p==34,                    _if_conditional216) {
                        # 1041 "06str.c"
                        buffer_append_char(value_233,92);
                        # 1042 "06str.c"
                        buffer_append_char(value_233,34);
                        # 1043 "06str.c"
                        info->p++;
                    }
                    else {
                        # 1164 "06str.c"
                        # 1056 "06str.c"
                        if(_if_conditional217=*info->p==92,                        _if_conditional217) {
                            # 1057 "06str.c"
                            buffer_append_char(value_233,92);
                            # 1058 "06str.c"
                            info->p++;
                            # 1143 "06str.c"
                            # 1060 "06str.c"
                            if(_if_conditional218=xisdigit(*info->p),                            _if_conditional218) {
                                # 1061 "06str.c"
                                len_235=0;
                                # 1067 "06str.c"
                                while(_while_condtional20=xisdigit(*info->p)&&len_235<3,                                _while_condtional20) {
                                    # 1063 "06str.c"
                                    buffer_append_char(value_233,*info->p);
                                    # 1064 "06str.c"
                                    info->p++;
                                    # 1065 "06str.c"
                                    len_235++;
                                }
                            }
                            else {
                                # 1143 "06str.c"
                                # 1068 "06str.c"
                                if(_if_conditional219=*info->p==120||*info->p==88,                                _if_conditional219) {
                                    # 1069 "06str.c"
                                    buffer_append_char(value_233,*info->p);
                                    # 1070 "06str.c"
                                    info->p++;
                                    # 1076 "06str.c"
                                    while(_while_condtional21=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional21) {
                                        # 1073 "06str.c"
                                        buffer_append_char(value_233,*info->p);
                                        # 1074 "06str.c"
                                        info->p++;
                                    }
                                }
                                else {
                                    # 1143 "06str.c"
                                    # 1077 "06str.c"
                                    if(_if_conditional220=*info->p==123,                                    _if_conditional220) {
                                        # 1078 "06str.c"
                                        info->p++;
                                        # 1080 "06str.c"
                                        exp_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=expression_v13(info))));
                                        if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1082 "06str.c"
                                        list$1sNodeph_add(exps_232,(struct sNode*)come_increment_ref_count(exp_236));
                                        # 1088 "06str.c"
                                        # 1084 "06str.c"
                                        if(_if_conditional221=*info->p==125,                                        _if_conditional221) {
                                            # 1085 "06str.c"
                                            info->p++;
                                        }
                                        # 1088 "06str.c"
                                        buffer_append_str(value_233,"%s");
                                        if(exp_236) { exp_236 = come_decrement_ref_count2(exp_236, ((struct sNode*)exp_236)->finalize, ((struct sNode*)exp_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 1142 "06str.c"
                                        switch (*info->p) {
                                            # 1093 "06str.c"
                                            case 48:
                                            # 1093 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1094 "06str.c"
                                            info->p++;
                                            # 1095 "06str.c"
                                            break;
                                            # 1098 "06str.c"
                                            case 110:
                                            # 1098 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1099 "06str.c"
                                            info->p++;
                                            # 1100 "06str.c"
                                            break;
                                            # 1103 "06str.c"
                                            case 116:
                                            # 1103 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1104 "06str.c"
                                            info->p++;
                                            # 1105 "06str.c"
                                            break;
                                            # 1108 "06str.c"
                                            case 114:
                                            # 1108 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1109 "06str.c"
                                            info->p++;
                                            # 1110 "06str.c"
                                            break;
                                            # 1113 "06str.c"
                                            case 118:
                                            # 1113 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1114 "06str.c"
                                            info->p++;
                                            # 1115 "06str.c"
                                            break;
                                            # 1118 "06str.c"
                                            case 102:
                                            # 1118 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1119 "06str.c"
                                            info->p++;
                                            # 1120 "06str.c"
                                            break;
                                            # 1123 "06str.c"
                                            case 97:
                                            # 1123 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1124 "06str.c"
                                            info->p++;
                                            # 1125 "06str.c"
                                            break;
                                            # 1128 "06str.c"
                                            case 98:
                                            # 1128 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1129 "06str.c"
                                            info->p++;
                                            # 1130 "06str.c"
                                            break;
                                            # 1133 "06str.c"
                                            case 92:
                                            # 1133 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1134 "06str.c"
                                            info->p++;
                                            # 1135 "06str.c"
                                            break;
                                            # 1138 "06str.c"
                                            default:
                                            # 1138 "06str.c"
                                            buffer_append_char(value_233,*info->p);
                                            # 1139 "06str.c"
                                            info->p++;
                                            # 1140 "06str.c"
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            # 1164 "06str.c"
                            # 1144 "06str.c"
                            if(_if_conditional222=*info->p==0,                            _if_conditional222) {
                                # 1145 "06str.c"
                                sline2_237=info->sline;
                                # 1146 "06str.c"
                                info->sline=sline_231;
                                # 1147 "06str.c"
                                err_msg(info,"close \" to make embbeded string value");
                                # 1148 "06str.c"
                                exit(2);
                            }
                            else {
                                # 1163 "06str.c"
                                # 1151 "06str.c"
                                if(_if_conditional223=*info->p==10,                                _if_conditional223) {
                                    # 1152 "06str.c"
                                    buffer_append_char(value_233,92);
                                    # 1153 "06str.c"
                                    buffer_append_char(value_233,110);
                                    # 1154 "06str.c"
                                    info->p++;
                                    # 1155 "06str.c"
                                    info->sline++;
                                    # 1157 "06str.c"
                                    head_of_last_line_234=info->p;
                                }
                                else {
                                    # 1160 "06str.c"
                                    buffer_append_char(value_233,*info->p);
                                    # 1161 "06str.c"
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        # 1166 "06str.c"
        skip_spaces_and_lf(info);
        # 1168 "06str.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1168, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(right_value362=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value360=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1168, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value361=buffer_to_string(value_233)))),(struct list$1sNodeph*)come_increment_ref_count(exps_232),sline_231,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sSStringNode_sline;
        _inf_value1->sname=(void*)sSStringNode_sname;
        _inf_value1->terminated=(void*)sSStringNode_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result178__ = __result_obj__ = ((struct sNode*)(right_value367=_inf_value1));
        come_call_finalizer2(list$1sNodephp_finalize,exps_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sSStringNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sSStringNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result178__;
        come_call_finalizer2(list$1sNodephp_finalize,exps_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1976 "06str.c"
        # 1170 "06str.c"
        if(_if_conditional232=*info->p==34,        _if_conditional232) {
            # 1172 "06str.c"
            info->p++;
            # 1174 "06str.c"
            sline_239=info->sline;
            # 1176 "06str.c"
            value_240=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value369=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value368=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1176, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1226 "06str.c"
            while(_while_condtional22=1,            _while_condtional22) {
                # 1224 "06str.c"
                # 1179 "06str.c"
                if(_if_conditional233=*info->p==34,                _if_conditional233) {
                    # 1180 "06str.c"
                    info->p++;
                    # 1182 "06str.c"
                    p_241=info->p;
                    # 1183 "06str.c"
                    sline_242=info->sline;
                    # 1185 "06str.c"
                    skip_spaces_and_lf(info);
                    # 1189 "06str.c"
                    parse_sharp_v5(info);
                    # 1197 "06str.c"
                    # 1189 "06str.c"
                    if(_if_conditional234=*info->p==34,                    _if_conditional234) {
                        # 1190 "06str.c"
                        info->p++;
                    }
                    else {
                        # 1193 "06str.c"
                        info->p=p_241;
                        # 1194 "06str.c"
                        info->sline=sline_242;
                        # 1195 "06str.c"
                        break;
                    }
                }
                else {
                    # 1224 "06str.c"
                    # 1198 "06str.c"
                    if(_if_conditional235=*info->p==92,                    _if_conditional235) {
                        # 1199 "06str.c"
                        buffer_append_char(value_240,92);
                        # 1200 "06str.c"
                        info->p++;
                        # 1210 "06str.c"
                        # 1202 "06str.c"
                        if(_if_conditional236=*info->p==34,                        _if_conditional236) {
                            # 1203 "06str.c"
                            buffer_append_char(value_240,34);
                            # 1204 "06str.c"
                            info->p++;
                        }
                        else {
                            # 1207 "06str.c"
                            buffer_append_char(value_240,*info->p);
                            # 1208 "06str.c"
                            info->p++;
                        }
                    }
                    else {
                        # 1224 "06str.c"
                        # 1211 "06str.c"
                        if(_if_conditional237=*info->p==0,                        _if_conditional237) {
                            # 1212 "06str.c"
                            sline2_243=info->sline;
                            # 1213 "06str.c"
                            info->sline=sline_239;
                            # 1214 "06str.c"
                            err_msg(info,"close \" to make c string value");
                            # 1215 "06str.c"
                            info->sline=sline2_243;
                            # 1216 "06str.c"
                            exit(2);
                        }
                        else {
                            # 1219 "06str.c"
                            # 1219 "06str.c"
                            if(_if_conditional238=*info->p==10,                            _if_conditional238) {
                                # 1219 "06str.c"
                                info->sline++;
                            }
                            # 1221 "06str.c"
                            buffer_append_char(value_240,*info->p);
                            # 1222 "06str.c"
                            info->p++;
                        }
                    }
                }
            }
            # 1226 "06str.c"
            skip_spaces_and_lf(info);
            # 1228 "06str.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1228, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(right_value372=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value370=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1228, "sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value371=buffer_to_string(value_240)))),sline_239,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sStrNode_sline;
            _inf_value2->sname=(void*)sStrNode_sname;
            _inf_value2->terminated=(void*)sStrNode_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result181__ = __result_obj__ = ((struct sNode*)(right_value376=_inf_value2));
            come_call_finalizer2(buffer_finalize,value_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStrNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStrNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result181__;
            come_call_finalizer2(buffer_finalize,value_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 1976 "06str.c"
            # 1230 "06str.c"
            if(_if_conditional245=*info->p==47,            _if_conditional245) {
                # 1231 "06str.c"
                info->p++;
                # 1233 "06str.c"
                sline_245=info->sline;
                # 1235 "06str.c"
                buf_246=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value378=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value377=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1235, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1256 "06str.c"
                while(_while_condtional23=(_Bool)1,                _while_condtional23) {
                    # 1254 "06str.c"
                    # 1237 "06str.c"
                    if(_if_conditional246=*info->p==92&&*(info->p+1)==47,                    _if_conditional246) {
                        # 1238 "06str.c"
                        info->p++;
                        # 1239 "06str.c"
                        buffer_append_char(buf_246,*info->p);
                        # 1240 "06str.c"
                        info->p++;
                    }
                    else {
                        # 1254 "06str.c"
                        # 1242 "06str.c"
                        if(_if_conditional247=*info->p==47,                        _if_conditional247) {
                            # 1243 "06str.c"
                            info->p++;
                            # 1244 "06str.c"
                            break;
                        }
                        else {
                            # 1254 "06str.c"
                            # 1246 "06str.c"
                            if(_if_conditional248=*info->p==0,                            _if_conditional248) {
                                # 1247 "06str.c"
                                err_msg(info,"require closing / for regex");
                                # 1248 "06str.c"
                                exit(5);
                            }
                            else {
                                # 1251 "06str.c"
                                buffer_append_char(buf_246,*info->p);
                                # 1252 "06str.c"
                                info->p++;
                            }
                        }
                    }
                }
                # 1256 "06str.c"
                global_247=(_Bool)0;
                # 1257 "06str.c"
                ignore_case_248=(_Bool)0;
                # 1272 "06str.c"
                while(_while_condtional24=*info->p==103||*info->p==105,                _while_condtional24) {
                    # 1270 "06str.c"
                    # 1259 "06str.c"
                    if(_if_conditional249=*info->p==103,                    _if_conditional249) {
                        # 1260 "06str.c"
                        info->p++;
                        # 1261 "06str.c"
                        global_247=(_Bool)1;
                    }
                    else {
                        # 1270 "06str.c"
                        # 1263 "06str.c"
                        if(_if_conditional250=*info->p==105,                        _if_conditional250) {
                            # 1264 "06str.c"
                            info->p++;
                            # 1265 "06str.c"
                            ignore_case_248=(_Bool)1;
                        }
                        else {
                            # 1268 "06str.c"
                            break;
                        }
                    }
                }
                # 1272 "06str.c"
                skip_spaces_and_lf(info);
                # 1274 "06str.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1274, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(right_value381=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value379=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1274, "sRegexNode")))),(char*)come_increment_ref_count(((char*)(right_value380=buffer_to_string(buf_246)))),global_247,ignore_case_248,sline_245,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sRegexNode_sline;
                _inf_value3->sname=(void*)sRegexNode_sname;
                _inf_value3->terminated=(void*)sRegexNode_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result184__ = __result_obj__ = ((struct sNode*)(right_value385=_inf_value3));
                come_call_finalizer2(buffer_finalize,buf_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sRegexNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sRegexNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result184__;
                come_call_finalizer2(buffer_finalize,buf_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 1976 "06str.c"
                # 1276 "06str.c"
                if(_if_conditional259=*info->p==39,                _if_conditional259) {
                    # 1277 "06str.c"
                    info->p++;
                    # 1279 "06str.c"
                    # 1383 "06str.c"
                    # 1281 "06str.c"
                    if(_if_conditional260=*info->p==92,                    _if_conditional260) {
                        # 1282 "06str.c"
                        info->p++;
                        # 1377 "06str.c"
                        # 1284 "06str.c"
                        if(_if_conditional261=xisdigit(*info->p),                        _if_conditional261) {
                            # 1285 "06str.c"
                            n_251=0;
                            # 1291 "06str.c"
                            while(_while_condtional25=xisdigit(*info->p),                            _while_condtional25) {
                                # 1287 "06str.c"
                                n_251=n_251*8+*info->p-48;
                                # 1288 "06str.c"
                                info->p++;
                            }
                            # 1291 "06str.c"
                            c_250=n_251;
                        }
                        else {
                            # 1376 "06str.c"
                            switch (*info->p) {
                                # 1296 "06str.c"
                                case 110:
                                # 1296 "06str.c"
                                c_250=10;
                                # 1297 "06str.c"
                                info->p++;
                                # 1298 "06str.c"
                                break;
                                # 1301 "06str.c"
                                case 116:
                                # 1301 "06str.c"
                                c_250=9;
                                # 1302 "06str.c"
                                info->p++;
                                # 1303 "06str.c"
                                break;
                                # 1306 "06str.c"
                                case 114:
                                # 1306 "06str.c"
                                c_250=13;
                                # 1307 "06str.c"
                                info->p++;
                                # 1308 "06str.c"
                                break;
                                # 1311 "06str.c"
                                case 97:
                                # 1311 "06str.c"
                                c_250=7;
                                # 1312 "06str.c"
                                info->p++;
                                # 1313 "06str.c"
                                break;
                                # 1316 "06str.c"
                                case 102:
                                # 1316 "06str.c"
                                c_250=12;
                                # 1317 "06str.c"
                                info->p++;
                                # 1318 "06str.c"
                                break;
                                # 1321 "06str.c"
                                case 118:
                                # 1321 "06str.c"
                                c_250=11;
                                # 1322 "06str.c"
                                info->p++;
                                # 1323 "06str.c"
                                break;
                                # 1326 "06str.c"
                                case 98:
                                # 1326 "06str.c"
                                c_250=8;
                                # 1327 "06str.c"
                                info->p++;
                                # 1328 "06str.c"
                                break;
                                # 1331 "06str.c"
                                case 92:
                                # 1331 "06str.c"
                                c_250=92;
                                # 1332 "06str.c"
                                info->p++;
                                # 1333 "06str.c"
                                break;
                                # 1336 "06str.c"
                                case 48:
                                # 1336 "06str.c"
                                c_250=0;
                                # 1337 "06str.c"
                                info->p++;
                                # 1349 "06str.c"
                                # 1339 "06str.c"
                                if(_if_conditional262=xisdigit(*info->p),                                _if_conditional262) {
                                    # 1340 "06str.c"
                                    n_252=0;
                                    # 1347 "06str.c"
                                    while(_while_condtional26=xisdigit(*info->p),                                    _while_condtional26) {
                                        # 1342 "06str.c"
                                        n_252=n_252*8+*info->p-48;
                                        # 1343 "06str.c"
                                        info->p++;
                                        # 1344 "06str.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    # 1347 "06str.c"
                                    c_250=n_252;
                                }
                                # 1349 "06str.c"
                                break;
                                # 1352 "06str.c"
                                case 120:
                                # 1352 "06str.c"
                                case 88:
                                # 1369 "06str.c"
                                {
                                    # 1353 "06str.c"
                                    info->p++;
                                    # 1355 "06str.c"
                                    char buf_253[128];
                                    memset(&buf_253, 0, sizeof(char)                                    *(128)                                    );
                                    # 1356 "06str.c"
                                    strncpy(buf_253,"0x",128);
                                    # 1365 "06str.c"
                                    while(_while_condtional27=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional27) {
                                        # 1358 "06str.c"
                                        char buf2_254[2];
                                        memset(&buf2_254, 0, sizeof(char)                                        *(2)                                        );
                                        # 1359 "06str.c"
                                        buf2_254[0]=*info->p;
                                        # 1360 "06str.c"
                                        buf2_254[1]=0;
                                        # 1361 "06str.c"
                                        info->p++;
                                        # 1362 "06str.c"
                                        strncat(buf_253,buf2_254,128);
                                    }
                                    # 1365 "06str.c"
                                    n_255=strtoll(buf_253,((void*)0),0);
                                    # 1367 "06str.c"
                                    c_250=n_255;
                                }
                                # 1369 "06str.c"
                                break;
                                # 1372 "06str.c"
                                default:
                                # 1372 "06str.c"
                                c_250=*info->p;
                                # 1373 "06str.c"
                                info->p++;
                                # 1374 "06str.c"
                                break;
                            }
                        }
                    }
                    else {
                        # 1379 "06str.c"
                        c_250=*info->p;
                        # 1380 "06str.c"
                        info->p++;
                    }
                    # 1393 "06str.c"
                    # 1383 "06str.c"
                    if(_if_conditional263=*info->p!=39,                    _if_conditional263) {
                        # 1384 "06str.c"
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        # 1387 "06str.c"
                        info->p++;
                        # 1389 "06str.c"
                        skip_spaces_and_lf(info);
                        # 1391 "06str.c"
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1391, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(right_value387=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value386=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1391, "sCharNode")))),c_250,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sCharNode_sline;
                        _inf_value4->sname=(void*)sCharNode_sname;
                        _inf_value4->terminated=(void*)sCharNode_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result187__ = __result_obj__ = ((struct sNode*)(right_value390=_inf_value4));
                        come_call_finalizer2(sCharNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sCharNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result187__;
                    }
                }
                else {
                    # 1976 "06str.c"
                    # 1395 "06str.c"
                    if(_if_conditional269=*info->p==76&&*(info->p+1)==39,                    _if_conditional269) {
                        # 1396 "06str.c"
                        info->p+=2;
                        # 1398 "06str.c"
                        # 1518 "06str.c"
                        # 1400 "06str.c"
                        if(_if_conditional270=*info->p==92,                        _if_conditional270) {
                            # 1401 "06str.c"
                            info->p++;
                            # 1482 "06str.c"
                            # 1403 "06str.c"
                            if(_if_conditional271=xisdigit(*info->p),                            _if_conditional271) {
                                # 1404 "06str.c"
                                n_258=0;
                                # 1410 "06str.c"
                                while(_while_condtional28=xisdigit(*info->p),                                _while_condtional28) {
                                    # 1406 "06str.c"
                                    n_258=n_258*8+*info->p-48;
                                    # 1407 "06str.c"
                                    info->p++;
                                }
                                # 1410 "06str.c"
                                c_257=n_258;
                            }
                            else {
                                # 1481 "06str.c"
                                switch (*info->p) {
                                    # 1415 "06str.c"
                                    case 110:
                                    # 1415 "06str.c"
                                    c_257=10;
                                    # 1416 "06str.c"
                                    info->p++;
                                    # 1417 "06str.c"
                                    break;
                                    # 1420 "06str.c"
                                    case 116:
                                    # 1420 "06str.c"
                                    c_257=9;
                                    # 1421 "06str.c"
                                    info->p++;
                                    # 1422 "06str.c"
                                    break;
                                    # 1425 "06str.c"
                                    case 114:
                                    # 1425 "06str.c"
                                    c_257=13;
                                    # 1426 "06str.c"
                                    info->p++;
                                    # 1427 "06str.c"
                                    break;
                                    # 1430 "06str.c"
                                    case 97:
                                    # 1430 "06str.c"
                                    c_257=7;
                                    # 1431 "06str.c"
                                    info->p++;
                                    # 1432 "06str.c"
                                    break;
                                    # 1435 "06str.c"
                                    case 92:
                                    # 1435 "06str.c"
                                    c_257=92;
                                    # 1436 "06str.c"
                                    info->p++;
                                    # 1437 "06str.c"
                                    break;
                                    # 1440 "06str.c"
                                    case 48:
                                    # 1440 "06str.c"
                                    c_257=0;
                                    # 1442 "06str.c"
                                    info->p++;
                                    # 1454 "06str.c"
                                    # 1444 "06str.c"
                                    if(_if_conditional272=xisdigit(*info->p),                                    _if_conditional272) {
                                        # 1445 "06str.c"
                                        n_259=0;
                                        # 1452 "06str.c"
                                        while(_while_condtional29=xisdigit(*info->p),                                        _while_condtional29) {
                                            # 1447 "06str.c"
                                            n_259=n_259*8+*info->p-48;
                                            # 1448 "06str.c"
                                            info->p++;
                                            # 1449 "06str.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        # 1452 "06str.c"
                                        c_257=n_259;
                                    }
                                    # 1454 "06str.c"
                                    break;
                                    # 1457 "06str.c"
                                    case 120:
                                    # 1457 "06str.c"
                                    case 88:
                                    # 1474 "06str.c"
                                    {
                                        # 1458 "06str.c"
                                        info->p++;
                                        # 1460 "06str.c"
                                        char buf_260[128];
                                        memset(&buf_260, 0, sizeof(char)                                        *(128)                                        );
                                        # 1461 "06str.c"
                                        strncpy(buf_260,"0x",128);
                                        # 1470 "06str.c"
                                        while(_while_condtional30=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional30) {
                                            # 1463 "06str.c"
                                            char buf2_261[2];
                                            memset(&buf2_261, 0, sizeof(char)                                            *(2)                                            );
                                            # 1464 "06str.c"
                                            buf2_261[0]=*info->p;
                                            # 1465 "06str.c"
                                            buf2_261[1]=0;
                                            # 1466 "06str.c"
                                            info->p++;
                                            # 1467 "06str.c"
                                            strncat(buf_260,buf2_261,128);
                                        }
                                        # 1470 "06str.c"
                                        n_262=strtoll(buf_260,((void*)0),0);
                                        # 1472 "06str.c"
                                        c_257=n_262;
                                    }
                                    # 1474 "06str.c"
                                    break;
                                    # 1477 "06str.c"
                                    default:
                                    # 1477 "06str.c"
                                    c_257=*info->p;
                                    # 1478 "06str.c"
                                    info->p++;
                                    # 1479 "06str.c"
                                    break;
                                }
                            }
                        }
                        else {
                            # 1484 "06str.c"
                            p2_263=*(unsigned char*)info->p;
                            # 1516 "06str.c"
                            # 1487 "06str.c"
                            if(_if_conditional273=p2_263>127,                            _if_conditional273) {
                                # 1488 "06str.c"
                                # 1489 "06str.c"
                                char str_265[4+1];
                                memset(&str_265, 0, sizeof(char)                                *(4+1)                                );
                                # 1491 "06str.c"
                                size_264=((p2_263&128)>>7)+((p2_263&64)>>6)+((p2_263&32)>>5)+((p2_263&16)>>4);
                                # 1510 "06str.c"
                                # 1493 "06str.c"
                                if(_if_conditional274=size_264>4,                                _if_conditional274) {
                                    # 1494 "06str.c"
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    # 1495 "06str.c"
                                    info->err_num++;
                                }
                                else {
                                    # 1498 "06str.c"
                                    memcpy(str_265,info->p,size_264);
                                    # 1499 "06str.c"
                                    str_265[size_264]=0;
                                    # 1508 "06str.c"
                                    # 1501 "06str.c"
                                    if(_if_conditional275=mbtowc(&c_257,str_265,size_264)<0,                                    _if_conditional275) {
                                        # 1502 "06str.c"
                                        perror("mbtowc");
                                        # 1503 "06str.c"
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        # 1504 "06str.c"
                                        info->err_num++;
                                        # 1505 "06str.c"
                                        c_257=0;
                                    }
                                    # 1508 "06str.c"
                                    info->p+=size_264;
                                }
                            }
                            else {
                                # 1513 "06str.c"
                                c_257=*info->p;
                                # 1514 "06str.c"
                                info->p++;
                            }
                        }
                        # 1529 "06str.c"
                        # 1518 "06str.c"
                        if(_if_conditional276=*info->p!=39,                        _if_conditional276) {
                            # 1519 "06str.c"
                            err_msg(info,"close \' to make character value");
                            # 1520 "06str.c"
                            info->err_num++;
                        }
                        else {
                            # 1523 "06str.c"
                            info->p++;
                            # 1525 "06str.c"
                            skip_spaces_and_lf(info);
                            # 1527 "06str.c"
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1527, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(right_value392=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value391=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1527, "sWCharNode")))),c_257,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sWCharNode_sline;
                            _inf_value5->sname=(void*)sWCharNode_sname;
                            _inf_value5->terminated=(void*)sWCharNode_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result190__ = __result_obj__ = ((struct sNode*)(right_value395=_inf_value5));
                            come_call_finalizer2(sWCharNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sWCharNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result190__;
                        }
                    }
                    else {
                        # 1976 "06str.c"
                        # 1531 "06str.c"
                        if(_if_conditional282=*info->p==76&&*(info->p+1)==34,                        _if_conditional282) {
                            # 1532 "06str.c"
                            info->p+=2;
                            # 1534 "06str.c"
                            sline_267=info->sline;
                            # 1536 "06str.c"
                            value_268=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value397=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value396=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1536, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 1655 "06str.c"
                            while(_while_condtional31=1,                            _while_condtional31) {
                                # 1653 "06str.c"
                                # 1539 "06str.c"
                                if(_if_conditional283=*info->p==34,                                _if_conditional283) {
                                    # 1540 "06str.c"
                                    info->p++;
                                    # 1542 "06str.c"
                                    p_269=info->p;
                                    # 1543 "06str.c"
                                    sline_270=info->sline;
                                    # 1545 "06str.c"
                                    skip_spaces_and_lf(info);
                                    # 1555 "06str.c"
                                    # 1547 "06str.c"
                                    if(_if_conditional284=*info->p==34,                                    _if_conditional284) {
                                        # 1548 "06str.c"
                                        info->p++;
                                    }
                                    else {
                                        # 1551 "06str.c"
                                        info->p=p_269;
                                        # 1552 "06str.c"
                                        info->sline=sline_270;
                                        # 1553 "06str.c"
                                        break;
                                    }
                                }
                                else {
                                    # 1653 "06str.c"
                                    # 1556 "06str.c"
                                    if(_if_conditional285=*info->p==92,                                    _if_conditional285) {
                                        # 1557 "06str.c"
                                        info->p++;
                                        # 1640 "06str.c"
                                        # 1559 "06str.c"
                                        if(_if_conditional286=xisdigit(*info->p),                                        _if_conditional286) {
                                            # 1560 "06str.c"
                                            len_271=0;
                                            # 1561 "06str.c"
                                            n_272=0;
                                            # 1568 "06str.c"
                                            while(_while_condtional32=xisdigit(*info->p)&&len_271<3,                                            _while_condtional32) {
                                                # 1563 "06str.c"
                                                n_272=n_272*8+*info->p-48;
                                                # 1564 "06str.c"
                                                info->p++;
                                                # 1565 "06str.c"
                                                len_271++;
                                            }
                                            # 1568 "06str.c"
                                            buffer_append_char(value_268,n_272);
                                        }
                                        else {
                                            # 1640 "06str.c"
                                            # 1570 "06str.c"
                                            if(_if_conditional287=*info->p==120||*info->p==88,                                            _if_conditional287) {
                                                # 1571 "06str.c"
                                                info->p++;
                                                # 1573 "06str.c"
                                                char buf_273[128];
                                                memset(&buf_273, 0, sizeof(char)                                                *(128)                                                );
                                                # 1574 "06str.c"
                                                strncpy(buf_273,"0x",128);
                                                # 1583 "06str.c"
                                                while(_while_condtional33=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional33) {
                                                    # 1576 "06str.c"
                                                    char buf2_274[2];
                                                    memset(&buf2_274, 0, sizeof(char)                                                    *(2)                                                    );
                                                    # 1577 "06str.c"
                                                    buf2_274[0]=*info->p;
                                                    # 1578 "06str.c"
                                                    buf2_274[1]=0;
                                                    # 1579 "06str.c"
                                                    info->p++;
                                                    # 1580 "06str.c"
                                                    strncat(buf_273,buf2_274,128);
                                                }
                                                # 1583 "06str.c"
                                                # 1583 "06str.c"
                                                n_276=strtoll(buf_273,((void*)0),0);
                                                # 1585 "06str.c"
                                                buffer_append_char(value_268,(char)n_276);
                                            }
                                            else {
                                                # 1639 "06str.c"
                                                switch (*info->p) {
                                                    # 1590 "06str.c"
                                                    case 48:
                                                    # 1590 "06str.c"
                                                    buffer_append_char(value_268,0);
                                                    # 1591 "06str.c"
                                                    info->p++;
                                                    # 1592 "06str.c"
                                                    break;
                                                    # 1595 "06str.c"
                                                    case 110:
                                                    # 1595 "06str.c"
                                                    buffer_append_char(value_268,10);
                                                    # 1596 "06str.c"
                                                    info->p++;
                                                    # 1597 "06str.c"
                                                    break;
                                                    # 1600 "06str.c"
                                                    case 116:
                                                    # 1600 "06str.c"
                                                    buffer_append_char(value_268,9);
                                                    # 1601 "06str.c"
                                                    info->p++;
                                                    # 1602 "06str.c"
                                                    break;
                                                    # 1605 "06str.c"
                                                    case 114:
                                                    # 1605 "06str.c"
                                                    buffer_append_char(value_268,13);
                                                    # 1606 "06str.c"
                                                    info->p++;
                                                    # 1607 "06str.c"
                                                    break;
                                                    # 1610 "06str.c"
                                                    case 118:
                                                    # 1610 "06str.c"
                                                    buffer_append_char(value_268,11);
                                                    # 1611 "06str.c"
                                                    info->p++;
                                                    # 1612 "06str.c"
                                                    break;
                                                    # 1615 "06str.c"
                                                    case 102:
                                                    # 1615 "06str.c"
                                                    buffer_append_char(value_268,12);
                                                    # 1616 "06str.c"
                                                    info->p++;
                                                    # 1617 "06str.c"
                                                    break;
                                                    # 1620 "06str.c"
                                                    case 97:
                                                    # 1620 "06str.c"
                                                    buffer_append_char(value_268,7);
                                                    # 1621 "06str.c"
                                                    info->p++;
                                                    # 1622 "06str.c"
                                                    break;
                                                    # 1625 "06str.c"
                                                    case 98:
                                                    # 1625 "06str.c"
                                                    buffer_append_char(value_268,8);
                                                    # 1626 "06str.c"
                                                    info->p++;
                                                    # 1627 "06str.c"
                                                    break;
                                                    # 1630 "06str.c"
                                                    case 92:
                                                    # 1630 "06str.c"
                                                    buffer_append_char(value_268,92);
                                                    # 1631 "06str.c"
                                                    info->p++;
                                                    # 1632 "06str.c"
                                                    break;
                                                    # 1635 "06str.c"
                                                    default:
                                                    # 1635 "06str.c"
                                                    buffer_append_char(value_268,*info->p);
                                                    # 1636 "06str.c"
                                                    info->p++;
                                                    # 1637 "06str.c"
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 1653 "06str.c"
                                        # 1641 "06str.c"
                                        if(_if_conditional288=*info->p==0,                                        _if_conditional288) {
                                            # 1642 "06str.c"
                                            sline2_277=info->sline;
                                            # 1643 "06str.c"
                                            info->sline=sline_267;
                                            # 1644 "06str.c"
                                            err_msg(info,"close \" to make c string value");
                                            # 1645 "06str.c"
                                            exit(2);
                                        }
                                        else {
                                            # 1648 "06str.c"
                                            # 1648 "06str.c"
                                            if(_if_conditional289=*info->p==10,                                            _if_conditional289) {
                                                # 1648 "06str.c"
                                                info->sline++;
                                            }
                                            # 1650 "06str.c"
                                            buffer_append_char(value_268,*info->p);
                                            # 1651 "06str.c"
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            # 1655 "06str.c"
                            skip_spaces_and_lf(info);
                            # 1657 "06str.c"
                            len_278=value_268->len;
                            # 1659 "06str.c"
                            wstr_279=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value398=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_278+1)), "06str.c", 1659, "int"))));
                            right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1661 "06str.c"
                            str_280=value_268->buf;
                            # 1668 "06str.c"
                            # 1663 "06str.c"
                            if(_if_conditional290=mbstowcs(wstr_279,str_280,len_278+1)<0,                            _if_conditional290) {
                                # 1664 "06str.c"
                                perror("mbstowcs");
                                # 1665 "06str.c"
                                exit(1);
                            }
                            # 1668 "06str.c"
                            wstr_279[len_278]=0;
                            # 1670 "06str.c"
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1670, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(right_value400=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value399=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1670, "sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_279),sline_267,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sWStringNode_sline;
                            _inf_value6->sname=(void*)sWStringNode_sname;
                            _inf_value6->terminated=(void*)sWStringNode_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result193__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value6));
                            come_call_finalizer2(buffer_finalize,value_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            wstr_279 = come_decrement_ref_count2(wstr_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sWStringNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sWStringNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result193__;
                            come_call_finalizer2(buffer_finalize,value_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            wstr_279 = come_decrement_ref_count2(wstr_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1976 "06str.c"
                            # 1673 "06str.c"
                            if(_if_conditional297=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional297) {
                                # 1674 "06str.c"
                                info->p+=2;
                                # 1676 "06str.c"
                                sline_282=info->sline;
                                # 1678 "06str.c"
                                exps_283=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value406=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value405=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1678, "list$1sNodeph"))))))));
                                come_call_finalizer2(list$1sNodephp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(list$1sNodephp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 1679 "06str.c"
                                value_284=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value408=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value407=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1679, "buffer"))))))));
                                come_call_finalizer2(buffer_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 1822 "06str.c"
                                while(_while_condtional34=1,                                _while_condtional34) {
                                    # 1820 "06str.c"
                                    # 1682 "06str.c"
                                    if(_if_conditional298=*info->p==34,                                    _if_conditional298) {
                                        # 1683 "06str.c"
                                        info->p++;
                                        # 1685 "06str.c"
                                        p_285=info->p;
                                        # 1686 "06str.c"
                                        sline_286=info->sline;
                                        # 1688 "06str.c"
                                        skip_spaces_and_lf(info);
                                        # 1698 "06str.c"
                                        # 1690 "06str.c"
                                        if(_if_conditional299=*info->p==34,                                        _if_conditional299) {
                                            # 1691 "06str.c"
                                            info->p++;
                                        }
                                        else {
                                            # 1694 "06str.c"
                                            info->p=p_285;
                                            # 1695 "06str.c"
                                            info->sline=sline_286;
                                            # 1696 "06str.c"
                                            break;
                                        }
                                    }
                                    else {
                                        # 1820 "06str.c"
                                        # 1699 "06str.c"
                                        if(_if_conditional300=*info->p==37,                                        _if_conditional300) {
                                            # 1700 "06str.c"
                                            buffer_append_char(value_284,37);
                                            # 1701 "06str.c"
                                            buffer_append_char(value_284,37);
                                            # 1702 "06str.c"
                                            info->p++;
                                        }
                                        else {
                                            # 1820 "06str.c"
                                            # 1704 "06str.c"
                                            if(_if_conditional301=*info->p==36,                                            _if_conditional301) {
                                                # 1705 "06str.c"
                                                info->p++;
                                                # 1707 "06str.c"
                                                exp_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=expression_v13(info))));
                                                if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1709 "06str.c"
                                                list$1sNodeph_add(exps_283,(struct sNode*)come_increment_ref_count(exp_287));
                                                # 1711 "06str.c"
                                                buffer_append_str(value_284,"%s");
                                                # 1713 "06str.c"
                                                p_288=info->p-1;
                                                # 1718 "06str.c"
                                                while(_while_condtional35=*p_288==32||*p_288==9,                                                _while_condtional35) {
                                                    # 1715 "06str.c"
                                                    p_288--;
                                                }
                                                # 1718 "06str.c"
                                                info->p=p_288+1;
                                                if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 1820 "06str.c"
                                                # 1720 "06str.c"
                                                if(_if_conditional302=*info->p==92,                                                _if_conditional302) {
                                                    # 1721 "06str.c"
                                                    buffer_append_char(value_284,92);
                                                    # 1722 "06str.c"
                                                    info->p++;
                                                    # 1807 "06str.c"
                                                    # 1724 "06str.c"
                                                    if(_if_conditional303=xisdigit(*info->p),                                                    _if_conditional303) {
                                                        # 1725 "06str.c"
                                                        len_289=0;
                                                        # 1731 "06str.c"
                                                        while(_while_condtional36=xisdigit(*info->p)&&len_289<3,                                                        _while_condtional36) {
                                                            # 1727 "06str.c"
                                                            buffer_append_char(value_284,*info->p);
                                                            # 1728 "06str.c"
                                                            info->p++;
                                                            # 1729 "06str.c"
                                                            len_289++;
                                                        }
                                                    }
                                                    else {
                                                        # 1807 "06str.c"
                                                        # 1732 "06str.c"
                                                        if(_if_conditional304=*info->p==120||*info->p==88,                                                        _if_conditional304) {
                                                            # 1733 "06str.c"
                                                            buffer_append_char(value_284,*info->p);
                                                            # 1734 "06str.c"
                                                            info->p++;
                                                            # 1740 "06str.c"
                                                            while(_while_condtional37=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional37) {
                                                                # 1737 "06str.c"
                                                                buffer_append_char(value_284,*info->p);
                                                                # 1738 "06str.c"
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            # 1807 "06str.c"
                                                            # 1741 "06str.c"
                                                            if(_if_conditional305=*info->p==123,                                                            _if_conditional305) {
                                                                # 1742 "06str.c"
                                                                info->p++;
                                                                # 1744 "06str.c"
                                                                exp_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=expression_v13(info))));
                                                                if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1746 "06str.c"
                                                                list$1sNodeph_add(exps_283,(struct sNode*)come_increment_ref_count(exp_290));
                                                                # 1752 "06str.c"
                                                                # 1748 "06str.c"
                                                                if(_if_conditional306=*info->p==125,                                                                _if_conditional306) {
                                                                    # 1749 "06str.c"
                                                                    info->p++;
                                                                }
                                                                # 1752 "06str.c"
                                                                buffer_append_str(value_284,"%s");
                                                                if(exp_290) { exp_290 = come_decrement_ref_count2(exp_290, ((struct sNode*)exp_290)->finalize, ((struct sNode*)exp_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                # 1806 "06str.c"
                                                                switch (*info->p) {
                                                                    # 1757 "06str.c"
                                                                    case 48:
                                                                    # 1757 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1758 "06str.c"
                                                                    info->p++;
                                                                    # 1759 "06str.c"
                                                                    break;
                                                                    # 1762 "06str.c"
                                                                    case 110:
                                                                    # 1762 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1763 "06str.c"
                                                                    info->p++;
                                                                    # 1764 "06str.c"
                                                                    break;
                                                                    # 1767 "06str.c"
                                                                    case 116:
                                                                    # 1767 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1768 "06str.c"
                                                                    info->p++;
                                                                    # 1769 "06str.c"
                                                                    break;
                                                                    # 1772 "06str.c"
                                                                    case 114:
                                                                    # 1772 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1773 "06str.c"
                                                                    info->p++;
                                                                    # 1774 "06str.c"
                                                                    break;
                                                                    # 1777 "06str.c"
                                                                    case 118:
                                                                    # 1777 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1778 "06str.c"
                                                                    info->p++;
                                                                    # 1779 "06str.c"
                                                                    break;
                                                                    # 1782 "06str.c"
                                                                    case 102:
                                                                    # 1782 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1783 "06str.c"
                                                                    info->p++;
                                                                    # 1784 "06str.c"
                                                                    break;
                                                                    # 1787 "06str.c"
                                                                    case 97:
                                                                    # 1787 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1788 "06str.c"
                                                                    info->p++;
                                                                    # 1789 "06str.c"
                                                                    break;
                                                                    # 1792 "06str.c"
                                                                    case 98:
                                                                    # 1792 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1793 "06str.c"
                                                                    info->p++;
                                                                    # 1794 "06str.c"
                                                                    break;
                                                                    # 1797 "06str.c"
                                                                    case 92:
                                                                    # 1797 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1798 "06str.c"
                                                                    info->p++;
                                                                    # 1799 "06str.c"
                                                                    break;
                                                                    # 1802 "06str.c"
                                                                    default:
                                                                    # 1802 "06str.c"
                                                                    buffer_append_char(value_284,*info->p);
                                                                    # 1803 "06str.c"
                                                                    info->p++;
                                                                    # 1804 "06str.c"
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 1820 "06str.c"
                                                    # 1808 "06str.c"
                                                    if(_if_conditional307=*info->p==0,                                                    _if_conditional307) {
                                                        # 1809 "06str.c"
                                                        sline2_291=info->sline;
                                                        # 1810 "06str.c"
                                                        info->sline=sline_282;
                                                        # 1811 "06str.c"
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        # 1812 "06str.c"
                                                        exit(2);
                                                    }
                                                    else {
                                                        # 1815 "06str.c"
                                                        # 1815 "06str.c"
                                                        if(_if_conditional308=*info->p==10,                                                        _if_conditional308) {
                                                            # 1815 "06str.c"
                                                            info->sline++;
                                                        }
                                                        # 1817 "06str.c"
                                                        buffer_append_char(value_284,*info->p);
                                                        # 1818 "06str.c"
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                # 1822 "06str.c"
                                skip_spaces_and_lf(info);
                                # 1824 "06str.c"
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1824, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(right_value413=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value411=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1824, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value412=buffer_to_string(value_284)))),(struct list$1sNodeph*)come_increment_ref_count(exps_283),sline_282,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sSStringNode_sline;
                                _inf_value7->sname=(void*)sSStringNode_sname;
                                _inf_value7->terminated=(void*)sSStringNode_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result196__ = __result_obj__ = ((struct sNode*)(right_value418=_inf_value7));
                                come_call_finalizer2(list$1sNodephp_finalize,exps_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,value_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sSStringNode_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sSStringNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result196__;
                                come_call_finalizer2(list$1sNodephp_finalize,exps_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,value_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 1976 "06str.c"
                                # 1826 "06str.c"
                                if(_if_conditional317=*info->p==91,                                _if_conditional317) {
                                    # 1827 "06str.c"
                                    info->p++;
                                    # 1828 "06str.c"
                                    skip_spaces_and_lf(info);
                                    # 1830 "06str.c"
                                    p_293=info->p;
                                    # 1832 "06str.c"
                                    no_comma_294=info->no_comma;
                                    # 1833 "06str.c"
                                    info->no_comma=(_Bool)1;
                                    # 1835 "06str.c"
                                    node_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=expression_v13(info))));
                                    if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1837 "06str.c"
                                    info->no_comma=no_comma_294;
                                    # 1839 "06str.c"
                                    p2_296=info->p;
                                    # 1841 "06str.c"
                                    first_element_source_297=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value421=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value420=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1841, "buffer"))))))));
                                    come_call_finalizer2(buffer_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(buffer_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1843 "06str.c"
                                    buffer_append(first_element_source_297,p_293,p2_296-p_293);
                                    # 1844 "06str.c"
                                    buffer_append_char(first_element_source_297,0);
                                    # 1846 "06str.c"
                                    list_elements_298=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value423=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value422=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1846, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1848 "06str.c"
                                    map_keys_299=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value425=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value424=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1848, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1849 "06str.c"
                                    map_elements_300=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value427=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value426=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1849, "list$1sNodeph"))))))));
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 1966 "06str.c"
                                    # 1852 "06str.c"
                                    if(_if_conditional318=*info->p==58,                                    _if_conditional318) {
                                        # 1853 "06str.c"
                                        info->p++;
                                        # 1854 "06str.c"
                                        skip_spaces_and_lf(info);
                                        # 1856 "06str.c"
                                        list$1sNodeph_push_back(map_keys_299,(struct sNode*)come_increment_ref_count(node_295));
                                        # 1858 "06str.c"
                                        no_comma_301=info->no_comma;
                                        # 1859 "06str.c"
                                        info->no_comma=(_Bool)1;
                                        # 1861 "06str.c"
                                        node2_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=expression_v13(info))));
                                        if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1863 "06str.c"
                                        info->no_comma=no_comma_301;
                                        # 1865 "06str.c"
                                        list$1sNodeph_push_back(map_elements_300,(struct sNode*)come_increment_ref_count(node2_302));
                                        # 1918 "06str.c"
                                        # 1867 "06str.c"
                                        if(_if_conditional319=*info->p==93,                                        _if_conditional319) {
                                            # 1868 "06str.c"
                                            info->p++;
                                            # 1869 "06str.c"
                                            skip_spaces_and_lf(info);
                                            # 1871 "06str.c"
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1871, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(right_value430=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value429=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1871, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_299),(struct list$1sNodeph*)come_increment_ref_count(map_elements_300),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sMapNode_sline;
                                            _inf_value8->sname=(void*)sMapNode_sname;
                                            _inf_value8->terminated=(void*)sMapNode_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result199__ = __result_obj__ = ((struct sNode*)(right_value435=_inf_value8));
                                            if(node2_302) { node2_302 = come_decrement_ref_count2(node2_302, ((struct sNode*)node2_302)->finalize, ((struct sNode*)node2_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(buffer_finalize,first_element_source_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,list_elements_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_keys_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_elements_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sMapNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sMapNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result199__;
                                        }
                                        else {
                                            # 1874 "06str.c"
                                            expected_next_character(44,info);
                                            # 1916 "06str.c"
                                            while(_while_condtional38=(_Bool)1,                                            _while_condtional38) {
                                                # 1877 "06str.c"
                                                no_comma_304=info->no_comma;
                                                # 1878 "06str.c"
                                                info->no_comma=(_Bool)1;
                                                # 1880 "06str.c"
                                                node2_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=expression_v13(info))));
                                                if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1882 "06str.c"
                                                info->no_comma=no_comma_304;
                                                # 1884 "06str.c"
                                                list$1sNodeph_push_back(map_keys_299,(struct sNode*)come_increment_ref_count(node2_305));
                                                # 1886 "06str.c"
                                                expected_next_character(58,info);
                                                # 1888 "06str.c"
                                                no_comma_304=info->no_comma;
                                                # 1889 "06str.c"
                                                info->no_comma=(_Bool)1;
                                                # 1891 "06str.c"
                                                node3_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=expression_v13(info))));
                                                if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1893 "06str.c"
                                                info->no_comma=no_comma_304;
                                                # 1895 "06str.c"
                                                list$1sNodeph_push_back(map_elements_300,(struct sNode*)come_increment_ref_count(node3_306));
                                                # 1914 "06str.c"
                                                # 1897 "06str.c"
                                                if(_if_conditional328=*info->p==0,                                                _if_conditional328) {
                                                    # 1898 "06str.c"
                                                    err_msg(info,"invalid source end");
                                                    # 1899 "06str.c"
                                                    exit(2);
                                                }
                                                else {
                                                    # 1914 "06str.c"
                                                    # 1901 "06str.c"
                                                    if(_if_conditional329=*info->p==44,                                                    _if_conditional329) {
                                                        # 1902 "06str.c"
                                                        info->p++;
                                                        # 1903 "06str.c"
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        # 1914 "06str.c"
                                                        # 1905 "06str.c"
                                                        if(_if_conditional330=*info->p==93,                                                        _if_conditional330) {
                                                            # 1906 "06str.c"
                                                            info->p++;
                                                            # 1907 "06str.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1908 "06str.c"
                                                            if(node2_305) { node2_305 = come_decrement_ref_count2(node2_305, ((struct sNode*)node2_305)->finalize, ((struct sNode*)node2_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_306) { node3_306 = come_decrement_ref_count2(node3_306, ((struct sNode*)node3_306)->finalize, ((struct sNode*)node3_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            # 1911 "06str.c"
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            # 1912 "06str.c"
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_305) { node2_305 = come_decrement_ref_count2(node2_305, ((struct sNode*)node2_305)->finalize, ((struct sNode*)node2_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_306) { node3_306 = come_decrement_ref_count2(node3_306, ((struct sNode*)node3_306)->finalize, ((struct sNode*)node3_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 1916 "06str.c"
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1916, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(right_value439=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value438=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1916, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_299),(struct list$1sNodeph*)come_increment_ref_count(map_elements_300),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sMapNode_sline;
                                            _inf_value9->sname=(void*)sMapNode_sname;
                                            _inf_value9->terminated=(void*)sMapNode_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result202__ = __result_obj__ = ((struct sNode*)(right_value444=_inf_value9));
                                            if(node2_302) { node2_302 = come_decrement_ref_count2(node2_302, ((struct sNode*)node2_302)->finalize, ((struct sNode*)node2_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(buffer_finalize,first_element_source_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,list_elements_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_keys_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sNodephp_finalize,map_elements_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sMapNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sMapNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result202__;
                                        }
                                        if(node2_302) { node2_302 = come_decrement_ref_count2(node2_302, ((struct sNode*)node2_302)->finalize, ((struct sNode*)node2_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 1966 "06str.c"
                                        # 1920 "06str.c"
                                        if(_if_conditional339=*info->p==93,                                        _if_conditional339) {
                                            # 1921 "06str.c"
                                            info->p++;
                                            # 1922 "06str.c"
                                            skip_spaces_and_lf(info);
                                            # 1924 "06str.c"
                                            list$1sNodeph_push_back(list_elements_298,(struct sNode*)come_increment_ref_count(node_295));
                                        }
                                        else {
                                            # 1966 "06str.c"
                                            # 1926 "06str.c"
                                            if(_if_conditional340=*info->p==44,                                            _if_conditional340) {
                                                # 1927 "06str.c"
                                                info->p++;
                                                # 1928 "06str.c"
                                                skip_spaces_and_lf(info);
                                                # 1930 "06str.c"
                                                list$1sNodeph_push_back(list_elements_298,(struct sNode*)come_increment_ref_count(node_295));
                                                # 1960 "06str.c"
                                                while(_while_condtional39=(_Bool)1,                                                _while_condtional39) {
                                                    # 1933 "06str.c"
                                                    no_comma_308=info->no_comma;
                                                    # 1934 "06str.c"
                                                    info->no_comma=(_Bool)1;
                                                    # 1936 "06str.c"
                                                    node2_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=expression_v13(info))));
                                                    if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1938 "06str.c"
                                                    info->no_comma=no_comma_308;
                                                    # 1940 "06str.c"
                                                    list$1sNodeph_push_back(list_elements_298,(struct sNode*)come_increment_ref_count(node2_309));
                                                    # 1959 "06str.c"
                                                    # 1942 "06str.c"
                                                    if(_if_conditional341=*info->p==0,                                                    _if_conditional341) {
                                                        # 1943 "06str.c"
                                                        err_msg(info,"invalid source end");
                                                        # 1944 "06str.c"
                                                        exit(2);
                                                    }
                                                    else {
                                                        # 1959 "06str.c"
                                                        # 1946 "06str.c"
                                                        if(_if_conditional342=*info->p==44,                                                        _if_conditional342) {
                                                            # 1947 "06str.c"
                                                            info->p++;
                                                            # 1948 "06str.c"
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            # 1959 "06str.c"
                                                            # 1950 "06str.c"
                                                            if(_if_conditional343=*info->p==93,                                                            _if_conditional343) {
                                                                # 1951 "06str.c"
                                                                info->p++;
                                                                # 1952 "06str.c"
                                                                skip_spaces_and_lf(info);
                                                                # 1953 "06str.c"
                                                                if(node2_309) { node2_309 = come_decrement_ref_count2(node2_309, ((struct sNode*)node2_309)->finalize, ((struct sNode*)node2_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                # 1956 "06str.c"
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                # 1957 "06str.c"
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_309) { node2_309 = come_decrement_ref_count2(node2_309, ((struct sNode*)node2_309)->finalize, ((struct sNode*)node2_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                # 1962 "06str.c"
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                # 1963 "06str.c"
                                                exit(2);
                                            }
                                        }
                                    }
                                    # 1971 "06str.c"
                                    # 1966 "06str.c"
                                    if(_if_conditional344=list$1sNodeph_length(list_elements_298)>0,                                    _if_conditional344) {
                                        # 1967 "06str.c"
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1967, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(right_value447=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value446=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1967, "sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_298),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sListNode_sline;
                                        _inf_value10->sname=(void*)sListNode_sname;
                                        _inf_value10->terminated=(void*)sListNode_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result205__ = __result_obj__ = ((struct sNode*)(right_value451=_inf_value10));
                                        if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(buffer_finalize,first_element_source_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,list_elements_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,map_keys_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,map_elements_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sListNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sListNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result205__;
                                    }
                                    else {
                                    }
                                    if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(buffer_finalize,first_element_source_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,list_elements_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,map_keys_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,map_elements_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    # 1973 "06str.c"
                                    ((struct sNode*)(right_value452=expression_node_v1(info)));
                                    if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 1976 "06str.c"
    __result206__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result206__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional239;
_Bool _if_conditional240;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sStrNode_finalize"
                # 0 "sStrNode_finalize"
                if(_if_conditional239=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional239) {
                    # 0 "sStrNode_finalize"
                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sStrNode_finalize"
                # 1 "sStrNode_finalize"
                if(_if_conditional240=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional240) {
                    # 1 "sStrNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional241;
struct sStrNode* __result179__;
void* right_value373;
struct sStrNode* result_244;
_Bool _if_conditional242;
void* right_value374;
char* __dec_obj116;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value375;
char* __dec_obj117;
struct sStrNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
memset(&result_244, 0, sizeof(struct sStrNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
                # 3 "sStrNode_clone"
                # 2 "sStrNode_clone"
                if(_if_conditional241=self==(void*)0,                _if_conditional241) {
                    # 2 "sStrNode_clone"
                    __result179__ = __result_obj__ = (void*)0;
                    return __result179__;
                }
                # 3 "sStrNode_clone"
                result_244=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value373=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer2(sStrNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sStrNode_clone"
                # 4 "sStrNode_clone"
                if(_if_conditional242=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional242) {
                    # 4 "sStrNode_clone"
                    __dec_obj116=result_244->value;
                    result_244->value=(char*)come_increment_ref_count(((char*)(right_value374=string_clone(self->value))));
                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sStrNode_clone"
                # 5 "sStrNode_clone"
                if(_if_conditional243=self!=((void*)0),                _if_conditional243) {
                    # 5 "sStrNode_clone"
                    result_244->sline=self->sline;
                }
                # 7 "sStrNode_clone"
                # 6 "sStrNode_clone"
                if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional244) {
                    # 6 "sStrNode_clone"
                    __dec_obj117=result_244->sname;
                    result_244->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sStrNode_clone"
                __result180__ = __result_obj__ = result_244;
                come_call_finalizer2(sStrNode_finalize,result_244, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result180__;
                come_call_finalizer2(sStrNode_finalize,result_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sRegexNode_finalize"
                    # 0 "sRegexNode_finalize"
                    if(_if_conditional251=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional251) {
                        # 0 "sRegexNode_finalize"
                        self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sRegexNode_finalize"
                    # 1 "sRegexNode_finalize"
                    if(_if_conditional252=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional252) {
                        # 1 "sRegexNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional253;
struct sRegexNode* __result182__;
void* right_value382;
struct sRegexNode* result_249;
_Bool _if_conditional254;
void* right_value383;
char* __dec_obj118;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value384;
char* __dec_obj119;
struct sRegexNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&result_249, 0, sizeof(struct sRegexNode*));
right_value383 = (void*)0;
right_value384 = (void*)0;
                    # 3 "sRegexNode_clone"
                    # 2 "sRegexNode_clone"
                    if(_if_conditional253=self==(void*)0,                    _if_conditional253) {
                        # 2 "sRegexNode_clone"
                        __result182__ = __result_obj__ = (void*)0;
                        return __result182__;
                    }
                    # 3 "sRegexNode_clone"
                    result_249=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value382=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"))));
                    come_call_finalizer2(sRegexNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sRegexNode_clone"
                    # 4 "sRegexNode_clone"
                    if(_if_conditional254=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional254) {
                        # 4 "sRegexNode_clone"
                        __dec_obj118=result_249->str;
                        result_249->str=(char*)come_increment_ref_count(((char*)(right_value383=string_clone(self->str))));
                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 6 "sRegexNode_clone"
                    # 5 "sRegexNode_clone"
                    if(_if_conditional255=self!=((void*)0),                    _if_conditional255) {
                        # 5 "sRegexNode_clone"
                        result_249->global=self->global;
                    }
                    # 7 "sRegexNode_clone"
                    # 6 "sRegexNode_clone"
                    if(_if_conditional256=self!=((void*)0),                    _if_conditional256) {
                        # 6 "sRegexNode_clone"
                        result_249->ignore_case=self->ignore_case;
                    }
                    # 8 "sRegexNode_clone"
                    # 7 "sRegexNode_clone"
                    if(_if_conditional257=self!=((void*)0),                    _if_conditional257) {
                        # 7 "sRegexNode_clone"
                        result_249->sline=self->sline;
                    }
                    # 9 "sRegexNode_clone"
                    # 8 "sRegexNode_clone"
                    if(_if_conditional258=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional258) {
                        # 8 "sRegexNode_clone"
                        __dec_obj119=result_249->sname;
                        result_249->sname=(char*)come_increment_ref_count(((char*)(right_value384=string_clone(self->sname))));
                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sRegexNode_clone"
                    __result183__ = __result_obj__ = result_249;
                    come_call_finalizer2(sRegexNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result183__;
                    come_call_finalizer2(sRegexNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sCharNode_finalize"
                            # 0 "sCharNode_finalize"
                            if(_if_conditional264=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional264) {
                                # 0 "sCharNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional265;
struct sCharNode* __result185__;
void* right_value388;
struct sCharNode* result_256;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value389;
char* __dec_obj120;
struct sCharNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
memset(&result_256, 0, sizeof(struct sCharNode*));
right_value389 = (void*)0;
                            # 3 "sCharNode_clone"
                            # 2 "sCharNode_clone"
                            if(_if_conditional265=self==(void*)0,                            _if_conditional265) {
                                # 2 "sCharNode_clone"
                                __result185__ = __result_obj__ = (void*)0;
                                return __result185__;
                            }
                            # 3 "sCharNode_clone"
                            result_256=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value388=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"))));
                            come_call_finalizer2(sCharNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sCharNode_clone"
                            # 4 "sCharNode_clone"
                            if(_if_conditional266=self!=((void*)0),                            _if_conditional266) {
                                # 4 "sCharNode_clone"
                                result_256->value=self->value;
                            }
                            # 6 "sCharNode_clone"
                            # 5 "sCharNode_clone"
                            if(_if_conditional267=self!=((void*)0),                            _if_conditional267) {
                                # 5 "sCharNode_clone"
                                result_256->sline=self->sline;
                            }
                            # 7 "sCharNode_clone"
                            # 6 "sCharNode_clone"
                            if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional268) {
                                # 6 "sCharNode_clone"
                                __dec_obj120=result_256->sname;
                                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(self->sname))));
                                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sCharNode_clone"
                            __result186__ = __result_obj__ = result_256;
                            come_call_finalizer2(sCharNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result186__;
                            come_call_finalizer2(sCharNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional277;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sWCharNode_finalize"
                                # 0 "sWCharNode_finalize"
                                if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional277) {
                                    # 0 "sWCharNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional278;
struct sWCharNode* __result188__;
void* right_value393;
struct sWCharNode* result_266;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value394;
char* __dec_obj121;
struct sWCharNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value393 = (void*)0;
memset(&result_266, 0, sizeof(struct sWCharNode*));
right_value394 = (void*)0;
                                # 3 "sWCharNode_clone"
                                # 2 "sWCharNode_clone"
                                if(_if_conditional278=self==(void*)0,                                _if_conditional278) {
                                    # 2 "sWCharNode_clone"
                                    __result188__ = __result_obj__ = (void*)0;
                                    return __result188__;
                                }
                                # 3 "sWCharNode_clone"
                                result_266=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value393=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"))));
                                come_call_finalizer2(sWCharNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sWCharNode_clone"
                                # 4 "sWCharNode_clone"
                                if(_if_conditional279=self!=((void*)0),                                _if_conditional279) {
                                    # 4 "sWCharNode_clone"
                                    result_266->value=self->value;
                                }
                                # 6 "sWCharNode_clone"
                                # 5 "sWCharNode_clone"
                                if(_if_conditional280=self!=((void*)0),                                _if_conditional280) {
                                    # 5 "sWCharNode_clone"
                                    result_266->sline=self->sline;
                                }
                                # 7 "sWCharNode_clone"
                                # 6 "sWCharNode_clone"
                                if(_if_conditional281=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional281) {
                                    # 6 "sWCharNode_clone"
                                    __dec_obj121=result_266->sname;
                                    result_266->sname=(char*)come_increment_ref_count(((char*)(right_value394=string_clone(self->sname))));
                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sWCharNode_clone"
                                __result189__ = __result_obj__ = result_266;
                                come_call_finalizer2(sWCharNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result189__;
                                come_call_finalizer2(sWCharNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sWStringNode_finalize"
                                # 0 "sWStringNode_finalize"
                                if(_if_conditional291=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional291) {
                                    # 0 "sWStringNode_finalize"
                                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sWStringNode_finalize"
                                # 1 "sWStringNode_finalize"
                                if(_if_conditional292=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional292) {
                                    # 1 "sWStringNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional293;
struct sWStringNode* __result191__;
void* right_value401;
struct sWStringNode* result_281;
_Bool _if_conditional294;
void* right_value402;
unsigned int* __dec_obj122;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value403;
char* __dec_obj123;
struct sWStringNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value401 = (void*)0;
memset(&result_281, 0, sizeof(struct sWStringNode*));
right_value402 = (void*)0;
right_value403 = (void*)0;
                                # 3 "sWStringNode_clone"
                                # 2 "sWStringNode_clone"
                                if(_if_conditional293=self==(void*)0,                                _if_conditional293) {
                                    # 2 "sWStringNode_clone"
                                    __result191__ = __result_obj__ = (void*)0;
                                    return __result191__;
                                }
                                # 3 "sWStringNode_clone"
                                result_281=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value401=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"))));
                                come_call_finalizer2(sWStringNode_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sWStringNode_clone"
                                # 4 "sWStringNode_clone"
                                if(_if_conditional294=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional294) {
                                    # 4 "sWStringNode_clone"
                                    __dec_obj122=result_281->value;
                                    result_281->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value402=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 4, "unsigned int*"))));
                                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 6 "sWStringNode_clone"
                                # 5 "sWStringNode_clone"
                                if(_if_conditional295=self!=((void*)0),                                _if_conditional295) {
                                    # 5 "sWStringNode_clone"
                                    result_281->sline=self->sline;
                                }
                                # 7 "sWStringNode_clone"
                                # 6 "sWStringNode_clone"
                                if(_if_conditional296=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional296) {
                                    # 6 "sWStringNode_clone"
                                    __dec_obj123=result_281->sname;
                                    result_281->sname=(char*)come_increment_ref_count(((char*)(right_value403=string_clone(self->sname))));
                                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sWStringNode_clone"
                                __result192__ = __result_obj__ = result_281;
                                come_call_finalizer2(sWStringNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result192__;
                                come_call_finalizer2(sWStringNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sSStringNode_finalize"
                                    # 0 "sSStringNode_finalize"
                                    if(_if_conditional309=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional309) {
                                        # 0 "sSStringNode_finalize"
                                        self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sSStringNode_finalize"
                                    # 1 "sSStringNode_finalize"
                                    if(_if_conditional310=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional310) {
                                        # 1 "sSStringNode_finalize"
                                        come_call_finalizer2(list$1sNodephp_finalize,self->exps, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sSStringNode_finalize"
                                    # 2 "sSStringNode_finalize"
                                    if(_if_conditional311=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional311) {
                                        # 2 "sSStringNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional312;
struct sSStringNode* __result194__;
void* right_value414;
struct sSStringNode* result_292;
_Bool _if_conditional313;
void* right_value415;
char* __dec_obj124;
_Bool _if_conditional314;
void* right_value416;
struct list$1sNodeph* __dec_obj125;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value417;
char* __dec_obj126;
struct sSStringNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value414 = (void*)0;
memset(&result_292, 0, sizeof(struct sSStringNode*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
                                    # 3 "sSStringNode_clone"
                                    # 2 "sSStringNode_clone"
                                    if(_if_conditional312=self==(void*)0,                                    _if_conditional312) {
                                        # 2 "sSStringNode_clone"
                                        __result194__ = __result_obj__ = (void*)0;
                                        return __result194__;
                                    }
                                    # 3 "sSStringNode_clone"
                                    result_292=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value414=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"))));
                                    come_call_finalizer2(sSStringNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sSStringNode_clone"
                                    # 4 "sSStringNode_clone"
                                    if(_if_conditional313=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional313) {
                                        # 4 "sSStringNode_clone"
                                        __dec_obj124=result_292->value;
                                        result_292->value=(char*)come_increment_ref_count(((char*)(right_value415=string_clone(self->value))));
                                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 6 "sSStringNode_clone"
                                    # 5 "sSStringNode_clone"
                                    if(_if_conditional314=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional314) {
                                        # 5 "sSStringNode_clone"
                                        __dec_obj125=result_292->exps;
                                        result_292->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value416=list$1sNodephp_clone(self->exps))));
                                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sSStringNode_clone"
                                    # 6 "sSStringNode_clone"
                                    if(_if_conditional315=self!=((void*)0),                                    _if_conditional315) {
                                        # 6 "sSStringNode_clone"
                                        result_292->sline=self->sline;
                                    }
                                    # 8 "sSStringNode_clone"
                                    # 7 "sSStringNode_clone"
                                    if(_if_conditional316=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional316) {
                                        # 7 "sSStringNode_clone"
                                        __dec_obj126=result_292->sname;
                                        result_292->sname=(char*)come_increment_ref_count(((char*)(right_value417=string_clone(self->sname))));
                                        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sSStringNode_clone"
                                    __result195__ = __result_obj__ = result_292;
                                    come_call_finalizer2(sSStringNode_finalize,result_292, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result195__;
                                    come_call_finalizer2(sSStringNode_finalize,result_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sMapNode_finalize"
                                                # 0 "sMapNode_finalize"
                                                if(_if_conditional331=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional331) {
                                                    # 0 "sMapNode_finalize"
                                                    come_call_finalizer2(list$1sNodephp_finalize,self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sMapNode_finalize"
                                                # 1 "sMapNode_finalize"
                                                if(_if_conditional332=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional332) {
                                                    # 1 "sMapNode_finalize"
                                                    come_call_finalizer2(list$1sNodephp_finalize,self->map_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 3 "sMapNode_finalize"
                                                # 2 "sMapNode_finalize"
                                                if(_if_conditional333=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional333) {
                                                    # 2 "sMapNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional334;
struct sMapNode* __result200__;
void* right_value440;
struct sMapNode* result_307;
_Bool _if_conditional335;
void* right_value441;
struct list$1sNodeph* __dec_obj130;
_Bool _if_conditional336;
void* right_value442;
struct list$1sNodeph* __dec_obj131;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value443;
char* __dec_obj132;
struct sMapNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value440 = (void*)0;
memset(&result_307, 0, sizeof(struct sMapNode*));
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
                                                # 3 "sMapNode_clone"
                                                # 2 "sMapNode_clone"
                                                if(_if_conditional334=self==(void*)0,                                                _if_conditional334) {
                                                    # 2 "sMapNode_clone"
                                                    __result200__ = __result_obj__ = (void*)0;
                                                    return __result200__;
                                                }
                                                # 3 "sMapNode_clone"
                                                result_307=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value440=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"))));
                                                come_call_finalizer2(sMapNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sMapNode_clone"
                                                # 4 "sMapNode_clone"
                                                if(_if_conditional335=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional335) {
                                                    # 4 "sMapNode_clone"
                                                    __dec_obj130=result_307->map_key_elements;
                                                    result_307->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value441=list$1sNodephp_clone(self->map_key_elements))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 6 "sMapNode_clone"
                                                # 5 "sMapNode_clone"
                                                if(_if_conditional336=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional336) {
                                                    # 5 "sMapNode_clone"
                                                    __dec_obj131=result_307->map_elements;
                                                    result_307->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value442=list$1sNodephp_clone(self->map_elements))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sMapNode_clone"
                                                # 6 "sMapNode_clone"
                                                if(_if_conditional337=self!=((void*)0),                                                _if_conditional337) {
                                                    # 6 "sMapNode_clone"
                                                    result_307->sline=self->sline;
                                                }
                                                # 8 "sMapNode_clone"
                                                # 7 "sMapNode_clone"
                                                if(_if_conditional338=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional338) {
                                                    # 7 "sMapNode_clone"
                                                    __dec_obj132=result_307->sname;
                                                    result_307->sname=(char*)come_increment_ref_count(((char*)(right_value443=string_clone(self->sname))));
                                                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 8 "sMapNode_clone"
                                                __result201__ = __result_obj__ = result_307;
                                                come_call_finalizer2(sMapNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result201__;
                                                come_call_finalizer2(sMapNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional345;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sListNode_finalize"
                                            # 0 "sListNode_finalize"
                                            if(_if_conditional345=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional345) {
                                                # 0 "sListNode_finalize"
                                                come_call_finalizer2(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sListNode_finalize"
                                            # 1 "sListNode_finalize"
                                            if(_if_conditional346=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional346) {
                                                # 1 "sListNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional347;
struct sListNode* __result203__;
void* right_value448;
struct sListNode* result_310;
_Bool _if_conditional348;
void* right_value449;
struct list$1sNodeph* __dec_obj133;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value450;
char* __dec_obj134;
struct sListNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value448 = (void*)0;
memset(&result_310, 0, sizeof(struct sListNode*));
right_value449 = (void*)0;
right_value450 = (void*)0;
                                            # 3 "sListNode_clone"
                                            # 2 "sListNode_clone"
                                            if(_if_conditional347=self==(void*)0,                                            _if_conditional347) {
                                                # 2 "sListNode_clone"
                                                __result203__ = __result_obj__ = (void*)0;
                                                return __result203__;
                                            }
                                            # 3 "sListNode_clone"
                                            result_310=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value448=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"))));
                                            come_call_finalizer2(sListNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sListNode_clone"
                                            # 4 "sListNode_clone"
                                            if(_if_conditional348=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional348) {
                                                # 4 "sListNode_clone"
                                                __dec_obj133=result_310->list_elements;
                                                result_310->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value449=list$1sNodephp_clone(self->list_elements))));
                                                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(list$1sNodephp_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            # 6 "sListNode_clone"
                                            # 5 "sListNode_clone"
                                            if(_if_conditional349=self!=((void*)0),                                            _if_conditional349) {
                                                # 5 "sListNode_clone"
                                                result_310->sline=self->sline;
                                            }
                                            # 7 "sListNode_clone"
                                            # 6 "sListNode_clone"
                                            if(_if_conditional350=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional350) {
                                                # 6 "sListNode_clone"
                                                __dec_obj134=result_310->sname;
                                                result_310->sname=(char*)come_increment_ref_count(((char*)(right_value450=string_clone(self->sname))));
                                                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sListNode_clone"
                                            __result204__ = __result_obj__ = result_310;
                                            come_call_finalizer2(sListNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result204__;
                                            come_call_finalizer2(sListNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* right_value453;
void* right_value454;
struct list$1sNodeph* tuple_elements_311;
_Bool _while_condtional40;
char* p_312;
_Bool no_comma_313;
void* right_value455;
struct sNode* node_314;
void* right_value456;
struct sNode* __dec_obj135;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value457;
void* right_value458;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* right_value462;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&tuple_elements_311, 0, sizeof(struct list$1sNodeph*));
memset(&p_312, 0, sizeof(char*));
memset(&no_comma_313, 0, sizeof(_Bool));
right_value455 = (void*)0;
memset(&node_314, 0, sizeof(struct sNode*));
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value462 = (void*)0;
    # 1981 "06str.c"
    tuple_elements_311=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value454=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value453=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1981, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodephp_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2010 "06str.c"
    while(_while_condtional40=(_Bool)1,    _while_condtional40) {
        # 1983 "06str.c"
        p_312=info->p;
        # 1985 "06str.c"
        no_comma_313=info->no_comma;
        # 1986 "06str.c"
        info->no_comma=(_Bool)1;
        # 1988 "06str.c"
        node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=expression_v13(info))));
        if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1989 "06str.c"
        __dec_obj135=node_314;
        node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value456=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_314),info))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1991 "06str.c"
        info->no_comma=no_comma_313;
        # 1993 "06str.c"
        list$1sNodeph_push_back(tuple_elements_311,(struct sNode*)come_increment_ref_count(node_314));
        # 2008 "06str.c"
        # 1995 "06str.c"
        if(_if_conditional351=*info->p==44,        _if_conditional351) {
            # 1996 "06str.c"
            info->p++;
            # 1997 "06str.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 2008 "06str.c"
            # 1999 "06str.c"
            if(_if_conditional352=*info->p==41,            _if_conditional352) {
                # 2000 "06str.c"
                info->p++;
                # 2001 "06str.c"
                skip_spaces_and_lf(info);
                # 2002 "06str.c"
                if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                # 2005 "06str.c"
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                # 2006 "06str.c"
                exit(2);
            }
        }
        if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2010 "06str.c"
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2010, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(right_value458=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value457=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2010, "sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_311),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sTupleNode_sline;
    _inf_value11->sname=(void*)sTupleNode_sname;
    _inf_value11->terminated=(void*)sTupleNode_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result209__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value11));
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sTupleNode_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTupleNode_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result209__;
    come_call_finalizer2(list$1sNodephp_finalize,tuple_elements_311, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sTupleNode_finalize"
        # 0 "sTupleNode_finalize"
        if(_if_conditional353=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional353) {
            # 0 "sTupleNode_finalize"
            come_call_finalizer2(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sTupleNode_finalize"
        # 1 "sTupleNode_finalize"
        if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional354) {
            # 1 "sTupleNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional355;
struct sTupleNode* __result207__;
void* right_value459;
struct sTupleNode* result_315;
_Bool _if_conditional356;
void* right_value460;
struct list$1sNodeph* __dec_obj136;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value461;
char* __dec_obj137;
struct sTupleNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value459 = (void*)0;
memset(&result_315, 0, sizeof(struct sTupleNode*));
right_value460 = (void*)0;
right_value461 = (void*)0;
        # 3 "sTupleNode_clone"
        # 2 "sTupleNode_clone"
        if(_if_conditional355=self==(void*)0,        _if_conditional355) {
            # 2 "sTupleNode_clone"
            __result207__ = __result_obj__ = (void*)0;
            return __result207__;
        }
        # 3 "sTupleNode_clone"
        result_315=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value459=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"))));
        come_call_finalizer2(sTupleNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sTupleNode_clone"
        # 4 "sTupleNode_clone"
        if(_if_conditional356=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional356) {
            # 4 "sTupleNode_clone"
            __dec_obj136=result_315->tuple_elements;
            result_315->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value460=list$1sNodephp_clone(self->tuple_elements))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sTupleNode_clone"
        # 5 "sTupleNode_clone"
        if(_if_conditional357=self!=((void*)0),        _if_conditional357) {
            # 5 "sTupleNode_clone"
            result_315->sline=self->sline;
        }
        # 7 "sTupleNode_clone"
        # 6 "sTupleNode_clone"
        if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional358) {
            # 6 "sTupleNode_clone"
            __dec_obj137=result_315->sname;
            result_315->sname=(char*)come_increment_ref_count(((char*)(right_value461=string_clone(self->sname))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sTupleNode_clone"
        __result208__ = __result_obj__ = result_315;
        come_call_finalizer2(sTupleNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result208__;
        come_call_finalizer2(sTupleNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

