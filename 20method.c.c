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
    char* mDeclareSName;
    _Bool mNobodyStruct;
    struct sClass* mParent;
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
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int sline;
    char* sname;
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

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated();

char* sCurrentNode_kind();

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
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
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info);

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind();

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sCurrentNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 10 "20method.c"
    self->sline=info->sline;
    # 11 "20method.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 13 "20method.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 18 "20method.c"
    __result53__ = self->sline;
    return __result53__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 23 "20method.c"
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string(self->sname)));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 28 "20method.c"
    __result55__ = (_Bool)0;
    return __result55__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
void* right_value81;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 33 "20method.c"
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
struct tuple2$2charphsTypeph* return_value_80;
void* right_value137;
struct sVarTable* vtable_81;
struct map$2charphsVarph* o2_saved_82;
char* it_85;
char* key_88;
struct sVar* value_92;
void* right_value138;
struct sType* type2_93;
void* right_value139;
void* right_value140;
void* right_value141;
struct tuple2$2charphsTypeph* item_94;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional142;
void* right_value142;
struct sType* type3_95;
void* right_value143;
void* right_value144;
void* right_value145;
struct tuple2$2charphsTypeph* item2_98;
void* right_value146;
void* right_value147;
static int num_current_stack_147=0;
struct map$2charphsVarph* o2_saved_148;
char* it_149;
char* key_150;
struct sVar* value_151;
void* right_value154;
struct sType* type2_152;
void* right_value155;
void* right_value156;
struct tuple2$2charphsTypeph* item_153;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value157;
struct CVALUE* come_value_154;
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
memset(&return_value_80, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value137 = (void*)0;
memset(&vtable_81, 0, sizeof(struct sVarTable*));
memset(&o2_saved_82, 0, sizeof(struct map$2charphsVarph*));
memset(&it_85, 0, sizeof(char*));
memset(&key_88, 0, sizeof(char*));
memset(&value_92, 0, sizeof(struct sVar*));
right_value138 = (void*)0;
memset(&type2_93, 0, sizeof(struct sType*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&item_94, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value142 = (void*)0;
memset(&type3_95, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&item2_98, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&o2_saved_148, 0, sizeof(struct map$2charphsVarph*));
memset(&it_149, 0, sizeof(char*));
memset(&key_150, 0, sizeof(char*));
memset(&value_151, 0, sizeof(struct sVar*));
right_value154 = (void*)0;
memset(&type2_152, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&item_153, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value157 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
    # 38 "20method.c"
    info->current_stack_num++;
    # 39 "20method.c"
    class_name_47=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 40 "20method.c"
    current_stack_48=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value84=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value83=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40, "sClass")))),class_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer2(sClass_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 42 "20method.c"
    result_kind_57=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value89=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value88=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42, "sType")))),"int",(_Bool)0,info))))))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 43 "20method.c"
    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value131=tuple2$2charphsTypephp_clone(result_kind_57)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 45 "20method.c"
    return_value_80=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value136=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value135=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45, "sType")))),"void*",(_Bool)0,info))))))));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 46 "20method.c"
    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value137=tuple2$2charphsTypephp_clone(return_value_80)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 48 "20method.c"
    vtable_81=info->lv_table;
    # 90 "20method.c"
    while(vtable_81) {
        # 87 "20method.c"
        for(        o2_saved_82=(struct map$2charphsVarph*)come_increment_ref_count((vtable_81->mVars)),it_85=map$2charphsVarph_begin((o2_saved_82));        !map$2charphsVarph_end((o2_saved_82));        it_85=map$2charphsVarph_next((o2_saved_82))        ){
            # 52 "20method.c"
            key_88=it_85;
            # 53 "20method.c"
            value_92=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_81->mVars,key_88), "20method.c", 53, 0));
            # 55 "20method.c"
            type2_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(value_92->mType))));
            come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 57 "20method.c"
            type2_93->mPointerNum++;
            # 59 "20method.c"
            item_94=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value141=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value140=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(value_92->mCValueName)))),(struct sType*)come_increment_ref_count(type2_93)))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 85 "20method.c"
            # 61 "20method.c"
            if(_if_conditional136=value_92->mCValueName!=((void*)0),            _if_conditional136) {
                # 84 "20method.c"
                # 62 "20method.c"
                if(_if_conditional137=strcmp(value_92->mCValueName,"__list_values")==0,                _if_conditional137) {
                }
                else {
                    # 84 "20method.c"
                    # 65 "20method.c"
                    if(_if_conditional138=strcmp(value_92->mCValueName,"__map_keys")==0,                    _if_conditional138) {
                    }
                    else {
                        # 84 "20method.c"
                        # 68 "20method.c"
                        if(_if_conditional139=strcmp(value_92->mCValueName,"__map_element")==0,                        _if_conditional139) {
                        }
                        else {
                            # 84 "20method.c"
                            # 71 "20method.c"
                            if(_if_conditional140=string_operator_equals(value_92->mType->mClass->mName,"va_list")||string_operator_equals(value_92->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional140) {
                            }
                            else {
                                # 84 "20method.c"
                                # 74 "20method.c"
                                if(_if_conditional142=list$1sNodeph_length(type2_93->mArrayNum)==1,                                _if_conditional142) {
                                    # 75 "20method.c"
                                    type3_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(type2_93))));
                                    come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 76 "20method.c"
                                    list$1sNodeph_reset(type3_95->mArrayNum);
                                    # 77 "20method.c"
                                    type3_95->mPointerNum++;
                                    # 78 "20method.c"
                                    item2_98=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value145=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value144=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(value_92->mCValueName)))),(struct sType*)come_increment_ref_count(type3_95)))));
                                    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 79 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value146=tuple2$2charphsTypephp_clone(item2_98)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,type3_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,item2_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    # 82 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value147=tuple2$2charphsTypephp_clone(item_94)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 87 "20method.c"
        vtable_81=vtable_81->mParent;
    }
    # 90 "20method.c"
    output_struct(current_stack_48,info);
    # 92 "20method.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_47),(struct sClass*)come_increment_ref_count(current_stack_48));
    # 94 "20method.c"
    # 95 "20method.c"
    num_current_stack_147++;
    # 96 "20method.c"
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_47,num_current_stack_147);
    # 97 "20method.c"
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_147,class_name_47);
    # 99 "20method.c"
    vtable_81=info->lv_table;
    # 137 "20method.c"
    while(vtable_81) {
        # 134 "20method.c"
        for(        o2_saved_148=(struct map$2charphsVarph*)come_increment_ref_count((vtable_81->mVars)),it_149=map$2charphsVarph_begin((o2_saved_148));        !map$2charphsVarph_end((o2_saved_148));        it_149=map$2charphsVarph_next((o2_saved_148))        ){
            # 103 "20method.c"
            key_150=it_149;
            # 104 "20method.c"
            value_151=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_81->mVars,key_150), "20method.c", 104, 1));
            # 106 "20method.c"
            type2_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(value_151->mType))));
            come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 108 "20method.c"
            item_153=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value156=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value155=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_151->mCValueName),(struct sType*)come_increment_ref_count(type2_152)))));
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 132 "20method.c"
            # 110 "20method.c"
            if(_if_conditional194=value_151->mCValueName!=((void*)0),            _if_conditional194) {
                # 131 "20method.c"
                # 111 "20method.c"
                if(_if_conditional195=strcmp(value_151->mCValueName,"__list_values")==0,                _if_conditional195) {
                }
                else {
                    # 131 "20method.c"
                    # 114 "20method.c"
                    if(_if_conditional196=strcmp(value_151->mCValueName,"__map_keys")==0,                    _if_conditional196) {
                    }
                    else {
                        # 131 "20method.c"
                        # 117 "20method.c"
                        if(_if_conditional197=strcmp(value_151->mCValueName,"__map_element")==0,                        _if_conditional197) {
                        }
                        else {
                            # 131 "20method.c"
                            # 120 "20method.c"
                            if(_if_conditional198=string_operator_equals(value_151->mType->mClass->mName,"va_list")||string_operator_equals(value_151->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional198) {
                            }
                            else {
                                # 130 "20method.c"
                                # 124 "20method.c"
                                if(_if_conditional199=string_operator_equals(type2_152->mClass->mName,"lambda"),                                _if_conditional199) {
                                    # 125 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_147,value_151->mCValueName,value_151->mCValueName);
                                }
                                else {
                                    # 128 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_147,value_151->mCValueName,value_151->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 134 "20method.c"
        vtable_81=vtable_81->mParent;
    }
    # 137 "20method.c"
    come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 139 "20method.c"
    __dec_obj43=come_value_154->c_value;
    come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("&__current_stack%d__",num_current_stack_147))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 140 "20method.c"
    __dec_obj44=come_value_154->type;
    come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140, "sType")))),class_name_47,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 141 "20method.c"
    come_value_154->var=((void*)0);
    # 143 "20method.c"
    add_come_last_code(info,"%s;\n",come_value_154->c_value);
    # 145 "20method.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
    # 147 "20method.c"
    info->num_current_stack=num_current_stack_147;
    # 149 "20method.c"
    __result118__ = (_Bool)1;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result118__;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional42;
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
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sClass_finalize"
        # 2 "sClass_finalize"
        if(_if_conditional42=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional42) {
            # 2 "sClass_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                # 123 "./neo-c.h"
                it_49=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    # 125 "./neo-c.h"
                    prev_it_50=it_49;
                    # 126 "./neo-c.h"
                    it_49=it_49->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsTypephp_finalize"
                                # 0 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional23) {
                                    # 0 "tuple2$2charphsTypephp_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsTypephp_finalize"
                                # 1 "tuple2$2charphsTypephp_finalize"
                                if(_if_conditional24=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional24) {
                                    # 1 "tuple2$2charphsTypephp_finalize"
                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional27) {
                                            # 1 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional29=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional29) {
                                            # 2 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional32=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional32) {
                                            # 5 "sType_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional34=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional34) {
                                            # 6 "sType_finalize"
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional35=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional35) {
                                            # 7 "sType_finalize"
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional37=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional37) {
                                            # 8 "sType_finalize"
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                # 123 "./neo-c.h"
                                                it_51=self->head;
                                                # 129 "./neo-c.h"
                                                while(_while_condtional8=it_51!=((void*)0),                                                _while_condtional8) {
                                                    # 125 "./neo-c.h"
                                                    prev_it_52=it_51;
                                                    # 126 "./neo-c.h"
                                                    it_51=it_51->next;
                                                    # 127 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                # 123 "./neo-c.h"
                                                it_53=self->head;
                                                # 129 "./neo-c.h"
                                                while(_while_condtional9=it_53!=((void*)0),                                                _while_condtional9) {
                                                    # 125 "./neo-c.h"
                                                    prev_it_54=it_53;
                                                    # 126 "./neo-c.h"
                                                    it_53=it_53->next;
                                                    # 127 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                                                # 123 "./neo-c.h"
                                                it_55=self->head;
                                                # 129 "./neo-c.h"
                                                while(_while_condtional10=it_55!=((void*)0),                                                _while_condtional10) {
                                                    # 125 "./neo-c.h"
                                                    prev_it_56=it_55;
                                                    # 126 "./neo-c.h"
                                                    it_55=it_55->next;
                                                    # 127 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
        # 1767 "./neo-c.h"
        __dec_obj13=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1768 "./neo-c.h"
        __dec_obj14=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1770 "./neo-c.h"
        __result57__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result57__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional43;
void* right_value90;
struct list_item$1tuple2$2charphsTypephph* litem_58;
struct tuple2$2charphsTypeph* __dec_obj15;
_Bool _if_conditional46;
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
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional43=self->len==0,        _if_conditional43) {
            # 226 "./neo-c.h"
            litem_58=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value90=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 226, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_58->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_58->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj15=litem_58->item;
            litem_58->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./neo-c.h"
            self->tail=litem_58;
            # 233 "./neo-c.h"
            self->head=litem_58;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional46=self->len==1,            _if_conditional46) {
                # 236 "./neo-c.h"
                litem_59=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value91=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_59->prev=self->head;
                # 239 "./neo-c.h"
                litem_59->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj16=litem_59->item;
                litem_59->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./neo-c.h"
                self->tail=litem_59;
                # 243 "./neo-c.h"
                self->head->next=litem_59;
            }
            else {
                # 246 "./neo-c.h"
                litem_60=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value92=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_60->prev=self->tail;
                # 249 "./neo-c.h"
                litem_60->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj17=litem_60->item;
                litem_60->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./neo-c.h"
                self->tail->next=litem_60;
                # 253 "./neo-c.h"
                self->tail=litem_60;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result58__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result58__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2charphsTypeph_finalize"
                # 0 "tuple2$2charphsTypeph_finalize"
                if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional44) {
                    # 0 "tuple2$2charphsTypeph_finalize"
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple2$2charphsTypeph_finalize"
                # 1 "tuple2$2charphsTypeph_finalize"
                if(_if_conditional45=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional45) {
                    # 1 "tuple2$2charphsTypeph_finalize"
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct tuple2$2charphsTypeph* __result59__;
void* right_value93;
struct tuple2$2charphsTypeph* result_61;
_Bool _if_conditional48;
void* right_value94;
char* __dec_obj18;
_Bool _if_conditional49;
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
        if(_if_conditional47=self==(void*)0,        _if_conditional47) {
            # 2 "tuple2$2charphsTypephp_clone"
            __result59__ = __result_obj__ = (void*)0;
            return __result59__;
        }
        # 3 "tuple2$2charphsTypephp_clone"
        result_61=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value93=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "tuple2$2charphsTypephp_clone"
        # 4 "tuple2$2charphsTypephp_clone"
        if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional48) {
            # 4 "tuple2$2charphsTypephp_clone"
            __dec_obj18=result_61->v1;
            result_61->v1=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(self->v1))));
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 6 "tuple2$2charphsTypephp_clone"
        # 5 "tuple2$2charphsTypephp_clone"
        if(_if_conditional49=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional49) {
            # 5 "tuple2$2charphsTypephp_clone"
            __dec_obj42=result_61->v2;
            result_61->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(self->v2))));
            come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "tuple2$2charphsTypephp_clone"
        __result78__ = __result_obj__ = result_61;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_61, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result78__;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional50;
struct sType* __result60__;
void* right_value95;
struct sType* result_62;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value102;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional56;
void* right_value105;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional60;
void* right_value106;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional61;
void* right_value107;
char* __dec_obj26;
_Bool _if_conditional62;
void* right_value108;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional63;
void* right_value116;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional76;
_Bool _if_conditional77;
void* right_value117;
struct list$1sTypeph* __dec_obj32;
_Bool _if_conditional78;
void* right_value124;
struct list$1charph* __dec_obj36;
_Bool _if_conditional82;
void* right_value125;
struct tuple1$1sTypeph* __dec_obj37;
_Bool _if_conditional83;
_Bool _if_conditional84;
void* right_value126;
struct sNode* __dec_obj38;
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
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value127;
struct sNode* __dec_obj39;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value128;
char* __dec_obj40;
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
void* right_value129;
char* __dec_obj41;
_Bool _if_conditional123;
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
                if(_if_conditional50=self==(void*)0,                _if_conditional50) {
                    # 2 "sType_clone"
                    __result60__ = __result_obj__ = (void*)0;
                    return __result60__;
                }
                # 3 "sType_clone"
                result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional51=self!=((void*)0),                _if_conditional51) {
                    # 4 "sType_clone"
                    result_62->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional52=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional52) {
                    # 5 "sType_clone"
                    __dec_obj22=result_62->mMultipleTypes;
                    result_62->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional56=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional56) {
                    # 6 "sType_clone"
                    __dec_obj24=result_62->mNoSolvedGenericsType;
                    result_62->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value105=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional60=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional60) {
                    # 7 "sType_clone"
                    __dec_obj25=result_62->mOriginalLoadVarType;
                    result_62->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional61=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional61) {
                    # 8 "sType_clone"
                    __dec_obj26=result_62->mGenericsName;
                    result_62->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value107=string_clone(self->mGenericsName))));
                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional62=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional62) {
                    # 9 "sType_clone"
                    __dec_obj27=result_62->mGenericsTypes;
                    result_62->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional63=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional63) {
                    # 10 "sType_clone"
                    __dec_obj31=result_62->mArrayNum;
                    result_62->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value116=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional76=self!=((void*)0),                _if_conditional76) {
                    # 11 "sType_clone"
                    result_62->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional77=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional77) {
                    # 12 "sType_clone"
                    __dec_obj32=result_62->mParamTypes;
                    result_62->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value117=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional78=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional78) {
                    # 13 "sType_clone"
                    __dec_obj36=result_62->mParamNames;
                    result_62->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional82=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional82) {
                    # 14 "sType_clone"
                    __dec_obj37=result_62->mResultType;
                    result_62->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    # 15 "sType_clone"
                    result_62->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional84=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional84) {
                    # 16 "sType_clone"
                    __dec_obj38=result_62->mAlignas;
                    result_62->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->mAlignas))));
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    # 17 "sType_clone"
                    result_62->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    # 18 "sType_clone"
                    result_62->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    # 19 "sType_clone"
                    result_62->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    # 20 "sType_clone"
                    result_62->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    # 21 "sType_clone"
                    result_62->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    # 22 "sType_clone"
                    result_62->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    # 23 "sType_clone"
                    result_62->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    # 24 "sType_clone"
                    result_62->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    # 25 "sType_clone"
                    result_62->mRecord=self->mRecord;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    # 26 "sType_clone"
                    result_62->mExtern=self->mExtern;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    # 27 "sType_clone"
                    result_62->mRestrict=self->mRestrict;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    # 28 "sType_clone"
                    result_62->mImmutable=self->mImmutable;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    # 29 "sType_clone"
                    result_62->mHeap=self->mHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 30 "sType_clone"
                    result_62->mDummyHeap=self->mDummyHeap;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 31 "sType_clone"
                    result_62->mDelegate=self->mDelegate;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 32 "sType_clone"
                    result_62->mShare=self->mShare;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 33 "sType_clone"
                    result_62->mClone=self->mClone;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 34 "sType_clone"
                    result_62->mNoHeap=self->mNoHeap;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    # 35 "sType_clone"
                    result_62->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    # 36 "sType_clone"
                    result_62->mRefference=self->mRefference;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    # 37 "sType_clone"
                    result_62->mException=self->mException;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    # 38 "sType_clone"
                    result_62->mPointerNum=self->mPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    # 39 "sType_clone"
                    result_62->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    # 40 "sType_clone"
                    result_62->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional109=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional109) {
                    # 41 "sType_clone"
                    __dec_obj39=result_62->mSizeNum;
                    result_62->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(self->mSizeNum))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    # 42 "sType_clone"
                    result_62->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    # 43 "sType_clone"
                    result_62->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional112=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional112) {
                    # 44 "sType_clone"
                    __dec_obj40=result_62->mOriginalTypeName;
                    result_62->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(self->mOriginalTypeName))));
                    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    # 45 "sType_clone"
                    result_62->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    # 46 "sType_clone"
                    result_62->mFunctionParam=self->mFunctionParam;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    # 47 "sType_clone"
                    result_62->mAllocaValue=self->mAllocaValue;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    # 48 "sType_clone"
                    result_62->mGenericsStruct=self->mGenericsStruct;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    # 49 "sType_clone"
                    result_62->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    # 50 "sType_clone"
                    result_62->mComeMemCore=self->mComeMemCore;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    # 51 "sType_clone"
                    result_62->mInline=self->mInline;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    # 52 "sType_clone"
                    result_62->mNullValue=self->mNullValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    # 53 "sType_clone"
                    result_62->mGuardValue=self->mGuardValue;
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional122=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional122) {
                    # 54 "sType_clone"
                    __dec_obj41=result_62->mAsmName;
                    result_62->mAsmName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mAsmName))));
                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 56 "sType_clone"
                # 55 "sType_clone"
                if(_if_conditional123=self!=((void*)0),                _if_conditional123) {
                    # 55 "sType_clone"
                    result_62->mArrayPointerType=self->mArrayPointerType;
                }
                # 56 "sType_clone"
                __result77__ = __result_obj__ = result_62;
                come_call_finalizer2(sType_finalize,result_62, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer2(sType_finalize,result_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional53;
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
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional53=self==((void*)0),                        _if_conditional53) {
                            # 140 "./neo-c.h"
                            __result61__ = __result_obj__ = ((void*)0);
                            return __result61__;
                        }
                        # 142 "./neo-c.h"
                        result_63=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_64=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional11=it_64!=((void*)0),                        _while_condtional11) {
                            # 146 "./neo-c.h"
                            list$1sTypeph_add(result_63,(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(it_64->item)))));
                            come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 148 "./neo-c.h"
                            it_64=it_64->next;
                        }
                        # 151 "./neo-c.h"
                        __result64__ = __result_obj__ = result_63;
                        come_call_finalizer2(list$1sTypephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result64__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./neo-c.h"
                            self->head=((void*)0);
                            # 105 "./neo-c.h"
                            self->tail=((void*)0);
                            # 106 "./neo-c.h"
                            self->len=0;
                            # 108 "./neo-c.h"
                            __result62__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result62__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional54;
void* right_value98;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj19;
_Bool _if_conditional55;
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
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional54=self->len==0,                                _if_conditional54) {
                                    # 156 "./neo-c.h"
                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value98=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_65->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_65->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj19=litem_65->item;
                                    litem_65->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    # 162 "./neo-c.h"
                                    self->tail=litem_65;
                                    # 163 "./neo-c.h"
                                    self->head=litem_65;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional55=self->len==1,                                    _if_conditional55) {
                                        # 166 "./neo-c.h"
                                        litem_66=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value99=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_66->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_66->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj20=litem_66->item;
                                        litem_66->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 172 "./neo-c.h"
                                        self->tail=litem_66;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_66;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_67=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value100=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_67->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_67->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj21=litem_67->item;
                                        litem_67->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_67;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_67;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result63__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result63__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional57;
struct tuple1$1sTypeph* __result65__;
void* right_value103;
struct tuple1$1sTypeph* result_68;
_Bool _if_conditional59;
void* right_value104;
struct sType* __dec_obj23;
struct tuple1$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&result_68, 0, sizeof(struct tuple1$1sTypeph*));
right_value104 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional57=self==(void*)0,                        _if_conditional57) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result65__ = __result_obj__ = (void*)0;
                            return __result65__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_68=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value103=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional59=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional59) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj23=result_68->v1;
                            result_68->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result66__ = __result_obj__ = result_68;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional58;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional58=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional58) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional64;
struct list$1sNodeph* __result67__;
void* right_value109;
void* right_value110;
struct list$1sNodeph* result_69;
struct list_item$1sNodeph* it_70;
_Bool _while_condtional12;
void* right_value115;
struct list$1sNodeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&result_69, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional64=self==((void*)0),                        _if_conditional64) {
                            # 140 "./neo-c.h"
                            __result67__ = __result_obj__ = ((void*)0);
                            return __result67__;
                        }
                        # 142 "./neo-c.h"
                        result_69=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value110=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value109=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_70=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional12=it_70!=((void*)0),                        _while_condtional12) {
                            # 146 "./neo-c.h"
                            list$1sNodeph_add(result_69,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(it_70->item)))));
                            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 148 "./neo-c.h"
                            it_70=it_70->next;
                        }
                        # 151 "./neo-c.h"
                        __result72__ = __result_obj__ = result_69;
                        come_call_finalizer2(list$1sNodephp_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./neo-c.h"
                            self->head=((void*)0);
                            # 105 "./neo-c.h"
                            self->tail=((void*)0);
                            # 106 "./neo-c.h"
                            self->len=0;
                            # 108 "./neo-c.h"
                            __result68__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result68__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional65;
void* right_value111;
struct list_item$1sNodeph* litem_71;
struct sNode* __dec_obj28;
_Bool _if_conditional66;
void* right_value112;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj29;
void* right_value113;
struct list_item$1sNodeph* litem_73;
struct sNode* __dec_obj30;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sNodeph*));
right_value112 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1sNodeph*));
right_value113 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sNodeph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional65=self->len==0,                                _if_conditional65) {
                                    # 156 "./neo-c.h"
                                    litem_71=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value111=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_71->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_71->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj28=litem_71->item;
                                    litem_71->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 162 "./neo-c.h"
                                    self->tail=litem_71;
                                    # 163 "./neo-c.h"
                                    self->head=litem_71;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional66=self->len==1,                                    _if_conditional66) {
                                        # 166 "./neo-c.h"
                                        litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value112=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_72->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_72->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj29=litem_72->item;
                                        litem_72->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 172 "./neo-c.h"
                                        self->tail=litem_72;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_72;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_73=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value113=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_73->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_73->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj30=litem_73->item;
                                        litem_73->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_73;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_73;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result69__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result69__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional67;
struct sNode* __result70__;
void* right_value114;
struct sNode* result_74;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct sNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&result_74, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional67=self==(void*)0,                                _if_conditional67) {
                                    # 2 "sNode_clone"
                                    __result70__ = __result_obj__ = (void*)0;
                                    return __result70__;
                                }
                                # 3 "sNode_clone"
                                result_74=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional68=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional68) {
                                    # 4 "sNode_clone"
                                    result_74->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional69=self!=((void*)0),                                _if_conditional69) {
                                    # 5 "sNode_clone"
                                    result_74->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional70=self!=((void*)0),                                _if_conditional70) {
                                    # 6 "sNode_clone"
                                    result_74->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    # 7 "sNode_clone"
                                    result_74->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    # 8 "sNode_clone"
                                    result_74->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    # 9 "sNode_clone"
                                    result_74->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional74=self!=((void*)0),                                _if_conditional74) {
                                    # 10 "sNode_clone"
                                    result_74->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    # 11 "sNode_clone"
                                    result_74->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result71__ = __result_obj__ = result_74;
                                if(result_74) { result_74 = come_decrement_ref_count2(result_74, ((struct sNode*)result_74)->finalize, ((struct sNode*)result_74)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result71__;
                                if(result_74) { result_74 = come_decrement_ref_count2(result_74, ((struct sNode*)result_74)->finalize, ((struct sNode*)result_74)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional79;
struct list$1charph* __result73__;
void* right_value118;
void* right_value119;
struct list$1charph* result_75;
struct list_item$1charph* it_76;
_Bool _while_condtional13;
void* right_value123;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_75, 0, sizeof(struct list$1charph*));
memset(&it_76, 0, sizeof(struct list_item$1charph*));
right_value123 = (void*)0;
                        # 142 "./neo-c.h"
                        # 139 "./neo-c.h"
                        if(_if_conditional79=self==((void*)0),                        _if_conditional79) {
                            # 140 "./neo-c.h"
                            __result73__ = __result_obj__ = ((void*)0);
                            return __result73__;
                        }
                        # 142 "./neo-c.h"
                        result_75=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value119=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value118=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 144 "./neo-c.h"
                        it_76=self->head;
                        # 151 "./neo-c.h"
                        while(_while_condtional13=it_76!=((void*)0),                        _while_condtional13) {
                            # 146 "./neo-c.h"
                            list$1charph_add(result_75,(char*)come_increment_ref_count(((char*)(right_value123=string_clone(it_76->item)))));
                            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 148 "./neo-c.h"
                            it_76=it_76->next;
                        }
                        # 151 "./neo-c.h"
                        __result76__ = __result_obj__ = result_75;
                        come_call_finalizer2(list$1charphp_finalize,result_75, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result76__;
                        come_call_finalizer2(list$1charphp_finalize,result_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 104 "./neo-c.h"
                            self->head=((void*)0);
                            # 105 "./neo-c.h"
                            self->tail=((void*)0);
                            # 106 "./neo-c.h"
                            self->len=0;
                            # 108 "./neo-c.h"
                            __result74__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result74__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional80;
void* right_value120;
struct list_item$1charph* litem_77;
char* __dec_obj33;
_Bool _if_conditional81;
void* right_value121;
struct list_item$1charph* litem_78;
char* __dec_obj34;
void* right_value122;
struct list_item$1charph* litem_79;
char* __dec_obj35;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
right_value121 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charph*));
right_value122 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1charph*));
                                # 186 "./neo-c.h"
                                # 155 "./neo-c.h"
                                if(_if_conditional80=self->len==0,                                _if_conditional80) {
                                    # 156 "./neo-c.h"
                                    litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 158 "./neo-c.h"
                                    litem_77->prev=((void*)0);
                                    # 159 "./neo-c.h"
                                    litem_77->next=((void*)0);
                                    # 160 "./neo-c.h"
                                    __dec_obj33=litem_77->item;
                                    litem_77->item=(char*)come_increment_ref_count(item);
                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 162 "./neo-c.h"
                                    self->tail=litem_77;
                                    # 163 "./neo-c.h"
                                    self->head=litem_77;
                                }
                                else {
                                    # 186 "./neo-c.h"
                                    # 165 "./neo-c.h"
                                    if(_if_conditional81=self->len==1,                                    _if_conditional81) {
                                        # 166 "./neo-c.h"
                                        litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value121=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 168 "./neo-c.h"
                                        litem_78->prev=self->head;
                                        # 169 "./neo-c.h"
                                        litem_78->next=((void*)0);
                                        # 170 "./neo-c.h"
                                        __dec_obj34=litem_78->item;
                                        litem_78->item=(char*)come_increment_ref_count(item);
                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 172 "./neo-c.h"
                                        self->tail=litem_78;
                                        # 173 "./neo-c.h"
                                        self->head->next=litem_78;
                                    }
                                    else {
                                        # 176 "./neo-c.h"
                                        litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 178 "./neo-c.h"
                                        litem_79->prev=self->tail;
                                        # 179 "./neo-c.h"
                                        litem_79->next=((void*)0);
                                        # 180 "./neo-c.h"
                                        __dec_obj35=litem_79->item;
                                        litem_79->item=(char*)come_increment_ref_count(item);
                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 182 "./neo-c.h"
                                        self->tail->next=litem_79;
                                        # 183 "./neo-c.h"
                                        self->tail=litem_79;
                                    }
                                }
                                # 186 "./neo-c.h"
                                self->len++;
                                # 188 "./neo-c.h"
                                __result75__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result75__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional124;
char* result_83;
char* __result79__;
_Bool _if_conditional125;
char* __result80__;
char* result_84;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(char*));
memset(&result_84, 0, sizeof(char*));
            # 1304 "./neo-c.h"
            # 1299 "./neo-c.h"
            if(_if_conditional124=self==((void*)0),            _if_conditional124) {
                # 1300 "./neo-c.h"
                # 1301 "./neo-c.h"
                memset(&result_83,0,sizeof(char*));
                # 1302 "./neo-c.h"
                __result79__ = __result_obj__ = result_83;
                return __result79__;
            }
            # 1304 "./neo-c.h"
            self->key_list->it=self->key_list->head;
            # 1310 "./neo-c.h"
            # 1306 "./neo-c.h"
            if(self->key_list->it) {
                # 1307 "./neo-c.h"
                __result80__ = __result_obj__ = self->key_list->it->item;
                return __result80__;
            }
            # 1310 "./neo-c.h"
            # 1311 "./neo-c.h"
            memset(&result_84,0,sizeof(char*));
            # 1312 "./neo-c.h"
            __result81__ = __result_obj__ = result_84;
            return __result81__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1333 "./neo-c.h"
            __result82__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result82__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional126;
char* result_86;
char* __result83__;
_Bool _if_conditional127;
char* __result84__;
char* result_87;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(char*));
memset(&result_87, 0, sizeof(char*));
            # 1321 "./neo-c.h"
            # 1316 "./neo-c.h"
            if(_if_conditional126=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional126) {
                # 1317 "./neo-c.h"
                # 1318 "./neo-c.h"
                memset(&result_86,0,sizeof(char*));
                # 1319 "./neo-c.h"
                __result83__ = __result_obj__ = result_86;
                return __result83__;
            }
            # 1321 "./neo-c.h"
            self->key_list->it=self->key_list->it->next;
            # 1327 "./neo-c.h"
            # 1323 "./neo-c.h"
            if(self->key_list->it) {
                # 1324 "./neo-c.h"
                __result84__ = __result_obj__ = self->key_list->it->item;
                return __result84__;
            }
            # 1327 "./neo-c.h"
            # 1328 "./neo-c.h"
            memset(&result_87,0,sizeof(char*));
            # 1329 "./neo-c.h"
            __result85__ = __result_obj__ = result_87;
            return __result85__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_89;
unsigned int hash_90;
unsigned int it_91;
_Bool _while_condtional14;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct sVar* __result86__;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct sVar* __result87__;
struct sVar* __result88__;
struct sVar* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_89, 0, sizeof(struct sVar*));
memset(&hash_90, 0, sizeof(unsigned int));
memset(&it_91, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_89,0,sizeof(struct sVar*));
                # 1547 "./neo-c.h"
                hash_90=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_91=hash_90;
                # 1572 "./neo-c.h"
                while(_while_condtional14=(_Bool)1,                _while_condtional14) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional128=self->item_existance[it_91],                    _if_conditional128) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional129=string_equals(self->keys[it_91],key),                        _if_conditional129) {
                            # 1555 "./neo-c.h"
                            __result86__ = __result_obj__ = self->items[it_91];
                            come_call_finalizer2(sVar_finalize,default_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result86__;
                        }
                        # 1558 "./neo-c.h"
                        it_91++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional134=it_91>=self->size,                        _if_conditional134) {
                            # 1561 "./neo-c.h"
                            it_91=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional135=it_91==hash_90,                            _if_conditional135) {
                                # 1564 "./neo-c.h"
                                __result87__ = __result_obj__ = default_value_89;
                                come_call_finalizer2(sVar_finalize,default_value_89, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result87__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result88__ = __result_obj__ = default_value_89;
                        come_call_finalizer2(sVar_finalize,default_value_89, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result88__;
                    }
                }
                # 1572 "./neo-c.h"
                __result89__ = __result_obj__ = default_value_89;
                come_call_finalizer2(sVar_finalize,default_value_89, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result89__;
                come_call_finalizer2(sVar_finalize,default_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional130=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional130) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional131=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional131) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional132=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional132) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional133=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional133) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional141;
int __result90__;
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 367 "./neo-c.h"
                                    # 364 "./neo-c.h"
                                    if(_if_conditional141=self==((void*)0),                                    _if_conditional141) {
                                        # 365 "./neo-c.h"
                                        __result90__ = 0;
                                        return __result90__;
                                    }
                                    # 367 "./neo-c.h"
                                    __result91__ = self->len;
                                    return __result91__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_96;
_Bool _while_condtional15;
struct list_item$1sNodeph* prev_it_97;
struct list$1sNodeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1sNodeph*));
                                        # 433 "./neo-c.h"
                                        it_96=self->head;
                                        # 440 "./neo-c.h"
                                        while(_while_condtional15=it_96!=((void*)0),                                        _while_condtional15) {
                                            # 435 "./neo-c.h"
                                            prev_it_97=it_96;
                                            # 436 "./neo-c.h"
                                            it_96=it_96->next;
                                            # 437 "./neo-c.h"
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_99;
_Bool _if_conditional143;
_Bool _if_conditional144;
int i_100;
_Bool _if_conditional145;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_99, 0, sizeof(int));
memset(&i_100, 0, sizeof(int));
            # 1137 "./neo-c.h"
            for(            i_99=0;            i_99<self->size;            i_99++            ){
                # 1136 "./neo-c.h"
                # 1131 "./neo-c.h"
                if(_if_conditional143=self->item_existance[i_99],                _if_conditional143) {
                    # 1135 "./neo-c.h"
                    # 1132 "./neo-c.h"
                    if(_if_conditional144=1,                    _if_conditional144) {
                        # 1133 "./neo-c.h"
                        come_call_finalizer2(sVar_finalize,self->items[i_99], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1137 "./neo-c.h"
            come_free((char*)self->items);
            # 1146 "./neo-c.h"
            for(            i_100=0;            i_100<self->size;            i_100++            ){
                # 1145 "./neo-c.h"
                # 1140 "./neo-c.h"
                if(_if_conditional145=self->item_existance[i_100],                _if_conditional145) {
                    # 1144 "./neo-c.h"
                    # 1141 "./neo-c.h"
                    if(_if_conditional146=1,                    _if_conditional146) {
                        # 1142 "./neo-c.h"
                        self->keys[i_100] = come_decrement_ref_count2(self->keys[i_100], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charp* it_101;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_102;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_101, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_102, 0, sizeof(struct list_item$1charp*));
                # 123 "./neo-c.h"
                it_101=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional16=it_101!=((void*)0),                _while_condtional16) {
                    # 125 "./neo-c.h"
                    prev_it_102=it_101;
                    # 126 "./neo-c.h"
                    it_101=it_101->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional147;
unsigned int hash_120;
unsigned int it_121;
_Bool _while_condtional19;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool same_key_exist_138;
char* it2_141;
_Bool _if_conditional190;
_Bool _if_conditional191;
struct map$2charphsClassph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_120, 0, sizeof(unsigned int));
memset(&it_121, 0, sizeof(unsigned int));
memset(&same_key_exist_138, 0, sizeof(_Bool));
memset(&it2_141, 0, sizeof(char*));
        # 1393 "./neo-c.h"
        # 1390 "./neo-c.h"
        if(_if_conditional147=self->len*10>=self->size,        _if_conditional147) {
            # 1391 "./neo-c.h"
            map$2charphsClassph_rehash(self);
        }
        # 1393 "./neo-c.h"
        hash_120=string_get_hash_key(key)%self->size;
        # 1394 "./neo-c.h"
        it_121=hash_120;
        # 1452 "./neo-c.h"
        while(_while_condtional19=(_Bool)1,        _while_condtional19) {
            # 1450 "./neo-c.h"
            # 1397 "./neo-c.h"
            if(_if_conditional159=self->item_existance[it_121],            _if_conditional159) {
                # 1420 "./neo-c.h"
                # 1399 "./neo-c.h"
                if(_if_conditional160=string_equals(self->keys[it_121],key),                _if_conditional160) {
                    # 1410 "./neo-c.h"
                    # 1401 "./neo-c.h"
                    if(_if_conditional161=1,                    _if_conditional161) {
                        # 1402 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_121]);
                        # 1403 "./neo-c.h"
                        self->keys[it_121] = come_decrement_ref_count2(self->keys[it_121], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1404 "./neo-c.h"
                        self->keys[it_121]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1407 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_121]);
                        # 1408 "./neo-c.h"
                        self->keys[it_121]=key;
                    }
                    # 1417 "./neo-c.h"
                    # 1410 "./neo-c.h"
                    if(_if_conditional181=1,                    _if_conditional181) {
                        # 1411 "./neo-c.h"
                        come_call_finalizer2(sClass_finalize,self->items[it_121], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 1412 "./neo-c.h"
                        self->items[it_121]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1415 "./neo-c.h"
                        self->items[it_121]=item;
                    }
                    # 1417 "./neo-c.h"
                    break;
                }
                # 1420 "./neo-c.h"
                it_121++;
                # 1430 "./neo-c.h"
                # 1422 "./neo-c.h"
                if(_if_conditional182=it_121>=self->size,                _if_conditional182) {
                    # 1423 "./neo-c.h"
                    it_121=0;
                }
                else {
                    # 1430 "./neo-c.h"
                    # 1425 "./neo-c.h"
                    if(_if_conditional183=it_121==hash_120,                    _if_conditional183) {
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
                self->item_existance[it_121]=(_Bool)1;
                # 1439 "./neo-c.h"
                # 1433 "./neo-c.h"
                if(_if_conditional184=1,                _if_conditional184) {
                    # 1434 "./neo-c.h"
                    self->keys[it_121]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1437 "./neo-c.h"
                    self->keys[it_121]=key;
                }
                # 1446 "./neo-c.h"
                # 1439 "./neo-c.h"
                if(_if_conditional185=1,                _if_conditional185) {
                    # 1440 "./neo-c.h"
                    self->items[it_121]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1443 "./neo-c.h"
                    self->items[it_121]=item;
                }
                # 1446 "./neo-c.h"
                self->len++;
                # 1448 "./neo-c.h"
                break;
            }
        }
        # 1452 "./neo-c.h"
        same_key_exist_138=(_Bool)0;
        # 1460 "./neo-c.h"
        for(        it2_141=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_141=list$1charp_next(self->key_list)        ){
            # 1458 "./neo-c.h"
            # 1455 "./neo-c.h"
            if(_if_conditional190=string_equals(it2_141,key),            _if_conditional190) {
                # 1456 "./neo-c.h"
                same_key_exist_138=(_Bool)1;
            }
        }
        # 1464 "./neo-c.h"
        # 1460 "./neo-c.h"
        if(_if_conditional191=!same_key_exist_138,        _if_conditional191) {
            # 1461 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1464 "./neo-c.h"
        __result116__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result116__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_103;
void* right_value148;
char** keys_104;
void* right_value149;
struct sClass** items_105;
void* right_value150;
_Bool* item_existance_106;
int len_107;
char* it_110;
struct sClass* default_value_113;
struct sClass* it2_116;
unsigned int hash_117;
int n_118;
_Bool _while_condtional18;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sClass* default_value_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_103, 0, sizeof(int));
right_value148 = (void*)0;
memset(&keys_104, 0, sizeof(char**));
right_value149 = (void*)0;
memset(&items_105, 0, sizeof(struct sClass**));
right_value150 = (void*)0;
memset(&item_existance_106, 0, sizeof(_Bool*));
memset(&len_107, 0, sizeof(int));
memset(&it_110, 0, sizeof(char*));
memset(&default_value_113, 0, sizeof(struct sClass*));
memset(&it2_116, 0, sizeof(struct sClass*));
memset(&hash_117, 0, sizeof(unsigned int));
memset(&n_118, 0, sizeof(int));
memset(&default_value_119, 0, sizeof(struct sClass*));
                # 1337 "./neo-c.h"
                size_103=self->size*10;
                # 1338 "./neo-c.h"
                keys_104=(char**)come_increment_ref_count(((char**)(right_value148=(char**)come_calloc(1, sizeof(char*)*(1*(size_103)), "./neo-c.h", 1338, "char*%"))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1339 "./neo-c.h"
                items_105=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value149=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_103)), "./neo-c.h", 1339, "sClass*%"))));
                come_call_finalizer2(sClass_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1340 "./neo-c.h"
                item_existance_106=(_Bool*)come_increment_ref_count(((_Bool*)(right_value150=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_103)), "./neo-c.h", 1340, "bool"))));
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1342 "./neo-c.h"
                len_107=0;
                # 1377 "./neo-c.h"
                for(                it_110=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_110=map$2charphsClassph_next(self)                ){
                    # 1345 "./neo-c.h"
                    # 1346 "./neo-c.h"
                    memset(&default_value_113,0,sizeof(struct sClass*));
                    # 1347 "./neo-c.h"
                    it2_116=map$2charphsClassph_at(self,it_110,default_value_113);
                    # 1348 "./neo-c.h"
                    hash_117=string_get_hash_key(it_110)%size_103;
                    # 1349 "./neo-c.h"
                    n_118=hash_117;
                    # 1375 "./neo-c.h"
                    while(_while_condtional18=(_Bool)1,                    _while_condtional18) {
                        # 1374 "./neo-c.h"
                        # 1352 "./neo-c.h"
                        if(_if_conditional156=item_existance_106[n_118],                        _if_conditional156) {
                            # 1354 "./neo-c.h"
                            n_118++;
                            # 1364 "./neo-c.h"
                            # 1356 "./neo-c.h"
                            if(_if_conditional157=n_118>=size_103,                            _if_conditional157) {
                                # 1357 "./neo-c.h"
                                n_118=0;
                            }
                            else {
                                # 1364 "./neo-c.h"
                                # 1359 "./neo-c.h"
                                if(_if_conditional158=n_118==hash_117,                                _if_conditional158) {
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
                            item_existance_106[n_118]=(_Bool)1;
                            # 1367 "./neo-c.h"
                            keys_104[n_118]=it_110;
                            # 1368 "./neo-c.h"
                            # 1369 "./neo-c.h"
                            items_105[n_118]=map$2charphsClassph_at(self,it_110,default_value_119);
                            # 1371 "./neo-c.h"
                            len_107++;
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
                self->keys=keys_104;
                # 1382 "./neo-c.h"
                self->items=items_105;
                # 1383 "./neo-c.h"
                self->item_existance=item_existance_106;
                # 1385 "./neo-c.h"
                self->size=size_103;
                # 1386 "./neo-c.h"
                self->len=len_107;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional148;
char* result_108;
char* __result93__;
_Bool _if_conditional149;
char* __result94__;
char* result_109;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
                    # 1304 "./neo-c.h"
                    # 1299 "./neo-c.h"
                    if(_if_conditional148=self==((void*)0),                    _if_conditional148) {
                        # 1300 "./neo-c.h"
                        # 1301 "./neo-c.h"
                        memset(&result_108,0,sizeof(char*));
                        # 1302 "./neo-c.h"
                        __result93__ = __result_obj__ = result_108;
                        return __result93__;
                    }
                    # 1304 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1310 "./neo-c.h"
                    # 1306 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1307 "./neo-c.h"
                        __result94__ = __result_obj__ = self->key_list->it->item;
                        return __result94__;
                    }
                    # 1310 "./neo-c.h"
                    # 1311 "./neo-c.h"
                    memset(&result_109,0,sizeof(char*));
                    # 1312 "./neo-c.h"
                    __result95__ = __result_obj__ = result_109;
                    return __result95__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1333 "./neo-c.h"
                    __result96__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result96__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional150;
char* result_111;
char* __result97__;
_Bool _if_conditional151;
char* __result98__;
char* result_112;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
memset(&result_112, 0, sizeof(char*));
                    # 1321 "./neo-c.h"
                    # 1316 "./neo-c.h"
                    if(_if_conditional150=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional150) {
                        # 1317 "./neo-c.h"
                        # 1318 "./neo-c.h"
                        memset(&result_111,0,sizeof(char*));
                        # 1319 "./neo-c.h"
                        __result97__ = __result_obj__ = result_111;
                        return __result97__;
                    }
                    # 1321 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1327 "./neo-c.h"
                    # 1323 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1324 "./neo-c.h"
                        __result98__ = __result_obj__ = self->key_list->it->item;
                        return __result98__;
                    }
                    # 1327 "./neo-c.h"
                    # 1328 "./neo-c.h"
                    memset(&result_112,0,sizeof(char*));
                    # 1329 "./neo-c.h"
                    __result99__ = __result_obj__ = result_112;
                    return __result99__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_114;
unsigned int it_115;
_Bool _while_condtional17;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct sClass* __result100__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sClass* __result101__;
struct sClass* __result102__;
struct sClass* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_114, 0, sizeof(unsigned int));
memset(&it_115, 0, sizeof(unsigned int));
                        # 1226 "./neo-c.h"
                        hash_114=string_get_hash_key(((char*)key))%self->size;
                        # 1227 "./neo-c.h"
                        it_115=hash_114;
                        # 1251 "./neo-c.h"
                        while(_while_condtional17=(_Bool)1,                        _while_condtional17) {
                            # 1249 "./neo-c.h"
                            # 1230 "./neo-c.h"
                            if(_if_conditional152=self->item_existance[it_115],                            _if_conditional152) {
                                # 1237 "./neo-c.h"
                                # 1232 "./neo-c.h"
                                if(_if_conditional153=string_equals(self->keys[it_115],key),                                _if_conditional153) {
                                    # 1234 "./neo-c.h"
                                    __result100__ = __result_obj__ = self->items[it_115];
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result100__;
                                }
                                # 1237 "./neo-c.h"
                                it_115++;
                                # 1245 "./neo-c.h"
                                # 1239 "./neo-c.h"
                                if(_if_conditional154=it_115>=self->size,                                _if_conditional154) {
                                    # 1240 "./neo-c.h"
                                    it_115=0;
                                }
                                else {
                                    # 1245 "./neo-c.h"
                                    # 1242 "./neo-c.h"
                                    if(_if_conditional155=it_115==hash_114,                                    _if_conditional155) {
                                        # 1243 "./neo-c.h"
                                        __result101__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result101__;
                                    }
                                }
                            }
                            else {
                                # 1247 "./neo-c.h"
                                __result102__ = __result_obj__ = default_value;
                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result102__;
                            }
                        }
                        # 1251 "./neo-c.h"
                        __result103__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result103__;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_122;
struct list_item$1charp* it_123;
_Bool _while_condtional20;
_Bool _if_conditional162;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_122, 0, sizeof(int));
memset(&it_123, 0, sizeof(struct list_item$1charp*));
                            # 448 "./neo-c.h"
                            it2_122=0;
                            # 449 "./neo-c.h"
                            it_123=self->head;
                            # 460 "./neo-c.h"
                            while(_while_condtional20=it_123!=((void*)0),                            _while_condtional20) {
                                # 455 "./neo-c.h"
                                # 451 "./neo-c.h"
                                if(_if_conditional162=string_equals(it_123->item,item),                                _if_conditional162) {
                                    # 452 "./neo-c.h"
                                    list$1charp_delete(self,it2_122,it2_122+1);
                                    # 453 "./neo-c.h"
                                    break;
                                }
                                # 455 "./neo-c.h"
                                it2_122++;
                                # 457 "./neo-c.h"
                                it_123=it_123->next;
                            }
                            # 460 "./neo-c.h"
                            __result107__ = __result_obj__ = self;
                            return __result107__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
int tmp_124;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct list$1charp* __result104__;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct list_item$1charp* it_127;
int i_128;
_Bool _while_condtional22;
_Bool _if_conditional171;
struct list_item$1charp* prev_it_129;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct list_item$1charp* it_130;
int i_131;
_Bool _while_condtional23;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct list_item$1charp* prev_it_132;
struct list_item$1charp* it_133;
struct list_item$1charp* head_prev_it_134;
struct list_item$1charp* tail_it_135;
int i_136;
_Bool _while_condtional24;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct list_item$1charp* prev_it_137;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_124, 0, sizeof(int));
memset(&it_127, 0, sizeof(struct list_item$1charp*));
memset(&i_128, 0, sizeof(int));
memset(&prev_it_129, 0, sizeof(struct list_item$1charp*));
memset(&it_130, 0, sizeof(struct list_item$1charp*));
memset(&i_131, 0, sizeof(int));
memset(&prev_it_132, 0, sizeof(struct list_item$1charp*));
memset(&it_133, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_134, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_135, 0, sizeof(struct list_item$1charp*));
memset(&i_136, 0, sizeof(int));
memset(&prev_it_137, 0, sizeof(struct list_item$1charp*));
                                        # 467 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional163=head<0,                                        _if_conditional163) {
                                            # 465 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 471 "./neo-c.h"
                                        # 467 "./neo-c.h"
                                        if(_if_conditional164=tail<0,                                        _if_conditional164) {
                                            # 468 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 477 "./neo-c.h"
                                        # 471 "./neo-c.h"
                                        if(_if_conditional165=head>tail,                                        _if_conditional165) {
                                            # 472 "./neo-c.h"
                                            tmp_124=tail;
                                            # 473 "./neo-c.h"
                                            tail=head;
                                            # 474 "./neo-c.h"
                                            head=tmp_124;
                                        }
                                        # 481 "./neo-c.h"
                                        # 477 "./neo-c.h"
                                        if(_if_conditional166=head<0,                                        _if_conditional166) {
                                            # 478 "./neo-c.h"
                                            head=0;
                                        }
                                        # 485 "./neo-c.h"
                                        # 481 "./neo-c.h"
                                        if(_if_conditional167=tail>self->len,                                        _if_conditional167) {
                                            # 482 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 489 "./neo-c.h"
                                        # 485 "./neo-c.h"
                                        if(_if_conditional168=head==tail,                                        _if_conditional168) {
                                            # 486 "./neo-c.h"
                                            __result104__ = __result_obj__ = self;
                                            return __result104__;
                                        }
                                        # 584 "./neo-c.h"
                                        # 489 "./neo-c.h"
                                        if(_if_conditional169=head==0&&tail==self->len,                                        _if_conditional169) {
                                            # 491 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 584 "./neo-c.h"
                                            # 493 "./neo-c.h"
                                            if(_if_conditional170=head==0,                                            _if_conditional170) {
                                                # 494 "./neo-c.h"
                                                it_127=self->head;
                                                # 495 "./neo-c.h"
                                                i_128=0;
                                                # 517 "./neo-c.h"
                                                while(_while_condtional22=it_127!=((void*)0),                                                _while_condtional22) {
                                                    # 516 "./neo-c.h"
                                                    # 497 "./neo-c.h"
                                                    if(_if_conditional171=i_128<tail,                                                    _if_conditional171) {
                                                        # 498 "./neo-c.h"
                                                        prev_it_129=it_127;
                                                        # 500 "./neo-c.h"
                                                        it_127=it_127->next;
                                                        # 501 "./neo-c.h"
                                                        i_128++;
                                                        # 503 "./neo-c.h"
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        # 505 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 516 "./neo-c.h"
                                                        # 507 "./neo-c.h"
                                                        if(_if_conditional172=i_128==tail,                                                        _if_conditional172) {
                                                            # 508 "./neo-c.h"
                                                            self->head=it_127;
                                                            # 509 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 510 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 513 "./neo-c.h"
                                                            it_127=it_127->next;
                                                            # 514 "./neo-c.h"
                                                            i_128++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 584 "./neo-c.h"
                                                # 518 "./neo-c.h"
                                                if(_if_conditional173=tail==self->len,                                                _if_conditional173) {
                                                    # 519 "./neo-c.h"
                                                    it_130=self->head;
                                                    # 520 "./neo-c.h"
                                                    i_131=0;
                                                    # 542 "./neo-c.h"
                                                    while(_while_condtional23=it_130!=((void*)0),                                                    _while_condtional23) {
                                                        # 527 "./neo-c.h"
                                                        # 522 "./neo-c.h"
                                                        if(_if_conditional174=i_131==head,                                                        _if_conditional174) {
                                                            # 523 "./neo-c.h"
                                                            self->tail=it_130->prev;
                                                            # 524 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 541 "./neo-c.h"
                                                        # 527 "./neo-c.h"
                                                        if(_if_conditional175=i_131>=head,                                                        _if_conditional175) {
                                                            # 528 "./neo-c.h"
                                                            prev_it_132=it_130;
                                                            # 530 "./neo-c.h"
                                                            it_130=it_130->next;
                                                            # 531 "./neo-c.h"
                                                            i_131++;
                                                            # 533 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 535 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 538 "./neo-c.h"
                                                            it_130=it_130->next;
                                                            # 539 "./neo-c.h"
                                                            i_131++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 544 "./neo-c.h"
                                                    it_133=self->head;
                                                    # 546 "./neo-c.h"
                                                    head_prev_it_134=((void*)0);
                                                    # 547 "./neo-c.h"
                                                    tail_it_135=((void*)0);
                                                    # 550 "./neo-c.h"
                                                    i_136=0;
                                                    # 576 "./neo-c.h"
                                                    while(_while_condtional24=it_133!=((void*)0),                                                    _while_condtional24) {
                                                        # 555 "./neo-c.h"
                                                        # 552 "./neo-c.h"
                                                        if(_if_conditional176=i_136==head,                                                        _if_conditional176) {
                                                            # 553 "./neo-c.h"
                                                            head_prev_it_134=it_133->prev;
                                                        }
                                                        # 559 "./neo-c.h"
                                                        # 555 "./neo-c.h"
                                                        if(_if_conditional177=i_136==tail,                                                        _if_conditional177) {
                                                            # 556 "./neo-c.h"
                                                            tail_it_135=it_133;
                                                        }
                                                        # 574 "./neo-c.h"
                                                        # 559 "./neo-c.h"
                                                        if(_if_conditional178=i_136>=head&&i_136<tail,                                                        _if_conditional178) {
                                                            # 561 "./neo-c.h"
                                                            prev_it_137=it_133;
                                                            # 563 "./neo-c.h"
                                                            it_133=it_133->next;
                                                            # 564 "./neo-c.h"
                                                            i_136++;
                                                            # 566 "./neo-c.h"
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            # 568 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 571 "./neo-c.h"
                                                            it_133=it_133->next;
                                                            # 572 "./neo-c.h"
                                                            i_136++;
                                                        }
                                                    }
                                                    # 579 "./neo-c.h"
                                                    # 576 "./neo-c.h"
                                                    if(_if_conditional179=head_prev_it_134!=((void*)0),                                                    _if_conditional179) {
                                                        # 577 "./neo-c.h"
                                                        head_prev_it_134->next=tail_it_135;
                                                    }
                                                    # 582 "./neo-c.h"
                                                    # 579 "./neo-c.h"
                                                    if(_if_conditional180=tail_it_135!=((void*)0),                                                    _if_conditional180) {
                                                        # 580 "./neo-c.h"
                                                        tail_it_135->prev=head_prev_it_134;
                                                    }
                                                }
                                            }
                                        }
                                        # 584 "./neo-c.h"
                                        __result106__ = __result_obj__ = self;
                                        return __result106__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_125;
_Bool _while_condtional21;
struct list_item$1charp* prev_it_126;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_125, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_126, 0, sizeof(struct list_item$1charp*));
                                                # 433 "./neo-c.h"
                                                it_125=self->head;
                                                # 440 "./neo-c.h"
                                                while(_while_condtional21=it_125!=((void*)0),                                                _while_condtional21) {
                                                    # 435 "./neo-c.h"
                                                    prev_it_126=it_125;
                                                    # 436 "./neo-c.h"
                                                    it_125=it_125->next;
                                                    # 437 "./neo-c.h"
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 440 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 441 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 443 "./neo-c.h"
                                                self->len=0;
                                                # 445 "./neo-c.h"
                                                __result105__ = __result_obj__ = self;
                                                return __result105__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional186;
char* result_139;
char* __result108__;
_Bool _if_conditional187;
char* __result109__;
char* result_140;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_139, 0, sizeof(char*));
memset(&result_140, 0, sizeof(char*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional186=self==((void*)0),            _if_conditional186) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_139,0,sizeof(char*));
                # 288 "./neo-c.h"
                __result108__ = __result_obj__ = result_139;
                return __result108__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result109__ = __result_obj__ = self->it->item;
                return __result109__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_140,0,sizeof(char*));
            # 298 "./neo-c.h"
            __result110__ = __result_obj__ = result_140;
            return __result110__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result111__ = self==((void*)0)||self->it==((void*)0);
            return __result111__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional188;
char* result_142;
char* __result112__;
_Bool _if_conditional189;
char* __result113__;
char* result_143;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_142, 0, sizeof(char*));
memset(&result_143, 0, sizeof(char*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional188=self==((void*)0)||self->it==((void*)0),            _if_conditional188) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_142,0,sizeof(char*));
                # 305 "./neo-c.h"
                __result112__ = __result_obj__ = result_142;
                return __result112__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result113__ = __result_obj__ = self->it->item;
                return __result113__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_143,0,sizeof(char*));
            # 316 "./neo-c.h"
            __result114__ = __result_obj__ = result_143;
            return __result114__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional192;
void* right_value151;
struct list_item$1charp* litem_144;
_Bool _if_conditional193;
void* right_value152;
struct list_item$1charp* litem_145;
void* right_value153;
struct list_item$1charp* litem_146;
struct list$1charp* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1charp*));
right_value152 = (void*)0;
memset(&litem_145, 0, sizeof(struct list_item$1charp*));
right_value153 = (void*)0;
memset(&litem_146, 0, sizeof(struct list_item$1charp*));
                # 256 "./neo-c.h"
                # 225 "./neo-c.h"
                if(_if_conditional192=self->len==0,                _if_conditional192) {
                    # 226 "./neo-c.h"
                    litem_144=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value151=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./neo-c.h"
                    litem_144->prev=((void*)0);
                    # 229 "./neo-c.h"
                    litem_144->next=((void*)0);
                    # 230 "./neo-c.h"
                    litem_144->item=item;
                    # 232 "./neo-c.h"
                    self->tail=litem_144;
                    # 233 "./neo-c.h"
                    self->head=litem_144;
                }
                else {
                    # 256 "./neo-c.h"
                    # 235 "./neo-c.h"
                    if(_if_conditional193=self->len==1,                    _if_conditional193) {
                        # 236 "./neo-c.h"
                        litem_145=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value152=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./neo-c.h"
                        litem_145->prev=self->head;
                        # 239 "./neo-c.h"
                        litem_145->next=((void*)0);
                        # 240 "./neo-c.h"
                        litem_145->item=item;
                        # 242 "./neo-c.h"
                        self->tail=litem_145;
                        # 243 "./neo-c.h"
                        self->head->next=litem_145;
                    }
                    else {
                        # 246 "./neo-c.h"
                        litem_146=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value153=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./neo-c.h"
                        litem_146->prev=self->tail;
                        # 249 "./neo-c.h"
                        litem_146->next=((void*)0);
                        # 250 "./neo-c.h"
                        litem_146->item=item;
                        # 252 "./neo-c.h"
                        self->tail->next=litem_146;
                        # 253 "./neo-c.h"
                        self->tail=litem_146;
                    }
                }
                # 256 "./neo-c.h"
                self->len++;
                # 258 "./neo-c.h"
                __result115__ = __result_obj__ = self;
                return __result115__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional200=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional200) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional201=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional201) {
            # 1 "CVALUE_finalize"
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional202;
void* right_value161;
struct list_item$1CVALUEph* litem_155;
struct CVALUE* __dec_obj45;
_Bool _if_conditional204;
void* right_value162;
struct list_item$1CVALUEph* litem_156;
struct CVALUE* __dec_obj46;
void* right_value163;
struct list_item$1CVALUEph* litem_157;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1CVALUEph*));
right_value162 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1CVALUEph*));
right_value163 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1CVALUEph*));
        # 256 "./neo-c.h"
        # 225 "./neo-c.h"
        if(_if_conditional202=self->len==0,        _if_conditional202) {
            # 226 "./neo-c.h"
            litem_155=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value161=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./neo-c.h"
            litem_155->prev=((void*)0);
            # 229 "./neo-c.h"
            litem_155->next=((void*)0);
            # 230 "./neo-c.h"
            __dec_obj45=litem_155->item;
            litem_155->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./neo-c.h"
            self->tail=litem_155;
            # 233 "./neo-c.h"
            self->head=litem_155;
        }
        else {
            # 256 "./neo-c.h"
            # 235 "./neo-c.h"
            if(_if_conditional204=self->len==1,            _if_conditional204) {
                # 236 "./neo-c.h"
                litem_156=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./neo-c.h"
                litem_156->prev=self->head;
                # 239 "./neo-c.h"
                litem_156->next=((void*)0);
                # 240 "./neo-c.h"
                __dec_obj46=litem_156->item;
                litem_156->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./neo-c.h"
                self->tail=litem_156;
                # 243 "./neo-c.h"
                self->head->next=litem_156;
            }
            else {
                # 246 "./neo-c.h"
                litem_157=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./neo-c.h"
                litem_157->prev=self->tail;
                # 249 "./neo-c.h"
                litem_157->next=((void*)0);
                # 250 "./neo-c.h"
                __dec_obj47=litem_157->item;
                litem_157->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./neo-c.h"
                self->tail->next=litem_157;
                # 253 "./neo-c.h"
                self->tail=litem_157;
            }
        }
        # 256 "./neo-c.h"
        self->len++;
        # 258 "./neo-c.h"
        __result117__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result117__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional203=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional203) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value164;
struct sNode* __dec_obj48;
void* right_value165;
char* __dec_obj49;
void* right_value175;
struct list$1tuple2$2charphsNodephph* __dec_obj55;
void* right_value176;
struct buffer* __dec_obj56;
void* right_value177;
char* __dec_obj57;
void* right_value178;
struct list$1sTypeph* __dec_obj58;
struct sMethodCallNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
    # 165 "20method.c"
    __dec_obj48=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(obj))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 166 "20method.c"
    __dec_obj49=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(fun_name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 167 "20method.c"
    __dec_obj55=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value175=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 168 "20method.c"
    __dec_obj56=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value176=buffer_clone(method_block))));
    come_call_finalizer2(buffer_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 169 "20method.c"
    self->sline=info->sline;
    # 170 "20method.c"
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 171 "20method.c"
    self->method_block_sline=method_block_sline;
    # 172 "20method.c"
    __dec_obj58=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value178=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 174 "20method.c"
    __result125__ = __result_obj__ = self;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result125__;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional205;
struct list$1tuple2$2charphsNodephph* __result119__;
void* right_value166;
void* right_value167;
struct list$1tuple2$2charphsNodephph* result_160;
struct list_item$1tuple2$2charphsNodephph* it_161;
_Bool _while_condtional26;
void* right_value174;
struct list$1tuple2$2charphsNodephph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&result_160, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_161, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value174 = (void*)0;
        # 142 "./neo-c.h"
        # 139 "./neo-c.h"
        if(_if_conditional205=self==((void*)0),        _if_conditional205) {
            # 140 "./neo-c.h"
            __result119__ = __result_obj__ = ((void*)0);
            return __result119__;
        }
        # 142 "./neo-c.h"
        result_160=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value167=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value166=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 144 "./neo-c.h"
        it_161=self->head;
        # 151 "./neo-c.h"
        while(_while_condtional26=it_161!=((void*)0),        _while_condtional26) {
            # 146 "./neo-c.h"
            list$1tuple2$2charphsNodephph_add(result_160,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value174=tuple2$2charphsNodephp_clone(it_161->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 148 "./neo-c.h"
            it_161=it_161->next;
        }
        # 151 "./neo-c.h"
        __result124__ = __result_obj__ = result_160;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result124__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./neo-c.h"
            self->head=((void*)0);
            # 105 "./neo-c.h"
            self->tail=((void*)0);
            # 106 "./neo-c.h"
            self->len=0;
            # 108 "./neo-c.h"
            __result120__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result120__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_158;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsNodephph* prev_it_159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_158, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_159, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 123 "./neo-c.h"
                it_158=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional25=it_158!=((void*)0),                _while_condtional25) {
                    # 125 "./neo-c.h"
                    prev_it_159=it_158;
                    # 126 "./neo-c.h"
                    it_158=it_158->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional206=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional206) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional207;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple2$2charphsNodephp_finalize"
                                # 0 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional207=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional207) {
                                    # 0 "tuple2$2charphsNodephp_finalize"
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "tuple2$2charphsNodephp_finalize"
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(_if_conditional208=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional208) {
                                    # 1 "tuple2$2charphsNodephp_finalize"
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional209;
void* right_value168;
struct list_item$1tuple2$2charphsNodephph* litem_162;
struct tuple2$2charphsNodeph* __dec_obj50;
_Bool _if_conditional212;
void* right_value169;
struct list_item$1tuple2$2charphsNodephph* litem_163;
struct tuple2$2charphsNodeph* __dec_obj51;
void* right_value170;
struct list_item$1tuple2$2charphsNodephph* litem_164;
struct tuple2$2charphsNodeph* __dec_obj52;
struct list$1tuple2$2charphsNodephph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value169 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value170 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 186 "./neo-c.h"
                # 155 "./neo-c.h"
                if(_if_conditional209=self->len==0,                _if_conditional209) {
                    # 156 "./neo-c.h"
                    litem_162=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value168=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./neo-c.h"
                    litem_162->prev=((void*)0);
                    # 159 "./neo-c.h"
                    litem_162->next=((void*)0);
                    # 160 "./neo-c.h"
                    __dec_obj50=litem_162->item;
                    litem_162->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "./neo-c.h"
                    self->tail=litem_162;
                    # 163 "./neo-c.h"
                    self->head=litem_162;
                }
                else {
                    # 186 "./neo-c.h"
                    # 165 "./neo-c.h"
                    if(_if_conditional212=self->len==1,                    _if_conditional212) {
                        # 166 "./neo-c.h"
                        litem_163=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value169=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./neo-c.h"
                        litem_163->prev=self->head;
                        # 169 "./neo-c.h"
                        litem_163->next=((void*)0);
                        # 170 "./neo-c.h"
                        __dec_obj51=litem_163->item;
                        litem_163->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "./neo-c.h"
                        self->tail=litem_163;
                        # 173 "./neo-c.h"
                        self->head->next=litem_163;
                    }
                    else {
                        # 176 "./neo-c.h"
                        litem_164=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value170=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./neo-c.h"
                        litem_164->prev=self->tail;
                        # 179 "./neo-c.h"
                        litem_164->next=((void*)0);
                        # 180 "./neo-c.h"
                        __dec_obj52=litem_164->item;
                        litem_164->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "./neo-c.h"
                        self->tail->next=litem_164;
                        # 183 "./neo-c.h"
                        self->tail=litem_164;
                    }
                }
                # 186 "./neo-c.h"
                self->len++;
                # 188 "./neo-c.h"
                __result121__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result121__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional210;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2charphsNodeph_finalize"
                        # 0 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional210=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional210) {
                            # 0 "tuple2$2charphsNodeph_finalize"
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2charphsNodeph_finalize"
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(_if_conditional211=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional211) {
                            # 1 "tuple2$2charphsNodeph_finalize"
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional213;
struct tuple2$2charphsNodeph* __result122__;
void* right_value171;
struct tuple2$2charphsNodeph* result_165;
_Bool _if_conditional214;
void* right_value172;
char* __dec_obj53;
_Bool _if_conditional215;
void* right_value173;
struct sNode* __dec_obj54;
struct tuple2$2charphsNodeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&result_165, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value172 = (void*)0;
right_value173 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional213=self==(void*)0,                _if_conditional213) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result122__ = __result_obj__ = (void*)0;
                    return __result122__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_165=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value171=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional214=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional214) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj53=result_165->v1;
                    result_165->v1=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(self->v1))));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional215=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional215) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj54=result_165->v2;
                    result_165->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=sNode_clone(self->v2))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result123__ = __result_obj__ = result_165;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result123__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    # 179 "20method.c"
    __result126__ = self->sline;
    return __result126__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    # 184 "20method.c"
    __result127__ = __result_obj__ = ((char*)(right_value179=__builtin_string(self->sname)));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value180;
char* none_generics_name_166;
void* right_value181;
char* fun_name2_167;
void* right_value182;
char* fun_name3_168;
struct sGenericsFun* generics_fun_171;
_Bool _if_conditional236;
void* right_value183;
_Bool _if_conditional237;
void* right_value184;
char* __result132__;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&none_generics_name_166, 0, sizeof(char*));
right_value181 = (void*)0;
memset(&fun_name2_167, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&fun_name3_168, 0, sizeof(char*));
memset(&generics_fun_171, 0, sizeof(struct sGenericsFun*));
right_value183 = (void*)0;
right_value184 = (void*)0;
    # 193 "20method.c"
    none_generics_name_166=(char*)come_increment_ref_count(((char*)(right_value180=get_none_generics_name(type->mClass->mName))));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 194 "20method.c"
    fun_name2_167=(char*)come_increment_ref_count(((char*)(right_value181=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 195 "20method.c"
    fun_name3_168=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s_%s",none_generics_name_166,fun_name))));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 197 "20method.c"
    generics_fun_171=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_168,((void*)0));
    # 206 "20method.c"
    # 199 "20method.c"
    if(generics_fun_171) {
        # 204 "20method.c"
        # 200 "20method.c"
        if(_if_conditional237=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(fun_name2_167)))),generics_fun_171,type,info),        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional237) {
            # 201 "20method.c"
            err_msg(info,"%s not found",fun_name3_168);
            # 202 "20method.c"
            __result132__ = __result_obj__ = ((char*)(right_value184=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_166 = come_decrement_ref_count2(none_generics_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_167 = come_decrement_ref_count2(fun_name2_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_168 = come_decrement_ref_count2(fun_name3_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result132__;
        }
    }
    # 206 "20method.c"
    __result133__ = __result_obj__ = fun_name2_167;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_166 = come_decrement_ref_count2(none_generics_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_167 = come_decrement_ref_count2(fun_name2_167, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_168 = come_decrement_ref_count2(fun_name3_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result133__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_166 = come_decrement_ref_count2(none_generics_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_167 = come_decrement_ref_count2(fun_name2_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_168 = come_decrement_ref_count2(fun_name3_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_169;
unsigned int it_170;
_Bool _while_condtional27;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct sGenericsFun* __result128__;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct sGenericsFun* __result129__;
struct sGenericsFun* __result130__;
struct sGenericsFun* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
        # 1226 "./neo-c.h"
        hash_169=string_get_hash_key(((char*)key))%self->size;
        # 1227 "./neo-c.h"
        it_170=hash_169;
        # 1251 "./neo-c.h"
        while(_while_condtional27=(_Bool)1,        _while_condtional27) {
            # 1249 "./neo-c.h"
            # 1230 "./neo-c.h"
            if(_if_conditional222=self->item_existance[it_170],            _if_conditional222) {
                # 1237 "./neo-c.h"
                # 1232 "./neo-c.h"
                if(_if_conditional223=string_equals(self->keys[it_170],key),                _if_conditional223) {
                    # 1234 "./neo-c.h"
                    __result128__ = __result_obj__ = self->items[it_170];
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result128__;
                }
                # 1237 "./neo-c.h"
                it_170++;
                # 1245 "./neo-c.h"
                # 1239 "./neo-c.h"
                if(_if_conditional234=it_170>=self->size,                _if_conditional234) {
                    # 1240 "./neo-c.h"
                    it_170=0;
                }
                else {
                    # 1245 "./neo-c.h"
                    # 1242 "./neo-c.h"
                    if(_if_conditional235=it_170==hash_169,                    _if_conditional235) {
                        # 1243 "./neo-c.h"
                        __result129__ = __result_obj__ = default_value;
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result129__;
                    }
                }
            }
            else {
                # 1247 "./neo-c.h"
                __result130__ = __result_obj__ = default_value;
                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result130__;
            }
        }
        # 1251 "./neo-c.h"
        __result131__ = __result_obj__ = default_value;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result131__;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sGenericsFun_finalize"
                        # 0 "sGenericsFun_finalize"
                        if(_if_conditional224=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional224) {
                            # 0 "sGenericsFun_finalize"
                            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sGenericsFun_finalize"
                        # 1 "sGenericsFun_finalize"
                        if(_if_conditional225=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional225) {
                            # 1 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sGenericsFun_finalize"
                        # 2 "sGenericsFun_finalize"
                        if(_if_conditional226=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional226) {
                            # 2 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sGenericsFun_finalize"
                        # 3 "sGenericsFun_finalize"
                        if(_if_conditional227=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional227) {
                            # 3 "sGenericsFun_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 5 "sGenericsFun_finalize"
                        # 4 "sGenericsFun_finalize"
                        if(_if_conditional228=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional228) {
                            # 4 "sGenericsFun_finalize"
                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 6 "sGenericsFun_finalize"
                        # 5 "sGenericsFun_finalize"
                        if(_if_conditional229=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional229) {
                            # 5 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 7 "sGenericsFun_finalize"
                        # 6 "sGenericsFun_finalize"
                        if(_if_conditional230=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional230) {
                            # 6 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 8 "sGenericsFun_finalize"
                        # 7 "sGenericsFun_finalize"
                        if(_if_conditional231=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional231) {
                            # 7 "sGenericsFun_finalize"
                            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 9 "sGenericsFun_finalize"
                        # 8 "sGenericsFun_finalize"
                        if(_if_conditional232=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional232) {
                            # 8 "sGenericsFun_finalize"
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 10 "sGenericsFun_finalize"
                        # 9 "sGenericsFun_finalize"
                        if(_if_conditional233=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional233) {
                            # 9 "sGenericsFun_finalize"
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional238;
_Bool __result134__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    # 217 "20method.c"
    # 211 "20method.c"
    if(self->method_block) {
        # 212 "20method.c"
        __result134__ = (_Bool)1;
        return __result134__;
    }
    else {
        # 215 "20method.c"
        __result135__ = (_Bool)0;
        return __result135__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
void* right_value185;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    # 221 "20method.c"
    __result136__ = __result_obj__ = ((char*)(right_value185=__builtin_string("sMethodCallNode")));
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_172;
struct list$1tuple2$2charphsNodephph* params_173;
struct sNode* obj_174;
struct buffer* method_block_175;
int method_block_sline_176;
struct list$1sTypeph* method_generics_types_177;
void* right_value186;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional239;
_Bool __result137__;
void* right_value187;
struct CVALUE* obj_value_178;
_Bool _if_conditional240;
void* right_value188;
void* right_value189;
char* __dec_obj60;
void* right_value190;
struct sType* obj_type_179;
struct sClass* klass_180;
_Bool calling_dynamic_method_181;
struct sType* lambda_type_182;
struct list$1tuple2$2charphsTypephph* o2_saved_183;
struct tuple2$2charphsTypeph* it_186;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_189;
struct sType* field_type_190;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value191;
struct sType* result_type_191;
void* right_value192;
void* right_value193;
struct list$1CVALUEph* come_params_194;
int i_195;
struct list$1tuple2$2charphsNodephph* o2_saved_196;
struct tuple2$2charphsNodeph* it_199;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_202;
struct sNode* node_203;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool __result153__;
void* right_value194;
struct CVALUE* come_value_204;
void* right_value195;
void* right_value196;
void* right_value197;
_Bool _if_conditional255;
void* right_value198;
void* right_value199;
struct buffer* buf_208;
void* right_value200;
int j_209;
struct list$1CVALUEph* o2_saved_210;
struct CVALUE* it_213;
_Bool _if_conditional260;
void* right_value201;
char* __dec_obj61;
_Bool _if_conditional262;
void* right_value202;
struct CVALUE* come_value2_216;
void* right_value203;
char* __dec_obj62;
void* right_value204;
struct sType* result_type2_217;
_Bool _if_conditional263;
void* right_value205;
void* right_value206;
char* __dec_obj63;
void* right_value207;
struct sType* __dec_obj64;
void* right_value208;
void* right_value209;
void* right_value210;
char* generics_fun_name_218;
struct sFun* fun_219;
int i_220;
void* right_value211;
char* new_fun_name_221;
_Bool _if_conditional283;
void* right_value212;
char* __dec_obj65;
_Bool _if_conditional284;
struct sType* obj_array_type_225;
_Bool _if_conditional285;
void* right_value213;
char* array_method_name_226;
_Bool _if_conditional290;
void* right_value214;
char* __dec_obj66;
_Bool _if_conditional291;
void* right_value215;
void* right_value216;
char* __dec_obj67;
_Bool _if_conditional292;
_Bool __result173__;
_Bool _if_conditional293;
void* right_value217;
void* right_value218;
char* __dec_obj68;
_Bool _if_conditional294;
struct sClass* klass_229;
void* right_value219;
char* __dec_obj69;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool __result174__;
_Bool _if_conditional297;
_Bool __result175__;
_Bool _if_conditional299;
_Bool __result178__;
void* right_value220;
struct sType* result_type_230;
void* right_value221;
struct sType* result_type2_231;
void* right_value222;
void* right_value223;
struct list$1sTypeph* param_types_232;
struct list$1sTypeph* o2_saved_233;
struct sType* it_236;
_Bool _if_conditional304;
void* right_value227;
struct sType* it2_242;
void* right_value228;
void* right_value229;
void* right_value230;
struct list$1CVALUEph* come_params_243;
int i_244;
_Bool first_param_248;
struct list$1tuple2$2charphsNodephph* o2_saved_249;
struct tuple2$2charphsNodeph* it_250;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_251;
struct sNode* node_252;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool __result188__;
void* right_value234;
struct CVALUE* come_value_253;
int n_254;
struct list$1charph* o2_saved_255;
char* it_258;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value235;
void* right_value236;
void* right_value237;
_Bool _if_conditional318;
int i_263;
struct list$1tuple2$2charphsNodephph* o2_saved_264;
struct tuple2$2charphsNodeph* it_265;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_266;
struct sNode* node_267;
_Bool _if_conditional322;
void* right_value238;
void* right_value239;
void* right_value240;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool __result200__;
void* right_value241;
struct CVALUE* come_value_271;
_Bool _while_condtional34;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value242;
void* right_value243;
void* right_value244;
_Bool _if_conditional333;
_Bool _while_condtional36;
_Bool _if_conditional334;
struct sType* obj_array_type_275;
_Bool _if_conditional335;
void* right_value245;
char* array_method_name_276;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value246;
void* right_value247;
struct buffer* buf_277;
int i_278;
struct list$1sNodeph* o2_saved_279;
struct sNode* it_282;
_Bool _if_conditional342;
void* right_value248;
struct CVALUE* come_value_285;
void* right_value249;
_Bool _if_conditional343;
void* right_value250;
struct CVALUE* come_value_286;
void* right_value251;
char* __dec_obj77;
void* right_value252;
void* right_value253;
struct sType* __dec_obj78;
void* right_value257;
void* right_value258;
void* right_value259;
_Bool _if_conditional347;
void* right_value260;
void* right_value261;
struct buffer* buf_290;
int i_291;
struct list$1sNodeph* o2_saved_292;
struct sNode* it_293;
_Bool _if_conditional348;
void* right_value262;
struct CVALUE* come_value_294;
void* right_value263;
_Bool _if_conditional349;
void* right_value264;
struct CVALUE* come_value_295;
void* right_value265;
char* __dec_obj83;
void* right_value266;
void* right_value267;
struct sType* __dec_obj84;
void* right_value268;
void* right_value269;
void* right_value270;
_Bool _if_conditional350;
void* right_value271;
void* right_value272;
struct buffer* buf_296;
int i_297;
struct list$1sNodeph* o2_saved_298;
struct sNode* it_299;
_Bool _if_conditional351;
void* right_value273;
struct CVALUE* come_value_300;
void* right_value274;
_Bool _if_conditional352;
void* right_value275;
struct CVALUE* come_value_301;
void* right_value276;
char* __dec_obj85;
void* right_value277;
void* right_value278;
struct sType* __dec_obj86;
void* right_value279;
void* right_value280;
void* right_value281;
_Bool _if_conditional353;
void* right_value282;
void* right_value283;
struct buffer* buf_302;
int i_303;
struct list$1sNodeph* o2_saved_304;
struct sNode* it_305;
_Bool _if_conditional354;
void* right_value284;
struct CVALUE* come_value_306;
void* right_value285;
_Bool _if_conditional355;
void* right_value286;
struct CVALUE* come_value_307;
void* right_value287;
char* __dec_obj87;
void* right_value288;
void* right_value289;
struct sType* __dec_obj88;
void* right_value290;
void* right_value291;
void* right_value292;
_Bool _if_conditional357;
void* right_value293;
char* default_param_308;
char* param_name_309;
_Bool _if_conditional358;
struct buffer* source_310;
char* p_311;
char* head_312;
int sline_313;
void* right_value294;
struct buffer* __dec_obj89;
void* right_value295;
struct sNode* node_314;
_Bool _if_conditional359;
_Bool __result214__;
struct buffer* __dec_obj90;
void* right_value296;
struct CVALUE* come_value_315;
_Bool _if_conditional360;
void* right_value297;
void* right_value298;
void* right_value299;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool __result215__;
_Bool _if_conditional363;
void* right_value300;
void* right_value301;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value304;
struct sNode* current_stack_frame_node_317;
_Bool _if_conditional368;
_Bool __result218__;
void* right_value305;
struct CVALUE* come_value_318;
void* right_value306;
void* right_value307;
struct buffer* method_block2_319;
void* right_value308;
struct sType* method_block_type_320;
void* right_value309;
char* class_name_321;
struct sClass* current_stack_frame_struct_325;
_Bool _if_conditional373;
_Bool __result223__;
void* right_value310;
struct sType* result_type_326;
struct list$1sTypeph* param_types_327;
struct list$1charph* param_names_328;
void* right_value311;
void* right_value312;
struct buffer* all_alhabet_sname_329;
char* p_330;
_Bool _while_condtional38;
_Bool _if_conditional374;
void* right_value313;
void* right_value314;
void* right_value315;
int i_331;
struct list$1sTypeph* o2_saved_332;
struct sType* it_333;
struct sType* param_type_334;
_Bool _if_conditional375;
void* right_value316;
char* param_name_335;
void* right_value317;
void* right_value318;
_Bool _if_conditional376;
void* right_value319;
char* param_name_336;
void* right_value320;
void* right_value321;
void* right_value322;
char* param_name_337;
void* right_value323;
void* right_value324;
_Bool _if_conditional377;
void* right_value325;
struct buffer* source3_338;
char* p_339;
char* head_340;
int sline_341;
struct buffer* __dec_obj92;
void* right_value326;
struct sNode* node_342;
_Bool _if_conditional378;
_Bool __result224__;
void* right_value327;
void* right_value328;
char* method_block_name_343;
void* right_value329;
struct CVALUE* come_value2_344;
struct sFun* fun2_345;
_Bool _if_conditional379;
_Bool __result225__;
struct sType* method_block_type2_346;
void* right_value330;
char* __dec_obj93;
void* right_value331;
struct sType* __dec_obj94;
struct buffer* __dec_obj95;
void* right_value332;
void* right_value333;
struct buffer* buf_347;
int j_348;
struct list$1CVALUEph* o2_saved_349;
struct CVALUE* it_350;
_Bool _if_conditional380;
void* right_value334;
struct CVALUE* come_value2_351;
void* right_value335;
char* __dec_obj96;
void* right_value336;
struct sType* __dec_obj97;
_Bool _if_conditional381;
void* right_value337;
char* __dec_obj98;
void* right_value338;
char* __dec_obj99;
_Bool _if_conditional382;
void* right_value339;
char* var_name_352;
void* right_value340;
struct sType* result_type_353;
void* right_value341;
struct sType* result_type2_354;
struct sType* result_type3_355;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
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
void* right_value352;
_Bool _if_conditional386;
void* right_value353;
void* right_value354;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
void* right_value359;
struct list$1sTypeph* __dec_obj100;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&params_173, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_174, 0, sizeof(struct sNode*));
memset(&method_block_175, 0, sizeof(struct buffer*));
memset(&method_block_sline_176, 0, sizeof(int));
memset(&method_generics_types_177, 0, sizeof(struct list$1sTypeph*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&obj_value_178, 0, sizeof(struct CVALUE*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&obj_type_179, 0, sizeof(struct sType*));
memset(&klass_180, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_181, 0, sizeof(_Bool));
memset(&lambda_type_182, 0, sizeof(struct sType*));
memset(&o2_saved_183, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_186, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_189, 0, sizeof(char*));
memset(&field_type_190, 0, sizeof(struct sType*));
memset(&field_name_189, 0, sizeof(char*));
memset(&field_type_190, 0, sizeof(struct sType*));
right_value191 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&come_params_194, 0, sizeof(struct list$1CVALUEph*));
memset(&i_195, 0, sizeof(int));
memset(&o2_saved_196, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_199, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_202, 0, sizeof(char*));
memset(&node_203, 0, sizeof(struct sNode*));
memset(&label_202, 0, sizeof(char*));
memset(&node_203, 0, sizeof(struct sNode*));
right_value194 = (void*)0;
memset(&come_value_204, 0, sizeof(struct CVALUE*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&buf_208, 0, sizeof(struct buffer*));
right_value200 = (void*)0;
memset(&j_209, 0, sizeof(int));
memset(&o2_saved_210, 0, sizeof(struct list$1CVALUEph*));
memset(&it_213, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&come_value2_216, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&result_type2_217, 0, sizeof(struct sType*));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&generics_fun_name_218, 0, sizeof(char*));
memset(&fun_219, 0, sizeof(struct sFun*));
memset(&i_220, 0, sizeof(int));
right_value211 = (void*)0;
memset(&new_fun_name_221, 0, sizeof(char*));
right_value212 = (void*)0;
memset(&obj_array_type_225, 0, sizeof(struct sType*));
right_value213 = (void*)0;
memset(&array_method_name_226, 0, sizeof(char*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&klass_229, 0, sizeof(struct sClass*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&result_type_230, 0, sizeof(struct sType*));
right_value221 = (void*)0;
memset(&result_type2_231, 0, sizeof(struct sType*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&param_types_232, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_233, 0, sizeof(struct list$1sTypeph*));
memset(&it_236, 0, sizeof(struct sType*));
right_value227 = (void*)0;
memset(&it2_242, 0, sizeof(struct sType*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&come_params_243, 0, sizeof(struct list$1CVALUEph*));
memset(&i_244, 0, sizeof(int));
memset(&first_param_248, 0, sizeof(_Bool));
memset(&o2_saved_249, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_250, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_251, 0, sizeof(char*));
memset(&node_252, 0, sizeof(struct sNode*));
memset(&label_251, 0, sizeof(char*));
memset(&node_252, 0, sizeof(struct sNode*));
right_value234 = (void*)0;
memset(&come_value_253, 0, sizeof(struct CVALUE*));
memset(&n_254, 0, sizeof(int));
memset(&o2_saved_255, 0, sizeof(struct list$1charph*));
memset(&it_258, 0, sizeof(char*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&i_263, 0, sizeof(int));
memset(&o2_saved_264, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_265, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_266, 0, sizeof(char*));
memset(&node_267, 0, sizeof(struct sNode*));
memset(&label_266, 0, sizeof(char*));
memset(&node_267, 0, sizeof(struct sNode*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&come_value_271, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&obj_array_type_275, 0, sizeof(struct sType*));
right_value245 = (void*)0;
memset(&array_method_name_276, 0, sizeof(char*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&buf_277, 0, sizeof(struct buffer*));
memset(&i_278, 0, sizeof(int));
memset(&o2_saved_279, 0, sizeof(struct list$1sNodeph*));
memset(&it_282, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&come_value_285, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&come_value_286, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&buf_290, 0, sizeof(struct buffer*));
memset(&i_291, 0, sizeof(int));
memset(&o2_saved_292, 0, sizeof(struct list$1sNodeph*));
memset(&it_293, 0, sizeof(struct sNode*));
right_value262 = (void*)0;
memset(&come_value_294, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&buf_296, 0, sizeof(struct buffer*));
memset(&i_297, 0, sizeof(int));
memset(&o2_saved_298, 0, sizeof(struct list$1sNodeph*));
memset(&it_299, 0, sizeof(struct sNode*));
right_value273 = (void*)0;
memset(&come_value_300, 0, sizeof(struct CVALUE*));
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&come_value_301, 0, sizeof(struct CVALUE*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&buf_302, 0, sizeof(struct buffer*));
memset(&i_303, 0, sizeof(int));
memset(&o2_saved_304, 0, sizeof(struct list$1sNodeph*));
memset(&it_305, 0, sizeof(struct sNode*));
right_value284 = (void*)0;
memset(&come_value_306, 0, sizeof(struct CVALUE*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&come_value_307, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&default_param_308, 0, sizeof(char*));
memset(&param_name_309, 0, sizeof(char*));
memset(&source_310, 0, sizeof(struct buffer*));
memset(&p_311, 0, sizeof(char*));
memset(&head_312, 0, sizeof(char*));
memset(&sline_313, 0, sizeof(int));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&node_314, 0, sizeof(struct sNode*));
right_value296 = (void*)0;
memset(&come_value_315, 0, sizeof(struct CVALUE*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value304 = (void*)0;
memset(&current_stack_frame_node_317, 0, sizeof(struct sNode*));
right_value305 = (void*)0;
memset(&come_value_318, 0, sizeof(struct CVALUE*));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&method_block2_319, 0, sizeof(struct buffer*));
right_value308 = (void*)0;
memset(&method_block_type_320, 0, sizeof(struct sType*));
right_value309 = (void*)0;
memset(&class_name_321, 0, sizeof(char*));
memset(&current_stack_frame_struct_325, 0, sizeof(struct sClass*));
right_value310 = (void*)0;
memset(&result_type_326, 0, sizeof(struct sType*));
memset(&param_types_327, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_328, 0, sizeof(struct list$1charph*));
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&all_alhabet_sname_329, 0, sizeof(struct buffer*));
memset(&p_330, 0, sizeof(char*));
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&i_331, 0, sizeof(int));
memset(&o2_saved_332, 0, sizeof(struct list$1sTypeph*));
memset(&it_333, 0, sizeof(struct sType*));
memset(&param_type_334, 0, sizeof(struct sType*));
right_value316 = (void*)0;
memset(&param_name_335, 0, sizeof(char*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&param_name_336, 0, sizeof(char*));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&param_name_337, 0, sizeof(char*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&source3_338, 0, sizeof(struct buffer*));
memset(&p_339, 0, sizeof(char*));
memset(&head_340, 0, sizeof(char*));
memset(&sline_341, 0, sizeof(int));
right_value326 = (void*)0;
memset(&node_342, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&method_block_name_343, 0, sizeof(char*));
right_value329 = (void*)0;
memset(&come_value2_344, 0, sizeof(struct CVALUE*));
memset(&fun2_345, 0, sizeof(struct sFun*));
memset(&method_block_type2_346, 0, sizeof(struct sType*));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&buf_347, 0, sizeof(struct buffer*));
memset(&j_348, 0, sizeof(int));
memset(&o2_saved_349, 0, sizeof(struct list$1CVALUEph*));
memset(&it_350, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
memset(&come_value2_351, 0, sizeof(struct CVALUE*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&var_name_352, 0, sizeof(char*));
right_value340 = (void*)0;
memset(&result_type_353, 0, sizeof(struct sType*));
right_value341 = (void*)0;
memset(&result_type2_354, 0, sizeof(struct sType*));
memset(&result_type3_355, 0, sizeof(struct sType*));
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
right_value359 = (void*)0;
    # 226 "20method.c"
    fun_name_172=self->fun_name;
    # 227 "20method.c"
    params_173=self->params;
    # 228 "20method.c"
    obj_174=self->obj;
    # 229 "20method.c"
    method_block_175=self->method_block;
    # 230 "20method.c"
    method_block_sline_176=self->method_block_sline;
    # 233 "20method.c"
    method_generics_types_177=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    # 234 "20method.c"
    __dec_obj59=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value186=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 240 "20method.c"
    # 236 "20method.c"
    if(_if_conditional239=!node_compile(obj_174,info),    _if_conditional239) {
        # 237 "20method.c"
        __result137__ = (_Bool)0;
        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result137__;
    }
    # 240 "20method.c"
    obj_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 241 "20method.c"
    dec_stack_ptr(1,info);
    # 250 "20method.c"
    # 243 "20method.c"
    if(_if_conditional240=gComeDebug&&obj_value_178->type->mPointerNum>0,    _if_conditional240) {
        # 244 "20method.c"
        __dec_obj60=obj_value_178->c_value;
        obj_value_178->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value188=make_type_name_string(obj_value_178->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),obj_value_178->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 250 "20method.c"
    obj_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(obj_value_178->type))));
    come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 252 "20method.c"
    klass_180=obj_type_179->mClass;
    # 254 "20method.c"
    calling_dynamic_method_181=(_Bool)0;
    # 255 "20method.c"
    lambda_type_182=((void*)0);
    # 266 "20method.c"
    for(    o2_saved_183=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_180->mFields)),it_186=list$1tuple2$2charphsTypephph_begin((o2_saved_183));    !list$1tuple2$2charphsTypephph_end((o2_saved_183));    it_186=list$1tuple2$2charphsTypephph_next((o2_saved_183))    ){
        # 257 "20method.c"
        multiple_assign_var1=it_186;
        field_name_189=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_190=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 264 "20method.c"
        # 259 "20method.c"
        if(_if_conditional245=string_operator_equals(field_name_189,fun_name_172)&&string_operator_equals(field_type_190->mClass->mName,"lambda"),        _if_conditional245) {
            # 260 "20method.c"
            calling_dynamic_method_181=(_Bool)1;
            # 261 "20method.c"
            lambda_type_182=field_type_190;
            # 262 "20method.c"
            field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 926 "20method.c"
    # 266 "20method.c"
    if(calling_dynamic_method_181) {
        # 267 "20method.c"
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(lambda_type_182->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 268 "20method.c"
        result_type_191->mStatic=(_Bool)0;
        # 270 "20method.c"
        come_params_194=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value193=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value192=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 270, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 272 "20method.c"
        i_195=0;
        # 300 "20method.c"
        for(        o2_saved_196=(params_173),it_199=list$1tuple2$2charphsNodephph_begin((o2_saved_196));        !list$1tuple2$2charphsNodephph_end((o2_saved_196));        it_199=list$1tuple2$2charphsNodephph_next((o2_saved_196))        ){
            # 274 "20method.c"
            multiple_assign_var2=it_199;
            label_202=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_203=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            # 298 "20method.c"
            # 276 "20method.c"
            if(_if_conditional251=i_195==0,            _if_conditional251) {
                # 277 "20method.c"
                list$1CVALUEph_push_back(come_params_194,(struct CVALUE*)come_increment_ref_count(obj_value_178));
                # 278 "20method.c"
                i_195++;
            }
            else {
                # 285 "20method.c"
                # 281 "20method.c"
                if(_if_conditional252=!node_compile(node_203,info),                _if_conditional252) {
                    # 282 "20method.c"
                    __result153__ = (_Bool)0;
                    label_202 = come_decrement_ref_count2(label_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result153__;
                }
                # 285 "20method.c"
                come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 287 "20method.c"
                check_assign_type(((char*)(right_value197=xsprintf("\%s param num \%s is assinged to",((char*)(right_value195=charp_to_string(fun_name_172))),((char*)(right_value196=int_to_string(i_195)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_182->mParamTypes,i_195-1), "20method.c", 287, 2)),come_value_204->type,come_value_204,(_Bool)0,(_Bool)1,info);
                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 293 "20method.c"
                # 288 "20method.c"
                if(_if_conditional255=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_182->mParamTypes,i_195-1), "20method.c", 288, 3))->mHeap&&come_value_204->type->mHeap,                _if_conditional255) {
                    # 290 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_182->mParamTypes,i_195-1), "20method.c", 290, 4)),come_value_204->type,come_value_204,info);
                }
                # 293 "20method.c"
                list$1CVALUEph_push_back(come_params_194,(struct CVALUE*)come_increment_ref_count(come_value_204));
                # 295 "20method.c"
                i_195++;
                # 296 "20method.c"
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_202 = come_decrement_ref_count2(label_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 300 "20method.c"
        buf_208=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 300, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 302 "20method.c"
        buffer_append_str(buf_208,((char*)(right_value200=xsprintf("%s->%s",obj_value_178->c_value,fun_name_172))));
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 303 "20method.c"
        buffer_append_str(buf_208,"(");
        # 305 "20method.c"
        j_209=0;
        # 318 "20method.c"
        for(        o2_saved_210=(struct list$1CVALUEph*)come_increment_ref_count((come_params_194)),it_213=list$1CVALUEph_begin((o2_saved_210));        !list$1CVALUEph_end((o2_saved_210));        it_213=list$1CVALUEph_next((o2_saved_210))        ){
            # 310 "20method.c"
            # 307 "20method.c"
            if(_if_conditional260=j_209==0,            _if_conditional260) {
                # 308 "20method.c"
                __dec_obj61=it_213->c_value;
                it_213->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s->_protocol_obj",it_213->c_value))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 310 "20method.c"
            buffer_append_str(buf_208,it_213->c_value);
            # 316 "20method.c"
            # 312 "20method.c"
            if(_if_conditional262=j_209!=list$1CVALUEph_length(come_params_194)-1,            _if_conditional262) {
                # 313 "20method.c"
                buffer_append_str(buf_208,",");
            }
            # 316 "20method.c"
            j_209++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 318 "20method.c"
        buffer_append_str(buf_208,")");
        # 320 "20method.c"
        come_value2_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 320, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 322 "20method.c"
        __dec_obj62=come_value2_216->c_value;
        come_value2_216->c_value=(char*)come_increment_ref_count(((char*)(right_value203=buffer_to_string(buf_208))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 324 "20method.c"
        result_type2_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=solve_generics(result_type_191,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 330 "20method.c"
        # 326 "20method.c"
        if(result_type2_217->mHeap) {
            # 327 "20method.c"
            __dec_obj63=come_value2_216->c_value;
            come_value2_216->c_value=(char*)come_increment_ref_count(((char*)(right_value206=append_object_to_right_values(((char*)(right_value205=buffer_to_string(buf_208))),(struct sType*)come_increment_ref_count(result_type2_217),info))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 330 "20method.c"
        __dec_obj64=come_value2_216->type;
        come_value2_216->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(result_type2_217))));
        come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 331 "20method.c"
        come_value2_216->type->mStatic=(_Bool)0;
        # 332 "20method.c"
        come_value2_216->var=((void*)0);
        # 334 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_216->c_value);
        # 336 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_216));
        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 339 "20method.c"
        generics_fun_name_218=(char*)come_increment_ref_count(((char*)(right_value210=string_to_string(((char*)(right_value209=make_generics_function(obj_type_179,(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(fun_name_172)))),info,(_Bool)1)))))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 341 "20method.c"
        fun_219=((void*)0);
        # 354 "20method.c"
        for(        i_220=128;        i_220>=1;        i_220--        ){
            # 344 "20method.c"
            new_fun_name_221=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("%s_v%d",generics_fun_name_218,i_220))));
            right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 346 "20method.c"
            fun_219=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_221);
            # 352 "20method.c"
            # 348 "20method.c"
            if(_if_conditional283=fun_219!=((void*)0),            _if_conditional283) {
                # 349 "20method.c"
                __dec_obj65=generics_fun_name_218;
                generics_fun_name_218=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(new_fun_name_221))));
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 350 "20method.c"
                new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 407 "20method.c"
        # 354 "20method.c"
        if(_if_conditional284=fun_219==((void*)0),        _if_conditional284) {
            # 355 "20method.c"
            obj_array_type_225=obj_type_179->mOriginalLoadVarType->v1;
            # 406 "20method.c"
            # 357 "20method.c"
            if(_if_conditional285=obj_array_type_225&&list$1sNodeph_length(obj_array_type_225->mArrayNum)>0,            _if_conditional285) {
                # 358 "20method.c"
                array_method_name_226=(char*)come_increment_ref_count(((char*)(right_value213=create_method_name(obj_array_type_225,(_Bool)0,fun_name_172,info,(_Bool)0))));
                right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 360 "20method.c"
                fun_219=map$2charphsFunph_at(info->funcs,array_method_name_226,((void*)0));
                # 377 "20method.c"
                # 362 "20method.c"
                if(fun_219) {
                    # 363 "20method.c"
                    __dec_obj66=generics_fun_name_218;
                    generics_fun_name_218=(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(array_method_name_226))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 366 "20method.c"
                    fun_219=map$2charphsFunph_at(info->funcs,generics_fun_name_218,((void*)0));
                    # 376 "20method.c"
                    # 368 "20method.c"
                    if(_if_conditional291=fun_219==((void*)0),                    _if_conditional291) {
                        # 369 "20method.c"
                        __dec_obj67=generics_fun_name_218;
                        generics_fun_name_218=(char*)come_increment_ref_count(((char*)(right_value216=create_method_name(obj_type_179,(_Bool)0,((char*)(right_value215=__builtin_string(fun_name_172))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 370 "20method.c"
                        fun_219=map$2charphsFunph_at(info->funcs,generics_fun_name_218,((void*)0));
                        # 375 "20method.c"
                        # 371 "20method.c"
                        if(_if_conditional292=fun_219==((void*)0),                        _if_conditional292) {
                            # 372 "20method.c"
                            err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_218,info->come_fun->mName);
                            # 373 "20method.c"
                            __result173__ = (_Bool)1;
                            array_method_name_226 = come_decrement_ref_count2(array_method_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result173__;
                        }
                    }
                }
                array_method_name_226 = come_decrement_ref_count2(array_method_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 379 "20method.c"
                fun_219=map$2charphsFunph_at(info->funcs,generics_fun_name_218,((void*)0));
                # 405 "20method.c"
                # 381 "20method.c"
                if(_if_conditional293=fun_219==((void*)0),                _if_conditional293) {
                    # 382 "20method.c"
                    __dec_obj68=generics_fun_name_218;
                    generics_fun_name_218=(char*)come_increment_ref_count(((char*)(right_value218=create_method_name(obj_type_179,(_Bool)0,((char*)(right_value217=__builtin_string(fun_name_172))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 384 "20method.c"
                    fun_219=map$2charphsFunph_at(info->funcs,generics_fun_name_218,((void*)0));
                    # 400 "20method.c"
                    # 386 "20method.c"
                    if(_if_conditional294=fun_219==((void*)0),                    _if_conditional294) {
                        # 387 "20method.c"
                        klass_229=obj_type_179->mClass;
                        # 398 "20method.c"
                        while(klass_229->mParent) {
                            # 389 "20method.c"
                            klass_229=klass_229->mParent;
                            # 390 "20method.c"
                            __dec_obj69=generics_fun_name_218;
                            generics_fun_name_218=(char*)come_increment_ref_count(((char*)(right_value219=create_method_name_using_class(klass_229,(_Bool)0,fun_name_172,info,(_Bool)1))));
                            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 392 "20method.c"
                            fun_219=map$2charphsFunph_at(info->funcs,generics_fun_name_218,((void*)0));
                            # 397 "20method.c"
                            # 394 "20method.c"
                            if(fun_219) {
                                # 395 "20method.c"
                                break;
                            }
                        }
                    }
                    # 404 "20method.c"
                    # 400 "20method.c"
                    if(_if_conditional296=fun_219==((void*)0),                    _if_conditional296) {
                        # 401 "20method.c"
                        err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_218,info->come_fun->mName);
                        # 402 "20method.c"
                        __result174__ = (_Bool)1;
                        generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result174__;
                    }
                }
            }
        }
        # 412 "20method.c"
        # 407 "20method.c"
        if(_if_conditional297=fun_219==((void*)0),        _if_conditional297) {
            # 408 "20method.c"
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_218,info->come_fun->mName);
            # 409 "20method.c"
            __result175__ = (_Bool)1;
            generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result175__;
        }
        # 417 "20method.c"
        # 412 "20method.c"
        if(_if_conditional299=list$1sTypeph_length(fun_219->mParamTypes)==0,        _if_conditional299) {
            # 413 "20method.c"
            err_msg(info,"Method require function parametor");
            # 414 "20method.c"
            __result178__ = (_Bool)1;
            generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result178__;
        }
        # 417 "20method.c"
        result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(fun_219->mResultType))));
        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 418 "20method.c"
        result_type_230->mStatic=(_Bool)0;
        # 420 "20method.c"
        result_type2_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=solve_generics(result_type_230,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 422 "20method.c"
        param_types_232=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value223=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value222=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 422, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 434 "20method.c"
        for(        o2_saved_233=(struct list$1sTypeph*)come_increment_ref_count((fun_219->mParamTypes)),it_236=list$1sTypeph_begin((o2_saved_233));        !list$1sTypeph_end((o2_saved_233));        it_236=list$1sTypeph_next((o2_saved_233))        ){
            # 432 "20method.c"
            # 424 "20method.c"
            if(_if_conditional304=it_236==((void*)0),            _if_conditional304) {
                # 425 "20method.c"
                list$1sTypeph_push_back(param_types_232,it_236);
            }
            else {
                # 428 "20method.c"
                it2_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=solve_generics(it_236,info->generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 430 "20method.c"
                list$1sTypeph_push_back(param_types_232,(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(it2_242)))));
                come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,it2_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 434 "20method.c"
        come_params_243=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value230=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value229=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 434, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 440 "20method.c"
        for(        i_244=0;        i_244<list$1sTypeph_length(fun_219->mParamTypes)-(method_block_175?2:0);        i_244++        ){
            # 437 "20method.c"
            list$1CVALUEph_add(come_params_243,((void*)0));
        }
        # 440 "20method.c"
        first_param_248=(_Bool)1;
        # 475 "20method.c"
        for(        o2_saved_249=(params_173),it_250=list$1tuple2$2charphsNodephph_begin((o2_saved_249));        !list$1tuple2$2charphsNodephph_end((o2_saved_249));        it_250=list$1tuple2$2charphsNodephph_next((o2_saved_249))        ){
            # 442 "20method.c"
            multiple_assign_var3=it_250;
            label_251=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_252=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            # 473 "20method.c"
            # 444 "20method.c"
            if(first_param_248) {
                # 445 "20method.c"
                first_param_248=(_Bool)0;
            }
            else {
                # 473 "20method.c"
                # 447 "20method.c"
                if(label_251) {
                    # 452 "20method.c"
                    # 448 "20method.c"
                    if(_if_conditional311=!node_compile(node_252,info),                    _if_conditional311) {
                        # 449 "20method.c"
                        __result188__ = (_Bool)0;
                        label_251 = come_decrement_ref_count2(label_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_252) { node_252 = come_decrement_ref_count2(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result188__;
                    }
                    # 452 "20method.c"
                    come_value_253=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 453 "20method.c"
                    dec_stack_ptr(1,info);
                    # 455 "20method.c"
                    n_254=0;
                    # 464 "20method.c"
                    for(                    o2_saved_255=(struct list$1charph*)come_increment_ref_count((fun_219->mParamNames)),it_258=list$1charph_begin((o2_saved_255));                    !list$1charph_end((o2_saved_255));                    it_258=list$1charph_next((o2_saved_255))                    ){
                        # 461 "20method.c"
                        # 457 "20method.c"
                        if(_if_conditional316=string_operator_equals(label_251,it_258),                        _if_conditional316) {
                            # 458 "20method.c"
                            break;
                        }
                        # 461 "20method.c"
                        n_254++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 467 "20method.c"
                    # 464 "20method.c"
                    if(_if_conditional317=list$1sTypephp_operator_load_element(param_types_232,n_254),                    _if_conditional317) {
                        # 465 "20method.c"
                        check_assign_type(((char*)(right_value237=xsprintf("\%s param num \%s is assinged to",((char*)(right_value235=charp_to_string(fun_name_172))),((char*)(right_value236=int_to_string(n_254)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,n_254), "20method.c", 465, 5)),come_value_253->type,come_value_253,(_Bool)0,(_Bool)1,info);
                        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 471 "20method.c"
                    # 467 "20method.c"
                    if(_if_conditional318=list$1sTypephp_operator_load_element(param_types_232,n_254)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,n_254), "20method.c", 467, 6))->mHeap&&come_value_253->type->mHeap,                    _if_conditional318) {
                        # 468 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,n_254), "20method.c", 468, 7)),come_value_253->type,come_value_253,info);
                    }
                    # 471 "20method.c"
                    list$1CVALUEph_replace(come_params_243,n_254,(struct CVALUE*)come_increment_ref_count(come_value_253));
                    come_call_finalizer2(CVALUE_finalize,come_value_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            label_251 = come_decrement_ref_count2(label_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_252) { node_252 = come_decrement_ref_count2(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 475 "20method.c"
        i_263=0;
        # 523 "20method.c"
        for(        o2_saved_264=(params_173),it_265=list$1tuple2$2charphsNodephph_begin((o2_saved_264));        !list$1tuple2$2charphsNodephph_end((o2_saved_264));        it_265=list$1tuple2$2charphsNodephph_next((o2_saved_264))        ){
            # 477 "20method.c"
            multiple_assign_var4=it_265;
            label_266=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_267=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            # 521 "20method.c"
            # 479 "20method.c"
            if(_if_conditional322=i_263==0,            _if_conditional322) {
                # 480 "20method.c"
                check_assign_type(((char*)(right_value240=xsprintf("\%s param num \%s is assinged to",((char*)(right_value238=charp_to_string(fun_name_172))),((char*)(right_value239=int_to_string(i_263)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 480, 8)),obj_value_178->type,obj_value_178,(_Bool)0,(_Bool)1,info);
                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 488 "20method.c"
                # 481 "20method.c"
                if(_if_conditional323=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 481, 9))->mHeap&&obj_value_178->type->mHeap,                _if_conditional323) {
                    # 482 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 482, 10)),obj_value_178->type,obj_value_178,info);
                }
                else {
                    # 488 "20method.c"
                    # 484 "20method.c"
                    if(_if_conditional324=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 484, 11))->mHeap&&!obj_value_178->type->mHeap&&!gComeGC,                    _if_conditional324) {
                        # 485 "20method.c"
                        err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_219->mParamNames,i_263), "20method.c", 485, 12)));
                        # 486 "20method.c"
                        exit(2);
                    }
                }
                # 488 "20method.c"
                list$1CVALUEph_replace(come_params_243,i_263,(struct CVALUE*)come_increment_ref_count(obj_value_178));
                # 490 "20method.c"
                i_263++;
            }
            else {
                # 521 "20method.c"
                # 492 "20method.c"
                if(label_266) {
                }
                else {
                    # 499 "20method.c"
                    # 495 "20method.c"
                    if(_if_conditional328=!node_compile(node_267,info),                    _if_conditional328) {
                        # 496 "20method.c"
                        __result200__ = (_Bool)0;
                        label_266 = come_decrement_ref_count2(label_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_267) { node_267 = come_decrement_ref_count2(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result200__;
                    }
                    # 499 "20method.c"
                    come_value_271=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 500 "20method.c"
                    dec_stack_ptr(1,info);
                    # 511 "20method.c"
                    while(_while_condtional34=(_Bool)1,                    _while_condtional34) {
                        # 509 "20method.c"
                        # 503 "20method.c"
                        if(_if_conditional331=list$1CVALUEphp_operator_load_element(come_params_243,i_263)==((void*)0),                        _if_conditional331) {
                            # 504 "20method.c"
                            break;
                        }
                        else {
                            # 507 "20method.c"
                            i_263++;
                        }
                    }
                    # 514 "20method.c"
                    # 511 "20method.c"
                    if(_if_conditional332=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 511, 13)),                    _if_conditional332) {
                        # 512 "20method.c"
                        check_assign_type(((char*)(right_value244=xsprintf("\%s param num \%s is assinged to",((char*)(right_value242=charp_to_string(fun_name_172))),((char*)(right_value243=int_to_string(i_263)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 512, 14)),come_value_271->type,come_value_271,(_Bool)0,(_Bool)1,info);
                        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 518 "20method.c"
                    # 514 "20method.c"
                    if(_if_conditional333=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 514, 15))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 514, 16))->mHeap&&come_value_271->type->mHeap,                    _if_conditional333) {
                        # 515 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 515, 17)),come_value_271->type,come_value_271,info);
                    }
                    # 518 "20method.c"
                    list$1CVALUEph_replace(come_params_243,i_263,(struct CVALUE*)come_increment_ref_count(come_value_271));
                    # 519 "20method.c"
                    i_263++;
                    come_call_finalizer2(CVALUE_finalize,come_value_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            label_266 = come_decrement_ref_count2(label_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_267) { node_267 = come_decrement_ref_count2(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 532 "20method.c"
        while(_while_condtional36=(_Bool)1,        _while_condtional36) {
            # 530 "20method.c"
            # 524 "20method.c"
            if(_if_conditional334=list$1CVALUEphp_operator_load_element(come_params_243,i_263)==((void*)0),            _if_conditional334) {
                # 525 "20method.c"
                break;
            }
            else {
                # 528 "20method.c"
                i_263++;
            }
        }
        # 532 "20method.c"
        obj_array_type_275=obj_type_179->mOriginalLoadVarType->v1;
        # 655 "20method.c"
        # 533 "20method.c"
        if(_if_conditional335=obj_array_type_275&&list$1sNodeph_length(obj_array_type_275->mArrayNum)>0,        _if_conditional335) {
            # 534 "20method.c"
            array_method_name_276=(char*)come_increment_ref_count(((char*)(right_value245=create_method_name(obj_array_type_275,(_Bool)0,fun_name_172,info,(_Bool)0))));
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 653 "20method.c"
            # 535 "20method.c"
            if(_if_conditional336=string_operator_equals(generics_fun_name_218,array_method_name_276),            _if_conditional336) {
                # 652 "20method.c"
                # 536 "20method.c"
                if(_if_conditional337=charp_operator_equals(fun_name_172,"to_pointer"),                _if_conditional337) {
                    # 537 "20method.c"
                    buf_277=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value247=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value246=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 537, "buffer"))))))));
                    come_call_finalizer2(buffer_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 539 "20method.c"
                    i_278=0;
                    # 556 "20method.c"
                    for(                    o2_saved_279=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_275->mArrayNum)),it_282=list$1sNodeph_begin((o2_saved_279));                    !list$1sNodeph_end((o2_saved_279));                    it_282=list$1sNodeph_next((o2_saved_279))                    ){
                        # 546 "20method.c"
                        # 541 "20method.c"
                        if(_if_conditional342=!node_compile(it_282,info),                        _if_conditional342) {
                            # 542 "20method.c"
                            err_msg(info,"invalid array num");
                            # 543 "20method.c"
                            exit(1);
                        }
                        # 546 "20method.c"
                        come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
                        come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 547 "20method.c"
                        dec_stack_ptr(1,info);
                        # 549 "20method.c"
                        buffer_append_str(buf_277,((char*)(right_value249=xsprintf("%s",come_value_285->c_value))));
                        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 553 "20method.c"
                        # 550 "20method.c"
                        if(_if_conditional343=i_278!=list$1sNodeph_length(obj_array_type_275->mArrayNum)-1,                        _if_conditional343) {
                            # 551 "20method.c"
                            buffer_append_str(buf_277,"*");
                        }
                        # 553 "20method.c"
                        i_278++;
                        come_call_finalizer2(CVALUE_finalize,come_value_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 556 "20method.c"
                    come_value_286=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 556, "CVALUE"))));
                    come_call_finalizer2(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 558 "20method.c"
                    __dec_obj77=come_value_286->c_value;
                    come_value_286->c_value=(char*)come_increment_ref_count(((char*)(right_value251=buffer_to_string(buf_277))));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 559 "20method.c"
                    come_value_286->var=((void*)0);
                    # 560 "20method.c"
                    __dec_obj78=come_value_286->type;
                    come_value_286->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 560, "sType")))),"long",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 562 "20method.c"
                    list$1CVALUEph_replace(come_params_243,1,(struct CVALUE*)come_increment_ref_count(come_value_286));
                    # 563 "20method.c"
                    list$1tuple2$2charphsNodephph_push_back(params_173,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value259=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value258=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 563, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("len")))),((void*)0))))));
                    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(buffer_finalize,buf_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 652 "20method.c"
                    # 565 "20method.c"
                    if(_if_conditional347=charp_operator_equals(fun_name_172,"length"),                    _if_conditional347) {
                        # 566 "20method.c"
                        buf_290=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value261=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value260=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 566, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 568 "20method.c"
                        i_291=0;
                        # 585 "20method.c"
                        for(                        o2_saved_292=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_275->mArrayNum)),it_293=list$1sNodeph_begin((o2_saved_292));                        !list$1sNodeph_end((o2_saved_292));                        it_293=list$1sNodeph_next((o2_saved_292))                        ){
                            # 575 "20method.c"
                            # 570 "20method.c"
                            if(_if_conditional348=!node_compile(it_293,info),                            _if_conditional348) {
                                # 571 "20method.c"
                                err_msg(info,"invalid array num");
                                # 572 "20method.c"
                                exit(1);
                            }
                            # 575 "20method.c"
                            come_value_294=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
                            come_call_finalizer2(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 576 "20method.c"
                            dec_stack_ptr(1,info);
                            # 578 "20method.c"
                            buffer_append_str(buf_290,((char*)(right_value263=xsprintf("%s",come_value_294->c_value))));
                            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 582 "20method.c"
                            # 579 "20method.c"
                            if(_if_conditional349=i_291!=list$1sNodeph_length(obj_array_type_275->mArrayNum)-1,                            _if_conditional349) {
                                # 580 "20method.c"
                                buffer_append_str(buf_290,"*");
                            }
                            # 582 "20method.c"
                            i_291++;
                            come_call_finalizer2(CVALUE_finalize,come_value_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 585 "20method.c"
                        come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 585, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 587 "20method.c"
                        __dec_obj83=come_value_295->c_value;
                        come_value_295->c_value=(char*)come_increment_ref_count(((char*)(right_value265=buffer_to_string(buf_290))));
                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 588 "20method.c"
                        come_value_295->var=((void*)0);
                        # 589 "20method.c"
                        __dec_obj84=come_value_295->type;
                        come_value_295->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 589, "sType")))),"long",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 591 "20method.c"
                        list$1CVALUEph_replace(come_params_243,1,(struct CVALUE*)come_increment_ref_count(come_value_295));
                        # 592 "20method.c"
                        list$1tuple2$2charphsNodephph_push_back(params_173,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value270=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value269=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 592, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("len")))),((void*)0))))));
                        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,buf_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,come_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 652 "20method.c"
                        # 594 "20method.c"
                        if(_if_conditional350=charp_operator_equals(fun_name_172,"to_buffer"),                        _if_conditional350) {
                            # 595 "20method.c"
                            buf_296=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value272=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 595, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 597 "20method.c"
                            i_297=0;
                            # 614 "20method.c"
                            for(                            o2_saved_298=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_275->mArrayNum)),it_299=list$1sNodeph_begin((o2_saved_298));                            !list$1sNodeph_end((o2_saved_298));                            it_299=list$1sNodeph_next((o2_saved_298))                            ){
                                # 604 "20method.c"
                                # 599 "20method.c"
                                if(_if_conditional351=!node_compile(it_299,info),                                _if_conditional351) {
                                    # 600 "20method.c"
                                    err_msg(info,"invalid array num");
                                    # 601 "20method.c"
                                    exit(1);
                                }
                                # 604 "20method.c"
                                come_value_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=get_value_from_stack(-1,info))));
                                come_call_finalizer2(CVALUE_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 605 "20method.c"
                                dec_stack_ptr(1,info);
                                # 607 "20method.c"
                                buffer_append_str(buf_296,((char*)(right_value274=xsprintf("%s",come_value_300->c_value))));
                                right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 611 "20method.c"
                                # 608 "20method.c"
                                if(_if_conditional352=i_297!=list$1sNodeph_length(obj_array_type_275->mArrayNum)-1,                                _if_conditional352) {
                                    # 609 "20method.c"
                                    buffer_append_str(buf_296,"*");
                                }
                                # 611 "20method.c"
                                i_297++;
                                come_call_finalizer2(CVALUE_finalize,come_value_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 614 "20method.c"
                            come_value_301=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 614, "CVALUE"))));
                            come_call_finalizer2(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 616 "20method.c"
                            __dec_obj85=come_value_301->c_value;
                            come_value_301->c_value=(char*)come_increment_ref_count(((char*)(right_value276=buffer_to_string(buf_296))));
                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 617 "20method.c"
                            come_value_301->var=((void*)0);
                            # 618 "20method.c"
                            __dec_obj86=come_value_301->type;
                            come_value_301->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value277=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 618, "sType")))),"long",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 620 "20method.c"
                            list$1CVALUEph_replace(come_params_243,1,(struct CVALUE*)come_increment_ref_count(come_value_301));
                            # 621 "20method.c"
                            list$1tuple2$2charphsNodephph_push_back(params_173,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value281=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value280=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 621, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("len")))),((void*)0))))));
                            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,buf_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(CVALUE_finalize,come_value_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 652 "20method.c"
                            # 623 "20method.c"
                            if(_if_conditional353=charp_operator_equals(fun_name_172,"to_list"),                            _if_conditional353) {
                                # 624 "20method.c"
                                buf_302=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value283=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value282=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 624, "buffer"))))))));
                                come_call_finalizer2(buffer_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 626 "20method.c"
                                i_303=0;
                                # 643 "20method.c"
                                for(                                o2_saved_304=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_275->mArrayNum)),it_305=list$1sNodeph_begin((o2_saved_304));                                !list$1sNodeph_end((o2_saved_304));                                it_305=list$1sNodeph_next((o2_saved_304))                                ){
                                    # 633 "20method.c"
                                    # 628 "20method.c"
                                    if(_if_conditional354=!node_compile(it_305,info),                                    _if_conditional354) {
                                        # 629 "20method.c"
                                        err_msg(info,"invalid array num");
                                        # 630 "20method.c"
                                        exit(1);
                                    }
                                    # 633 "20method.c"
                                    come_value_306=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value284=get_value_from_stack(-1,info))));
                                    come_call_finalizer2(CVALUE_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 634 "20method.c"
                                    dec_stack_ptr(1,info);
                                    # 636 "20method.c"
                                    buffer_append_str(buf_302,((char*)(right_value285=xsprintf("%s",come_value_306->c_value))));
                                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 640 "20method.c"
                                    # 637 "20method.c"
                                    if(_if_conditional355=i_303!=list$1sNodeph_length(obj_array_type_275->mArrayNum)-1,                                    _if_conditional355) {
                                        # 638 "20method.c"
                                        buffer_append_str(buf_302,"*");
                                    }
                                    # 640 "20method.c"
                                    i_303++;
                                    come_call_finalizer2(CVALUE_finalize,come_value_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 643 "20method.c"
                                come_value_307=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 643, "CVALUE"))));
                                come_call_finalizer2(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 645 "20method.c"
                                __dec_obj87=come_value_307->c_value;
                                come_value_307->c_value=(char*)come_increment_ref_count(((char*)(right_value287=buffer_to_string(buf_302))));
                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 646 "20method.c"
                                come_value_307->var=((void*)0);
                                # 647 "20method.c"
                                __dec_obj88=come_value_307->type;
                                come_value_307->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value288=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 647, "sType")))),"long",(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 649 "20method.c"
                                list$1CVALUEph_replace(come_params_243,1,(struct CVALUE*)come_increment_ref_count(come_value_307));
                                # 650 "20method.c"
                                list$1tuple2$2charphsNodephph_push_back(params_173,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value292=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value291=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 650, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value290=xsprintf("len")))),((void*)0))))));
                                right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple2$2charphvoidpp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(buffer_finalize,buf_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(CVALUE_finalize,come_value_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            array_method_name_276 = come_decrement_ref_count2(array_method_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 701 "20method.c"
        # 655 "20method.c"
        if(_if_conditional357=list$1tuple2$2charphsNodephph_length(params_173)<list$1sTypeph_length(fun_219->mParamTypes)+(method_block_175?-2:0),        _if_conditional357) {
            # 699 "20method.c"
            for(            ;            i_263<list$1sTypeph_length(fun_219->mParamTypes)+(method_block_175?-2:0);            i_263++            ){
                # 658 "20method.c"
                default_param_308=(char*)come_increment_ref_count(((char*)(right_value293=string_clone(list$1charphp_operator_load_element(fun_219->mParamDefaultParametors,i_263)))));
                right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 659 "20method.c"
                param_name_309=((char*)come_null_check(list$1charphp_operator_load_element(fun_219->mParamNames,i_263), "20method.c", 659, 18));
                # 698 "20method.c"
                # 661 "20method.c"
                if(_if_conditional358=default_param_308&&string_operator_not_equals(default_param_308,"")&&list$1CVALUEphp_operator_load_element(come_params_243,i_263)==((void*)0),                _if_conditional358) {
                    # 662 "20method.c"
                    source_310=(struct buffer*)come_increment_ref_count(info->source);
                    # 663 "20method.c"
                    p_311=info->p;
                    # 664 "20method.c"
                    head_312=info->head;
                    # 665 "20method.c"
                    sline_313=info->sline;
                    # 667 "20method.c"
                    __dec_obj89=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value294=string_to_buffer(default_param_308))));
                    come_call_finalizer2(buffer_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 668 "20method.c"
                    info->p=info->source->buf;
                    # 669 "20method.c"
                    info->head=info->source->buf;
                    # 671 "20method.c"
                    node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=expression_v13(info))));
                    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 677 "20method.c"
                    # 673 "20method.c"
                    if(_if_conditional359=!node_compile(node_314,info),                    _if_conditional359) {
                        # 674 "20method.c"
                        __result214__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_308 = come_decrement_ref_count2(default_param_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result214__;
                    }
                    # 677 "20method.c"
                    __dec_obj90=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_310);
                    come_call_finalizer2(buffer_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 678 "20method.c"
                    info->p=p_311;
                    # 679 "20method.c"
                    info->head=head_312;
                    # 680 "20method.c"
                    info->sline=sline_313;
                    # 682 "20method.c"
                    come_value_315=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 686 "20method.c"
                    # 683 "20method.c"
                    if(_if_conditional360=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 683, 19)),                    _if_conditional360) {
                        # 684 "20method.c"
                        check_assign_type(((char*)(right_value299=xsprintf("\%s param num \%s is assinged to",((char*)(right_value297=charp_to_string(fun_name_172))),((char*)(right_value298=int_to_string(i_263)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 684, 20)),come_value_315->type,come_value_315,(_Bool)0,(_Bool)1,info);
                        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 689 "20method.c"
                    # 686 "20method.c"
                    if(_if_conditional361=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 686, 21))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 686, 22))->mHeap&&come_value_315->type->mHeap,                    _if_conditional361) {
                        # 687 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_232,i_263), "20method.c", 687, 23)),come_value_315->type,come_value_315,info);
                    }
                    # 689 "20method.c"
                    list$1CVALUEph_replace(come_params_243,i_263,(struct CVALUE*)come_increment_ref_count(come_value_315));
                    # 690 "20method.c"
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 697 "20method.c"
                    # 693 "20method.c"
                    if(_if_conditional362=list$1CVALUEphp_operator_load_element(come_params_243,i_263)==((void*)0),                    _if_conditional362) {
                        # 694 "20method.c"
                        err_msg(info,"require parametor(%s) %d",fun_219->mName,i_263);
                        # 695 "20method.c"
                        __result215__ = (_Bool)0;
                        default_param_308 = come_decrement_ref_count2(default_param_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result215__;
                    }
                }
                default_param_308 = come_decrement_ref_count2(default_param_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 822 "20method.c"
        # 701 "20method.c"
        if(method_block_175) {
            # 702 "20method.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 702, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value301=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value300=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 702, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=_inf_value1)));
            come_call_finalizer2(sCurrentNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCurrentNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 708 "20method.c"
            # 704 "20method.c"
            if(_if_conditional368=!node_compile(current_stack_frame_node_317,info),            _if_conditional368) {
                # 705 "20method.c"
                __result218__ = (_Bool)0;
                if(current_stack_frame_node_317) { current_stack_frame_node_317 = come_decrement_ref_count2(current_stack_frame_node_317, ((struct sNode*)current_stack_frame_node_317)->finalize, ((struct sNode*)current_stack_frame_node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result218__;
            }
            # 708 "20method.c"
            come_value_318=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value305=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 709 "20method.c"
            list$1CVALUEph_push_back(come_params_243,(struct CVALUE*)come_increment_ref_count(come_value_318));
            # 710 "20method.c"
            dec_stack_ptr(1,info);
            # 712 "20method.c"
            method_block2_319=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value307=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value306=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 712, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 713 "20method.c"
            method_block_type_320=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_219->mParamTypes,-1), "20method.c", 713, 24))))));
            come_call_finalizer2(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 715 "20method.c"
            class_name_321=(char*)come_increment_ref_count(((char*)(right_value309=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 717 "20method.c"
            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_320->mParamTypes,0), "20method.c", 717, 25))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_321);
            # 718 "20method.c"
            current_stack_frame_struct_325=info->current_stack_frame_struct;
            # 719 "20method.c"
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_321);
            # 721 "20method.c"
            info->num_method_block++;
            # 728 "20method.c"
            # 723 "20method.c"
            if(_if_conditional373=string_operator_not_equals(method_block_type_320->mClass->mName,"lambda"),            _if_conditional373) {
                # 724 "20method.c"
                err_msg(info,"This function does not have method block(%s)",fun_name_172);
                # 725 "20method.c"
                __result223__ = (_Bool)0;
                if(current_stack_frame_node_317) { current_stack_frame_node_317 = come_decrement_ref_count2(current_stack_frame_node_317, ((struct sNode*)current_stack_frame_node_317)->finalize, ((struct sNode*)current_stack_frame_node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_318, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_321 = come_decrement_ref_count2(class_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result223__;
            }
            # 728 "20method.c"
            result_type_326=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(method_block_type_320->mResultType->v1))));
            come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 729 "20method.c"
            result_type_326->mStatic=(_Bool)0;
            # 730 "20method.c"
            param_types_327=method_block_type_320->mParamTypes;
            # 731 "20method.c"
            param_names_328=method_block_type_320->mParamNames;
            # 733 "20method.c"
            all_alhabet_sname_329=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value312=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value311=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 733, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 746 "20method.c"
            {
                # 735 "20method.c"
                p_330=info->sname;
                # 744 "20method.c"
                while(_while_condtional38=*p_330,                _while_condtional38) {
                    # 743 "20method.c"
                    # 737 "20method.c"
                    if(_if_conditional374=xisalnum(*p_330),                    _if_conditional374) {
                        # 738 "20method.c"
                        buffer_append_char(all_alhabet_sname_329,*p_330++);
                    }
                    else {
                        # 741 "20method.c"
                        p_330++;
                    }
                }
            }
            # 746 "20method.c"
            buffer_append_str(method_block2_319,((char*)(right_value315=xsprintf("%s method_block%d_%s(",((char*)(right_value313=make_type_name_string(result_type_326,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value314=buffer_to_string(all_alhabet_sname_329)))))));
            right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 748 "20method.c"
            i_331=0;
            # 773 "20method.c"
            for(            o2_saved_332=(param_types_327),it_333=list$1sTypeph_begin((o2_saved_332));            !list$1sTypeph_end((o2_saved_332));            it_333=list$1sTypeph_next((o2_saved_332))            ){
                # 750 "20method.c"
                param_type_334=it_333;
                # 767 "20method.c"
                # 751 "20method.c"
                if(_if_conditional375=i_331==0,                _if_conditional375) {
                    # 752 "20method.c"
                    param_name_335=(char*)come_increment_ref_count(((char*)(right_value316=xsprintf("parent"))));
                    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 754 "20method.c"
                    buffer_append_str(method_block2_319,((char*)(right_value318=xsprintf("%s",((char*)(right_value317=make_define_var(param_type_334,param_name_335,(_Bool)0,info)))))));
                    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_335 = come_decrement_ref_count2(param_name_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 767 "20method.c"
                    # 756 "20method.c"
                    if(_if_conditional376=i_331==1,                    _if_conditional376) {
                        # 757 "20method.c"
                        param_name_336=(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("it"))));
                        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 759 "20method.c"
                        buffer_append_str(method_block2_319,((char*)(right_value321=xsprintf("%s",((char*)(right_value320=make_define_var(param_type_334,param_name_336,(_Bool)0,info)))))));
                        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_336 = come_decrement_ref_count2(param_name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 762 "20method.c"
                        param_name_337=(char*)come_increment_ref_count(((char*)(right_value322=xsprintf("it%d",i_331))));
                        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 764 "20method.c"
                        buffer_append_str(method_block2_319,((char*)(right_value324=xsprintf("%s",((char*)(right_value323=make_define_var(param_type_334,param_name_337,(_Bool)0,info)))))));
                        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_337 = come_decrement_ref_count2(param_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                # 771 "20method.c"
                # 767 "20method.c"
                if(_if_conditional377=i_331!=list$1sTypeph_length(param_types_327)-1,                _if_conditional377) {
                    # 768 "20method.c"
                    buffer_append_str(method_block2_319,",");
                }
                # 771 "20method.c"
                i_331++;
            }
            # 773 "20method.c"
            buffer_append_str(method_block2_319,")\n");
            # 775 "20method.c"
            buffer_append_str(method_block2_319,((char*)(right_value325=buffer_to_string(method_block_175))));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 777 "20method.c"
            source3_338=(struct buffer*)come_increment_ref_count(info->source);
            # 778 "20method.c"
            p_339=info->p;
            # 779 "20method.c"
            head_340=info->head;
            # 780 "20method.c"
            sline_341=info->sline;
            # 783 "20method.c"
            __dec_obj92=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_319);
            come_call_finalizer2(buffer_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 784 "20method.c"
            info->p=info->source->buf;
            # 785 "20method.c"
            info->head=info->source->buf;
            # 786 "20method.c"
            info->sline=method_block_sline_176;
            # 789 "20method.c"
            node_342=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=parse_function(info))));
            if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 795 "20method.c"
            # 791 "20method.c"
            if(_if_conditional378=!node_compile(node_342,info),            _if_conditional378) {
                # 792 "20method.c"
                __result224__ = (_Bool)0;
                if(current_stack_frame_node_317) { current_stack_frame_node_317 = come_decrement_ref_count2(current_stack_frame_node_317, ((struct sNode*)current_stack_frame_node_317)->finalize, ((struct sNode*)current_stack_frame_node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_318, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_321 = come_decrement_ref_count2(class_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_326, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_342) { node_342 = come_decrement_ref_count2(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result224__;
            }
            # 795 "20method.c"
            method_block_name_343=(char*)come_increment_ref_count(((char*)(right_value328=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value327=buffer_to_string(all_alhabet_sname_329)))))));
            right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 797 "20method.c"
            come_value2_344=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 797, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 799 "20method.c"
            fun2_345=map$2charphsFunph_at(info->funcs,method_block_name_343,((void*)0));
            # 806 "20method.c"
            # 801 "20method.c"
            if(_if_conditional379=fun2_345==((void*)0),            _if_conditional379) {
                # 802 "20method.c"
                err_msg(info,"method block function not found(%s)",method_block_name_343);
                # 803 "20method.c"
                __result225__ = (_Bool)1;
                if(current_stack_frame_node_317) { current_stack_frame_node_317 = come_decrement_ref_count2(current_stack_frame_node_317, ((struct sNode*)current_stack_frame_node_317)->finalize, ((struct sNode*)current_stack_frame_node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_318, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_321 = come_decrement_ref_count2(class_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_326, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_342) { node_342 = come_decrement_ref_count2(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_343 = come_decrement_ref_count2(method_block_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value2_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result225__;
            }
            # 806 "20method.c"
            method_block_type2_346=fun2_345->mLambdaType;
            # 808 "20method.c"
            __dec_obj93=come_value2_344->c_value;
            come_value2_344->c_value=(char*)come_increment_ref_count(((char*)(right_value330=xsprintf("(void*)%s",method_block_name_343))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 809 "20method.c"
            __dec_obj94=come_value2_344->type;
            come_value2_344->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(method_block_type2_346))));
            come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 810 "20method.c"
            come_value2_344->var=((void*)0);
            # 812 "20method.c"
            list$1CVALUEph_push_back(come_params_243,(struct CVALUE*)come_increment_ref_count(come_value2_344));
            # 814 "20method.c"
            __dec_obj95=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_338);
            come_call_finalizer2(buffer_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 815 "20method.c"
            info->p=p_339;
            # 816 "20method.c"
            info->head=head_340;
            # 817 "20method.c"
            info->sline=sline_341;
            # 819 "20method.c"
            info->current_stack_frame_struct=current_stack_frame_struct_325;
            if(current_stack_frame_node_317) { current_stack_frame_node_317 = come_decrement_ref_count2(current_stack_frame_node_317, ((struct sNode*)current_stack_frame_node_317)->finalize, ((struct sNode*)current_stack_frame_node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_318, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,method_block2_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,method_block_type_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            class_name_321 = come_decrement_ref_count2(class_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_326, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,all_alhabet_sname_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source3_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node_342) { node_342 = come_decrement_ref_count2(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_343 = come_decrement_ref_count2(method_block_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value2_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 822 "20method.c"
        buf_347=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value332=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 822, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 824 "20method.c"
        buffer_append_str(buf_347,generics_fun_name_218);
        # 825 "20method.c"
        buffer_append_str(buf_347,"(");
        # 828 "20method.c"
        j_348=0;
        # 838 "20method.c"
        for(        o2_saved_349=(struct list$1CVALUEph*)come_increment_ref_count((come_params_243)),it_350=list$1CVALUEph_begin((o2_saved_349));        !list$1CVALUEph_end((o2_saved_349));        it_350=list$1CVALUEph_next((o2_saved_349))        ){
            # 830 "20method.c"
            buffer_append_str(buf_347,it_350->c_value);
            # 836 "20method.c"
            # 832 "20method.c"
            if(_if_conditional380=j_348!=list$1CVALUEph_length(come_params_243)-1,            _if_conditional380) {
                # 833 "20method.c"
                buffer_append_str(buf_347,",");
            }
            # 836 "20method.c"
            j_348++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_349, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 838 "20method.c"
        buffer_append_str(buf_347,")");
        # 841 "20method.c"
        come_value2_351=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value334=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 841, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 843 "20method.c"
        __dec_obj96=come_value2_351->c_value;
        come_value2_351->c_value=(char*)come_increment_ref_count(((char*)(right_value335=buffer_to_string(buf_347))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 844 "20method.c"
        __dec_obj97=come_value2_351->type;
        come_value2_351->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(result_type2_231))));
        come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 845 "20method.c"
        come_value2_351->type->mStatic=(_Bool)0;
        # 846 "20method.c"
        come_value2_351->var=((void*)0);
        # 852 "20method.c"
        # 848 "20method.c"
        if(result_type2_231->mHeap) {
            # 849 "20method.c"
            __dec_obj98=come_value2_351->c_value;
            come_value2_351->c_value=(char*)come_increment_ref_count(((char*)(right_value337=append_object_to_right_values(come_value2_351->c_value,(struct sType*)come_increment_ref_count(result_type2_231),info))));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 852 "20method.c"
        __dec_obj99=come_value2_351->c_value;
        come_value2_351->c_value=(char*)come_increment_ref_count(((char*)(right_value338=append_stackframe(come_value2_351->c_value,come_value2_351->type,info))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 854 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_351->c_value);
        # 856 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_351));
        # 924 "20method.c"
        # 858 "20method.c"
        if(method_block_175) {
            # 859 "20method.c"
            var_name_352=(char*)come_increment_ref_count(((char*)(right_value339=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 861 "20method.c"
            result_type_353=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 863 "20method.c"
            result_type2_354=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=solve_generics(result_type_353,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 865 "20method.c"
            result_type3_355=result_type2_354->mNoSolvedGenericsType->v1;
            # 873 "20method.c"
            # 866 "20method.c"
            if(result_type2_354->mNoSolvedGenericsType->v1) {
                # 867 "20method.c"
                result_type3_355=result_type2_354->mNoSolvedGenericsType->v1;
            }
            else {
                # 870 "20method.c"
                result_type3_355=result_type2_354;
            }
            # 923 "20method.c"
            # 873 "20method.c"
            if(info->in_loop) {
                # 906 "20method.c"
                # 874 "20method.c"
                if(_if_conditional385=string_operator_equals(result_type3_355->mClass->mName,"void")&&result_type3_355->mPointerNum==0,                _if_conditional385) {
                    # 888 "20method.c"
                    add_come_last_code3(info,((char*)(right_value345=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value342=string_to_string(var_name_352))),((char*)(right_value343=string_to_string(var_name_352))),((char*)(right_value344=string_to_string(var_name_352)))))));
                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 904 "20method.c"
                    add_come_last_code3(info,((char*)(right_value352=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value346=string_to_string(var_name_352))),((char*)(right_value347=string_to_string(var_name_352))),((char*)(right_value348=string_to_string(var_name_352))),((char*)(right_value350=string_to_string(((char*)(right_value349=make_type_name_string(result_type2_354,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value351=string_to_string(var_name_352)))))));
                    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 923 "20method.c"
                # 907 "20method.c"
                if(_if_conditional386=string_operator_equals(result_type3_355->mClass->mName,"void")&&result_type3_355->mPointerNum==0,                _if_conditional386) {
                    # 913 "20method.c"
                    add_come_last_code3(info,((char*)(right_value354=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value353=string_to_string(var_name_352)))))));
                    right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 921 "20method.c"
                    add_come_last_code3(info,((char*)(right_value359=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value355=string_to_string(var_name_352))),((char*)(right_value357=string_to_string(((char*)(right_value356=make_type_name_string(result_type2_354,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value358=string_to_string(var_name_352)))))));
                    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            var_name_352 = come_decrement_ref_count2(var_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_353, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_354, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_347, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_351, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 926 "20method.c"
    come_call_finalizer2(list$1sTypephp_finalize,info->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 927 "20method.c"
    __dec_obj100=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_177);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 929 "20method.c"
    __result226__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result226__;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional241;
struct tuple2$2charphsTypeph* result_184;
struct tuple2$2charphsTypeph* __result138__;
_Bool _if_conditional242;
struct tuple2$2charphsTypeph* __result139__;
struct tuple2$2charphsTypeph* result_185;
struct tuple2$2charphsTypeph* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_184, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_185, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 290 "./neo-c.h"
        # 285 "./neo-c.h"
        if(_if_conditional241=self==((void*)0),        _if_conditional241) {
            # 286 "./neo-c.h"
            # 287 "./neo-c.h"
            memset(&result_184,0,sizeof(struct tuple2$2charphsTypeph*));
            # 288 "./neo-c.h"
            __result138__ = __result_obj__ = result_184;
            return __result138__;
        }
        # 290 "./neo-c.h"
        self->it=self->head;
        # 296 "./neo-c.h"
        # 292 "./neo-c.h"
        if(self->it) {
            # 293 "./neo-c.h"
            __result139__ = __result_obj__ = self->it->item;
            return __result139__;
        }
        # 296 "./neo-c.h"
        # 297 "./neo-c.h"
        memset(&result_185,0,sizeof(struct tuple2$2charphsTypeph*));
        # 298 "./neo-c.h"
        __result140__ = __result_obj__ = result_185;
        return __result140__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./neo-c.h"
        __result141__ = self==((void*)0)||self->it==((void*)0);
        return __result141__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional243;
struct tuple2$2charphsTypeph* result_187;
struct tuple2$2charphsTypeph* __result142__;
_Bool _if_conditional244;
struct tuple2$2charphsTypeph* __result143__;
struct tuple2$2charphsTypeph* result_188;
struct tuple2$2charphsTypeph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_187, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_188, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 308 "./neo-c.h"
        # 302 "./neo-c.h"
        if(_if_conditional243=self==((void*)0)||self->it==((void*)0),        _if_conditional243) {
            # 303 "./neo-c.h"
            # 304 "./neo-c.h"
            memset(&result_187,0,sizeof(struct tuple2$2charphsTypeph*));
            # 305 "./neo-c.h"
            __result142__ = __result_obj__ = result_187;
            return __result142__;
        }
        # 308 "./neo-c.h"
        self->it=self->it->next;
        # 314 "./neo-c.h"
        # 310 "./neo-c.h"
        if(self->it) {
            # 311 "./neo-c.h"
            __result143__ = __result_obj__ = self->it->item;
            return __result143__;
        }
        # 314 "./neo-c.h"
        # 315 "./neo-c.h"
        memset(&result_188,0,sizeof(struct tuple2$2charphsTypeph*));
        # 316 "./neo-c.h"
        __result144__ = __result_obj__ = result_188;
        return __result144__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./neo-c.h"
            self->head=((void*)0);
            # 105 "./neo-c.h"
            self->tail=((void*)0);
            # 106 "./neo-c.h"
            self->len=0;
            # 108 "./neo-c.h"
            __result145__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result145__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_192;
_Bool _while_condtional28;
struct list_item$1CVALUEph* prev_it_193;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_192, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_193, 0, sizeof(struct list_item$1CVALUEph*));
                # 123 "./neo-c.h"
                it_192=self->head;
                # 129 "./neo-c.h"
                while(_while_condtional28=it_192!=((void*)0),                _while_condtional28) {
                    # 125 "./neo-c.h"
                    prev_it_193=it_192;
                    # 126 "./neo-c.h"
                    it_192=it_192->next;
                    # 127 "./neo-c.h"
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional247;
struct tuple2$2charphsNodeph* result_197;
struct tuple2$2charphsNodeph* __result146__;
_Bool _if_conditional248;
struct tuple2$2charphsNodeph* __result147__;
struct tuple2$2charphsNodeph* result_198;
struct tuple2$2charphsNodeph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_197, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_198, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional247=self==((void*)0),            _if_conditional247) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_197,0,sizeof(struct tuple2$2charphsNodeph*));
                # 288 "./neo-c.h"
                __result146__ = __result_obj__ = result_197;
                return __result146__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result147__ = __result_obj__ = self->it->item;
                return __result147__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_198,0,sizeof(struct tuple2$2charphsNodeph*));
            # 298 "./neo-c.h"
            __result148__ = __result_obj__ = result_198;
            return __result148__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result149__ = self==((void*)0)||self->it==((void*)0);
            return __result149__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional249;
struct tuple2$2charphsNodeph* result_200;
struct tuple2$2charphsNodeph* __result150__;
_Bool _if_conditional250;
struct tuple2$2charphsNodeph* __result151__;
struct tuple2$2charphsNodeph* result_201;
struct tuple2$2charphsNodeph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_200, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_201, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional249=self==((void*)0)||self->it==((void*)0),            _if_conditional249) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_200,0,sizeof(struct tuple2$2charphsNodeph*));
                # 305 "./neo-c.h"
                __result150__ = __result_obj__ = result_200;
                return __result150__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result151__ = __result_obj__ = self->it->item;
                return __result151__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_201,0,sizeof(struct tuple2$2charphsNodeph*));
            # 316 "./neo-c.h"
            __result152__ = __result_obj__ = result_201;
            return __result152__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional253;
struct list_item$1sTypeph* it_205;
int i_206;
_Bool _while_condtional29;
_Bool _if_conditional254;
struct sType* __result154__;
struct sType* default_value_207;
struct sType* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_205, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_206, 0, sizeof(int));
memset(&default_value_207, 0, sizeof(struct sType*));
                    # 686 "./neo-c.h"
                    # 682 "./neo-c.h"
                    if(_if_conditional253=position<0,                    _if_conditional253) {
                        # 683 "./neo-c.h"
                        position+=self->len;
                    }
                    # 686 "./neo-c.h"
                    it_205=self->head;
                    # 687 "./neo-c.h"
                    i_206=0;
                    # 694 "./neo-c.h"
                    while(_while_condtional29=it_205!=((void*)0),                    _while_condtional29) {
                        # 692 "./neo-c.h"
                        # 689 "./neo-c.h"
                        if(_if_conditional254=position==i_206,                        _if_conditional254) {
                            # 690 "./neo-c.h"
                            __result154__ = __result_obj__ = it_205->item;
                            return __result154__;
                        }
                        # 692 "./neo-c.h"
                        it_205=it_205->next;
                        # 693 "./neo-c.h"
                        i_206++;
                    }
                    # 696 "./neo-c.h"
                    # 697 "./neo-c.h"
                    memset(&default_value_207,0,sizeof(struct sType*));
                    # 698 "./neo-c.h"
                    __result155__ = __result_obj__ = default_value_207;
                    come_call_finalizer2(sType_finalize,default_value_207, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result155__;
                    come_call_finalizer2(sType_finalize,default_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional256;
struct CVALUE* result_211;
struct CVALUE* __result156__;
_Bool _if_conditional257;
struct CVALUE* __result157__;
struct CVALUE* result_212;
struct CVALUE* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_211, 0, sizeof(struct CVALUE*));
memset(&result_212, 0, sizeof(struct CVALUE*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional256=self==((void*)0),            _if_conditional256) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_211,0,sizeof(struct CVALUE*));
                # 288 "./neo-c.h"
                __result156__ = __result_obj__ = result_211;
                return __result156__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result157__ = __result_obj__ = self->it->item;
                return __result157__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_212,0,sizeof(struct CVALUE*));
            # 298 "./neo-c.h"
            __result158__ = __result_obj__ = result_212;
            return __result158__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result159__ = self==((void*)0)||self->it==((void*)0);
            return __result159__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional258;
struct CVALUE* result_214;
struct CVALUE* __result160__;
_Bool _if_conditional259;
struct CVALUE* __result161__;
struct CVALUE* result_215;
struct CVALUE* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_214, 0, sizeof(struct CVALUE*));
memset(&result_215, 0, sizeof(struct CVALUE*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional258=self==((void*)0)||self->it==((void*)0),            _if_conditional258) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_214,0,sizeof(struct CVALUE*));
                # 305 "./neo-c.h"
                __result160__ = __result_obj__ = result_214;
                return __result160__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result161__ = __result_obj__ = self->it->item;
                return __result161__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_215,0,sizeof(struct CVALUE*));
            # 316 "./neo-c.h"
            __result162__ = __result_obj__ = result_215;
            return __result162__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional261;
int __result163__;
int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./neo-c.h"
                # 364 "./neo-c.h"
                if(_if_conditional261=self==((void*)0),                _if_conditional261) {
                    # 365 "./neo-c.h"
                    __result163__ = 0;
                    return __result163__;
                }
                # 367 "./neo-c.h"
                __result164__ = self->len;
                return __result164__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_222;
unsigned int hash_223;
unsigned int it_224;
_Bool _while_condtional30;
_Bool _if_conditional264;
_Bool _if_conditional265;
struct sFun* __result165__;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sFun* __result166__;
struct sFun* __result167__;
struct sFun* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_222, 0, sizeof(struct sFun*));
memset(&hash_223, 0, sizeof(unsigned int));
memset(&it_224, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_222,0,sizeof(struct sFun*));
                # 1547 "./neo-c.h"
                hash_223=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_224=hash_223;
                # 1572 "./neo-c.h"
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional264=self->item_existance[it_224],                    _if_conditional264) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional265=string_equals(self->keys[it_224],key),                        _if_conditional265) {
                            # 1555 "./neo-c.h"
                            __result165__ = __result_obj__ = self->items[it_224];
                            come_call_finalizer2(sFun_finalize,default_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result165__;
                        }
                        # 1558 "./neo-c.h"
                        it_224++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional281=it_224>=self->size,                        _if_conditional281) {
                            # 1561 "./neo-c.h"
                            it_224=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional282=it_224==hash_223,                            _if_conditional282) {
                                # 1564 "./neo-c.h"
                                __result166__ = __result_obj__ = default_value_222;
                                come_call_finalizer2(sFun_finalize,default_value_222, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result166__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result167__ = __result_obj__ = default_value_222;
                        come_call_finalizer2(sFun_finalize,default_value_222, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result167__;
                    }
                }
                # 1572 "./neo-c.h"
                __result168__ = __result_obj__ = default_value_222;
                come_call_finalizer2(sFun_finalize,default_value_222, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result168__;
                come_call_finalizer2(sFun_finalize,default_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional266=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional266) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional267=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional267) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional268=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional268) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional269=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional269) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional270=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional270) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional271=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional271) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional272=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional272) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional275=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional275) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional276=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional276) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional277=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional277) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional278=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional278) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional279=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional279) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional280=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional280) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional273;
_Bool _if_conditional274;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional273=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional273) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional274=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional274) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_227;
unsigned int it_228;
_Bool _while_condtional31;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct sFun* __result169__;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct sFun* __result170__;
struct sFun* __result171__;
struct sFun* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_227, 0, sizeof(unsigned int));
memset(&it_228, 0, sizeof(unsigned int));
                    # 1226 "./neo-c.h"
                    hash_227=string_get_hash_key(((char*)key))%self->size;
                    # 1227 "./neo-c.h"
                    it_228=hash_227;
                    # 1251 "./neo-c.h"
                    while(_while_condtional31=(_Bool)1,                    _while_condtional31) {
                        # 1249 "./neo-c.h"
                        # 1230 "./neo-c.h"
                        if(_if_conditional286=self->item_existance[it_228],                        _if_conditional286) {
                            # 1237 "./neo-c.h"
                            # 1232 "./neo-c.h"
                            if(_if_conditional287=string_equals(self->keys[it_228],key),                            _if_conditional287) {
                                # 1234 "./neo-c.h"
                                __result169__ = __result_obj__ = self->items[it_228];
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result169__;
                            }
                            # 1237 "./neo-c.h"
                            it_228++;
                            # 1245 "./neo-c.h"
                            # 1239 "./neo-c.h"
                            if(_if_conditional288=it_228>=self->size,                            _if_conditional288) {
                                # 1240 "./neo-c.h"
                                it_228=0;
                            }
                            else {
                                # 1245 "./neo-c.h"
                                # 1242 "./neo-c.h"
                                if(_if_conditional289=it_228==hash_227,                                _if_conditional289) {
                                    # 1243 "./neo-c.h"
                                    __result170__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result170__;
                                }
                            }
                        }
                        else {
                            # 1247 "./neo-c.h"
                            __result171__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result171__;
                        }
                    }
                    # 1251 "./neo-c.h"
                    __result172__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result172__;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional298;
int __result176__;
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional298=self==((void*)0),            _if_conditional298) {
                # 365 "./neo-c.h"
                __result176__ = 0;
                return __result176__;
            }
            # 367 "./neo-c.h"
            __result177__ = self->len;
            return __result177__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional300;
struct sType* result_234;
struct sType* __result179__;
_Bool _if_conditional301;
struct sType* __result180__;
struct sType* result_235;
struct sType* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_234, 0, sizeof(struct sType*));
memset(&result_235, 0, sizeof(struct sType*));
            # 290 "./neo-c.h"
            # 285 "./neo-c.h"
            if(_if_conditional300=self==((void*)0),            _if_conditional300) {
                # 286 "./neo-c.h"
                # 287 "./neo-c.h"
                memset(&result_234,0,sizeof(struct sType*));
                # 288 "./neo-c.h"
                __result179__ = __result_obj__ = result_234;
                return __result179__;
            }
            # 290 "./neo-c.h"
            self->it=self->head;
            # 296 "./neo-c.h"
            # 292 "./neo-c.h"
            if(self->it) {
                # 293 "./neo-c.h"
                __result180__ = __result_obj__ = self->it->item;
                return __result180__;
            }
            # 296 "./neo-c.h"
            # 297 "./neo-c.h"
            memset(&result_235,0,sizeof(struct sType*));
            # 298 "./neo-c.h"
            __result181__ = __result_obj__ = result_235;
            return __result181__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./neo-c.h"
            __result182__ = self==((void*)0)||self->it==((void*)0);
            return __result182__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional302;
struct sType* result_237;
struct sType* __result183__;
_Bool _if_conditional303;
struct sType* __result184__;
struct sType* result_238;
struct sType* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_237, 0, sizeof(struct sType*));
memset(&result_238, 0, sizeof(struct sType*));
            # 308 "./neo-c.h"
            # 302 "./neo-c.h"
            if(_if_conditional302=self==((void*)0)||self->it==((void*)0),            _if_conditional302) {
                # 303 "./neo-c.h"
                # 304 "./neo-c.h"
                memset(&result_237,0,sizeof(struct sType*));
                # 305 "./neo-c.h"
                __result183__ = __result_obj__ = result_237;
                return __result183__;
            }
            # 308 "./neo-c.h"
            self->it=self->it->next;
            # 314 "./neo-c.h"
            # 310 "./neo-c.h"
            if(self->it) {
                # 311 "./neo-c.h"
                __result184__ = __result_obj__ = self->it->item;
                return __result184__;
            }
            # 314 "./neo-c.h"
            # 315 "./neo-c.h"
            memset(&result_238,0,sizeof(struct sType*));
            # 316 "./neo-c.h"
            __result185__ = __result_obj__ = result_238;
            return __result185__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional305;
void* right_value224;
struct list_item$1sTypeph* litem_239;
struct sType* __dec_obj70;
_Bool _if_conditional306;
void* right_value225;
struct list_item$1sTypeph* litem_240;
struct sType* __dec_obj71;
void* right_value226;
struct list_item$1sTypeph* litem_241;
struct sType* __dec_obj72;
struct list$1sTypeph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
memset(&litem_239, 0, sizeof(struct list_item$1sTypeph*));
right_value225 = (void*)0;
memset(&litem_240, 0, sizeof(struct list_item$1sTypeph*));
right_value226 = (void*)0;
memset(&litem_241, 0, sizeof(struct list_item$1sTypeph*));
                    # 256 "./neo-c.h"
                    # 225 "./neo-c.h"
                    if(_if_conditional305=self->len==0,                    _if_conditional305) {
                        # 226 "./neo-c.h"
                        litem_239=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value224=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 228 "./neo-c.h"
                        litem_239->prev=((void*)0);
                        # 229 "./neo-c.h"
                        litem_239->next=((void*)0);
                        # 230 "./neo-c.h"
                        __dec_obj70=litem_239->item;
                        litem_239->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 232 "./neo-c.h"
                        self->tail=litem_239;
                        # 233 "./neo-c.h"
                        self->head=litem_239;
                    }
                    else {
                        # 256 "./neo-c.h"
                        # 235 "./neo-c.h"
                        if(_if_conditional306=self->len==1,                        _if_conditional306) {
                            # 236 "./neo-c.h"
                            litem_240=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value225=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 238 "./neo-c.h"
                            litem_240->prev=self->head;
                            # 239 "./neo-c.h"
                            litem_240->next=((void*)0);
                            # 240 "./neo-c.h"
                            __dec_obj71=litem_240->item;
                            litem_240->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 242 "./neo-c.h"
                            self->tail=litem_240;
                            # 243 "./neo-c.h"
                            self->head->next=litem_240;
                        }
                        else {
                            # 246 "./neo-c.h"
                            litem_241=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value226=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 248 "./neo-c.h"
                            litem_241->prev=self->tail;
                            # 249 "./neo-c.h"
                            litem_241->next=((void*)0);
                            # 250 "./neo-c.h"
                            __dec_obj72=litem_241->item;
                            litem_241->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 252 "./neo-c.h"
                            self->tail->next=litem_241;
                            # 253 "./neo-c.h"
                            self->tail=litem_241;
                        }
                    }
                    # 256 "./neo-c.h"
                    self->len++;
                    # 258 "./neo-c.h"
                    __result186__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result186__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional307;
void* right_value231;
struct list_item$1CVALUEph* litem_245;
struct CVALUE* __dec_obj73;
_Bool _if_conditional308;
void* right_value232;
struct list_item$1CVALUEph* litem_246;
struct CVALUE* __dec_obj74;
void* right_value233;
struct list_item$1CVALUEph* litem_247;
struct CVALUE* __dec_obj75;
struct list$1CVALUEph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
memset(&litem_245, 0, sizeof(struct list_item$1CVALUEph*));
right_value232 = (void*)0;
memset(&litem_246, 0, sizeof(struct list_item$1CVALUEph*));
right_value233 = (void*)0;
memset(&litem_247, 0, sizeof(struct list_item$1CVALUEph*));
                # 186 "./neo-c.h"
                # 155 "./neo-c.h"
                if(_if_conditional307=self->len==0,                _if_conditional307) {
                    # 156 "./neo-c.h"
                    litem_245=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value231=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 156, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 158 "./neo-c.h"
                    litem_245->prev=((void*)0);
                    # 159 "./neo-c.h"
                    litem_245->next=((void*)0);
                    # 160 "./neo-c.h"
                    __dec_obj73=litem_245->item;
                    litem_245->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 162 "./neo-c.h"
                    self->tail=litem_245;
                    # 163 "./neo-c.h"
                    self->head=litem_245;
                }
                else {
                    # 186 "./neo-c.h"
                    # 165 "./neo-c.h"
                    if(_if_conditional308=self->len==1,                    _if_conditional308) {
                        # 166 "./neo-c.h"
                        litem_246=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 166, "list_item$1CVALUEph"))));
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 168 "./neo-c.h"
                        litem_246->prev=self->head;
                        # 169 "./neo-c.h"
                        litem_246->next=((void*)0);
                        # 170 "./neo-c.h"
                        __dec_obj74=litem_246->item;
                        litem_246->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer2(CVALUE_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 172 "./neo-c.h"
                        self->tail=litem_246;
                        # 173 "./neo-c.h"
                        self->head->next=litem_246;
                    }
                    else {
                        # 176 "./neo-c.h"
                        litem_247=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value233=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 176, "list_item$1CVALUEph"))));
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 178 "./neo-c.h"
                        litem_247->prev=self->tail;
                        # 179 "./neo-c.h"
                        litem_247->next=((void*)0);
                        # 180 "./neo-c.h"
                        __dec_obj75=litem_247->item;
                        litem_247->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer2(CVALUE_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 182 "./neo-c.h"
                        self->tail->next=litem_247;
                        # 183 "./neo-c.h"
                        self->tail=litem_247;
                    }
                }
                # 186 "./neo-c.h"
                self->len++;
                # 188 "./neo-c.h"
                __result187__ = __result_obj__ = self;
                come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result187__;
                come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional312;
char* result_256;
char* __result189__;
_Bool _if_conditional313;
char* __result190__;
char* result_257;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_256, 0, sizeof(char*));
memset(&result_257, 0, sizeof(char*));
                        # 290 "./neo-c.h"
                        # 285 "./neo-c.h"
                        if(_if_conditional312=self==((void*)0),                        _if_conditional312) {
                            # 286 "./neo-c.h"
                            # 287 "./neo-c.h"
                            memset(&result_256,0,sizeof(char*));
                            # 288 "./neo-c.h"
                            __result189__ = __result_obj__ = result_256;
                            return __result189__;
                        }
                        # 290 "./neo-c.h"
                        self->it=self->head;
                        # 296 "./neo-c.h"
                        # 292 "./neo-c.h"
                        if(self->it) {
                            # 293 "./neo-c.h"
                            __result190__ = __result_obj__ = self->it->item;
                            return __result190__;
                        }
                        # 296 "./neo-c.h"
                        # 297 "./neo-c.h"
                        memset(&result_257,0,sizeof(char*));
                        # 298 "./neo-c.h"
                        __result191__ = __result_obj__ = result_257;
                        return __result191__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./neo-c.h"
                        __result192__ = self==((void*)0)||self->it==((void*)0);
                        return __result192__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional314;
char* result_259;
char* __result193__;
_Bool _if_conditional315;
char* __result194__;
char* result_260;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_259, 0, sizeof(char*));
memset(&result_260, 0, sizeof(char*));
                        # 308 "./neo-c.h"
                        # 302 "./neo-c.h"
                        if(_if_conditional314=self==((void*)0)||self->it==((void*)0),                        _if_conditional314) {
                            # 303 "./neo-c.h"
                            # 304 "./neo-c.h"
                            memset(&result_259,0,sizeof(char*));
                            # 305 "./neo-c.h"
                            __result193__ = __result_obj__ = result_259;
                            return __result193__;
                        }
                        # 308 "./neo-c.h"
                        self->it=self->it->next;
                        # 314 "./neo-c.h"
                        # 310 "./neo-c.h"
                        if(self->it) {
                            # 311 "./neo-c.h"
                            __result194__ = __result_obj__ = self->it->item;
                            return __result194__;
                        }
                        # 314 "./neo-c.h"
                        # 315 "./neo-c.h"
                        memset(&result_260,0,sizeof(char*));
                        # 316 "./neo-c.h"
                        __result195__ = __result_obj__ = result_260;
                        return __result195__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional319;
_Bool _if_conditional320;
struct list$1CVALUEph* __result196__;
struct list_item$1CVALUEph* it_261;
int i_262;
_Bool _while_condtional32;
_Bool _if_conditional321;
struct CVALUE* __dec_obj76;
struct list$1CVALUEph* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_261, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_262, 0, sizeof(int));
                        # 592 "./neo-c.h"
                        # 588 "./neo-c.h"
                        if(_if_conditional319=position<0,                        _if_conditional319) {
                            # 589 "./neo-c.h"
                            position+=self->len;
                        }
                        # 597 "./neo-c.h"
                        # 592 "./neo-c.h"
                        if(_if_conditional320=position>=self->len,                        _if_conditional320) {
                            # 593 "./neo-c.h"
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            # 594 "./neo-c.h"
                            __result196__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result196__;
                        }
                        # 597 "./neo-c.h"
                        it_261=self->head;
                        # 598 "./neo-c.h"
                        i_262=0;
                        # 608 "./neo-c.h"
                        while(_while_condtional32=it_261!=((void*)0),                        _while_condtional32) {
                            # 604 "./neo-c.h"
                            # 600 "./neo-c.h"
                            if(_if_conditional321=position==i_262,                            _if_conditional321) {
                                # 601 "./neo-c.h"
                                __dec_obj76=it_261->item;
                                it_261->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 602 "./neo-c.h"
                                break;
                            }
                            # 604 "./neo-c.h"
                            it_261=it_261->next;
                            # 605 "./neo-c.h"
                            i_262++;
                        }
                        # 608 "./neo-c.h"
                        __result197__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result197__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional325;
struct list_item$1charph* it_268;
int i_269;
_Bool _while_condtional33;
_Bool _if_conditional326;
char* __result198__;
char* default_value_270;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_268, 0, sizeof(struct list_item$1charph*));
memset(&i_269, 0, sizeof(int));
memset(&default_value_270, 0, sizeof(char*));
                            # 686 "./neo-c.h"
                            # 682 "./neo-c.h"
                            if(_if_conditional325=position<0,                            _if_conditional325) {
                                # 683 "./neo-c.h"
                                position+=self->len;
                            }
                            # 686 "./neo-c.h"
                            it_268=self->head;
                            # 687 "./neo-c.h"
                            i_269=0;
                            # 694 "./neo-c.h"
                            while(_while_condtional33=it_268!=((void*)0),                            _while_condtional33) {
                                # 692 "./neo-c.h"
                                # 689 "./neo-c.h"
                                if(_if_conditional326=position==i_269,                                _if_conditional326) {
                                    # 690 "./neo-c.h"
                                    __result198__ = __result_obj__ = it_268->item;
                                    return __result198__;
                                }
                                # 692 "./neo-c.h"
                                it_268=it_268->next;
                                # 693 "./neo-c.h"
                                i_269++;
                            }
                            # 696 "./neo-c.h"
                            # 697 "./neo-c.h"
                            memset(&default_value_270,0,sizeof(char*));
                            # 698 "./neo-c.h"
                            __result199__ = __result_obj__ = default_value_270;
                            default_value_270 = come_decrement_ref_count2(default_value_270, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result199__;
                            default_value_270 = come_decrement_ref_count2(default_value_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional329;
struct list_item$1CVALUEph* it_272;
int i_273;
_Bool _while_condtional35;
_Bool _if_conditional330;
struct CVALUE* __result201__;
struct CVALUE* default_value_274;
struct CVALUE* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_272, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_273, 0, sizeof(int));
memset(&default_value_274, 0, sizeof(struct CVALUE*));
                            # 686 "./neo-c.h"
                            # 682 "./neo-c.h"
                            if(_if_conditional329=position<0,                            _if_conditional329) {
                                # 683 "./neo-c.h"
                                position+=self->len;
                            }
                            # 686 "./neo-c.h"
                            it_272=self->head;
                            # 687 "./neo-c.h"
                            i_273=0;
                            # 694 "./neo-c.h"
                            while(_while_condtional35=it_272!=((void*)0),                            _while_condtional35) {
                                # 692 "./neo-c.h"
                                # 689 "./neo-c.h"
                                if(_if_conditional330=position==i_273,                                _if_conditional330) {
                                    # 690 "./neo-c.h"
                                    __result201__ = __result_obj__ = it_272->item;
                                    return __result201__;
                                }
                                # 692 "./neo-c.h"
                                it_272=it_272->next;
                                # 693 "./neo-c.h"
                                i_273++;
                            }
                            # 696 "./neo-c.h"
                            # 697 "./neo-c.h"
                            memset(&default_value_274,0,sizeof(struct CVALUE*));
                            # 698 "./neo-c.h"
                            __result202__ = __result_obj__ = default_value_274;
                            come_call_finalizer2(CVALUE_finalize,default_value_274, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result202__;
                            come_call_finalizer2(CVALUE_finalize,default_value_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional338;
struct sNode* result_280;
struct sNode* __result203__;
_Bool _if_conditional339;
struct sNode* __result204__;
struct sNode* result_281;
struct sNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_280, 0, sizeof(struct sNode*));
memset(&result_281, 0, sizeof(struct sNode*));
                        # 290 "./neo-c.h"
                        # 285 "./neo-c.h"
                        if(_if_conditional338=self==((void*)0),                        _if_conditional338) {
                            # 286 "./neo-c.h"
                            # 287 "./neo-c.h"
                            memset(&result_280,0,sizeof(struct sNode*));
                            # 288 "./neo-c.h"
                            __result203__ = __result_obj__ = result_280;
                            return __result203__;
                        }
                        # 290 "./neo-c.h"
                        self->it=self->head;
                        # 296 "./neo-c.h"
                        # 292 "./neo-c.h"
                        if(self->it) {
                            # 293 "./neo-c.h"
                            __result204__ = __result_obj__ = self->it->item;
                            return __result204__;
                        }
                        # 296 "./neo-c.h"
                        # 297 "./neo-c.h"
                        memset(&result_281,0,sizeof(struct sNode*));
                        # 298 "./neo-c.h"
                        __result205__ = __result_obj__ = result_281;
                        return __result205__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./neo-c.h"
                        __result206__ = self==((void*)0)||self->it==((void*)0);
                        return __result206__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional340;
struct sNode* result_283;
struct sNode* __result207__;
_Bool _if_conditional341;
struct sNode* __result208__;
struct sNode* result_284;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_283, 0, sizeof(struct sNode*));
memset(&result_284, 0, sizeof(struct sNode*));
                        # 308 "./neo-c.h"
                        # 302 "./neo-c.h"
                        if(_if_conditional340=self==((void*)0)||self->it==((void*)0),                        _if_conditional340) {
                            # 303 "./neo-c.h"
                            # 304 "./neo-c.h"
                            memset(&result_283,0,sizeof(struct sNode*));
                            # 305 "./neo-c.h"
                            __result207__ = __result_obj__ = result_283;
                            return __result207__;
                        }
                        # 308 "./neo-c.h"
                        self->it=self->it->next;
                        # 314 "./neo-c.h"
                        # 310 "./neo-c.h"
                        if(self->it) {
                            # 311 "./neo-c.h"
                            __result208__ = __result_obj__ = self->it->item;
                            return __result208__;
                        }
                        # 314 "./neo-c.h"
                        # 315 "./neo-c.h"
                        memset(&result_284,0,sizeof(struct sNode*));
                        # 316 "./neo-c.h"
                        __result209__ = __result_obj__ = result_284;
                        return __result209__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional344;
void* right_value254;
struct list_item$1tuple2$2charphsNodephph* litem_287;
struct tuple2$2charphsNodeph* __dec_obj79;
_Bool _if_conditional345;
void* right_value255;
struct list_item$1tuple2$2charphsNodephph* litem_288;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value256;
struct list_item$1tuple2$2charphsNodephph* litem_289;
struct tuple2$2charphsNodeph* __dec_obj81;
struct list$1tuple2$2charphsNodephph* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
memset(&litem_287, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value255 = (void*)0;
memset(&litem_288, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value256 = (void*)0;
memset(&litem_289, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                        # 256 "./neo-c.h"
                        # 225 "./neo-c.h"
                        if(_if_conditional344=self->len==0,                        _if_conditional344) {
                            # 226 "./neo-c.h"
                            litem_287=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value254=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 228 "./neo-c.h"
                            litem_287->prev=((void*)0);
                            # 229 "./neo-c.h"
                            litem_287->next=((void*)0);
                            # 230 "./neo-c.h"
                            __dec_obj79=litem_287->item;
                            litem_287->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 232 "./neo-c.h"
                            self->tail=litem_287;
                            # 233 "./neo-c.h"
                            self->head=litem_287;
                        }
                        else {
                            # 256 "./neo-c.h"
                            # 235 "./neo-c.h"
                            if(_if_conditional345=self->len==1,                            _if_conditional345) {
                                # 236 "./neo-c.h"
                                litem_288=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value255=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 238 "./neo-c.h"
                                litem_288->prev=self->head;
                                # 239 "./neo-c.h"
                                litem_288->next=((void*)0);
                                # 240 "./neo-c.h"
                                __dec_obj80=litem_288->item;
                                litem_288->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 242 "./neo-c.h"
                                self->tail=litem_288;
                                # 243 "./neo-c.h"
                                self->head->next=litem_288;
                            }
                            else {
                                # 246 "./neo-c.h"
                                litem_289=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value256=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 248 "./neo-c.h"
                                litem_289->prev=self->tail;
                                # 249 "./neo-c.h"
                                litem_289->next=((void*)0);
                                # 250 "./neo-c.h"
                                __dec_obj81=litem_289->item;
                                litem_289->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 252 "./neo-c.h"
                                self->tail->next=litem_289;
                                # 253 "./neo-c.h"
                                self->tail=litem_289;
                            }
                        }
                        # 256 "./neo-c.h"
                        self->len++;
                        # 258 "./neo-c.h"
                        __result210__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result210__;
                        come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj82;
struct tuple2$2charphvoidp* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1767 "./neo-c.h"
                        __dec_obj82=self->v1;
                        self->v1=(char*)come_increment_ref_count(v1);
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 1768 "./neo-c.h"
                        self->v2=v2;
                        # 1770 "./neo-c.h"
                        __result211__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result211__;
                        come_call_finalizer2(tuple2$2charphvoidpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphvoidpp_finalize"
                            # 0 "tuple2$2charphvoidpp_finalize"
                            if(_if_conditional346=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional346) {
                                # 0 "tuple2$2charphvoidpp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional356;
int __result212__;
int __result213__;
memset(&__result_obj__, 0, sizeof(void*));
            # 367 "./neo-c.h"
            # 364 "./neo-c.h"
            if(_if_conditional356=self==((void*)0),            _if_conditional356) {
                # 365 "./neo-c.h"
                __result212__ = 0;
                return __result212__;
            }
            # 367 "./neo-c.h"
            __result213__ = self->len;
            return __result213__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_322;
unsigned int hash_323;
unsigned int it_324;
_Bool _while_condtional37;
_Bool _if_conditional369;
_Bool _if_conditional370;
struct sClass* __result219__;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct sClass* __result220__;
struct sClass* __result221__;
struct sClass* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_322, 0, sizeof(struct sClass*));
memset(&hash_323, 0, sizeof(unsigned int));
memset(&it_324, 0, sizeof(unsigned int));
                # 1544 "./neo-c.h"
                # 1545 "./neo-c.h"
                memset(&default_value_322,0,sizeof(struct sClass*));
                # 1547 "./neo-c.h"
                hash_323=string_get_hash_key(((char*)key))%self->size;
                # 1548 "./neo-c.h"
                it_324=hash_323;
                # 1572 "./neo-c.h"
                while(_while_condtional37=(_Bool)1,                _while_condtional37) {
                    # 1570 "./neo-c.h"
                    # 1551 "./neo-c.h"
                    if(_if_conditional369=self->item_existance[it_324],                    _if_conditional369) {
                        # 1558 "./neo-c.h"
                        # 1553 "./neo-c.h"
                        if(_if_conditional370=string_equals(self->keys[it_324],key),                        _if_conditional370) {
                            # 1555 "./neo-c.h"
                            __result219__ = __result_obj__ = self->items[it_324];
                            come_call_finalizer2(sClass_finalize,default_value_322, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result219__;
                        }
                        # 1558 "./neo-c.h"
                        it_324++;
                        # 1566 "./neo-c.h"
                        # 1560 "./neo-c.h"
                        if(_if_conditional371=it_324>=self->size,                        _if_conditional371) {
                            # 1561 "./neo-c.h"
                            it_324=0;
                        }
                        else {
                            # 1566 "./neo-c.h"
                            # 1563 "./neo-c.h"
                            if(_if_conditional372=it_324==hash_323,                            _if_conditional372) {
                                # 1564 "./neo-c.h"
                                __result220__ = __result_obj__ = default_value_322;
                                come_call_finalizer2(sClass_finalize,default_value_322, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result220__;
                            }
                        }
                    }
                    else {
                        # 1568 "./neo-c.h"
                        __result221__ = __result_obj__ = default_value_322;
                        come_call_finalizer2(sClass_finalize,default_value_322, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result221__;
                    }
                }
                # 1572 "./neo-c.h"
                __result222__ = __result_obj__ = default_value_322;
                come_call_finalizer2(sClass_finalize,default_value_322, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result222__;
                come_call_finalizer2(sClass_finalize,default_value_322, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value360;
void* right_value361;
struct list$1tuple2$2charphsNodephph* params_356;
void* right_value362;
void* right_value363;
void* right_value364;
_Bool _if_conditional387;
_Bool parse_method_generics_type_357;
char* p_358;
int sline_359;
_Bool _if_conditional388;
_Bool _if_conditional389;
void* right_value365;
char* word_360;
_Bool _if_conditional390;
void* right_value366;
void* right_value367;
struct list$1sTypeph* method_generics_types_361;
_Bool _if_conditional391;
_Bool _while_condtional39;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value368;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_362;
char* name_363;
_Bool err_364;
_Bool _if_conditional397;
void* right_value369;
_Bool _if_conditional398;
_Bool _while_condtional40;
_Bool _if_conditional399;
char* p_365;
int sline_366;
_Bool err_flag_367;
void* right_value370;
char* label_368;
_Bool _if_conditional400;
void* right_value371;
char* __dec_obj103;
_Bool _if_conditional401;
char* __dec_obj104;
_Bool no_comma_369;
void* right_value372;
struct sNode* node_370;
void* right_value373;
struct sNode* __dec_obj105;
void* right_value374;
void* right_value375;
_Bool _if_conditional402;
_Bool _if_conditional403;
struct buffer* method_block_371;
int method_block_sline_372;
_Bool _if_conditional404;
char* head_373;
void* right_value376;
char* tail_374;
void* right_value377;
void* right_value378;
struct buffer* __dec_obj106;
int len_375;
void* right_value379;
char* mem_376;
_Bool _if_conditional405;
void* right_value380;
void* right_value381;
void* right_value382;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value390;
struct sNode* node_378;
struct sNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&params_356, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&parse_method_generics_type_357, 0, sizeof(_Bool));
memset(&p_358, 0, sizeof(char*));
memset(&sline_359, 0, sizeof(int));
right_value365 = (void*)0;
memset(&word_360, 0, sizeof(char*));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&method_generics_types_361, 0, sizeof(struct list$1sTypeph*));
right_value368 = (void*)0;
memset(&type_362, 0, sizeof(struct sType*));
memset(&name_363, 0, sizeof(char*));
memset(&err_364, 0, sizeof(_Bool));
memset(&type_362, 0, sizeof(struct sType*));
memset(&name_363, 0, sizeof(char*));
memset(&err_364, 0, sizeof(_Bool));
right_value369 = (void*)0;
memset(&p_365, 0, sizeof(char*));
memset(&sline_366, 0, sizeof(int));
memset(&err_flag_367, 0, sizeof(_Bool));
right_value370 = (void*)0;
memset(&label_368, 0, sizeof(char*));
right_value371 = (void*)0;
memset(&no_comma_369, 0, sizeof(_Bool));
right_value372 = (void*)0;
memset(&node_370, 0, sizeof(struct sNode*));
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&method_block_371, 0, sizeof(struct buffer*));
memset(&method_block_sline_372, 0, sizeof(int));
memset(&head_373, 0, sizeof(char*));
right_value376 = (void*)0;
memset(&tail_374, 0, sizeof(char*));
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&len_375, 0, sizeof(int));
right_value379 = (void*)0;
memset(&mem_376, 0, sizeof(char*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value390 = (void*)0;
memset(&node_378, 0, sizeof(struct sNode*));
    # 934 "20method.c"
    params_356=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value361=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value360=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 934, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 935 "20method.c"
    list$1tuple2$2charphsNodephph_push_back(params_356,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value364=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value362=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 935, "tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=sNode_clone(obj)))))))));
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 942 "20method.c"
    # 937 "20method.c"
    if(_if_conditional387=*info->p==45&&*(info->p+1)==62,    _if_conditional387) {
        # 938 "20method.c"
        info->p+=2;
        # 939 "20method.c"
        skip_spaces_and_lf(info);
    }
    # 942 "20method.c"
    parse_method_generics_type_357=(_Bool)0;
    # 964 "20method.c"
    {
        # 944 "20method.c"
        p_358=info->p;
        # 945 "20method.c"
        sline_359=info->sline;
        # 960 "20method.c"
        # 947 "20method.c"
        if(_if_conditional388=*info->p==60,        _if_conditional388) {
            # 948 "20method.c"
            info->p++;
            # 949 "20method.c"
            skip_spaces_and_lf(info);
            # 958 "20method.c"
            # 951 "20method.c"
            if(_if_conditional389=xisalpha(*info->p)||*info->p==95,            _if_conditional389) {
                # 952 "20method.c"
                word_360=(char*)come_increment_ref_count(((char*)(right_value365=parse_word(info))));
                right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 957 "20method.c"
                # 954 "20method.c"
                if(_if_conditional390=is_type_name(word_360,info),                _if_conditional390) {
                    # 955 "20method.c"
                    parse_method_generics_type_357=(_Bool)1;
                }
                word_360 = come_decrement_ref_count2(word_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 960 "20method.c"
        info->p=p_358;
        # 961 "20method.c"
        info->sline=sline_359;
    }
    # 964 "20method.c"
    method_generics_types_361=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value367=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value366=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 964, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 996 "20method.c"
    # 965 "20method.c"
    if(_if_conditional391=parse_method_generics_type_357&&*info->p==60,    _if_conditional391) {
        # 966 "20method.c"
        info->p++;
        # 967 "20method.c"
        skip_spaces_and_lf(info);
        # 994 "20method.c"
        while(_while_condtional39=(_Bool)1,        _while_condtional39) {
            # 993 "20method.c"
            # 970 "20method.c"
            if(_if_conditional392=*info->p==0,            _if_conditional392) {
                # 971 "20method.c"
                err_msg(info,"unexpected source end");
                # 972 "20method.c"
                exit(2);
            }
            else {
                # 993 "20method.c"
                # 974 "20method.c"
                if(_if_conditional393=*info->p==62,                _if_conditional393) {
                    # 975 "20method.c"
                    info->p++;
                    # 976 "20method.c"
                    skip_spaces_and_lf(info);
                    # 977 "20method.c"
                    break;
                }
                else {
                    # 993 "20method.c"
                    # 979 "20method.c"
                    if(_if_conditional394=*info->p==44,                    _if_conditional394) {
                        # 980 "20method.c"
                        info->p++;
                        # 981 "20method.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 984 "20method.c"
                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value368=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_362=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_363=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_364=multiple_assign_var5->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 991 "20method.c"
                        # 986 "20method.c"
                        if(_if_conditional397=!err_364,                        _if_conditional397) {
                            # 987 "20method.c"
                            err_msg(info,"invalid method generics paramtor type");
                            # 988 "20method.c"
                            exit(2);
                        }
                        # 991 "20method.c"
                        list$1sTypeph_push_back(method_generics_types_361,(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_clone(type_362)))));
                        come_call_finalizer2(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_362, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_363 = come_decrement_ref_count2(name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 1050 "20method.c"
    # 996 "20method.c"
    if(_if_conditional398=*info->p!=123,    _if_conditional398) {
        # 997 "20method.c"
        expected_next_character(40,info);
        # 1048 "20method.c"
        while(_while_condtional40=(_Bool)1,        _while_condtional40) {
            # 1006 "20method.c"
            # 1000 "20method.c"
            if(_if_conditional399=*info->p==41,            _if_conditional399) {
                # 1001 "20method.c"
                info->p++;
                # 1002 "20method.c"
                skip_spaces_and_lf(info);
                # 1003 "20method.c"
                break;
            }
            # 1006 "20method.c"
            p_365=info->p;
            # 1007 "20method.c"
            sline_366=info->sline;
            # 1009 "20method.c"
            err_flag_367=(_Bool)0;
            # 1010 "20method.c"
            label_368=(char*)come_increment_ref_count(((char*)(right_value370=__builtin_string(""))));
            right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1014 "20method.c"
            # 1011 "20method.c"
            if(_if_conditional400=xisalpha(*info->p)||*info->p==95,            _if_conditional400) {
                # 1012 "20method.c"
                __dec_obj103=label_368;
                label_368=(char*)come_increment_ref_count(((char*)(right_value371=parse_word(info))));
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1013 "20method.c"
                err_flag_367=(_Bool)1;
            }
            # 1027 "20method.c"
            # 1016 "20method.c"
            if(_if_conditional401=err_flag_367==(_Bool)1&&*info->p==58,            _if_conditional401) {
                # 1017 "20method.c"
                info->p++;
                # 1018 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 1021 "20method.c"
                __dec_obj104=label_368;
                label_368=((void*)0);
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1023 "20method.c"
                info->p=p_365;
                # 1024 "20method.c"
                info->sline=sline_366;
            }
            # 1027 "20method.c"
            no_comma_369=info->no_comma;
            # 1028 "20method.c"
            info->no_comma=(_Bool)1;
            # 1030 "20method.c"
            node_370=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=expression_v13(info))));
            if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1032 "20method.c"
            __dec_obj105=node_370;
            node_370=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_370),info))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1034 "20method.c"
            info->no_comma=no_comma_369;
            # 1036 "20method.c"
            list$1tuple2$2charphsNodephph_push_back(params_356,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value375=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value374=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1036, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_368),(struct sNode*)come_increment_ref_count(node_370))))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1047 "20method.c"
            # 1038 "20method.c"
            if(_if_conditional402=*info->p==44,            _if_conditional402) {
                # 1039 "20method.c"
                info->p++;
                # 1040 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 1047 "20method.c"
                # 1042 "20method.c"
                if(_if_conditional403=*info->p==41,                _if_conditional403) {
                    # 1043 "20method.c"
                    info->p++;
                    # 1044 "20method.c"
                    skip_spaces_and_lf(info);
                    # 1045 "20method.c"
                    label_368 = come_decrement_ref_count2(label_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_370) { node_370 = come_decrement_ref_count2(node_370, ((struct sNode*)node_370)->finalize, ((struct sNode*)node_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_368 = come_decrement_ref_count2(label_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_370) { node_370 = come_decrement_ref_count2(node_370, ((struct sNode*)node_370)->finalize, ((struct sNode*)node_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    # 1050 "20method.c"
    method_block_371=((void*)0);
    # 1051 "20method.c"
    method_block_sline_372=0;
    # 1071 "20method.c"
    # 1052 "20method.c"
    if(_if_conditional404=*info->p==123,    _if_conditional404) {
        # 1053 "20method.c"
        head_373=info->p;
        # 1054 "20method.c"
        method_block_sline_372=info->sline;
        # 1056 "20method.c"
        ((char*)(right_value376=skip_block(info)));
        right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1058 "20method.c"
        tail_374=info->p;
        # 1060 "20method.c"
        __dec_obj106=method_block_371;
        method_block_371=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value378=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value377=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1060, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1062 "20method.c"
        len_375=tail_374-head_373;
        # 1063 "20method.c"
        mem_376=(char*)come_increment_ref_count(((char*)(right_value379=(char*)come_calloc(1, sizeof(char)*(1*(len_375+1)), "20method.c", 1063, "char"))));
        right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1064 "20method.c"
        memcpy(mem_376,head_373,len_375);
        # 1065 "20method.c"
        mem_376[len_375]=0;
        # 1067 "20method.c"
        buffer_append_str(method_block_371,mem_376);
        # 1068 "20method.c"
        buffer_append_str(method_block_371,"\n");
        mem_376 = come_decrement_ref_count2(mem_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1071 "20method.c"
    parse_sharp_v5(info);
    # 1076 "20method.c"
    # 1073 "20method.c"
    if(_if_conditional405=*info->p==60,    _if_conditional405) {
    }
    # 1076 "20method.c"
    parse_sharp_v5(info);
    # 1078 "20method.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1078, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value382=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value380=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1078, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_356),method_block_371,method_block_sline_372,method_generics_types_361,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=_inf_value2)));
    come_call_finalizer2(sMethodCallNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sMethodCallNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1080 "20method.c"
    __result230__ = __result_obj__ = node_378;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_361, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result230__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_361, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj101;
struct sNode* __dec_obj102;
struct tuple2$2charphsNodeph* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1767 "./neo-c.h"
        __dec_obj101=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1768 "./neo-c.h"
        __dec_obj102=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
        # 1770 "./neo-c.h"
        __result227__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result227__;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional395;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional395=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional395) {
                                # 0 "tuple3$3sTypephcharphboolp_finalize"
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple3$3sTypephcharphboolp_finalize"
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional396=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional396) {
                                # 1 "tuple3$3sTypephcharphboolp_finalize"
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sMethodCallNode_finalize"
        # 0 "sMethodCallNode_finalize"
        if(_if_conditional406=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional406) {
            # 0 "sMethodCallNode_finalize"
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 2 "sMethodCallNode_finalize"
        # 1 "sMethodCallNode_finalize"
        if(_if_conditional407=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional407) {
            # 1 "sMethodCallNode_finalize"
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sMethodCallNode_finalize"
        # 2 "sMethodCallNode_finalize"
        if(_if_conditional408=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional408) {
            # 2 "sMethodCallNode_finalize"
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sMethodCallNode_finalize"
        # 3 "sMethodCallNode_finalize"
        if(_if_conditional409=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional409) {
            # 3 "sMethodCallNode_finalize"
            come_call_finalizer2(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sMethodCallNode_finalize"
        # 4 "sMethodCallNode_finalize"
        if(_if_conditional410=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional410) {
            # 4 "sMethodCallNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 6 "sMethodCallNode_finalize"
        # 5 "sMethodCallNode_finalize"
        if(_if_conditional411=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional411) {
            # 5 "sMethodCallNode_finalize"
            come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional412;
struct sMethodCallNode* __result228__;
void* right_value383;
struct sMethodCallNode* result_377;
_Bool _if_conditional413;
void* right_value384;
struct sNode* __dec_obj107;
_Bool _if_conditional414;
void* right_value385;
char* __dec_obj108;
_Bool _if_conditional415;
void* right_value386;
struct list$1tuple2$2charphsNodephph* __dec_obj109;
_Bool _if_conditional416;
void* right_value387;
struct buffer* __dec_obj110;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value388;
char* __dec_obj111;
_Bool _if_conditional419;
_Bool _if_conditional420;
void* right_value389;
struct list$1sTypeph* __dec_obj112;
struct sMethodCallNode* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value383 = (void*)0;
memset(&result_377, 0, sizeof(struct sMethodCallNode*));
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
        # 3 "sMethodCallNode_clone"
        # 2 "sMethodCallNode_clone"
        if(_if_conditional412=self==(void*)0,        _if_conditional412) {
            # 2 "sMethodCallNode_clone"
            __result228__ = __result_obj__ = (void*)0;
            return __result228__;
        }
        # 3 "sMethodCallNode_clone"
        result_377=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value383=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer2(sMethodCallNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sMethodCallNode_clone"
        # 4 "sMethodCallNode_clone"
        if(_if_conditional413=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional413) {
            # 4 "sMethodCallNode_clone"
            __dec_obj107=result_377->obj;
            result_377->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(self->obj))));
            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 6 "sMethodCallNode_clone"
        # 5 "sMethodCallNode_clone"
        if(_if_conditional414=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional414) {
            # 5 "sMethodCallNode_clone"
            __dec_obj108=result_377->fun_name;
            result_377->fun_name=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->fun_name))));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sMethodCallNode_clone"
        # 6 "sMethodCallNode_clone"
        if(_if_conditional415=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional415) {
            # 6 "sMethodCallNode_clone"
            __dec_obj109=result_377->params;
            result_377->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value386=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sMethodCallNode_clone"
        # 7 "sMethodCallNode_clone"
        if(_if_conditional416=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional416) {
            # 7 "sMethodCallNode_clone"
            __dec_obj110=result_377->method_block;
            result_377->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value387=buffer_clone(self->method_block))));
            come_call_finalizer2(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sMethodCallNode_clone"
        # 8 "sMethodCallNode_clone"
        if(_if_conditional417=self!=((void*)0),        _if_conditional417) {
            # 8 "sMethodCallNode_clone"
            result_377->sline=self->sline;
        }
        # 10 "sMethodCallNode_clone"
        # 9 "sMethodCallNode_clone"
        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional418) {
            # 9 "sMethodCallNode_clone"
            __dec_obj111=result_377->sname;
            result_377->sname=(char*)come_increment_ref_count(((char*)(right_value388=string_clone(self->sname))));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 11 "sMethodCallNode_clone"
        # 10 "sMethodCallNode_clone"
        if(_if_conditional419=self!=((void*)0),        _if_conditional419) {
            # 10 "sMethodCallNode_clone"
            result_377->method_block_sline=self->method_block_sline;
        }
        # 12 "sMethodCallNode_clone"
        # 11 "sMethodCallNode_clone"
        if(_if_conditional420=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional420) {
            # 11 "sMethodCallNode_clone"
            __dec_obj112=result_377->method_generics_types;
            result_377->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value389=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sMethodCallNode_clone"
        __result229__ = __result_obj__ = result_377;
        come_call_finalizer2(sMethodCallNode_finalize,result_377, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result229__;
        come_call_finalizer2(sMethodCallNode_finalize,result_377, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional421;
void* right_value391;
void* right_value392;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value395;
struct sNode* __result233__;
void* right_value396;
struct sNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
    # 1089 "20method.c"
    # 1085 "20method.c"
    if(_if_conditional421=charp_operator_equals(buf,"__current__"),    _if_conditional421) {
        # 1086 "20method.c"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1086, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value392=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value391=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1086, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result233__ = __result_obj__ = ((struct sNode*)(right_value395=_inf_value3));
        come_call_finalizer2(sCurrentNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sCurrentNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result233__;
    }
    # 1089 "20method.c"
    __result234__ = __result_obj__ = ((struct sNode*)(right_value396=string_node_v15(buf,head,head_sline,info)));
    if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result234__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional422;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sCurrentNode_finalize"
            # 0 "sCurrentNode_finalize"
            if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional422) {
                # 0 "sCurrentNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional423;
struct sCurrentNode* __result231__;
void* right_value393;
struct sCurrentNode* result_379;
_Bool _if_conditional424;
_Bool _if_conditional425;
void* right_value394;
char* __dec_obj113;
struct sCurrentNode* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value393 = (void*)0;
memset(&result_379, 0, sizeof(struct sCurrentNode*));
right_value394 = (void*)0;
            # 3 "sCurrentNode_clone"
            # 2 "sCurrentNode_clone"
            if(_if_conditional423=self==(void*)0,            _if_conditional423) {
                # 2 "sCurrentNode_clone"
                __result231__ = __result_obj__ = (void*)0;
                return __result231__;
            }
            # 3 "sCurrentNode_clone"
            result_379=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value393=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer2(sCurrentNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sCurrentNode_clone"
            # 4 "sCurrentNode_clone"
            if(_if_conditional424=self!=((void*)0),            _if_conditional424) {
                # 4 "sCurrentNode_clone"
                result_379->sline=self->sline;
            }
            # 6 "sCurrentNode_clone"
            # 5 "sCurrentNode_clone"
            if(_if_conditional425=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional425) {
                # 5 "sCurrentNode_clone"
                __dec_obj113=result_379->sname;
                result_379->sname=(char*)come_increment_ref_count(((char*)(right_value394=string_clone(self->sname))));
                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sCurrentNode_clone"
            __result232__ = __result_obj__ = result_379;
            come_call_finalizer2(sCurrentNode_finalize,result_379, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result232__;
            come_call_finalizer2(sCurrentNode_finalize,result_379, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value397;
struct sNode* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
    # 1096 "20method.c"
    __result235__ = __result_obj__ = ((struct sNode*)(right_value397=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result235__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

